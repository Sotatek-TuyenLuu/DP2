/****************************************************************************
** Meta object code from reading C++ file 'ctkMessageBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkMessageBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkMessageBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkMessageBox_t {
    QByteArrayData data[7];
    char stringdata[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkMessageBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkMessageBox_t qt_meta_stringdata_ctkMessageBox = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkMessageBox"
QT_MOC_LITERAL(1, 14, 16), // "setDontShowAgain"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "dontShow"
QT_MOC_LITERAL(4, 41, 13), // "dontShowAgain"
QT_MOC_LITERAL(5, 55, 24), // "dontShowAgainSettingsKey"
QT_MOC_LITERAL(6, 80, 20) // "dontShowAgainVisible"

    },
    "ctkMessageBox\0setDontShowAgain\0\0"
    "dontShow\0dontShowAgain\0dontShowAgainSettingsKey\0"
    "dontShowAgainVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkMessageBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00095103,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkMessageBox *_t = static_cast<ctkMessageBox *>(_o);
        switch (_id) {
        case 0: _t->setDontShowAgain((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ctkMessageBox::staticMetaObject = {
    { &QMessageBox::staticMetaObject, qt_meta_stringdata_ctkMessageBox.data,
      qt_meta_data_ctkMessageBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkMessageBox.stringdata))
        return static_cast<void*>(const_cast< ctkMessageBox*>(this));
    return QMessageBox::qt_metacast(_clname);
}

int ctkMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMessageBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = dontShowAgain(); break;
        case 1: *reinterpret_cast< QString*>(_v) = dontShowAgainSettingsKey(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isDontShowAgainVisible(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDontShowAgain(*reinterpret_cast< bool*>(_v)); break;
        case 1: setDontShowAgainSettingsKey(*reinterpret_cast< QString*>(_v)); break;
        case 2: setDontShowAgainVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
