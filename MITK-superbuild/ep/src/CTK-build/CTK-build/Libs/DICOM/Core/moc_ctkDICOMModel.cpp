/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMModel_t {
    QByteArrayData data[10];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMModel_t qt_meta_stringdata_ctkDICOMModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkDICOMModel"
QT_MOC_LITERAL(1, 14, 5), // "reset"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "endLevel"
QT_MOC_LITERAL(4, 30, 9), // "IndexType"
QT_MOC_LITERAL(5, 40, 8), // "RootType"
QT_MOC_LITERAL(6, 49, 11), // "PatientType"
QT_MOC_LITERAL(7, 61, 9), // "StudyType"
QT_MOC_LITERAL(8, 71, 10), // "SeriesType"
QT_MOC_LITERAL(9, 82, 9) // "ImageType"

    },
    "ctkDICOMModel\0reset\0\0endLevel\0IndexType\0"
    "RootType\0PatientType\0StudyType\0"
    "SeriesType\0ImageType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       1,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0009510b,

 // enums: name, flags, count, data
       4, 0x0,    5,   27,

 // enum data: key, value
       5, uint(ctkDICOMModel::RootType),
       6, uint(ctkDICOMModel::PatientType),
       7, uint(ctkDICOMModel::StudyType),
       8, uint(ctkDICOMModel::SeriesType),
       9, uint(ctkDICOMModel::ImageType),

       0        // eod
};

void ctkDICOMModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMModel *_t = static_cast<ctkDICOMModel *>(_o);
        switch (_id) {
        case 0: _t->reset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ctkDICOMModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_ctkDICOMModel.data,
      qt_meta_data_ctkDICOMModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMModel.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int ctkDICOMModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< IndexType*>(_v) = endLevel(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEndLevel(*reinterpret_cast< IndexType*>(_v)); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
