/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMQuery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMQuery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMQuery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMQuery_t {
    QByteArrayData data[13];
    char stringdata[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMQuery_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMQuery_t qt_meta_stringdata_ctkDICOMQuery = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkDICOMQuery"
QT_MOC_LITERAL(1, 14, 8), // "progress"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "message"
QT_MOC_LITERAL(4, 32, 5), // "debug"
QT_MOC_LITERAL(5, 38, 5), // "error"
QT_MOC_LITERAL(6, 44, 4), // "done"
QT_MOC_LITERAL(7, 49, 6), // "cancel"
QT_MOC_LITERAL(8, 56, 14), // "callingAETitle"
QT_MOC_LITERAL(9, 71, 13), // "calledAETitle"
QT_MOC_LITERAL(10, 85, 4), // "host"
QT_MOC_LITERAL(11, 90, 4), // "port"
QT_MOC_LITERAL(12, 95, 10) // "preferCGET"

    },
    "ctkDICOMQuery\0progress\0\0message\0debug\0"
    "error\0done\0cancel\0callingAETitle\0"
    "calledAETitle\0host\0port\0preferCGET"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       1,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       6,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    1,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095003,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkDICOMQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMQuery *_t = static_cast<ctkDICOMQuery *>(_o);
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->progress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->debug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->done((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDICOMQuery::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMQuery::progress)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkDICOMQuery::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMQuery::progress)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkDICOMQuery::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMQuery::debug)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkDICOMQuery::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMQuery::error)) {
                *result = 3;
            }
        }
        {
            typedef void (ctkDICOMQuery::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMQuery::done)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject ctkDICOMQuery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkDICOMQuery.data,
      qt_meta_data_ctkDICOMQuery,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMQuery.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMQuery*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkDICOMQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = callingAETitle(); break;
        case 1: *reinterpret_cast< QString*>(_v) = calledAETitle(); break;
        case 2: *reinterpret_cast< QString*>(_v) = host(); break;
        case 3: *reinterpret_cast< int*>(_v) = port(); break;
        case 4: *reinterpret_cast< bool*>(_v) = preferCGET(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCallingAETitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: setCallingAETitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: setHost(*reinterpret_cast< QString*>(_v)); break;
        case 3: setPort(*reinterpret_cast< int*>(_v)); break;
        case 4: setPreferCGET(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkDICOMQuery::progress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDICOMQuery::progress(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkDICOMQuery::debug(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkDICOMQuery::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkDICOMQuery::done(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
