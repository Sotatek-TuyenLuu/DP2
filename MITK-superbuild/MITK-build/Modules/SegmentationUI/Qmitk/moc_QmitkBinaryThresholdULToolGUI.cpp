/****************************************************************************
** Meta object code from reading C++ file 'QmitkBinaryThresholdULToolGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkBinaryThresholdULToolGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkBinaryThresholdULToolGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkBinaryThresholdULToolGUI_t {
    QByteArrayData data[8];
    char stringdata[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkBinaryThresholdULToolGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkBinaryThresholdULToolGUI_t qt_meta_stringdata_QmitkBinaryThresholdULToolGUI = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QmitkBinaryThresholdULToolGUI"
QT_MOC_LITERAL(1, 30, 19), // "OnNewToolAssociated"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "mitk::Tool*"
QT_MOC_LITERAL(4, 63, 24), // "OnAcceptThresholdPreview"
QT_MOC_LITERAL(5, 88, 19), // "OnThresholdsChanged"
QT_MOC_LITERAL(6, 108, 3), // "min"
QT_MOC_LITERAL(7, 112, 3) // "max"

    },
    "QmitkBinaryThresholdULToolGUI\0"
    "OnNewToolAssociated\0\0mitk::Tool*\0"
    "OnAcceptThresholdPreview\0OnThresholdsChanged\0"
    "min\0max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkBinaryThresholdULToolGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x09 /* Protected */,
       4,    0,   32,    2, 0x09 /* Protected */,
       5,    2,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,

       0        // eod
};

void QmitkBinaryThresholdULToolGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkBinaryThresholdULToolGUI *_t = static_cast<QmitkBinaryThresholdULToolGUI *>(_o);
        switch (_id) {
        case 0: _t->OnNewToolAssociated((*reinterpret_cast< mitk::Tool*(*)>(_a[1]))); break;
        case 1: _t->OnAcceptThresholdPreview(); break;
        case 2: _t->OnThresholdsChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkBinaryThresholdULToolGUI::staticMetaObject = {
    { &QmitkToolGUI::staticMetaObject, qt_meta_stringdata_QmitkBinaryThresholdULToolGUI.data,
      qt_meta_data_QmitkBinaryThresholdULToolGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkBinaryThresholdULToolGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkBinaryThresholdULToolGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkBinaryThresholdULToolGUI.stringdata))
        return static_cast<void*>(const_cast< QmitkBinaryThresholdULToolGUI*>(this));
    return QmitkToolGUI::qt_metacast(_clname);
}

int QmitkBinaryThresholdULToolGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkToolGUI::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
