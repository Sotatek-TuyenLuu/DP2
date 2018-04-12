set(DOCUMENTATION "This module contains the infrastructure to store the label images
in an efficient and convenient way, including label images with overlapping objects.
All the objects contained in the LabelMap can be associated to values
called attributes. Some filters are available to compute the usual attributes values
related to the shape of the objects or the pixels values in the objects and to manipulate
the objects based on these values.")


itk_module(ITKLabelMap
  DEPENDS
    ITKImageLabel
    ITKMathematicalMorphology
    ITKStatistics
  TEST_DEPENDS
    ITKTestKernel
    ITKBinaryMathematicalMorphology
  DESCRIPTION
    "${DOCUMENTATION}"
)
