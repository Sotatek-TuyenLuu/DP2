/****************************************************************************
** Meta object code from reading C++ file 'ctkCheckableModelHelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCheckableModelHelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCheckableModelHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCheckableModelHelper_t {
    QByteArrayData data[27];
    char stringdata[356];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCheckableModelHelper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCheckableModelHelper_t qt_meta_stringdata_ctkCheckableModelHelper = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ctkCheckableModelHelper"
QT_MOC_LITERAL(1, 24, 13), // "setCheckState"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10), // "modelIndex"
QT_MOC_LITERAL(4, 50, 14), // "Qt::CheckState"
QT_MOC_LITERAL(5, 65, 10), // "checkState"
QT_MOC_LITERAL(6, 76, 19), // "setHeaderCheckState"
QT_MOC_LITERAL(7, 96, 7), // "section"
QT_MOC_LITERAL(8, 104, 16), // "toggleCheckState"
QT_MOC_LITERAL(9, 121, 22), // "toggleHeaderCheckState"
QT_MOC_LITERAL(10, 144, 19), // "onHeaderDataChanged"
QT_MOC_LITERAL(11, 164, 15), // "Qt::Orientation"
QT_MOC_LITERAL(12, 180, 6), // "orient"
QT_MOC_LITERAL(13, 187, 5), // "first"
QT_MOC_LITERAL(14, 193, 4), // "last"
QT_MOC_LITERAL(15, 198, 13), // "onDataChanged"
QT_MOC_LITERAL(16, 212, 7), // "topLeft"
QT_MOC_LITERAL(17, 220, 11), // "bottomRight"
QT_MOC_LITERAL(18, 232, 22), // "updateHeadersFromItems"
QT_MOC_LITERAL(19, 255, 17), // "onColumnsInserted"
QT_MOC_LITERAL(20, 273, 6), // "parent"
QT_MOC_LITERAL(21, 280, 5), // "start"
QT_MOC_LITERAL(22, 286, 3), // "end"
QT_MOC_LITERAL(23, 290, 14), // "onRowsInserted"
QT_MOC_LITERAL(24, 305, 17), // "forceCheckability"
QT_MOC_LITERAL(25, 323, 14), // "propagateDepth"
QT_MOC_LITERAL(26, 338, 17) // "defaultCheckState"

    },
    "ctkCheckableModelHelper\0setCheckState\0"
    "\0modelIndex\0Qt::CheckState\0checkState\0"
    "setHeaderCheckState\0section\0"
    "toggleCheckState\0toggleHeaderCheckState\0"
    "onHeaderDataChanged\0Qt::Orientation\0"
    "orient\0first\0last\0onDataChanged\0topLeft\0"
    "bottomRight\0updateHeadersFromItems\0"
    "onColumnsInserted\0parent\0start\0end\0"
    "onRowsInserted\0forceCheckability\0"
    "propagateDepth\0defaultCheckState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCheckableModelHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x0a /* Public */,
       6,    2,   64,    2, 0x0a /* Public */,
       8,    1,   69,    2, 0x0a /* Public */,
       9,    1,   72,    2, 0x0a /* Public */,
      10,    3,   75,    2, 0x08 /* Private */,
      15,    2,   82,    2, 0x08 /* Private */,
      18,    0,   87,    2, 0x08 /* Private */,
      19,    3,   88,    2, 0x08 /* Private */,
      23,    3,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    7,    5,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int, QMetaType::Int,   12,   13,   14,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   20,   21,   22,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   20,   21,   22,

 // properties: name, type, flags
      24, QMetaType::Bool, 0x00095103,
      25, QMetaType::Int, 0x00095103,
      26, 0x80000000 | 4, 0x0009510b,

       0        // eod
};

void ctkCheckableModelHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkCheckableModelHelper *_t = static_cast<ctkCheckableModelHelper *>(_o);
        switch (_id) {
        case 0: _t->setCheckState((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 1: _t->setHeaderCheckState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 2: _t->toggleCheckState((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->toggleHeaderCheckState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onHeaderDataChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 6: _t->updateHeadersFromItems(); break;
        case 7: _t->onColumnsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->onRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject ctkCheckableModelHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkCheckableModelHelper.data,
      qt_meta_data_ctkCheckableModelHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCheckableModelHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCheckableModelHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCheckableModelHelper.stringdata))
        return static_cast<void*>(const_cast< ctkCheckableModelHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkCheckableModelHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = forceCheckability(); break;
        case 1: *reinterpret_cast< int*>(_v) = propagateDepth(); break;
        case 2: *reinterpret_cast< Qt::CheckState*>(_v) = defaultCheckState(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setForceCheckability(*reinterpret_cast< bool*>(_v)); break;
        case 1: setPropagateDepth(*reinterpret_cast< int*>(_v)); break;
        case 2: setDefaultCheckState(*reinterpret_cast< Qt::CheckState*>(_v)); break;
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
