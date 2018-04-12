/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMFilterProxyModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMFilterProxyModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMFilterProxyModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMFilterProxyModel_t {
    QByteArrayData data[7];
    char stringdata[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMFilterProxyModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMFilterProxyModel_t qt_meta_stringdata_ctkDICOMFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ctkDICOMFilterProxyModel"
QT_MOC_LITERAL(1, 25, 17), // "setNameSearchText"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "text"
QT_MOC_LITERAL(4, 49, 18), // "setStudySearchText"
QT_MOC_LITERAL(5, 68, 19), // "setSeriesSearchText"
QT_MOC_LITERAL(6, 88, 15) // "setIdSearchText"

    },
    "ctkDICOMFilterProxyModel\0setNameSearchText\0"
    "\0text\0setStudySearchText\0setSeriesSearchText\0"
    "setIdSearchText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMFilterProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    1,   40,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void ctkDICOMFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMFilterProxyModel *_t = static_cast<ctkDICOMFilterProxyModel *>(_o);
        switch (_id) {
        case 0: _t->setNameSearchText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setStudySearchText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setSeriesSearchText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setIdSearchText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ctkDICOMFilterProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_ctkDICOMFilterProxyModel.data,
      qt_meta_data_ctkDICOMFilterProxyModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMFilterProxyModel.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMFilterProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ctkDICOMFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
