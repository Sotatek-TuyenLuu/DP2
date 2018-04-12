/****************************************************************************
** Meta object code from reading C++ file 'qRestResult.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qRestAPI/qRestResult.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qRestResult.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qRestResult_t {
    QByteArrayData data[13];
    char stringdata[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qRestResult_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qRestResult_t qt_meta_stringdata_qRestResult = {
    {
QT_MOC_LITERAL(0, 0, 11), // "qRestResult"
QT_MOC_LITERAL(1, 12, 5), // "ready"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "setResult"
QT_MOC_LITERAL(4, 29, 18), // "QList<QVariantMap>"
QT_MOC_LITERAL(5, 48, 6), // "result"
QT_MOC_LITERAL(6, 55, 8), // "setError"
QT_MOC_LITERAL(7, 64, 5), // "error"
QT_MOC_LITERAL(8, 70, 19), // "qRestAPI::ErrorType"
QT_MOC_LITERAL(9, 90, 9), // "errorType"
QT_MOC_LITERAL(10, 100, 17), // "downloadReadyRead"
QT_MOC_LITERAL(11, 118, 16), // "downloadFinished"
QT_MOC_LITERAL(12, 135, 14) // "uploadFinished"

    },
    "qRestResult\0ready\0\0setResult\0"
    "QList<QVariantMap>\0result\0setError\0"
    "error\0qRestAPI::ErrorType\0errorType\0"
    "downloadReadyRead\0downloadFinished\0"
    "uploadFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qRestResult[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       3,    1,   56,    2, 0x0a /* Public */,
       6,    2,   59,    2, 0x0a /* Public */,
       6,    1,   64,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   67,    2, 0x0a /* Public */,
      11,    0,   68,    2, 0x0a /* Public */,
      12,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qRestResult::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qRestResult *_t = static_cast<qRestResult *>(_o);
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->setResult(); break;
        case 2: _t->setResult((*reinterpret_cast< const QList<QVariantMap>(*)>(_a[1]))); break;
        case 3: _t->setError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qRestAPI::ErrorType(*)>(_a[2]))); break;
        case 4: _t->setError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->downloadReadyRead(); break;
        case 6: _t->downloadFinished(); break;
        case 7: _t->uploadFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QVariantMap> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (qRestResult::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&qRestResult::ready)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject qRestResult::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qRestResult.data,
      qt_meta_data_qRestResult,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *qRestResult::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qRestResult::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_qRestResult.stringdata))
        return static_cast<void*>(const_cast< qRestResult*>(this));
    return QObject::qt_metacast(_clname);
}

int qRestResult::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void qRestResult::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
