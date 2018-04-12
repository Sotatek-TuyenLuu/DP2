/****************************************************************************
** Meta object code from reading C++ file 'QmitkProgressBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgets/include/QmitkProgressBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkProgressBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkProgressBar_t {
    QByteArrayData data[10];
    char stringdata[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkProgressBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkProgressBar_t qt_meta_stringdata_QmitkProgressBar = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QmitkProgressBar"
QT_MOC_LITERAL(1, 17, 18), // "SignalAddStepsToDo"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "steps"
QT_MOC_LITERAL(4, 43, 14), // "SignalProgress"
QT_MOC_LITERAL(5, 58, 26), // "SignalSetPercentageVisible"
QT_MOC_LITERAL(6, 85, 7), // "visible"
QT_MOC_LITERAL(7, 93, 16), // "SlotAddStepsToDo"
QT_MOC_LITERAL(8, 110, 12), // "SlotProgress"
QT_MOC_LITERAL(9, 123, 24) // "SlotSetPercentageVisible"

    },
    "QmitkProgressBar\0SignalAddStepsToDo\0"
    "\0steps\0SignalProgress\0SignalSetPercentageVisible\0"
    "visible\0SlotAddStepsToDo\0SlotProgress\0"
    "SlotSetPercentageVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkProgressBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   53,    2, 0x09 /* Protected */,
       8,    1,   56,    2, 0x09 /* Protected */,
       9,    1,   59,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void QmitkProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkProgressBar *_t = static_cast<QmitkProgressBar *>(_o);
        switch (_id) {
        case 0: _t->SignalAddStepsToDo((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->SignalProgress((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->SignalSetPercentageVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SlotAddStepsToDo((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->SlotProgress((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->SlotSetPercentageVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkProgressBar::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkProgressBar::SignalAddStepsToDo)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkProgressBar::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkProgressBar::SignalProgress)) {
                *result = 1;
            }
        }
        {
            typedef void (QmitkProgressBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkProgressBar::SignalSetPercentageVisible)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QmitkProgressBar::staticMetaObject = {
    { &QProgressBar::staticMetaObject, qt_meta_stringdata_QmitkProgressBar.data,
      qt_meta_data_QmitkProgressBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkProgressBar.stringdata))
        return static_cast<void*>(const_cast< QmitkProgressBar*>(this));
    if (!strcmp(_clname, "mitk::ProgressBarImplementation"))
        return static_cast< mitk::ProgressBarImplementation*>(const_cast< QmitkProgressBar*>(this));
    return QProgressBar::qt_metacast(_clname);
}

int QmitkProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressBar::qt_metacall(_c, _id, _a);
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
void QmitkProgressBar::SignalAddStepsToDo(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmitkProgressBar::SignalProgress(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmitkProgressBar::SignalSetPercentageVisible(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
