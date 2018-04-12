/****************************************************************************
** Meta object code from reading C++ file 'QmitkServiceListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgets/include/QmitkServiceListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkServiceListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkServiceListWidget_t {
    QByteArrayData data[9];
    char stringdata[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkServiceListWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkServiceListWidget_t qt_meta_stringdata_QmitkServiceListWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QmitkServiceListWidget"
QT_MOC_LITERAL(1, 23, 17), // "ServiceRegistered"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "us::ServiceReferenceU"
QT_MOC_LITERAL(4, 64, 20), // "ServiceUnregistering"
QT_MOC_LITERAL(5, 85, 15), // "ServiceModified"
QT_MOC_LITERAL(6, 101, 23), // "ServiceModifiedEndMatch"
QT_MOC_LITERAL(7, 125, 23), // "ServiceSelectionChanged"
QT_MOC_LITERAL(8, 149, 25) // "OnServiceSelectionChanged"

    },
    "QmitkServiceListWidget\0ServiceRegistered\0"
    "\0us::ServiceReferenceU\0ServiceUnregistering\0"
    "ServiceModified\0ServiceModifiedEndMatch\0"
    "ServiceSelectionChanged\0"
    "OnServiceSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkServiceListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       7,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   59,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QmitkServiceListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkServiceListWidget *_t = static_cast<QmitkServiceListWidget *>(_o);
        switch (_id) {
        case 0: _t->ServiceRegistered((*reinterpret_cast< us::ServiceReferenceU(*)>(_a[1]))); break;
        case 1: _t->ServiceUnregistering((*reinterpret_cast< us::ServiceReferenceU(*)>(_a[1]))); break;
        case 2: _t->ServiceModified((*reinterpret_cast< us::ServiceReferenceU(*)>(_a[1]))); break;
        case 3: _t->ServiceModifiedEndMatch((*reinterpret_cast< us::ServiceReferenceU(*)>(_a[1]))); break;
        case 4: _t->ServiceSelectionChanged((*reinterpret_cast< us::ServiceReferenceU(*)>(_a[1]))); break;
        case 5: _t->OnServiceSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkServiceListWidget::*_t)(us::ServiceReferenceU );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkServiceListWidget::ServiceRegistered)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkServiceListWidget::*_t)(us::ServiceReferenceU );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkServiceListWidget::ServiceUnregistering)) {
                *result = 1;
            }
        }
        {
            typedef void (QmitkServiceListWidget::*_t)(us::ServiceReferenceU );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkServiceListWidget::ServiceModified)) {
                *result = 2;
            }
        }
        {
            typedef void (QmitkServiceListWidget::*_t)(us::ServiceReferenceU );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkServiceListWidget::ServiceModifiedEndMatch)) {
                *result = 3;
            }
        }
        {
            typedef void (QmitkServiceListWidget::*_t)(us::ServiceReferenceU );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkServiceListWidget::ServiceSelectionChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QmitkServiceListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkServiceListWidget.data,
      qt_meta_data_QmitkServiceListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkServiceListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkServiceListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkServiceListWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkServiceListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkServiceListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QmitkServiceListWidget::ServiceRegistered(us::ServiceReferenceU _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmitkServiceListWidget::ServiceUnregistering(us::ServiceReferenceU _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmitkServiceListWidget::ServiceModified(us::ServiceReferenceU _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QmitkServiceListWidget::ServiceModifiedEndMatch(us::ServiceReferenceU _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QmitkServiceListWidget::ServiceSelectionChanged(us::ServiceReferenceU _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
