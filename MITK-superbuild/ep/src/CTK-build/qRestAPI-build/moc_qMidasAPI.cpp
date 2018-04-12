/****************************************************************************
** Meta object code from reading C++ file 'qMidasAPI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qRestAPI/qMidasAPI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMidasAPI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qMidasAPI_t {
    QByteArrayData data[9];
    char stringdata[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMidasAPI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMidasAPI_t qt_meta_stringdata_qMidasAPI = {
    {
QT_MOC_LITERAL(0, 0, 9), // "qMidasAPI"
QT_MOC_LITERAL(1, 10, 13), // "errorReceived"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "queryId"
QT_MOC_LITERAL(4, 33, 5), // "error"
QT_MOC_LITERAL(5, 39, 14), // "resultReceived"
QT_MOC_LITERAL(6, 54, 18), // "QList<QVariantMap>"
QT_MOC_LITERAL(7, 73, 6), // "result"
QT_MOC_LITERAL(8, 80, 8) // "midasUrl"

    },
    "qMidasAPI\0errorReceived\0\0queryId\0error\0"
    "resultReceived\0QList<QVariantMap>\0"
    "result\0midasUrl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMidasAPI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       5,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 6,    3,    7,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00095103,

       0        // eod
};

void qMidasAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qMidasAPI *_t = static_cast<qMidasAPI *>(_o);
        switch (_id) {
        case 0: _t->errorReceived((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->resultReceived((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QList<QVariantMap>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QVariantMap> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (qMidasAPI::*_t)(QUuid , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&qMidasAPI::errorReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (qMidasAPI::*_t)(QUuid , QList<QVariantMap> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&qMidasAPI::resultReceived)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject qMidasAPI::staticMetaObject = {
    { &qRestAPI::staticMetaObject, qt_meta_stringdata_qMidasAPI.data,
      qt_meta_data_qMidasAPI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *qMidasAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMidasAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_qMidasAPI.stringdata))
        return static_cast<void*>(const_cast< qMidasAPI*>(this));
    return qRestAPI::qt_metacast(_clname);
}

int qMidasAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qRestAPI::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = midasUrl(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMidasUrl(*reinterpret_cast< QString*>(_v)); break;
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

// SIGNAL 0
void qMidasAPI::errorReceived(QUuid _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMidasAPI::resultReceived(QUuid _t1, QList<QVariantMap> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
