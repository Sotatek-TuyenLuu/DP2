/****************************************************************************
** Meta object code from reading C++ file 'ctkConfigurationAdminFactory_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkConfigurationAdminFactory_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkConfigurationAdminFactory_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkConfigurationAdminFactory_t {
    QByteArrayData data[5];
    char stringdata[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkConfigurationAdminFactory_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkConfigurationAdminFactory_t qt_meta_stringdata_ctkConfigurationAdminFactory = {
    {
QT_MOC_LITERAL(0, 0, 28), // "ctkConfigurationAdminFactory"
QT_MOC_LITERAL(1, 29, 13), // "pluginChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "ctkPluginEvent"
QT_MOC_LITERAL(4, 59, 5) // "event"

    },
    "ctkConfigurationAdminFactory\0pluginChanged\0"
    "\0ctkPluginEvent\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkConfigurationAdminFactory[] = {

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

void ctkConfigurationAdminFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkConfigurationAdminFactory *_t = static_cast<ctkConfigurationAdminFactory *>(_o);
        switch (_id) {
        case 0: _t->pluginChanged((*reinterpret_cast< const ctkPluginEvent(*)>(_a[1]))); break;
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
        }
    }
}

const QMetaObject ctkConfigurationAdminFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkConfigurationAdminFactory.data,
      qt_meta_data_ctkConfigurationAdminFactory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkConfigurationAdminFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkConfigurationAdminFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkConfigurationAdminFactory.stringdata))
        return static_cast<void*>(const_cast< ctkConfigurationAdminFactory*>(this));
    if (!strcmp(_clname, "ctkServiceFactory"))
        return static_cast< ctkServiceFactory*>(const_cast< ctkConfigurationAdminFactory*>(this));
    if (!strcmp(_clname, "org.commontk.services.ctkServiceFactory"))
        return static_cast< ctkServiceFactory*>(const_cast< ctkConfigurationAdminFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkConfigurationAdminFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
