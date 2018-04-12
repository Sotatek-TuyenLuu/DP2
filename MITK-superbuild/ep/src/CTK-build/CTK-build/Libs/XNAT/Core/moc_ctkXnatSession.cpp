/****************************************************************************
** Meta object code from reading C++ file 'ctkXnatSession.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkXnatSession.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkXnatSession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkXnatSession_t {
    QByteArrayData data[15];
    char stringdata[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkXnatSession_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkXnatSession_t qt_meta_stringdata_ctkXnatSession = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ctkXnatSession"
QT_MOC_LITERAL(1, 15, 14), // "sessionRenewed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "expirationDate"
QT_MOC_LITERAL(4, 46, 13), // "sessionOpened"
QT_MOC_LITERAL(5, 60, 22), // "sessionAboutToBeClosed"
QT_MOC_LITERAL(6, 83, 8), // "progress"
QT_MOC_LITERAL(7, 92, 8), // "timedOut"
QT_MOC_LITERAL(8, 101, 14), // "aboutToTimeOut"
QT_MOC_LITERAL(9, 116, 13), // "processResult"
QT_MOC_LITERAL(10, 130, 7), // "queryId"
QT_MOC_LITERAL(11, 138, 18), // "QList<QVariantMap>"
QT_MOC_LITERAL(12, 157, 10), // "parameters"
QT_MOC_LITERAL(13, 168, 10), // "onProgress"
QT_MOC_LITERAL(14, 179, 11) // "emitTimeOut"

    },
    "ctkXnatSession\0sessionRenewed\0\0"
    "expirationDate\0sessionOpened\0"
    "sessionAboutToBeClosed\0progress\0"
    "timedOut\0aboutToTimeOut\0processResult\0"
    "queryId\0QList<QVariantMap>\0parameters\0"
    "onProgress\0emitTimeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkXnatSession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,
       6,    2,   64,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   71,    2, 0x0a /* Public */,
      13,    2,   76,    2, 0x0a /* Public */,
      14,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Double,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 11,   10,   12,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Double,   10,   13,
    QMetaType::Void,

       0        // eod
};

void ctkXnatSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkXnatSession *_t = static_cast<ctkXnatSession *>(_o);
        switch (_id) {
        case 0: _t->sessionRenewed((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 1: _t->sessionOpened(); break;
        case 2: _t->sessionAboutToBeClosed(); break;
        case 3: _t->progress((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->timedOut(); break;
        case 5: _t->aboutToTimeOut(); break;
        case 6: _t->processResult((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QList<QVariantMap>(*)>(_a[2]))); break;
        case 7: _t->onProgress((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->emitTimeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
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
            typedef void (ctkXnatSession::*_t)(const QDateTime & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkXnatSession::sessionRenewed)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkXnatSession::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkXnatSession::sessionOpened)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkXnatSession::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkXnatSession::sessionAboutToBeClosed)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkXnatSession::*_t)(QUuid , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkXnatSession::progress)) {
                *result = 3;
            }
        }
        {
            typedef void (ctkXnatSession::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkXnatSession::timedOut)) {
                *result = 4;
            }
        }
        {
            typedef void (ctkXnatSession::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkXnatSession::aboutToTimeOut)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject ctkXnatSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkXnatSession.data,
      qt_meta_data_ctkXnatSession,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkXnatSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkXnatSession::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkXnatSession.stringdata))
        return static_cast<void*>(const_cast< ctkXnatSession*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkXnatSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ctkXnatSession::sessionRenewed(const QDateTime & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkXnatSession::sessionOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ctkXnatSession::sessionAboutToBeClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void ctkXnatSession::progress(QUuid _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkXnatSession::timedOut()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void ctkXnatSession::aboutToTimeOut()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
