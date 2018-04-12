/****************************************************************************
** Meta object code from reading C++ file 'ctkCheckablePushButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCheckablePushButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCheckablePushButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCheckablePushButton_t {
    QByteArrayData data[11];
    char stringdata[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCheckablePushButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCheckablePushButton_t qt_meta_stringdata_ctkCheckablePushButton = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ctkCheckablePushButton"
QT_MOC_LITERAL(1, 23, 15), // "checkBoxToggled"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "checkStateChanged"
QT_MOC_LITERAL(4, 58, 14), // "Qt::CheckState"
QT_MOC_LITERAL(5, 73, 13), // "newCheckState"
QT_MOC_LITERAL(6, 87, 18), // "indicatorAlignment"
QT_MOC_LITERAL(7, 106, 13), // "Qt::Alignment"
QT_MOC_LITERAL(8, 120, 10), // "checkState"
QT_MOC_LITERAL(9, 131, 22), // "checkBoxControlsButton"
QT_MOC_LITERAL(10, 154, 21) // "checkBoxUserCheckable"

    },
    "ctkCheckablePushButton\0checkBoxToggled\0"
    "\0checkStateChanged\0Qt::CheckState\0"
    "newCheckState\0indicatorAlignment\0"
    "Qt::Alignment\0checkState\0"
    "checkBoxControlsButton\0checkBoxUserCheckable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCheckablePushButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       3,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,    5,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0009510b,
       8, 0x80000000 | 4, 0x0049510b,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,

       0        // eod
};

void ctkCheckablePushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkCheckablePushButton *_t = static_cast<ctkCheckablePushButton *>(_o);
        switch (_id) {
        case 0: _t->checkBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->checkStateChanged((*reinterpret_cast< Qt::CheckState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkCheckablePushButton::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCheckablePushButton::checkBoxToggled)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkCheckablePushButton::*_t)(Qt::CheckState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCheckablePushButton::checkStateChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ctkCheckablePushButton::staticMetaObject = {
    { &ctkPushButton::staticMetaObject, qt_meta_stringdata_ctkCheckablePushButton.data,
      qt_meta_data_ctkCheckablePushButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCheckablePushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCheckablePushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCheckablePushButton.stringdata))
        return static_cast<void*>(const_cast< ctkCheckablePushButton*>(this));
    return ctkPushButton::qt_metacast(_clname);
}

int ctkCheckablePushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Alignment*>(_v) = indicatorAlignment(); break;
        case 1: *reinterpret_cast< Qt::CheckState*>(_v) = checkState(); break;
        case 2: *reinterpret_cast< bool*>(_v) = checkBoxControlsButton(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isCheckBoxUserCheckable(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setIndicatorAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 1: setCheckState(*reinterpret_cast< Qt::CheckState*>(_v)); break;
        case 2: setCheckBoxControlsButton(*reinterpret_cast< bool*>(_v)); break;
        case 3: setCheckBoxUserCheckable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkCheckablePushButton::checkBoxToggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkCheckablePushButton::checkStateChanged(Qt::CheckState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
