/****************************************************************************
** Meta object code from reading C++ file 'ctkTrackedServiceListener_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkTrackedServiceListener_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkTrackedServiceListener_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkTrackedServiceListener_t {
    QByteArrayData data[5];
    char stringdata[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkTrackedServiceListener_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkTrackedServiceListener_t qt_meta_stringdata_ctkTrackedServiceListener = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ctkTrackedServiceListener"
QT_MOC_LITERAL(1, 26, 14), // "serviceChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 15), // "ctkServiceEvent"
QT_MOC_LITERAL(4, 58, 5) // "event"

    },
    "ctkTrackedServiceListener\0serviceChanged\0"
    "\0ctkServiceEvent\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkTrackedServiceListener[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ctkTrackedServiceListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkTrackedServiceListener *_t = static_cast<ctkTrackedServiceListener *>(_o);
        switch (_id) {
        case 0: _t->serviceChanged((*reinterpret_cast< const ctkServiceEvent(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ctkServiceEvent >(); break;
            }
            break;
        }
    }
}

const QMetaObject ctkTrackedServiceListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkTrackedServiceListener.data,
      qt_meta_data_ctkTrackedServiceListener,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkTrackedServiceListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkTrackedServiceListener::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkTrackedServiceListener.stringdata))
        return static_cast<void*>(const_cast< ctkTrackedServiceListener*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkTrackedServiceListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
