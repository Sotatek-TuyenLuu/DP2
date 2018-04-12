/****************************************************************************
** Meta object code from reading C++ file 'ctkFontButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkFontButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkFontButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkFontButton_t {
    QByteArrayData data[6];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkFontButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkFontButton_t qt_meta_stringdata_ctkFontButton = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkFontButton"
QT_MOC_LITERAL(1, 14, 18), // "currentFontChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "browseFont"
QT_MOC_LITERAL(4, 45, 11), // "currentFont"
QT_MOC_LITERAL(5, 57, 14) // "fontTextFormat"

    },
    "ctkFontButton\0currentFontChanged\0\0"
    "browseFont\0currentFont\0fontTextFormat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkFontButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QFont, 0x00595103,
       5, QMetaType::QString, 0x00095103,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void ctkFontButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkFontButton *_t = static_cast<ctkFontButton *>(_o);
        switch (_id) {
        case 0: _t->currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->browseFont(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkFontButton::*_t)(const QFont & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkFontButton::currentFontChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ctkFontButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_ctkFontButton.data,
      qt_meta_data_ctkFontButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkFontButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkFontButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkFontButton.stringdata))
        return static_cast<void*>(const_cast< ctkFontButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int ctkFontButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QFont*>(_v) = currentFont(); break;
        case 1: *reinterpret_cast< QString*>(_v) = fontTextFormat(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentFont(*reinterpret_cast< QFont*>(_v)); break;
        case 1: setFontTextFormat(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkFontButton::currentFontChanged(const QFont & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
