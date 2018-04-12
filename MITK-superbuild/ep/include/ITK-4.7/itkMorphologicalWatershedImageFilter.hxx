/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef __itkMorphologicalWatershedImageFilter_hxx
#define __itkMorphologicalWatershedImageFilter_hxx

#include "itkMorphologicalWatershedImageFilter.h"
#include "itkRegionalMinimaImageFilter.h"
#include "itkHMinimaImageFilter.h"
#include "itkConnectedComponentImageFilter.h"
#include "itkMorphologicalWatershedFromMarkersImageFilter.h"
#include "itkNumericTraits.h"

/*
 * This code was contributed in the Insight Journal paper:
 * "The watershed transform in ITK - discussion and new developments"
 * by Beare R., Lehmann G.
 * http://hdl.handle.net/1926/202
 * http://www.insight-journal.org/browse/publication/92
 *
 */

namespace itk
{
template< typename TInputImage, typename TOutputImage >
MorphologicalWatershedImageFilter< TInputImage, TOutputImage >
::MorphologicalWatershedImageFilter()
{
  m_FullyConnected = false;
  m_MarkWatershedLine = true;
  m_Level = NumericTraits< InputImagePixelType >::ZeroValue();
}

template< typename TInputImage, typename TOutputImage >
void
MorphologicalWatershedImageFilter< TInputImage, TOutputImage >
::GenerateInputRequestedRegion()
{
  // call the superclass' implementation of this method
  Superclass::GenerateInputRequestedRegion();

  // We need all the input.
  InputImagePointer input = const_cast< InputImageType * >( this->GetInput() );
  if ( !input )
        { return; }
  input->SetRequestedRegion( input->GetLargestPossibleRegion() );
}

template< typename TInputImage, typename TOutputImage >
void
MorphologicalWatershedImageFilter< TInputImage, TOutputImage >
::EnlargeOutputRequestedRegion(DataObject *)
{
  this->GetOutput()
  ->SetRequestedRegion( this->GetOutput()->GetLargestPossibleRegion() );
}

template< typename TInputImage, typename TOutputImage >
void
MorphologicalWatershedImageFilter< TInputImage, TOutputImage >
::GenerateData()
{
  // Create a process accumulator for tracking the progress of this minipipeline
  ProgressAccumulator::Pointer progress = ProgressAccumulator::New();

  progress->SetMiniPipelineFilter(this);

  // Allocate the output
  this->AllocateOutputs();

  // h-minima filter to remove the smallest minima
  typedef HMinimaImageFilter< TInputImage, TInputImage > HMinimaType;
  typename HMinimaType::Pointer hmin;

  // Delegate to a R-Min filter to find the regional minima
  typedef RegionalMinimaImageFilter< TInputImage, TOutputImage > RMinType;
  typename RMinType::Pointer rmin = RMinType::New();
  rmin->SetInput( this->GetInput() );
  rmin->SetFullyConnected(m_FullyConnected);
  rmin->SetBackgroundValue(NumericTraits< OutputImagePixelType >::Zero);
  rmin->SetForegroundValue( NumericTraits< OutputImagePixelType >::max() );

  // label the components
  typedef ConnectedComponentImageFilter< TOutputImage, TOutputImage >
  ConnectedCompType;
  typename ConnectedCompType::Pointer label = ConnectedCompType::New();
  label->SetFullyConnected(m_FullyConnected);
  label->SetInput( rmin->GetOutput() );

  // the watershed
  typedef
  MorphologicalWatershedFromMarkersImageFilter< TInputImage, TOutputImage >
  WatershedType;
  typename WatershedType::Pointer wshed = WatershedType::New();
  wshed->SetInput( this->GetInput() );
  wshed->SetMarkerImage( label->GetOutput() );
  wshed->SetFullyConnected(m_FullyConnected);
  wshed->SetMarkWatershedLine(m_MarkWatershedLine);

  if ( m_Level != NumericTraits< InputImagePixelType >::ZeroValue() )
    {
    // insert a h-minima filter to remove the smallest minima
    //
    hmin = HMinimaType::New();
    hmin->SetInput( this->GetInput() );
    hmin->SetHeight(m_Level);
    hmin->SetFullyConnected(m_FullyConnected);
    // replace the input of the r-min filter
    rmin->SetInput( hmin->GetOutput() );

    progress->RegisterInternalFilter(hmin, 0.4f);
    progress->RegisterInternalFilter(rmin, 0.1f);
    progress->RegisterInternalFilter(label, .2f);
    progress->RegisterInternalFilter(wshed, .3f);
    }
  else
    {
    // don't insert the h-minima to save some ressources
    progress->RegisterInternalFilter(rmin, 0.167f);
    progress->RegisterInternalFilter(label, .333f);
    progress->RegisterInternalFilter(wshed, .5f);
    }

  // run the algorithm
  // graft our output to the watershed filter to force the proper regions
  // to be generated
  wshed->GraftOutput( this->GetOutput() );

  wshed->Update();

  // graft the output of the watershed filter back onto this filter's
  // output. this is needed to get the appropriate regions passed
  // back.
  this->GraftOutput( wshed->GetOutput() );
}

template< typename TInputImage, typename TOutputImage >
void
MorphologicalWatershedImageFilter< TInputImage, TOutputImage >
::PrintSelf(std::ostream & os, Indent indent) const
{
  Superclass::PrintSelf(os, indent);

  os << indent << "FullyConnected: "  << m_FullyConnected << std::endl;
  os << indent << "MarkWatershedLine: "  << m_MarkWatershedLine << std::endl;
  os << indent << "Level: "
     << static_cast< typename NumericTraits< InputImagePixelType >::PrintType >( m_Level )
     << std::endl;
}
} // end namespace itk
#endif
