/****************************************************************************
** Meta object code from reading C++ file 'ctkFlowLayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkFlowLayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkFlowLayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkFlowLayout_t {
    QByteArrayData data[8];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkFlowLayout_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkFlowLayout_t qt_meta_stringdata_ctkFlowLayout = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkFlowLayout"
QT_MOC_LITERAL(1, 14, 11), // "orientation"
QT_MOC_LITERAL(2, 26, 15), // "Qt::Orientation"
QT_MOC_LITERAL(3, 42, 28), // "preferredExpandingDirections"
QT_MOC_LITERAL(4, 71, 16), // "Qt::Orientations"
QT_MOC_LITERAL(5, 88, 10), // "alignItems"
QT_MOC_LITERAL(6, 99, 17), // "horizontalSpacing"
QT_MOC_LITERAL(7, 117, 15) // "verticalSpacing"

    },
    "ctkFlowLayout\0orientation\0Qt::Orientation\0"
    "preferredExpandingDirections\0"
    "Qt::Orientations\0alignItems\0"
    "horizontalSpacing\0verticalSpacing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkFlowLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, 0x80000000 | 4, 0x0009510b,
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Int, 0x00095103,

       0        // eod
};

void ctkFlowLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkFlowLayout::staticMetaObject = {
    { &QLayout::staticMetaObject, qt_meta_stringdata_ctkFlowLayout.data,
      qt_meta_data_ctkFlowLayout,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkFlowLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkFlowLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkFlowLayout.stringdata))
        return static_cast<void*>(const_cast< ctkFlowLayout*>(this));
    return QLayout::qt_metacast(_clname);
}

int ctkFlowLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = orientation(); break;
        case 1: *reinterpret_cast< Qt::Orientations*>(_v) = preferredExpandingDirections(); break;
        case 2: *reinterpret_cast< bool*>(_v) = alignItems(); break;
        case 3: *reinterpret_cast< int*>(_v) = horizontalSpacing(); break;
        case 4: *reinterpret_cast< int*>(_v) = verticalSpacing(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: setPreferredExpandingDirections(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        case 2: setAlignItems(*reinterpret_cast< bool*>(_v)); break;
        case 3: setHorizontalSpacing(*reinterpret_cast< int*>(_v)); break;
        case 4: setVerticalSpacing(*reinterpret_cast< int*>(_v)); break;
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
