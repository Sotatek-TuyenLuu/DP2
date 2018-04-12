/****************************************************************************
** Meta object code from reading C++ file 'ctkPluginFrameworkListeners_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkPluginFrameworkListeners_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkPluginFrameworkListeners_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkPluginFrameworkListeners_t {
    QByteArrayData data[10];
    char stringdata[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkPluginFrameworkListeners_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkPluginFrameworkListeners_t qt_meta_stringdata_ctkPluginFrameworkListeners = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ctkPluginFrameworkListeners"
QT_MOC_LITERAL(1, 28, 19), // "pluginChangedDirect"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 14), // "ctkPluginEvent"
QT_MOC_LITERAL(4, 64, 5), // "event"
QT_MOC_LITERAL(5, 70, 19), // "pluginChangedQueued"
QT_MOC_LITERAL(6, 90, 14), // "frameworkEvent"
QT_MOC_LITERAL(7, 105, 23), // "ctkPluginFrameworkEvent"
QT_MOC_LITERAL(8, 129, 24), // "serviceListenerDestroyed"
QT_MOC_LITERAL(9, 154, 8) // "listener"

    },
    "ctkPluginFrameworkListeners\0"
    "pluginChangedDirect\0\0ctkPluginEvent\0"
    "event\0pluginChangedQueued\0frameworkEvent\0"
    "ctkPluginFrameworkEvent\0"
    "serviceListenerDestroyed\0listener"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkPluginFrameworkListeners[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    9,

       0        // eod
};

void ctkPluginFrameworkListeners::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkPluginFrameworkListeners *_t = static_cast<ctkPluginFrameworkListeners *>(_o);
        switch (_id) {
        case 0: _t->pluginChangedDirect((*reinterpret_cast< const ctkPluginEvent(*)>(_a[1]))); break;
        case 1: _t->pluginChangedQueued((*reinterpret_cast< const ctkPluginEvent(*)>(_a[1]))); break;
        case 2: _t->frameworkEvent((*reinterpret_cast< const ctkPluginFrameworkEvent(*)>(_a[1]))); break;
        case 3: _t->serviceListenerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ctkPluginEvent >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ctkPluginEvent >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ctkPluginFrameworkEvent >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkPluginFrameworkListeners::*_t)(const ctkPluginEvent & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkPluginFrameworkListeners::pluginChangedDirect)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkPluginFrameworkListeners::*_t)(const ctkPluginEvent & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkPluginFrameworkListeners::pluginChangedQueued)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkPluginFrameworkListeners::*_t)(const ctkPluginFrameworkEvent & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkPluginFrameworkListeners::frameworkEvent)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ctkPluginFrameworkListeners::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkPluginFrameworkListeners.data,
      qt_meta_data_ctkPluginFrameworkListeners,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkPluginFrameworkListeners::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkPluginFrameworkListeners::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkPluginFrameworkListeners.stringdata))
        return static_cast<void*>(const_cast< ctkPluginFrameworkListeners*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkPluginFrameworkListeners::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ctkPluginFrameworkListeners::pluginChangedDirect(const ctkPluginEvent & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkPluginFrameworkListeners::pluginChangedQueued(const ctkPluginEvent & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkPluginFrameworkListeners::frameworkEvent(const ctkPluginFrameworkEvent & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
