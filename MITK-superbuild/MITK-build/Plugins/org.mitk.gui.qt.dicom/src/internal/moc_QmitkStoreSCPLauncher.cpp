/****************************************************************************
** Meta object code from reading C++ file 'QmitkStoreSCPLauncher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkStoreSCPLauncher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkStoreSCPLauncher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkStoreSCPLauncher_t {
    QByteArrayData data[15];
    char stringdata[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkStoreSCPLauncher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkStoreSCPLauncher_t qt_meta_stringdata_QmitkStoreSCPLauncher = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QmitkStoreSCPLauncher"
QT_MOC_LITERAL(1, 22, 22), // "SignalStatusOfStoreSCP"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 19), // "SignalStoreSCPError"
QT_MOC_LITERAL(4, 66, 9), // "errorText"
QT_MOC_LITERAL(5, 76, 17), // "SignalStartImport"
QT_MOC_LITERAL(6, 94, 20), // "SignalFinishedImport"
QT_MOC_LITERAL(7, 115, 13), // "StartStoreSCP"
QT_MOC_LITERAL(8, 129, 14), // "OnProcessError"
QT_MOC_LITERAL(9, 144, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(10, 167, 5), // "error"
QT_MOC_LITERAL(11, 173, 14), // "OnStateChanged"
QT_MOC_LITERAL(12, 188, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(13, 211, 6), // "status"
QT_MOC_LITERAL(14, 218, 20) // "OnReadyProcessOutput"

    },
    "QmitkStoreSCPLauncher\0SignalStatusOfStoreSCP\0"
    "\0SignalStoreSCPError\0errorText\0"
    "SignalStartImport\0SignalFinishedImport\0"
    "StartStoreSCP\0OnProcessError\0"
    "QProcess::ProcessError\0error\0"
    "OnStateChanged\0QProcess::ProcessState\0"
    "status\0OnReadyProcessOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkStoreSCPLauncher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x26 /* Public | MethodCloned */,
       5,    1,   66,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   70,    2, 0x0a /* Public */,
       8,    1,   71,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      14,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

void QmitkStoreSCPLauncher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkStoreSCPLauncher *_t = static_cast<QmitkStoreSCPLauncher *>(_o);
        switch (_id) {
        case 0: _t->SignalStatusOfStoreSCP((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SignalStoreSCPError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->SignalStoreSCPError(); break;
        case 3: _t->SignalStartImport((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->SignalFinishedImport(); break;
        case 5: _t->StartStoreSCP(); break;
        case 6: _t->OnProcessError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 7: _t->OnStateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 8: _t->OnReadyProcessOutput(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkStoreSCPLauncher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStoreSCPLauncher::SignalStatusOfStoreSCP)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkStoreSCPLauncher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStoreSCPLauncher::SignalStoreSCPError)) {
                *result = 1;
            }
        }
        {
            typedef void (QmitkStoreSCPLauncher::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStoreSCPLauncher::SignalStartImport)) {
                *result = 3;
            }
        }
        {
            typedef void (QmitkStoreSCPLauncher::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkStoreSCPLauncher::SignalFinishedImport)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QmitkStoreSCPLauncher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmitkStoreSCPLauncher.data,
      qt_meta_data_QmitkStoreSCPLauncher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkStoreSCPLauncher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkStoreSCPLauncher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkStoreSCPLauncher.stringdata))
        return static_cast<void*>(const_cast< QmitkStoreSCPLauncher*>(this));
    return QObject::qt_metacast(_clname);
}

int QmitkStoreSCPLauncher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QmitkStoreSCPLauncher::SignalStatusOfStoreSCP(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmitkStoreSCPLauncher::SignalStoreSCPError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void QmitkStoreSCPLauncher::SignalStartImport(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QmitkStoreSCPLauncher::SignalFinishedImport()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
