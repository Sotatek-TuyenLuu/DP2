set(DOCUMENTATION "This module contains ITK classes than encapsulate numerical
optimizers.  A set of base classes categorize the type of cost function an
optimizer is capable of operating on, and the concrete classes provide
implementations of specific algorithms.")

itk_module(ITKOptimizers
  DEPENDS
    ITKStatistics
  TEST_DEPENDS
    ITKTransform
    ITKTestKernel
  DESCRIPTION
    "${DOCUMENTATION}"
)
