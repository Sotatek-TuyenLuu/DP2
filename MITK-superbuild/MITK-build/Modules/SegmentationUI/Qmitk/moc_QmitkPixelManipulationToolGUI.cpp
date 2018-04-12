/****************************************************************************
** Meta object code from reading C++ file 'QmitkPixelManipulationToolGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkPixelManipulationToolGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkPixelManipulationToolGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkPixelManipulationToolGUI_t {
    QByteArrayData data[9];
    char stringdata[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkPixelManipulationToolGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkPixelManipulationToolGUI_t qt_meta_stringdata_QmitkPixelManipulationToolGUI = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QmitkPixelManipulationToolGUI"
QT_MOC_LITERAL(1, 30, 19), // "OnNewToolAssociated"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "mitk::Tool*"
QT_MOC_LITERAL(4, 63, 20), // "OnSliderValueChanged"
QT_MOC_LITERAL(5, 84, 16), // "OnSpinBoxChanged"
QT_MOC_LITERAL(6, 101, 17), // "OnOkButtonClicked"
QT_MOC_LITERAL(7, 119, 15), // "SetFixedValueOn"
QT_MOC_LITERAL(8, 135, 16) // "SetFixedValueOff"

    },
    "QmitkPixelManipulationToolGUI\0"
    "OnNewToolAssociated\0\0mitk::Tool*\0"
    "OnSliderValueChanged\0OnSpinBoxChanged\0"
    "OnOkButtonClicked\0SetFixedValueOn\0"
    "SetFixedValueOff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkPixelManipulationToolGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x09 /* Protected */,
       4,    1,   47,    2, 0x09 /* Protected */,
       5,    0,   50,    2, 0x09 /* Protected */,
       6,    0,   51,    2, 0x09 /* Protected */,
       7,    1,   52,    2, 0x09 /* Protected */,
       8,    1,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void QmitkPixelManipulationToolGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkPixelManipulationToolGUI *_t = static_cast<QmitkPixelManipulationToolGUI *>(_o);
        switch (_id) {
        case 0: _t->OnNewToolAssociated((*reinterpret_cast< mitk::Tool*(*)>(_a[1]))); break;
        case 1: _t->OnSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnSpinBoxChanged(); break;
        case 3: _t->OnOkButtonClicked(); break;
        case 4: _t->SetFixedValueOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->SetFixedValueOff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkPixelManipulationToolGUI::staticMetaObject = {
    { &QmitkToolGUI::staticMetaObject, qt_meta_stringdata_QmitkPixelManipulationToolGUI.data,
      qt_meta_data_QmitkPixelManipulationToolGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkPixelManipulationToolGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkPixelManipulationToolGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkPixelManipulationToolGUI.stringdata))
        return static_cast<void*>(const_cast< QmitkPixelManipulationToolGUI*>(this));
    return QmitkToolGUI::qt_metacast(_clname);
}

int QmitkPixelManipulationToolGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkToolGUI::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
