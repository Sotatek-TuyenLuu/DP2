# Install script for directory: E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "DebugDevel")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Debug/gdcmMEXDd.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Release/gdcmMEXD.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/MinSizeRel/gdcmMEXD.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/RelWithDebInfo/gdcmMEXD.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Applications")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Debug/gdcmMEXDd.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Release/gdcmMEXD.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/MinSizeRel/gdcmMEXD.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/RelWithDebInfo/gdcmMEXD.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "DebugDevel")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Debug/gdcmMEXDd.pdb")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "DebugDevel")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/RelWithDebInfo/gdcmMEXD.pdb")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gdcm-2.4" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmAAbortPDU.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmAAssociateACPDU.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmAAssociateRJPDU.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmAAssociateRQPDU.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmAbstractSyntax.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmApplicationContext.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmAReleaseRPPDU.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmAReleaseRQPDU.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmARTIMTimer.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmAsynchronousOperationsWindowSub.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmBaseCompositeMessage.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmBasePDU.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmBaseRootQuery.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmCEchoMessages.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmCFindMessages.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmCMoveMessages.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmCommandDataSet.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmCompositeMessageFactory.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmCompositeNetworkFunctions.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmCStoreMessages.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmDIMSE.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmFindPatientRootQuery.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmFindStudyRootQuery.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmImplementationClassUIDSub.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmImplementationUIDSub.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmImplementationVersionNameSub.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmMaximumLengthSub.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmMovePatientRootQuery.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmMoveStudyRootQuery.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmNetworkEvents.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmNetworkStateID.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmPDataTFPDU.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmPDUFactory.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmPresentationContext.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmPresentationContextAC.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmPresentationContextGenerator.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmPresentationContextRQ.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmPresentationDataValue.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmQueryBase.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmQueryFactory.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmQueryImage.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmQueryPatient.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmQuerySeries.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmQueryStudy.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmRoleSelectionSub.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmServiceClassApplicationInformation.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmServiceClassUser.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmSOPClassExtendedNegociationSub.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmTransferSyntaxSub.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULAction.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULActionAA.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULActionAE.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULActionAR.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULActionDT.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULBasicCallback.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULConnection.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULConnectionCallback.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULConnectionInfo.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULConnectionManager.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULEvent.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULTransitionTable.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmULWritingCallback.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition/gdcmUserInformation.h"
    )
endif()

