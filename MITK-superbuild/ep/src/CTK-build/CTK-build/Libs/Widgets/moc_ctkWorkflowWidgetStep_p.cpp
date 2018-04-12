/****************************************************************************
** Meta object code from reading C++ file 'ctkWorkflowWidgetStep_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkWorkflowWidgetStep_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkWorkflowWidgetStep_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkWorkflowWidgetStepPrivate_t {
    QByteArrayData data[7];
    char stringdata[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkWorkflowWidgetStepPrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkWorkflowWidgetStepPrivate_t qt_meta_stringdata_ctkWorkflowWidgetStepPrivate = {
    {
QT_MOC_LITERAL(0, 0, 28), // "ctkWorkflowWidgetStepPrivate"
QT_MOC_LITERAL(1, 29, 30), // "invokeShowUserInterfaceCommand"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 25), // "showUserInterfaceComplete"
QT_MOC_LITERAL(4, 87, 32), // "invokeCreateUserInterfaceCommand"
QT_MOC_LITERAL(5, 120, 27), // "createUserInterfaceComplete"
QT_MOC_LITERAL(6, 148, 17) // "showUserInterface"

    },
    "ctkWorkflowWidgetStepPrivate\0"
    "invokeShowUserInterfaceCommand\0\0"
    "showUserInterfaceComplete\0"
    "invokeCreateUserInterfaceCommand\0"
    "createUserInterfaceComplete\0"
    "showUserInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkWorkflowWidgetStepPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ctkWorkflowWidgetStepPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkWorkflowWidgetStepPrivate *_t = static_cast<ctkWorkflowWidgetStepPrivate *>(_o);
        switch (_id) {
        case 0: _t->invokeShowUserInterfaceCommand(); break;
        case 1: _t->showUserInterfaceComplete(); break;
        case 2: _t->invokeCreateUserInterfaceCommand(); break;
        case 3: _t->createUserInterfaceComplete(); break;
        case 4: _t->showUserInterface(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkWorkflowWidgetStepPrivate::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflowWidgetStepPrivate::invokeShowUserInterfaceCommand)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkWorkflowWidgetStepPrivate::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflowWidgetStepPrivate::showUserInterfaceComplete)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkWorkflowWidgetStepPrivate::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflowWidgetStepPrivate::invokeCreateUserInterfaceCommand)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkWorkflowWidgetStepPrivate::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflowWidgetStepPrivate::createUserInterfaceComplete)) {
                *result = 3;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ctkWorkflowWidgetStepPrivate::staticMetaObject = {
    { &ctkWorkflowStepPrivate::staticMetaObject, qt_meta_stringdata_ctkWorkflowWidgetStepPrivate.data,
      qt_meta_data_ctkWorkflowWidgetStepPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkWorkflowWidgetStepPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkWorkflowWidgetStepPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkWorkflowWidgetStepPrivate.stringdata))
        return static_cast<void*>(const_cast< ctkWorkflowWidgetStepPrivate*>(this));
    return ctkWorkflowStepPrivate::qt_metacast(_clname);
}

int ctkWorkflowWidgetStepPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkWorkflowStepPrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ctkWorkflowWidgetStepPrivate::invokeShowUserInterfaceCommand()const
{
    QMetaObject::activate(const_cast< ctkWorkflowWidgetStepPrivate *>(this), &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ctkWorkflowWidgetStepPrivate::showUserInterfaceComplete()const
{
    QMetaObject::activate(const_cast< ctkWorkflowWidgetStepPrivate *>(this), &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ctkWorkflowWidgetStepPrivate::invokeCreateUserInterfaceCommand()const
{
    QMetaObject::activate(const_cast< ctkWorkflowWidgetStepPrivate *>(this), &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void ctkWorkflowWidgetStepPrivate::createUserInterfaceComplete()const
{
    QMetaObject::activate(const_cast< ctkWorkflowWidgetStepPrivate *>(this), &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
