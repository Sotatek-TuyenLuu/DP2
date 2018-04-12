/****************************************************************************
** Meta object code from reading C++ file 'ctkValueProxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkValueProxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkValueProxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkValueProxy_t {
    QByteArrayData data[12];
    char stringdata[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkValueProxy_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkValueProxy_t qt_meta_stringdata_ctkValueProxy = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkValueProxy"
QT_MOC_LITERAL(1, 14, 12), // "valueChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "proxyValueChanged"
QT_MOC_LITERAL(4, 46, 22), // "proxyAboutToBeModified"
QT_MOC_LITERAL(5, 69, 13), // "proxyModified"
QT_MOC_LITERAL(6, 83, 8), // "setValue"
QT_MOC_LITERAL(7, 92, 8), // "newValue"
QT_MOC_LITERAL(8, 101, 13), // "setProxyValue"
QT_MOC_LITERAL(9, 115, 13), // "newProxyValue"
QT_MOC_LITERAL(10, 129, 5), // "value"
QT_MOC_LITERAL(11, 135, 10) // "proxyValue"

    },
    "ctkValueProxy\0valueChanged\0\0"
    "proxyValueChanged\0proxyAboutToBeModified\0"
    "proxyModified\0setValue\0newValue\0"
    "setProxyValue\0newProxyValue\0value\0"
    "proxyValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkValueProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    0,   50,    2, 0x06 /* Public */,
       5,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   52,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,

 // properties: name, type, flags
      10, QMetaType::Double, 0x00495103,
      11, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ctkValueProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkValueProxy *_t = static_cast<ctkValueProxy *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->proxyValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->proxyAboutToBeModified(); break;
        case 3: _t->proxyModified(); break;
        case 4: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setProxyValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkValueProxy::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkValueProxy::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkValueProxy::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkValueProxy::proxyValueChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkValueProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkValueProxy::proxyAboutToBeModified)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkValueProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkValueProxy::proxyModified)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject ctkValueProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkValueProxy.data,
      qt_meta_data_ctkValueProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkValueProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkValueProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkValueProxy.stringdata))
        return static_cast<void*>(const_cast< ctkValueProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkValueProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< double*>(_v) = value(); break;
        case 1: *reinterpret_cast< double*>(_v) = proxyValue(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< double*>(_v)); break;
        case 1: setProxyValue(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkValueProxy::valueChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkValueProxy::proxyValueChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkValueProxy::proxyAboutToBeModified()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void ctkValueProxy::proxyModified()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
