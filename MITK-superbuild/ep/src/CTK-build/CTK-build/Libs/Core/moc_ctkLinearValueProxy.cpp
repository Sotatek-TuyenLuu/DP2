/****************************************************************************
** Meta object code from reading C++ file 'ctkLinearValueProxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkLinearValueProxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkLinearValueProxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkLinearValueProxy_t {
    QByteArrayData data[8];
    char stringdata[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkLinearValueProxy_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkLinearValueProxy_t qt_meta_stringdata_ctkLinearValueProxy = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ctkLinearValueProxy"
QT_MOC_LITERAL(1, 20, 14), // "setCoefficient"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "newCoeff"
QT_MOC_LITERAL(4, 45, 9), // "setOffset"
QT_MOC_LITERAL(5, 55, 9), // "newOffset"
QT_MOC_LITERAL(6, 65, 11), // "coefficient"
QT_MOC_LITERAL(7, 77, 6) // "offset"

    },
    "ctkLinearValueProxy\0setCoefficient\0\0"
    "newCoeff\0setOffset\0newOffset\0coefficient\0"
    "offset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkLinearValueProxy[] = {

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
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,

 // properties: name, type, flags
       6, QMetaType::Double, 0x00095103,
       7, QMetaType::Double, 0x00095103,

       0        // eod
};

void ctkLinearValueProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkLinearValueProxy *_t = static_cast<ctkLinearValueProxy *>(_o);
        switch (_id) {
        case 0: _t->setCoefficient((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ctkLinearValueProxy::staticMetaObject = {
    { &ctkValueProxy::staticMetaObject, qt_meta_stringdata_ctkLinearValueProxy.data,
      qt_meta_data_ctkLinearValueProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkLinearValueProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkLinearValueProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkLinearValueProxy.stringdata))
        return static_cast<void*>(const_cast< ctkLinearValueProxy*>(this));
    return ctkValueProxy::qt_metacast(_clname);
}

int ctkLinearValueProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkValueProxy::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< double*>(_v) = coefficient(); break;
        case 1: *reinterpret_cast< double*>(_v) = offset(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCoefficient(*reinterpret_cast< double*>(_v)); break;
        case 1: setOffset(*reinterpret_cast< double*>(_v)); break;
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
