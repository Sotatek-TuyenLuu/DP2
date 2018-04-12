/****************************************************************************
** Meta object code from reading C++ file 'ctkCompleter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCompleter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCompleter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCompleter_t {
    QByteArrayData data[6];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCompleter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCompleter_t qt_meta_stringdata_ctkCompleter = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ctkCompleter"
QT_MOC_LITERAL(1, 13, 14), // "modelFiltering"
QT_MOC_LITERAL(2, 28, 14), // "ModelFiltering"
QT_MOC_LITERAL(3, 43, 16), // "FilterStartsWith"
QT_MOC_LITERAL(4, 60, 14), // "FilterContains"
QT_MOC_LITERAL(5, 75, 20) // "FilterWordStartsWith"

    },
    "ctkCompleter\0modelFiltering\0ModelFiltering\0"
    "FilterStartsWith\0FilterContains\0"
    "FilterWordStartsWith"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCompleter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       1,   17, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,

 // enums: name, flags, count, data
       2, 0x0,    3,   21,

 // enum data: key, value
       3, uint(ctkCompleter::FilterStartsWith),
       4, uint(ctkCompleter::FilterContains),
       5, uint(ctkCompleter::FilterWordStartsWith),

       0        // eod
};

void ctkCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkCompleter::staticMetaObject = {
    { &QCompleter::staticMetaObject, qt_meta_stringdata_ctkCompleter.data,
      qt_meta_data_ctkCompleter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCompleter.stringdata))
        return static_cast<void*>(const_cast< ctkCompleter*>(this));
    return QCompleter::qt_metacast(_clname);
}

int ctkCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ModelFiltering*>(_v) = modelFiltering(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setModelFiltering(*reinterpret_cast< ModelFiltering*>(_v)); break;
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
