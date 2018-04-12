/****************************************************************************
** Meta object code from reading C++ file 'berryQtDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryQtDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryQtDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__QtDisplay_t {
    QByteArrayData data[6];
    char stringdata[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__QtDisplay_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__QtDisplay_t qt_meta_stringdata_berry__QtDisplay = {
    {
QT_MOC_LITERAL(0, 0, 16), // "berry::QtDisplay"
QT_MOC_LITERAL(1, 17, 16), // "NewAsyncRunnable"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "Poco::Runnable*"
QT_MOC_LITERAL(4, 51, 15), // "NewSyncRunnable"
QT_MOC_LITERAL(5, 67, 15) // "ExecuteRunnable"

    },
    "berry::QtDisplay\0NewAsyncRunnable\0\0"
    "Poco::Runnable*\0NewSyncRunnable\0"
    "ExecuteRunnable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__QtDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void berry::QtDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtDisplay *_t = static_cast<QtDisplay *>(_o);
        switch (_id) {
        case 0: _t->NewAsyncRunnable((*reinterpret_cast< Poco::Runnable*(*)>(_a[1]))); break;
        case 1: _t->NewSyncRunnable((*reinterpret_cast< Poco::Runnable*(*)>(_a[1]))); break;
        case 2: _t->ExecuteRunnable((*reinterpret_cast< Poco::Runnable*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtDisplay::*_t)(Poco::Runnable * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtDisplay::NewAsyncRunnable)) {
                *result = 0;
            }
        }
        {
            typedef void (QtDisplay::*_t)(Poco::Runnable * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtDisplay::NewSyncRunnable)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject berry::QtDisplay::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_berry__QtDisplay.data,
      qt_meta_data_berry__QtDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::QtDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::QtDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__QtDisplay.stringdata))
        return static_cast<void*>(const_cast< QtDisplay*>(this));
    if (!strcmp(_clname, "Display"))
        return static_cast< Display*>(const_cast< QtDisplay*>(this));
    return QObject::qt_metacast(_clname);
}

int berry::QtDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void berry::QtDisplay::NewAsyncRunnable(Poco::Runnable * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void berry::QtDisplay::NewSyncRunnable(Poco::Runnable * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
