# Install script for directory: E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/D/MITK-superbuild/ep")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Debug/CTKWidgets.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Release/CTKWidgets.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/MinSizeRel/CTKWidgets.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/RelWithDebInfo/CTKWidgets.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Debug/CTKWidgets.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Release/CTKWidgets.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/MinSizeRel/CTKWidgets.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/RelWithDebInfo/CTKWidgets.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ctk-0.1" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkActionsWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkAddRemoveComboBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkAxesWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkAxesWidgetEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkAxesWidgetEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkBasePopupWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkBasePopupWidget_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkButtonGroup.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCheckableComboBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCheckableComboBoxEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCheckableComboBoxEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCheckableHeaderView.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCheckableHeaderViewEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCheckableHeaderViewEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCheckableModelHelper.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCheckablePushButton.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCheckBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCheckBoxPixmaps.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCollapsibleButton.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCollapsibleGroupBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkColorDialog.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkColorPickerButton.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkComboBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCompleter.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkConsole.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkConsoleEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkConsoleEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkConsole_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCoordinatesWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCoordinatesWidget_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkCrosshairLabel.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkDateRangeWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkDirectoryButton.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkDoubleRangeSlider.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkDoubleRangeSliderEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkDoubleRangeSliderEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkDoubleSlider.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkDoubleSpinBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkDoubleSpinBox_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkDynamicSpacer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkErrorLogModel.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkErrorLogStatusMessageHandler.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkErrorLogWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkExpandableWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkExpandButton.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkFileDialog.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkFileDialogEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkFileDialogEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkFittedTextBrowser.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkFlatProxyModel.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkFlowLayout.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkFontButton.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkFontButtonEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkFontButtonEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkHistogram.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkIconEnginePlugin.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkIconEnginePlugin_qt4.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkIconEnginePlugin_qt5.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkLanguageComboBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkLayoutFactory.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkLayoutManager.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkLayoutManager_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkLayoutViewFactory.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkMaterialPropertyPreviewLabel.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkMaterialPropertyWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkMatrixWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkMatrixWidgetEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkMatrixWidgetEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkMenuButton.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkMenuComboBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkMenuComboBoxEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkMenuComboBoxEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkMenuComboBox_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkMessageBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkModalityWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPathLineEdit.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPathLineEditEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPathLineEditEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPathListButtonsWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPathListButtonsWidget_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPathListWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPixmapIconEngine.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPopupWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPopupWidgetEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPopupWidgetEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPopupWidget_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkProxyStyle.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPushButton.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkPushButton_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkQImageView.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkRangeSlider.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkRangeSliderEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkRangeSliderEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkRangeWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkScreenshotDialog.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkScreenshotDialog_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkSearchBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkSettings.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkSettingsDialog.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkSettingsPanel.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkSignalMapper.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkSizeGrip.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkSliderWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTemplateWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTestApplication.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkThumbnailLabel.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkThumbnailListWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkThumbnailListWidget_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkToolTipTrapper.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTransferFunction.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTransferFunctionBarsItem.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTransferFunctionControlPointsItem.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTransferFunctionGradientItem.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTransferFunctionItem.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTransferFunctionNativeItem.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTransferFunctionRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTransferFunctionScene.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTransferFunctionView.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTreeComboBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTreeComboBoxEventPlayer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkTreeComboBoxEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkWidgetsPythonQtDecorators.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkWidgetsUtils.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkWorkflowAbstractPagedWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkWorkflowButtonBoxWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkWorkflowGroupBox.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkWorkflowStackedWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkWorkflowTabWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkWorkflowWidget.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkWorkflowWidgetStep.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets/ctkWorkflowWidgetStep_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Widgets/ctkWidgetsExport.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Widgets/Plugins/cmake_install.cmake")

endif()

