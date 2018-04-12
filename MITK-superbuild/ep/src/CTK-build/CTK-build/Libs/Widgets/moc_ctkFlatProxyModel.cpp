/****************************************************************************
** Meta object code from reading C++ file 'ctkFlatProxyModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkFlatProxyModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkFlatProxyModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkFlatProxyModel_t {
    QByteArrayData data[4];
    char stringdata[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkFlatProxyModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkFlatProxyModel_t qt_meta_stringdata_ctkFlatProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ctkFlatProxyModel"
QT_MOC_LITERAL(1, 18, 17), // "startFlattenLevel"
QT_MOC_LITERAL(2, 36, 15), // "endFlattenLevel"
QT_MOC_LITERAL(3, 52, 9) // "hideLevel"

    },
    "ctkFlatProxyModel\0startFlattenLevel\0"
    "endFlattenLevel\0hideLevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkFlatProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       2, QMetaType::Int, 0x00095103,
       3, QMetaType::Int, 0x00095103,

       0        // eod
};

void ctkFlatProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkFlatProxyModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_ctkFlatProxyModel.data,
      qt_meta_data_ctkFlatProxyModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkFlatProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkFlatProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkFlatProxyModel.stringdata))
        return static_cast<void*>(const_cast< ctkFlatProxyModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int ctkFlatProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = startFlattenLevel(); break;
        case 1: *reinterpret_cast< int*>(_v) = endFlattenLevel(); break;
        case 2: *reinterpret_cast< int*>(_v) = hideLevel(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStartFlattenLevel(*reinterpret_cast< int*>(_v)); break;
        case 1: setEndFlattenLevel(*reinterpret_cast< int*>(_v)); break;
        case 2: setHideLevel(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
