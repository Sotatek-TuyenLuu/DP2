/****************************************************************************
** Meta object code from reading C++ file 'ctkTransferFunctionBarsItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkTransferFunctionBarsItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkTransferFunctionBarsItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkTransferFunctionBarsItem_t {
    QByteArrayData data[3];
    char stringdata[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkTransferFunctionBarsItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkTransferFunctionBarsItem_t qt_meta_stringdata_ctkTransferFunctionBarsItem = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ctkTransferFunctionBarsItem"
QT_MOC_LITERAL(1, 28, 8), // "barWidth"
QT_MOC_LITERAL(2, 37, 8) // "barColor"

    },
    "ctkTransferFunctionBarsItem\0barWidth\0"
    "barColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkTransferFunctionBarsItem[] = {

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
       1, QMetaType::QReal, 0x00095103,
       2, QMetaType::QColor, 0x00095103,

       0        // eod
};

void ctkTransferFunctionBarsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkTransferFunctionBarsItem::staticMetaObject = {
    { &ctkTransferFunctionItem::staticMetaObject, qt_meta_stringdata_ctkTransferFunctionBarsItem.data,
      qt_meta_data_ctkTransferFunctionBarsItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkTransferFunctionBarsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkTransferFunctionBarsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkTransferFunctionBarsItem.stringdata))
        return static_cast<void*>(const_cast< ctkTransferFunctionBarsItem*>(this));
    return ctkTransferFunctionItem::qt_metacast(_clname);
}

int ctkTransferFunctionBarsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkTransferFunctionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = barWidth(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = barColor(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBarWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setBarColor(*reinterpret_cast< QColor*>(_v)); break;
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
