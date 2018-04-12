/****************************************************************************
** Meta object code from reading C++ file 'ctkCheckBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCheckBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCheckBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCheckBox_t {
    QByteArrayData data[3];
    char stringdata[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCheckBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCheckBox_t qt_meta_stringdata_ctkCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ctkCheckBox"
QT_MOC_LITERAL(1, 12, 13), // "indicatorIcon"
QT_MOC_LITERAL(2, 26, 17) // "indicatorIconSize"

    },
    "ctkCheckBox\0indicatorIcon\0indicatorIconSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCheckBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QIcon, 0x00095103,
       2, QMetaType::QSize, 0x00095103,

       0        // eod
};

void ctkCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkCheckBox::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_ctkCheckBox.data,
      qt_meta_data_ctkCheckBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCheckBox.stringdata))
        return static_cast<void*>(const_cast< ctkCheckBox*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int ctkCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = indicatorIcon(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = indicatorIconSize(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setIndicatorIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: setIndicatorIconSize(*reinterpret_cast< QSize*>(_v)); break;
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
QT_END_MOC_NAMESPACE
