/****************************************************************************
** Meta object code from reading C++ file 'berryHelpPluginActivator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryHelpPluginActivator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryHelpPluginActivator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__HelpContextHandler_t {
    QByteArrayData data[1];
    char stringdata[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__HelpContextHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__HelpContextHandler_t qt_meta_stringdata_berry__HelpContextHandler = {
    {
QT_MOC_LITERAL(0, 0, 25) // "berry::HelpContextHandler"

    },
    "berry::HelpContextHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__HelpContextHandler[] = {

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

void berry::HelpContextHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject berry::HelpContextHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_berry__HelpContextHandler.data,
      qt_meta_data_berry__HelpContextHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::HelpContextHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::HelpContextHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__HelpContextHandler.stringdata))
        return static_cast<void*>(const_cast< HelpContextHandler*>(this));
    if (!strcmp(_clname, "ctkEventHandler"))
        return static_cast< ctkEventHandler*>(const_cast< HelpContextHandler*>(this));
    if (!strcmp(_clname, "org.commontk.service.event.EventHandler"))
        return static_cast< ctkEventHandler*>(const_cast< HelpContextHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int berry::HelpContextHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_berry__HelpPluginActivator_t {
    QByteArrayData data[1];
    char stringdata[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__HelpPluginActivator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__HelpPluginActivator_t qt_meta_stringdata_berry__HelpPluginActivator = {
    {
QT_MOC_LITERAL(0, 0, 26) // "berry::HelpPluginActivator"

    },
    "berry::HelpPluginActivator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__HelpPluginActivator[] = {

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

void berry::HelpPluginActivator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject berry::HelpPluginActivator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_berry__HelpPluginActivator.data,
      qt_meta_data_berry__HelpPluginActivator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::HelpPluginActivator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::HelpPluginActivator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__HelpPluginActivator.stringdata))
        return static_cast<void*>(const_cast< HelpPluginActivator*>(this));
    if (!strcmp(_clname, "ctkPluginActivator"))
        return static_cast< ctkPluginActivator*>(const_cast< HelpPluginActivator*>(this));
    if (!strcmp(_clname, "org.commontk.pluginfw.pluginactivator"))
        return static_cast< ctkPluginActivator*>(const_cast< HelpPluginActivator*>(this));
    return QObject::qt_metacast(_clname);
}

int berry::HelpPluginActivator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xa8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x94, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x18, 0x00, 0x6f, 0x72, 0x67, 0x5f, 0x62, 0x6c,
    0x75, 0x65, 0x62, 0x65, 0x72, 0x72, 0x79, 0x5f,
    0x75, 0x69, 0x5f, 0x71, 0x74, 0x5f, 0x68, 0x65,
    0x6c, 0x70, 0x00, 0x00, 0x9b, 0x08, 0x00, 0x00,
    0x09, 0x00, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x4e,
    0x61, 0x6d, 0x65, 0x00, 0x13, 0x00, 0x48, 0x65,
    0x6c, 0x70, 0x50, 0x6c, 0x75, 0x67, 0x69, 0x6e,
    0x41, 0x63, 0x74, 0x69, 0x76, 0x61, 0x74, 0x6f,
    0x72, 0x00, 0x00, 0x00, 0x5a, 0x80, 0xa0, 0x00,
    0x07, 0x00, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x64, 0x65, 0x62, 0x75, 0x67, 0x00,
    0x15, 0x11, 0x00, 0x00, 0x08, 0x00, 0x4d, 0x65,
    0x74, 0x61, 0x44, 0x61, 0x74, 0x61, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x78, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
    0x6c, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xa8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x94, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x18, 0x00, 0x6f, 0x72, 0x67, 0x5f, 0x62, 0x6c,
    0x75, 0x65, 0x62, 0x65, 0x72, 0x72, 0x79, 0x5f,
    0x75, 0x69, 0x5f, 0x71, 0x74, 0x5f, 0x68, 0x65,
    0x6c, 0x70, 0x00, 0x00, 0x95, 0x08, 0x00, 0x00,
    0x08, 0x00, 0x4d, 0x65, 0x74, 0x61, 0x44, 0x61,
    0x74, 0x61, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0c, 0x00, 0x00, 0x09, 0x00, 0x63, 0x6c,
    0x61, 0x73, 0x73, 0x4e, 0x61, 0x6d, 0x65, 0x00,
    0x13, 0x00, 0x48, 0x65, 0x6c, 0x70, 0x50, 0x6c,
    0x75, 0x67, 0x69, 0x6e, 0x41, 0x63, 0x74, 0x69,
    0x76, 0x61, 0x74, 0x6f, 0x72, 0x00, 0x00, 0x00,
    0x31, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x5a, 0x80, 0xa0, 0x00,
    0x07, 0x00, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x34, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
    0x78, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace berry;
QT_MOC_EXPORT_PLUGIN(berry::HelpPluginActivator, HelpPluginActivator)

struct qt_meta_stringdata_berry__QCHPluginListener_t {
    QByteArrayData data[5];
    char stringdata[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__QCHPluginListener_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__QCHPluginListener_t qt_meta_stringdata_berry__QCHPluginListener = {
    {
QT_MOC_LITERAL(0, 0, 24), // "berry::QCHPluginListener"
QT_MOC_LITERAL(1, 25, 13), // "pluginChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "ctkPluginEvent"
QT_MOC_LITERAL(4, 55, 5) // "event"

    },
    "berry::QCHPluginListener\0pluginChanged\0"
    "\0ctkPluginEvent\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__QCHPluginListener[] = {

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

void berry::QCHPluginListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCHPluginListener *_t = static_cast<QCHPluginListener *>(_o);
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

const QMetaObject berry::QCHPluginListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_berry__QCHPluginListener.data,
      qt_meta_data_berry__QCHPluginListener,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::QCHPluginListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::QCHPluginListener::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__QCHPluginListener.stringdata))
        return static_cast<void*>(const_cast< QCHPluginListener*>(this));
    return QObject::qt_metacast(_clname);
}

int berry::QCHPluginListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
