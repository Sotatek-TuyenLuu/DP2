/****************************************************************************
** Meta object code from reading C++ file 'qMidasAPI_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qRestAPI/qMidasAPI_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMidasAPI_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qMidasAPIPrivate_t {
    QByteArrayData data[1];
    char stringdata[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMidasAPIPrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMidasAPIPrivate_t qt_meta_stringdata_qMidasAPIPrivate = {
    {
QT_MOC_LITERAL(0, 0, 16) // "qMidasAPIPrivate"

    },
    "qMidasAPIPrivate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMidasAPIPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void qMidasAPIPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject qMidasAPIPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qMidasAPIPrivate.data,
      qt_meta_data_qMidasAPIPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *qMidasAPIPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMidasAPIPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_qMidasAPIPrivate.stringdata))
        return static_cast<void*>(const_cast< qMidasAPIPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int qMidasAPIPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_qMidasAPIResult_t {
    QByteArrayData data[8];
    char stringdata[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMidasAPIResult_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMidasAPIResult_t qt_meta_stringdata_qMidasAPIResult = {
    {
QT_MOC_LITERAL(0, 0, 15), // "qMidasAPIResult"
QT_MOC_LITERAL(1, 16, 9), // "setResult"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "queryUuid"
QT_MOC_LITERAL(4, 37, 18), // "QList<QVariantMap>"
QT_MOC_LITERAL(5, 56, 6), // "result"
QT_MOC_LITERAL(6, 63, 8), // "setError"
QT_MOC_LITERAL(7, 72, 5) // "error"

    },
    "qMidasAPIResult\0setResult\0\0queryUuid\0"
    "QList<QVariantMap>\0result\0setError\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMidasAPIResult[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       6,    2,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString,    3,    7,

       0        // eod
};

void qMidasAPIResult::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qMidasAPIResult *_t = static_cast<qMidasAPIResult *>(_o);
        switch (_id) {
        case 0: _t->setResult((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QList<QVariantMap>(*)>(_a[2]))); break;
        case 1: _t->setError((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QVariantMap> >(); break;
            }
            break;
        }
    }
}

const QMetaObject qMidasAPIResult::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qMidasAPIResult.data,
      qt_meta_data_qMidasAPIResult,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *qMidasAPIResult::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMidasAPIResult::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_qMidasAPIResult.stringdata))
        return static_cast<void*>(const_cast< qMidasAPIResult*>(this));
    return QObject::qt_metacast(_clname);
}

int qMidasAPIResult::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
