/****************************************************************************
** Meta object code from reading C++ file 'ctkButtonGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkButtonGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkButtonGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkButtonGroup_t {
    QByteArrayData data[8];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkButtonGroup_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkButtonGroup_t qt_meta_stringdata_ctkButtonGroup = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ctkButtonGroup"
QT_MOC_LITERAL(1, 15, 10), // "setChecked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 44, 6), // "button"
QT_MOC_LITERAL(5, 51, 7), // "checked"
QT_MOC_LITERAL(6, 59, 15), // "onButtonClicked"
QT_MOC_LITERAL(7, 75, 15) // "onButtonPressed"

    },
    "ctkButtonGroup\0setChecked\0\0QAbstractButton*\0"
    "button\0checked\0onButtonClicked\0"
    "onButtonPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkButtonGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x0a /* Public */,
       1,    1,   39,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   42,    2, 0x09 /* Protected */,
       7,    1,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void ctkButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkButtonGroup *_t = static_cast<ctkButtonGroup *>(_o);
        switch (_id) {
        case 0: _t->setChecked((*reinterpret_cast< QAbstractButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->setChecked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->onButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onButtonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ctkButtonGroup::staticMetaObject = {
    { &QButtonGroup::staticMetaObject, qt_meta_stringdata_ctkButtonGroup.data,
      qt_meta_data_ctkButtonGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkButtonGroup.stringdata))
        return static_cast<void*>(const_cast< ctkButtonGroup*>(this));
    return QButtonGroup::qt_metacast(_clname);
}

int ctkButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QButtonGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
