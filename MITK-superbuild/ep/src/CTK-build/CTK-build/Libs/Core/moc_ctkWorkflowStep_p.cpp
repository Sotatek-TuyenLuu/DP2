/****************************************************************************
** Meta object code from reading C++ file 'ctkWorkflowStep_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkWorkflowStep_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkWorkflowStep_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkWorkflowStepPrivate_t {
    QByteArrayData data[16];
    char stringdata[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkWorkflowStepPrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkWorkflowStepPrivate_t qt_meta_stringdata_ctkWorkflowStepPrivate = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ctkWorkflowStepPrivate"
QT_MOC_LITERAL(1, 23, 21), // "invokeValidateCommand"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 15), // "desiredBranchId"
QT_MOC_LITERAL(4, 62, 18), // "validationComplete"
QT_MOC_LITERAL(5, 81, 18), // "validationSuceeded"
QT_MOC_LITERAL(6, 100, 8), // "branchId"
QT_MOC_LITERAL(7, 109, 20), // "invokeOnEntryCommand"
QT_MOC_LITERAL(8, 130, 22), // "const ctkWorkflowStep*"
QT_MOC_LITERAL(9, 153, 10), // "comingFrom"
QT_MOC_LITERAL(10, 164, 55), // "ctkWorkflowInterstepTransitio..."
QT_MOC_LITERAL(11, 220, 14), // "transitionType"
QT_MOC_LITERAL(12, 235, 15), // "onEntryComplete"
QT_MOC_LITERAL(13, 251, 19), // "invokeOnExitCommand"
QT_MOC_LITERAL(14, 271, 7), // "goingTo"
QT_MOC_LITERAL(15, 279, 14) // "onExitComplete"

    },
    "ctkWorkflowStepPrivate\0invokeValidateCommand\0"
    "\0desiredBranchId\0validationComplete\0"
    "validationSuceeded\0branchId\0"
    "invokeOnEntryCommand\0const ctkWorkflowStep*\0"
    "comingFrom\0"
    "ctkWorkflowInterstepTransition::InterstepTransitionType\0"
    "transitionType\0onEntryComplete\0"
    "invokeOnExitCommand\0goingTo\0onExitComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkWorkflowStepPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    2,   47,    2, 0x06 /* Public */,
       7,    2,   52,    2, 0x06 /* Public */,
      12,    0,   57,    2, 0x06 /* Public */,
      13,    2,   58,    2, 0x06 /* Public */,
      15,    0,   63,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,   14,   11,
    QMetaType::Void,

       0        // eod
};

void ctkWorkflowStepPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkWorkflowStepPrivate *_t = static_cast<ctkWorkflowStepPrivate *>(_o);
        switch (_id) {
        case 0: _t->invokeValidateCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->validationComplete((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->invokeOnEntryCommand((*reinterpret_cast< const ctkWorkflowStep*(*)>(_a[1])),(*reinterpret_cast< const ctkWorkflowInterstepTransition::InterstepTransitionType(*)>(_a[2]))); break;
        case 3: _t->onEntryComplete(); break;
        case 4: _t->invokeOnExitCommand((*reinterpret_cast< const ctkWorkflowStep*(*)>(_a[1])),(*reinterpret_cast< const ctkWorkflowInterstepTransition::InterstepTransitionType(*)>(_a[2]))); break;
        case 5: _t->onExitComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkWorkflowStepPrivate::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflowStepPrivate::invokeValidateCommand)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkWorkflowStepPrivate::*_t)(bool , const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflowStepPrivate::validationComplete)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkWorkflowStepPrivate::*_t)(const ctkWorkflowStep * , const ctkWorkflowInterstepTransition::InterstepTransitionType ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflowStepPrivate::invokeOnEntryCommand)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkWorkflowStepPrivate::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflowStepPrivate::onEntryComplete)) {
                *result = 3;
            }
        }
        {
            typedef void (ctkWorkflowStepPrivate::*_t)(const ctkWorkflowStep * , const ctkWorkflowInterstepTransition::InterstepTransitionType ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflowStepPrivate::invokeOnExitCommand)) {
                *result = 4;
            }
        }
        {
            typedef void (ctkWorkflowStepPrivate::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflowStepPrivate::onExitComplete)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject ctkWorkflowStepPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkWorkflowStepPrivate.data,
      qt_meta_data_ctkWorkflowStepPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkWorkflowStepPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkWorkflowStepPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkWorkflowStepPrivate.stringdata))
        return static_cast<void*>(const_cast< ctkWorkflowStepPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkWorkflowStepPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ctkWorkflowStepPrivate::invokeValidateCommand(const QString & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ctkWorkflowStepPrivate *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkWorkflowStepPrivate::validationComplete(bool _t1, const QString & _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< ctkWorkflowStepPrivate *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkWorkflowStepPrivate::invokeOnEntryCommand(const ctkWorkflowStep * _t1, const ctkWorkflowInterstepTransition::InterstepTransitionType _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< ctkWorkflowStepPrivate *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkWorkflowStepPrivate::onEntryComplete()const
{
    QMetaObject::activate(const_cast< ctkWorkflowStepPrivate *>(this), &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void ctkWorkflowStepPrivate::invokeOnExitCommand(const ctkWorkflowStep * _t1, const ctkWorkflowInterstepTransition::InterstepTransitionType _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< ctkWorkflowStepPrivate *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ctkWorkflowStepPrivate::onExitComplete()const
{
    QMetaObject::activate(const_cast< ctkWorkflowStepPrivate *>(this), &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
