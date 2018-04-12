/****************************************************************************
** Meta object code from reading C++ file 'ctkCrosshairLabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCrosshairLabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCrosshairLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCrosshairLabel_t {
    QByteArrayData data[12];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCrosshairLabel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCrosshairLabel_t qt_meta_stringdata_ctkCrosshairLabel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ctkCrosshairLabel"
QT_MOC_LITERAL(1, 18, 13), // "showCrosshair"
QT_MOC_LITERAL(2, 32, 12), // "crosshairPen"
QT_MOC_LITERAL(3, 45, 14), // "crosshairColor"
QT_MOC_LITERAL(4, 60, 9), // "lineWidth"
QT_MOC_LITERAL(5, 70, 13), // "crosshairType"
QT_MOC_LITERAL(6, 84, 14), // "CrosshairTypes"
QT_MOC_LITERAL(7, 99, 11), // "marginColor"
QT_MOC_LITERAL(8, 111, 13), // "bullsEyeWidth"
QT_MOC_LITERAL(9, 125, 13), // "CrosshairType"
QT_MOC_LITERAL(10, 139, 15), // "SimpleCrosshair"
QT_MOC_LITERAL(11, 155, 17) // "BullsEyeCrosshair"

    },
    "ctkCrosshairLabel\0showCrosshair\0"
    "crosshairPen\0crosshairColor\0lineWidth\0"
    "crosshairType\0CrosshairTypes\0marginColor\0"
    "bullsEyeWidth\0CrosshairType\0SimpleCrosshair\0"
    "BullsEyeCrosshair"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCrosshairLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       2,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095103,
       2, QMetaType::QPen, 0x00094103,
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::Int, 0x00095103,
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::QColor, 0x00095103,
       8, QMetaType::Int, 0x00095103,

 // enums: name, flags, count, data
       9, 0x1,    2,   43,
       6, 0x1,    2,   47,

 // enum data: key, value
      10, uint(ctkCrosshairLabel::SimpleCrosshair),
      11, uint(ctkCrosshairLabel::BullsEyeCrosshair),
      10, uint(ctkCrosshairLabel::SimpleCrosshair),
      11, uint(ctkCrosshairLabel::BullsEyeCrosshair),

       0        // eod
};

void ctkCrosshairLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkCrosshairLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ctkCrosshairLabel.data,
      qt_meta_data_ctkCrosshairLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCrosshairLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCrosshairLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCrosshairLabel.stringdata))
        return static_cast<void*>(const_cast< ctkCrosshairLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int ctkCrosshairLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = showCrosshair(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = crosshairPen(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = crosshairColor(); break;
        case 3: *reinterpret_cast< int*>(_v) = lineWidth(); break;
        case 4: *reinterpret_cast<int*>(_v) = QFlag(crosshairType()); break;
        case 5: *reinterpret_cast< QColor*>(_v) = marginColor(); break;
        case 6: *reinterpret_cast< int*>(_v) = bullsEyeWidth(); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setShowCrosshair(*reinterpret_cast< bool*>(_v)); break;
        case 1: setCrosshairPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: setCrosshairColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 4: setCrosshairType(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 5: setMarginColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: setBullsEyeWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
