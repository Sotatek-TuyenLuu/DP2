/****************************************************************************
** Meta object code from reading C++ file 'QmitkAdaptiveRegionGrowingToolGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkAdaptiveRegionGrowingToolGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkAdaptiveRegionGrowingToolGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkAdaptiveRegionGrowingToolGUI_t {
    QByteArrayData data[16];
    char stringdata[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkAdaptiveRegionGrowingToolGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkAdaptiveRegionGrowingToolGUI_t qt_meta_stringdata_QmitkAdaptiveRegionGrowingToolGUI = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QmitkAdaptiveRegionGrowingToo..."
QT_MOC_LITERAL(1, 34, 15), // "RunSegmentation"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 17), // "ChangeLevelWindow"
QT_MOC_LITERAL(4, 69, 8), // "newValue"
QT_MOC_LITERAL(5, 78, 14), // "IncreaseSlider"
QT_MOC_LITERAL(6, 93, 14), // "DecreaseSlider"
QT_MOC_LITERAL(7, 108, 19), // "ConfirmSegmentation"
QT_MOC_LITERAL(8, 128, 18), // "UseVolumeRendering"
QT_MOC_LITERAL(9, 147, 2), // "on"
QT_MOC_LITERAL(10, 150, 22), // "SetLowerThresholdValue"
QT_MOC_LITERAL(11, 173, 14), // "lowerThreshold"
QT_MOC_LITERAL(12, 188, 22), // "SetUpperThresholdValue"
QT_MOC_LITERAL(13, 211, 14), // "upperThreshold"
QT_MOC_LITERAL(14, 226, 19), // "OnNewToolAssociated"
QT_MOC_LITERAL(15, 246, 11) // "mitk::Tool*"

    },
    "QmitkAdaptiveRegionGrowingToolGUI\0"
    "RunSegmentation\0\0ChangeLevelWindow\0"
    "newValue\0IncreaseSlider\0DecreaseSlider\0"
    "ConfirmSegmentation\0UseVolumeRendering\0"
    "on\0SetLowerThresholdValue\0lowerThreshold\0"
    "SetUpperThresholdValue\0upperThreshold\0"
    "OnNewToolAssociated\0mitk::Tool*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkAdaptiveRegionGrowingToolGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x09 /* Protected */,
       3,    1,   60,    2, 0x09 /* Protected */,
       5,    0,   63,    2, 0x09 /* Protected */,
       6,    0,   64,    2, 0x09 /* Protected */,
       7,    0,   65,    2, 0x09 /* Protected */,
       8,    1,   66,    2, 0x09 /* Protected */,
      10,    1,   69,    2, 0x09 /* Protected */,
      12,    1,   72,    2, 0x09 /* Protected */,
      14,    1,   75,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, 0x80000000 | 15,    2,

       0        // eod
};

void QmitkAdaptiveRegionGrowingToolGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkAdaptiveRegionGrowingToolGUI *_t = static_cast<QmitkAdaptiveRegionGrowingToolGUI *>(_o);
        switch (_id) {
        case 0: _t->RunSegmentation(); break;
        case 1: _t->ChangeLevelWindow((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->IncreaseSlider(); break;
        case 3: _t->DecreaseSlider(); break;
        case 4: _t->ConfirmSegmentation(); break;
        case 5: _t->UseVolumeRendering((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->SetLowerThresholdValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->SetUpperThresholdValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->OnNewToolAssociated((*reinterpret_cast< mitk::Tool*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkAdaptiveRegionGrowingToolGUI::staticMetaObject = {
    { &QmitkToolGUI::staticMetaObject, qt_meta_stringdata_QmitkAdaptiveRegionGrowingToolGUI.data,
      qt_meta_data_QmitkAdaptiveRegionGrowingToolGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkAdaptiveRegionGrowingToolGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkAdaptiveRegionGrowingToolGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkAdaptiveRegionGrowingToolGUI.stringdata))
        return static_cast<void*>(const_cast< QmitkAdaptiveRegionGrowingToolGUI*>(this));
    return QmitkToolGUI::qt_metacast(_clname);
}

int QmitkAdaptiveRegionGrowingToolGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkToolGUI::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
