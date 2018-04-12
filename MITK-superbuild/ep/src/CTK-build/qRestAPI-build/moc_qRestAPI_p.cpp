/****************************************************************************
** Meta object code from reading C++ file 'qRestAPI_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qRestAPI/qRestAPI_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qRestAPI_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qRestAPIPrivate_t {
    QByteArrayData data[15];
    char stringdata[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qRestAPIPrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qRestAPIPrivate_t qt_meta_stringdata_qRestAPIPrivate = {
    {
QT_MOC_LITERAL(0, 0, 15), // "qRestAPIPrivate"
QT_MOC_LITERAL(1, 16, 12), // "processReply"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 45, 5), // "reply"
QT_MOC_LITERAL(5, 51, 12), // "queryTimeOut"
QT_MOC_LITERAL(6, 64, 13), // "queryProgress"
QT_MOC_LITERAL(7, 78, 13), // "bytesReceived"
QT_MOC_LITERAL(8, 92, 10), // "bytesTotal"
QT_MOC_LITERAL(9, 103, 16), // "downloadProgress"
QT_MOC_LITERAL(10, 120, 14), // "uploadProgress"
QT_MOC_LITERAL(11, 135, 9), // "bytesSent"
QT_MOC_LITERAL(12, 145, 11), // "onSslErrors"
QT_MOC_LITERAL(13, 157, 16), // "QList<QSslError>"
QT_MOC_LITERAL(14, 174, 6) // "errors"

    },
    "qRestAPIPrivate\0processReply\0\0"
    "QNetworkReply*\0reply\0queryTimeOut\0"
    "queryProgress\0bytesReceived\0bytesTotal\0"
    "downloadProgress\0uploadProgress\0"
    "bytesSent\0onSslErrors\0QList<QSslError>\0"
    "errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qRestAPIPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    2,   48,    2, 0x0a /* Public */,
       9,    2,   53,    2, 0x0a /* Public */,
      10,    2,   58,    2, 0x0a /* Public */,
      12,    2,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    7,    8,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    7,    8,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   11,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13,    4,   14,

       0        // eod
};

void qRestAPIPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qRestAPIPrivate *_t = static_cast<qRestAPIPrivate *>(_o);
        switch (_id) {
        case 0: _t->processReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->queryTimeOut(); break;
        case 2: _t->queryProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->onSslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject qRestAPIPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qRestAPIPrivate.data,
      qt_meta_data_qRestAPIPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *qRestAPIPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qRestAPIPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_qRestAPIPrivate.stringdata))
        return static_cast<void*>(const_cast< qRestAPIPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int qRestAPIPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_END_MOC_NAMESPACE
