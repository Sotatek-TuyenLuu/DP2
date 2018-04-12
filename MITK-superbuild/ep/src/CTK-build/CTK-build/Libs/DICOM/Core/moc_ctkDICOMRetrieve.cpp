/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMRetrieve.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMRetrieve.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMRetrieve.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMRetrieve_t {
    QByteArrayData data[34];
    char stringdata[438];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMRetrieve_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMRetrieve_t qt_meta_stringdata_ctkDICOMRetrieve = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ctkDICOMRetrieve"
QT_MOC_LITERAL(1, 17, 8), // "progress"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "message"
QT_MOC_LITERAL(4, 35, 5), // "debug"
QT_MOC_LITERAL(5, 41, 5), // "error"
QT_MOC_LITERAL(6, 47, 4), // "done"
QT_MOC_LITERAL(7, 52, 10), // "moveSeries"
QT_MOC_LITERAL(8, 63, 16), // "studyInstanceUID"
QT_MOC_LITERAL(9, 80, 17), // "seriesInstanceUID"
QT_MOC_LITERAL(10, 98, 9), // "moveStudy"
QT_MOC_LITERAL(11, 108, 9), // "getSeries"
QT_MOC_LITERAL(12, 118, 8), // "getStudy"
QT_MOC_LITERAL(13, 127, 6), // "cancel"
QT_MOC_LITERAL(14, 134, 17), // "setCallingAETitle"
QT_MOC_LITERAL(15, 152, 14), // "callingAETitle"
QT_MOC_LITERAL(16, 167, 16), // "setCalledAETitle"
QT_MOC_LITERAL(17, 184, 13), // "calledAETitle"
QT_MOC_LITERAL(18, 198, 7), // "setHost"
QT_MOC_LITERAL(19, 206, 4), // "host"
QT_MOC_LITERAL(20, 211, 7), // "setPort"
QT_MOC_LITERAL(21, 219, 4), // "port"
QT_MOC_LITERAL(22, 224, 25), // "setMoveDestinationAETitle"
QT_MOC_LITERAL(23, 250, 22), // "moveDestinationAETitle"
QT_MOC_LITERAL(24, 273, 22), // "setKeepAssociationOpen"
QT_MOC_LITERAL(25, 296, 8), // "keepOpen"
QT_MOC_LITERAL(26, 305, 19), // "keepAssociationOpen"
QT_MOC_LITERAL(27, 325, 14), // "setWasCanceled"
QT_MOC_LITERAL(28, 340, 11), // "wasCanceled"
QT_MOC_LITERAL(29, 352, 11), // "setDatabase"
QT_MOC_LITERAL(30, 364, 17), // "ctkDICOMDatabase&"
QT_MOC_LITERAL(31, 382, 13), // "dicomDatabase"
QT_MOC_LITERAL(32, 396, 8), // "database"
QT_MOC_LITERAL(33, 405, 32) // "QSharedPointer<ctkDICOMDatabase>"

    },
    "ctkDICOMRetrieve\0progress\0\0message\0"
    "debug\0error\0done\0moveSeries\0"
    "studyInstanceUID\0seriesInstanceUID\0"
    "moveStudy\0getSeries\0getStudy\0cancel\0"
    "setCallingAETitle\0callingAETitle\0"
    "setCalledAETitle\0calledAETitle\0setHost\0"
    "host\0setPort\0port\0setMoveDestinationAETitle\0"
    "moveDestinationAETitle\0setKeepAssociationOpen\0"
    "keepOpen\0keepAssociationOpen\0"
    "setWasCanceled\0wasCanceled\0setDatabase\0"
    "ctkDICOMDatabase&\0dicomDatabase\0"
    "database\0QSharedPointer<ctkDICOMDatabase>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMRetrieve[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       7,  208, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       1,    1,  147,    2, 0x06 /* Public */,
       4,    1,  150,    2, 0x06 /* Public */,
       5,    1,  153,    2, 0x06 /* Public */,
       6,    1,  156,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,  159,    2, 0x0a /* Public */,
      10,    1,  164,    2, 0x0a /* Public */,
      11,    2,  167,    2, 0x0a /* Public */,
      12,    1,  172,    2, 0x0a /* Public */,
      13,    0,  175,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,  176,    2, 0x02 /* Public */,
      15,    0,  179,    2, 0x02 /* Public */,
      16,    1,  180,    2, 0x02 /* Public */,
      17,    0,  183,    2, 0x02 /* Public */,
      18,    1,  184,    2, 0x02 /* Public */,
      19,    0,  187,    2, 0x02 /* Public */,
      20,    1,  188,    2, 0x02 /* Public */,
      21,    0,  191,    2, 0x02 /* Public */,
      22,    1,  192,    2, 0x02 /* Public */,
      23,    0,  195,    2, 0x02 /* Public */,
      24,    1,  196,    2, 0x02 /* Public */,
      26,    0,  199,    2, 0x02 /* Public */,
      27,    1,  200,    2, 0x02 /* Public */,
      28,    0,  203,    2, 0x02 /* Public */,
      29,    1,  204,    2, 0x02 /* Public */,
      32,    0,  207,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    1,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Bool, QMetaType::QString,    8,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Bool, QMetaType::QString,    8,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 30,   31,
    0x80000000 | 33,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00095103,
      17, QMetaType::QString, 0x00095003,
      19, QMetaType::QString, 0x00095103,
      21, QMetaType::Int, 0x00095103,
      23, QMetaType::QString, 0x00095103,
      26, QMetaType::Bool, 0x00095103,
      28, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkDICOMRetrieve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMRetrieve *_t = static_cast<ctkDICOMRetrieve *>(_o);
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->progress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->debug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->done((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->moveSeries((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->moveStudy((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->getSeries((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->getStudy((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->cancel(); break;
        case 10: _t->setCallingAETitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: { QString _r = _t->callingAETitle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: _t->setCalledAETitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: { QString _r = _t->calledAETitle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: _t->setHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: { QString _r = _t->host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: { int _r = _t->port();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: _t->setMoveDestinationAETitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: { QString _r = _t->moveDestinationAETitle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: _t->setKeepAssociationOpen((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 21: { bool _r = _t->keepAssociationOpen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: _t->setWasCanceled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 23: { bool _r = _t->wasCanceled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: _t->setDatabase((*reinterpret_cast< ctkDICOMDatabase(*)>(_a[1]))); break;
        case 25: { QSharedPointer<ctkDICOMDatabase> _r = _t->database();
            if (_a[0]) *reinterpret_cast< QSharedPointer<ctkDICOMDatabase>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDICOMRetrieve::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMRetrieve::progress)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkDICOMRetrieve::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMRetrieve::progress)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkDICOMRetrieve::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMRetrieve::debug)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkDICOMRetrieve::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMRetrieve::error)) {
                *result = 3;
            }
        }
        {
            typedef void (ctkDICOMRetrieve::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMRetrieve::done)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject ctkDICOMRetrieve::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkDICOMRetrieve.data,
      qt_meta_data_ctkDICOMRetrieve,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMRetrieve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMRetrieve::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMRetrieve.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMRetrieve*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkDICOMRetrieve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = callingAETitle(); break;
        case 1: *reinterpret_cast< QString*>(_v) = calledAETitle(); break;
        case 2: *reinterpret_cast< QString*>(_v) = host(); break;
        case 3: *reinterpret_cast< int*>(_v) = port(); break;
        case 4: *reinterpret_cast< QString*>(_v) = moveDestinationAETitle(); break;
        case 5: *reinterpret_cast< bool*>(_v) = keepAssociationOpen(); break;
        case 6: *reinterpret_cast< bool*>(_v) = wasCanceled(); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCallingAETitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: setCallingAETitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: setHost(*reinterpret_cast< QString*>(_v)); break;
        case 3: setPort(*reinterpret_cast< int*>(_v)); break;
        case 4: setMoveDestinationAETitle(*reinterpret_cast< QString*>(_v)); break;
        case 5: setKeepAssociationOpen(*reinterpret_cast< bool*>(_v)); break;
        case 6: setWasCanceled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkDICOMRetrieve::progress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDICOMRetrieve::progress(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkDICOMRetrieve::debug(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkDICOMRetrieve::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkDICOMRetrieve::done(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
