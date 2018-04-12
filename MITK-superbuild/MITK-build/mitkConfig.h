/*
  mitkConfig.h
  this file is generated. Do not change!
*/

#ifndef MITKCONFIG_H
#define MITKCONFIG_H

#define MITK_ROOT "E:/D/MITK/"
/* #undef MITK_BUILD_SHARED_CORE */
#define USE_ITKZLIB
/* #undef MITK_CHILI_PLUGIN */
/* #undef MITK_USE_TD_MOUSE */

#define MITK_ACCESSBYITK_INTEGRAL_PIXEL_TYPES int, unsigned int, short, unsigned short, char, unsigned char
#define MITK_ACCESSBYITK_FLOATING_PIXEL_TYPES double, float
#define MITK_ACCESSBYITK_COMPOSITE_PIXEL_TYPES itk::RGBPixel<unsigned char>, itk::RGBAPixel<unsigned char>
#define MITK_ACCESSBYITK_VECTOR_PIXEL_TYPES itk::VariableLengthVector<int>,itk::VariableLengthVector< unsigned int>,itk::VariableLengthVector< short>,itk::VariableLengthVector< unsigned short>,itk::VariableLengthVector< char>,itk::VariableLengthVector< unsigned char>,itk::VariableLengthVector<double>,itk::VariableLengthVector< float>
#define MITK_ACCESSBYITK_PIXEL_TYPES int, unsigned int, short, unsigned short, char, unsigned char,double, float

#define MITK_ACCESSBYITK_INTEGRAL_PIXEL_TYPES_SEQ (int)( unsigned int)( short)( unsigned short)( char)( unsigned char)
#define MITK_ACCESSBYITK_FLOATING_PIXEL_TYPES_SEQ (double)( float)
#define MITK_ACCESSBYITK_COMPOSITE_PIXEL_TYPES_SEQ (itk::RGBPixel<unsigned char>)( itk::RGBAPixel<unsigned char>)
#define MITK_ACCESSBYITK_VECTOR_PIXEL_TYPES_SEQ (itk::VariableLengthVector<int>)(itk::VariableLengthVector< unsigned int>)(itk::VariableLengthVector< short>)(itk::VariableLengthVector< unsigned short>)(itk::VariableLengthVector< char>)(itk::VariableLengthVector< unsigned char>)(itk::VariableLengthVector<double>)(itk::VariableLengthVector< float>)
#define MITK_ACCESSBYITK_PIXEL_TYPES_SEQ (int)( unsigned int)( short)( unsigned short)( char)( unsigned char)(double)( float)

#define MITK_ACCESSBYITK_DIMENSIONS 2,3
#define MITK_ACCESSBYITK_DIMENSIONS_SEQ (2)(3)

#define MITK_ACCESSBYITK_INTEGRAL_TYPES_DIMN_SEQ(dim) ((int,dim))(( unsigned int,dim))(( short,dim))(( unsigned short,dim))(( char,dim))(( unsigned char,dim))
#define MITK_ACCESSBYITK_FLOATING_TYPES_DIMN_SEQ(dim) ((double,dim))(( float,dim))
#define MITK_ACCESSBYITK_COMPOSITE_TYPES_DIMN_SEQ(dim) ((itk::RGBPixel<unsigned char>,dim))(( itk::RGBAPixel<unsigned char>,dim))
#define MITK_ACCESSBYITK_VECTOR_TYPES_DIMN_SEQ(dim) ((itk::VariableLengthVector<int>,dim))((itk::VariableLengthVector< unsigned int>,dim))((itk::VariableLengthVector< short>,dim))((itk::VariableLengthVector< unsigned short>,dim))((itk::VariableLengthVector< char>,dim))((itk::VariableLengthVector< unsigned char>,dim))((itk::VariableLengthVector<double>,dim))((itk::VariableLengthVector< float>,dim))
#define MITK_ACCESSBYITK_TYPES_DIMN_SEQ(dim) ((int,dim))(( unsigned int,dim))(( short,dim))(( unsigned short,dim))(( char,dim))(( unsigned char,dim))((double,dim))(( float,dim))

#define MITK_CHILI_PLUGIN_SDK_IPPIC_H ""
#define MITK_CHILI_PLUGIN_SDK_IPTYPES_H ""
#define MITK_DOXYGEN_OUTPUT_DIR ""
#define MITK_HELPPAGES_OUTPUT_DIR ""

#endif // MITKCONFIG_H
