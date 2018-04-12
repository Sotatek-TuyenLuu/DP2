/****************************************************************************
** Meta object code from reading C++ file 'ctkComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkComboBox_t {
    QByteArrayData data[12];
    char stringdata[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkComboBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkComboBox_t qt_meta_stringdata_ctkComboBox = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ctkComboBox"
QT_MOC_LITERAL(1, 12, 11), // "defaultText"
QT_MOC_LITERAL(2, 24, 11), // "defaultIcon"
QT_MOC_LITERAL(3, 36, 12), // "forceDefault"
QT_MOC_LITERAL(4, 49, 9), // "elideMode"
QT_MOC_LITERAL(5, 59, 17), // "Qt::TextElideMode"
QT_MOC_LITERAL(6, 77, 17), // "scrollWheelEffect"
QT_MOC_LITERAL(7, 95, 12), // "ScrollEffect"
QT_MOC_LITERAL(8, 108, 11), // "NeverScroll"
QT_MOC_LITERAL(9, 120, 12), // "AlwaysScroll"
QT_MOC_LITERAL(10, 133, 15), // "ScrollWithFocus"
QT_MOC_LITERAL(11, 149, 22) // "ScrollWithNoVScrollBar"

    },
    "ctkComboBox\0defaultText\0defaultIcon\0"
    "forceDefault\0elideMode\0Qt::TextElideMode\0"
    "scrollWheelEffect\0ScrollEffect\0"
    "NeverScroll\0AlwaysScroll\0ScrollWithFocus\0"
    "ScrollWithNoVScrollBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       1,   29, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::QIcon, 0x00095103,
       3, QMetaType::Bool, 0x00095003,
       4, 0x80000000 | 5, 0x0009510b,
       6, 0x80000000 | 7, 0x0009510b,

 // enums: name, flags, count, data
       7, 0x0,    4,   33,

 // enum data: key, value
       8, uint(ctkComboBox::NeverScroll),
       9, uint(ctkComboBox::AlwaysScroll),
      10, uint(ctkComboBox::ScrollWithFocus),
      11, uint(ctkComboBox::ScrollWithNoVScrollBar),

       0        // eod
};

void ctkComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_ctkComboBox.data,
      qt_meta_data_ctkComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkComboBox.stringdata))
        return static_cast<void*>(const_cast< ctkComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int ctkComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = defaultText(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = defaultIcon(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isDefaultForced(); break;
        case 3: *reinterpret_cast< Qt::TextElideMode*>(_v) = elideMode(); break;
        case 4: *reinterpret_cast< ScrollEffect*>(_v) = scrollWheelEffect(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDefaultText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setDefaultIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: forceDefault(*reinterpret_cast< bool*>(_v)); break;
        case 3: setElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 4: setScrollWheelEffect(*reinterpret_cast< ScrollEffect*>(_v)); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
