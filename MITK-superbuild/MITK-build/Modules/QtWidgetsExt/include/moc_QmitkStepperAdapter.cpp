/****************************************************************************
** Meta object code from reading C++ file 'QmitkStepperAdapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkStepperAdapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkStepperAdapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkStepperAdapter_t {
    QByteArrayData data[6];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkStepperAdapter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkStepperAdapter_t qt_meta_stringdata_QmitkStepperAdapter = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QmitkStepperAdapter"
QT_MOC_LITERAL(1, 20, 12), // "signal_dummy"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "Refetch"
QT_MOC_LITERAL(4, 42, 11), // "SendStepper"
QT_MOC_LITERAL(5, 54, 14) // "mitk::Stepper*"

    },
    "QmitkStepperAdapter\0signal_dummy\0\0"
    "Refetch\0SendStepper\0mitk::Stepper*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkStepperAdapter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void QmitkStepperAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkStepperAdapter *_t = static_cast<QmitkStepperAdapter *>(_o);
        switch (_id) {
        case 0: _t->signal_dummy(); break;
        case 1: _t->Refetch(); break;
        case 2: _t->SendStepper((*reinterpret_cast< mitk::Stepper*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkStepperAdapter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStepperAdapter::signal_dummy)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkStepperAdapter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStepperAdapter::Refetch)) {
                *result = 1;
            }
        }
        {
            typedef void (QmitkStepperAdapter::*_t)(mitk::Stepper * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStepperAdapter::SendStepper)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QmitkStepperAdapter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmitkStepperAdapter.data,
      qt_meta_data_QmitkStepperAdapter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkStepperAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkStepperAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkStepperAdapter.stringdata))
        return static_cast<void*>(const_cast< QmitkStepperAdapter*>(this));
    return QObject::qt_metacast(_clname);
}

int QmitkStepperAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QmitkStepperAdapter::signal_dummy()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmitkStepperAdapter::Refetch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QmitkStepperAdapter::SendStepper(mitk::Stepper * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
