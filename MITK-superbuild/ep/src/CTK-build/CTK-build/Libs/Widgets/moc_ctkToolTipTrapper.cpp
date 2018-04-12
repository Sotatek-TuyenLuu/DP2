/****************************************************************************
** Meta object code from reading C++ file 'ctkToolTipTrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkToolTipTrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkToolTipTrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkToolTipTrapper_t {
    QByteArrayData data[6];
    char stringdata[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkToolTipTrapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkToolTipTrapper_t qt_meta_stringdata_ctkToolTipTrapper = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ctkToolTipTrapper"
QT_MOC_LITERAL(1, 18, 18), // "setToolTipsTrapped"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "toolTipsTrapped"
QT_MOC_LITERAL(4, 54, 22), // "setToolTipsWordWrapped"
QT_MOC_LITERAL(5, 77, 19) // "toolTipsWordWrapped"

    },
    "ctkToolTipTrapper\0setToolTipsTrapped\0"
    "\0toolTipsTrapped\0setToolTipsWordWrapped\0"
    "toolTipsWordWrapped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkToolTipTrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00095103,
       5, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkToolTipTrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkToolTipTrapper *_t = static_cast<ctkToolTipTrapper *>(_o);
        switch (_id) {
        case 0: _t->setToolTipsTrapped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setToolTipsWordWrapped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ctkToolTipTrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkToolTipTrapper.data,
      qt_meta_data_ctkToolTipTrapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkToolTipTrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkToolTipTrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkToolTipTrapper.stringdata))
        return static_cast<void*>(const_cast< ctkToolTipTrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkToolTipTrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = toolTipsTrapped(); break;
        case 1: *reinterpret_cast< bool*>(_v) = toolTipsWordWrapped(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setToolTipsTrapped(*reinterpret_cast< bool*>(_v)); break;
        case 1: setToolTipsWordWrapped(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
