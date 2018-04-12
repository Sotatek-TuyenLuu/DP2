/****************************************************************************
** Meta object code from reading C++ file 'QmitkStdMultiWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgets/include/QmitkStdMultiWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkStdMultiWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkStdMultiWidget_t {
    QByteArrayData data[82];
    char stringdata[1592];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkStdMultiWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkStdMultiWidget_t qt_meta_stringdata_QmitkStdMultiWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QmitkStdMultiWidget"
QT_MOC_LITERAL(1, 20, 16), // "LeftMouseClicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "mitk::Point3D"
QT_MOC_LITERAL(4, 52, 10), // "pointValue"
QT_MOC_LITERAL(5, 63, 10), // "WheelMoved"
QT_MOC_LITERAL(6, 74, 12), // "QWheelEvent*"
QT_MOC_LITERAL(7, 87, 26), // "WidgetPlanesRotationLinked"
QT_MOC_LITERAL(8, 114, 27), // "WidgetPlanesRotationEnabled"
QT_MOC_LITERAL(9, 142, 16), // "ViewsInitialized"
QT_MOC_LITERAL(10, 159, 22), // "WidgetPlaneModeSlicing"
QT_MOC_LITERAL(11, 182, 23), // "WidgetPlaneModeRotation"
QT_MOC_LITERAL(12, 206, 21), // "WidgetPlaneModeSwivel"
QT_MOC_LITERAL(13, 228, 21), // "WidgetPlaneModeChange"
QT_MOC_LITERAL(14, 250, 28), // "WidgetNotifyNewCrossHairMode"
QT_MOC_LITERAL(15, 279, 5), // "Moved"
QT_MOC_LITERAL(16, 285, 35), // "HandleCrosshairPositionEventD..."
QT_MOC_LITERAL(17, 321, 24), // "changeLayoutTo2DImagesUp"
QT_MOC_LITERAL(18, 346, 26), // "changeLayoutTo2DImagesLeft"
QT_MOC_LITERAL(19, 373, 21), // "changeLayoutToDefault"
QT_MOC_LITERAL(20, 395, 19), // "changeLayoutToBig3D"
QT_MOC_LITERAL(21, 415, 21), // "changeLayoutToWidget1"
QT_MOC_LITERAL(22, 437, 21), // "changeLayoutToWidget2"
QT_MOC_LITERAL(23, 459, 21), // "changeLayoutToWidget3"
QT_MOC_LITERAL(24, 481, 28), // "changeLayoutToRowWidget3And4"
QT_MOC_LITERAL(25, 510, 31), // "changeLayoutToColumnWidget3And4"
QT_MOC_LITERAL(26, 542, 36), // "changeLayoutToRowWidgetSmall3..."
QT_MOC_LITERAL(27, 579, 39), // "changeLayoutToSmallUpperWidge..."
QT_MOC_LITERAL(28, 619, 29), // "changeLayoutTo2x2Dand3DWidget"
QT_MOC_LITERAL(29, 649, 32), // "changeLayoutToLeft2Dand3DRight2D"
QT_MOC_LITERAL(30, 682, 27), // "changeLayoutTo2DUpAnd3DDown"
QT_MOC_LITERAL(31, 710, 3), // "Fit"
QT_MOC_LITERAL(32, 714, 20), // "InitPositionTracking"
QT_MOC_LITERAL(33, 735, 22), // "AddDisplayPlaneSubTree"
QT_MOC_LITERAL(34, 758, 25), // "EnableStandardLevelWindow"
QT_MOC_LITERAL(35, 784, 26), // "DisableStandardLevelWindow"
QT_MOC_LITERAL(36, 811, 23), // "InitializeStandardViews"
QT_MOC_LITERAL(37, 835, 23), // "const mitk::Geometry3D*"
QT_MOC_LITERAL(38, 859, 8), // "geometry"
QT_MOC_LITERAL(39, 868, 10), // "wheelEvent"
QT_MOC_LITERAL(40, 879, 1), // "e"
QT_MOC_LITERAL(41, 881, 15), // "mousePressEvent"
QT_MOC_LITERAL(42, 897, 12), // "QMouseEvent*"
QT_MOC_LITERAL(43, 910, 9), // "moveEvent"
QT_MOC_LITERAL(44, 920, 11), // "QMoveEvent*"
QT_MOC_LITERAL(45, 932, 26), // "EnsureDisplayContainsPoint"
QT_MOC_LITERAL(46, 959, 19), // "mitk::BaseRenderer*"
QT_MOC_LITERAL(47, 979, 8), // "renderer"
QT_MOC_LITERAL(48, 988, 1), // "p"
QT_MOC_LITERAL(49, 990, 19), // "MoveCrossToPosition"
QT_MOC_LITERAL(50, 1010, 11), // "newPosition"
QT_MOC_LITERAL(51, 1022, 24), // "EnableGradientBackground"
QT_MOC_LITERAL(52, 1047, 25), // "DisableGradientBackground"
QT_MOC_LITERAL(53, 1073, 20), // "EnableDepartmentLogo"
QT_MOC_LITERAL(54, 1094, 21), // "DisableDepartmentLogo"
QT_MOC_LITERAL(55, 1116, 23), // "EnableColoredRectangles"
QT_MOC_LITERAL(56, 1140, 24), // "DisableColoredRectangles"
QT_MOC_LITERAL(57, 1165, 24), // "SetWidgetPlaneVisibility"
QT_MOC_LITERAL(58, 1190, 11), // "const char*"
QT_MOC_LITERAL(59, 1202, 10), // "widgetName"
QT_MOC_LITERAL(60, 1213, 7), // "visible"
QT_MOC_LITERAL(61, 1221, 25), // "SetWidgetPlanesVisibility"
QT_MOC_LITERAL(62, 1247, 21), // "SetWidgetPlanesLocked"
QT_MOC_LITERAL(63, 1269, 6), // "locked"
QT_MOC_LITERAL(64, 1276, 29), // "SetWidgetPlanesRotationLocked"
QT_MOC_LITERAL(65, 1306, 29), // "SetWidgetPlanesRotationLinked"
QT_MOC_LITERAL(66, 1336, 4), // "link"
QT_MOC_LITERAL(67, 1341, 18), // "SetWidgetPlaneMode"
QT_MOC_LITERAL(68, 1360, 4), // "mode"
QT_MOC_LITERAL(69, 1365, 27), // "SetGradientBackgroundColors"
QT_MOC_LITERAL(70, 1393, 11), // "mitk::Color"
QT_MOC_LITERAL(71, 1405, 5), // "upper"
QT_MOC_LITERAL(72, 1411, 5), // "lower"
QT_MOC_LITERAL(73, 1417, 21), // "SetDepartmentLogoPath"
QT_MOC_LITERAL(74, 1439, 4), // "path"
QT_MOC_LITERAL(75, 1444, 27), // "SetWidgetPlaneModeToSlicing"
QT_MOC_LITERAL(76, 1472, 8), // "activate"
QT_MOC_LITERAL(77, 1481, 28), // "SetWidgetPlaneModeToRotation"
QT_MOC_LITERAL(78, 1510, 26), // "SetWidgetPlaneModeToSwivel"
QT_MOC_LITERAL(79, 1537, 21), // "OnLayoutDesignChanged"
QT_MOC_LITERAL(80, 1559, 17), // "layoutDesignIndex"
QT_MOC_LITERAL(81, 1577, 14) // "ResetCrosshair"

    },
    "QmitkStdMultiWidget\0LeftMouseClicked\0"
    "\0mitk::Point3D\0pointValue\0WheelMoved\0"
    "QWheelEvent*\0WidgetPlanesRotationLinked\0"
    "WidgetPlanesRotationEnabled\0"
    "ViewsInitialized\0WidgetPlaneModeSlicing\0"
    "WidgetPlaneModeRotation\0WidgetPlaneModeSwivel\0"
    "WidgetPlaneModeChange\0"
    "WidgetNotifyNewCrossHairMode\0Moved\0"
    "HandleCrosshairPositionEventDelayed\0"
    "changeLayoutTo2DImagesUp\0"
    "changeLayoutTo2DImagesLeft\0"
    "changeLayoutToDefault\0changeLayoutToBig3D\0"
    "changeLayoutToWidget1\0changeLayoutToWidget2\0"
    "changeLayoutToWidget3\0"
    "changeLayoutToRowWidget3And4\0"
    "changeLayoutToColumnWidget3And4\0"
    "changeLayoutToRowWidgetSmall3andBig4\0"
    "changeLayoutToSmallUpperWidget2Big3and4\0"
    "changeLayoutTo2x2Dand3DWidget\0"
    "changeLayoutToLeft2Dand3DRight2D\0"
    "changeLayoutTo2DUpAnd3DDown\0Fit\0"
    "InitPositionTracking\0AddDisplayPlaneSubTree\0"
    "EnableStandardLevelWindow\0"
    "DisableStandardLevelWindow\0"
    "InitializeStandardViews\0const mitk::Geometry3D*\0"
    "geometry\0wheelEvent\0e\0mousePressEvent\0"
    "QMouseEvent*\0moveEvent\0QMoveEvent*\0"
    "EnsureDisplayContainsPoint\0"
    "mitk::BaseRenderer*\0renderer\0p\0"
    "MoveCrossToPosition\0newPosition\0"
    "EnableGradientBackground\0"
    "DisableGradientBackground\0"
    "EnableDepartmentLogo\0DisableDepartmentLogo\0"
    "EnableColoredRectangles\0"
    "DisableColoredRectangles\0"
    "SetWidgetPlaneVisibility\0const char*\0"
    "widgetName\0visible\0SetWidgetPlanesVisibility\0"
    "SetWidgetPlanesLocked\0locked\0"
    "SetWidgetPlanesRotationLocked\0"
    "SetWidgetPlanesRotationLinked\0link\0"
    "SetWidgetPlaneMode\0mode\0"
    "SetGradientBackgroundColors\0mitk::Color\0"
    "upper\0lower\0SetDepartmentLogoPath\0"
    "path\0SetWidgetPlaneModeToSlicing\0"
    "activate\0SetWidgetPlaneModeToRotation\0"
    "SetWidgetPlaneModeToSwivel\0"
    "OnLayoutDesignChanged\0layoutDesignIndex\0"
    "ResetCrosshair"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkStdMultiWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  304,    2, 0x06 /* Public */,
       5,    1,  307,    2, 0x06 /* Public */,
       7,    1,  310,    2, 0x06 /* Public */,
       8,    1,  313,    2, 0x06 /* Public */,
       9,    0,  316,    2, 0x06 /* Public */,
      10,    1,  317,    2, 0x06 /* Public */,
      11,    1,  320,    2, 0x06 /* Public */,
      12,    1,  323,    2, 0x06 /* Public */,
      13,    1,  326,    2, 0x06 /* Public */,
      14,    1,  329,    2, 0x06 /* Public */,
      15,    0,  332,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  333,    2, 0x0a /* Public */,
      17,    0,  334,    2, 0x0a /* Public */,
      18,    0,  335,    2, 0x0a /* Public */,
      19,    0,  336,    2, 0x0a /* Public */,
      20,    0,  337,    2, 0x0a /* Public */,
      21,    0,  338,    2, 0x0a /* Public */,
      22,    0,  339,    2, 0x0a /* Public */,
      23,    0,  340,    2, 0x0a /* Public */,
      24,    0,  341,    2, 0x0a /* Public */,
      25,    0,  342,    2, 0x0a /* Public */,
      26,    0,  343,    2, 0x0a /* Public */,
      27,    0,  344,    2, 0x0a /* Public */,
      28,    0,  345,    2, 0x0a /* Public */,
      29,    0,  346,    2, 0x0a /* Public */,
      30,    0,  347,    2, 0x0a /* Public */,
      31,    0,  348,    2, 0x0a /* Public */,
      32,    0,  349,    2, 0x0a /* Public */,
      33,    0,  350,    2, 0x0a /* Public */,
      34,    0,  351,    2, 0x0a /* Public */,
      35,    0,  352,    2, 0x0a /* Public */,
      36,    1,  353,    2, 0x0a /* Public */,
      39,    1,  356,    2, 0x0a /* Public */,
      41,    1,  359,    2, 0x0a /* Public */,
      43,    1,  362,    2, 0x0a /* Public */,
      45,    2,  365,    2, 0x0a /* Public */,
      49,    1,  370,    2, 0x0a /* Public */,
      51,    0,  373,    2, 0x0a /* Public */,
      52,    0,  374,    2, 0x0a /* Public */,
      53,    0,  375,    2, 0x0a /* Public */,
      54,    0,  376,    2, 0x0a /* Public */,
      55,    0,  377,    2, 0x0a /* Public */,
      56,    0,  378,    2, 0x0a /* Public */,
      57,    3,  379,    2, 0x0a /* Public */,
      57,    2,  386,    2, 0x2a /* Public | MethodCloned */,
      61,    2,  391,    2, 0x0a /* Public */,
      61,    1,  396,    2, 0x2a /* Public | MethodCloned */,
      62,    1,  399,    2, 0x0a /* Public */,
      64,    1,  402,    2, 0x0a /* Public */,
      65,    1,  405,    2, 0x0a /* Public */,
      67,    1,  408,    2, 0x0a /* Public */,
      69,    2,  411,    2, 0x0a /* Public */,
      73,    1,  416,    2, 0x0a /* Public */,
      75,    1,  419,    2, 0x0a /* Public */,
      77,    1,  422,    2, 0x0a /* Public */,
      78,    1,  425,    2, 0x0a /* Public */,
      79,    1,  428,    2, 0x0a /* Public */,
      81,    0,  431,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 6,   40,
    QMetaType::Void, 0x80000000 | 42,   40,
    QMetaType::Void, 0x80000000 | 44,   40,
    QMetaType::Void, 0x80000000 | 46, 0x80000000 | 3,   47,   48,
    QMetaType::Void, 0x80000000 | 3,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 58, QMetaType::Bool, 0x80000000 | 46,   59,   60,   47,
    QMetaType::Void, 0x80000000 | 58, QMetaType::Bool,   59,   60,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 46,   60,   47,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void, QMetaType::Bool,   66,
    QMetaType::Void, QMetaType::Int,   68,
    QMetaType::Void, 0x80000000 | 70, 0x80000000 | 70,   71,   72,
    QMetaType::Void, 0x80000000 | 58,   74,
    QMetaType::Void, QMetaType::Bool,   76,
    QMetaType::Void, QMetaType::Bool,   76,
    QMetaType::Void, QMetaType::Bool,   76,
    QMetaType::Void, QMetaType::Int,   80,
    QMetaType::Void,

       0        // eod
};

void QmitkStdMultiWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkStdMultiWidget *_t = static_cast<QmitkStdMultiWidget *>(_o);
        switch (_id) {
        case 0: _t->LeftMouseClicked((*reinterpret_cast< mitk::Point3D(*)>(_a[1]))); break;
        case 1: _t->WheelMoved((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 2: _t->WidgetPlanesRotationLinked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->WidgetPlanesRotationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->ViewsInitialized(); break;
        case 5: _t->WidgetPlaneModeSlicing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->WidgetPlaneModeRotation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->WidgetPlaneModeSwivel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->WidgetPlaneModeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->WidgetNotifyNewCrossHairMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->Moved(); break;
        case 11: _t->HandleCrosshairPositionEventDelayed(); break;
        case 12: _t->changeLayoutTo2DImagesUp(); break;
        case 13: _t->changeLayoutTo2DImagesLeft(); break;
        case 14: _t->changeLayoutToDefault(); break;
        case 15: _t->changeLayoutToBig3D(); break;
        case 16: _t->changeLayoutToWidget1(); break;
        case 17: _t->changeLayoutToWidget2(); break;
        case 18: _t->changeLayoutToWidget3(); break;
        case 19: _t->changeLayoutToRowWidget3And4(); break;
        case 20: _t->changeLayoutToColumnWidget3And4(); break;
        case 21: _t->changeLayoutToRowWidgetSmall3andBig4(); break;
        case 22: _t->changeLayoutToSmallUpperWidget2Big3and4(); break;
        case 23: _t->changeLayoutTo2x2Dand3DWidget(); break;
        case 24: _t->changeLayoutToLeft2Dand3DRight2D(); break;
        case 25: _t->changeLayoutTo2DUpAnd3DDown(); break;
        case 26: _t->Fit(); break;
        case 27: _t->InitPositionTracking(); break;
        case 28: _t->AddDisplayPlaneSubTree(); break;
        case 29: _t->EnableStandardLevelWindow(); break;
        case 30: _t->DisableStandardLevelWindow(); break;
        case 31: { bool _r = _t->InitializeStandardViews((*reinterpret_cast< const mitk::Geometry3D*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 33: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 34: _t->moveEvent((*reinterpret_cast< QMoveEvent*(*)>(_a[1]))); break;
        case 35: _t->EnsureDisplayContainsPoint((*reinterpret_cast< mitk::BaseRenderer*(*)>(_a[1])),(*reinterpret_cast< const mitk::Point3D(*)>(_a[2]))); break;
        case 36: _t->MoveCrossToPosition((*reinterpret_cast< const mitk::Point3D(*)>(_a[1]))); break;
        case 37: _t->EnableGradientBackground(); break;
        case 38: _t->DisableGradientBackground(); break;
        case 39: _t->EnableDepartmentLogo(); break;
        case 40: _t->DisableDepartmentLogo(); break;
        case 41: _t->EnableColoredRectangles(); break;
        case 42: _t->DisableColoredRectangles(); break;
        case 43: _t->SetWidgetPlaneVisibility((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< mitk::BaseRenderer*(*)>(_a[3]))); break;
        case 44: _t->SetWidgetPlaneVisibility((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 45: _t->SetWidgetPlanesVisibility((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< mitk::BaseRenderer*(*)>(_a[2]))); break;
        case 46: _t->SetWidgetPlanesVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->SetWidgetPlanesLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->SetWidgetPlanesRotationLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->SetWidgetPlanesRotationLinked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->SetWidgetPlaneMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->SetGradientBackgroundColors((*reinterpret_cast< const mitk::Color(*)>(_a[1])),(*reinterpret_cast< const mitk::Color(*)>(_a[2]))); break;
        case 52: _t->SetDepartmentLogoPath((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 53: _t->SetWidgetPlaneModeToSlicing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->SetWidgetPlaneModeToRotation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->SetWidgetPlaneModeToSwivel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->OnLayoutDesignChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->ResetCrosshair(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkStdMultiWidget::*_t)(mitk::Point3D );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStdMultiWidget::LeftMouseClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkStdMultiWidget::*_t)(QWheelEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStdMultiWidget::WheelMoved)) {
                *result = 1;
            }
        }
        {
            typedef void (QmitkStdMultiWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStdMultiWidget::WidgetPlanesRotationLinked)) {
                *result = 2;
            }
        }
        {
            typedef void (QmitkStdMultiWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStdMultiWidget::WidgetPlanesRotationEnabled)) {
                *result = 3;
            }
        }
        {
            typedef void (QmitkStdMultiWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStdMultiWidget::ViewsInitialized)) {
                *result = 4;
            }
        }
        {
            typedef void (QmitkStdMultiWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStdMultiWidget::WidgetPlaneModeSlicing)) {
                *result = 5;
            }
        }
        {
            typedef void (QmitkStdMultiWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStdMultiWidget::WidgetPlaneModeRotation)) {
                *result = 6;
            }
        }
        {
            typedef void (QmitkStdMultiWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStdMultiWidget::WidgetPlaneModeSwivel)) {
                *result = 7;
            }
        }
        {
            typedef void (QmitkStdMultiWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStdMultiWidget::WidgetPlaneModeChange)) {
                *result = 8;
            }
        }
        {
            typedef void (QmitkStdMultiWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStdMultiWidget::WidgetNotifyNewCrossHairMode)) {
                *result = 9;
            }
        }
        {
            typedef void (QmitkStdMultiWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStdMultiWidget::Moved)) {
                *result = 10;
            }
        }
    }
}

const QMetaObject QmitkStdMultiWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkStdMultiWidget.data,
      qt_meta_data_QmitkStdMultiWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkStdMultiWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkStdMultiWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkStdMultiWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkStdMultiWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkStdMultiWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 58;
    }
    return _id;
}

// SIGNAL 0
void QmitkStdMultiWidget::LeftMouseClicked(mitk::Point3D _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmitkStdMultiWidget::WheelMoved(QWheelEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmitkStdMultiWidget::WidgetPlanesRotationLinked(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QmitkStdMultiWidget::WidgetPlanesRotationEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QmitkStdMultiWidget::ViewsInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QmitkStdMultiWidget::WidgetPlaneModeSlicing(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QmitkStdMultiWidget::WidgetPlaneModeRotation(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QmitkStdMultiWidget::WidgetPlaneModeSwivel(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QmitkStdMultiWidget::WidgetPlaneModeChange(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QmitkStdMultiWidget::WidgetNotifyNewCrossHairMode(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QmitkStdMultiWidget::Moved()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
