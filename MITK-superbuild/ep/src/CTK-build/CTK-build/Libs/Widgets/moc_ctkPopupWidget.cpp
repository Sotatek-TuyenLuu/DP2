/****************************************************************************
** Meta object code from reading C++ file 'ctkPopupWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkPopupWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkPopupWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkPopupWidget_t {
    QByteArrayData data[11];
    char stringdata[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkPopupWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkPopupWidget_t qt_meta_stringdata_ctkPopupWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ctkPopupWidget"
QT_MOC_LITERAL(1, 15, 8), // "pinPopup"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "pin"
QT_MOC_LITERAL(4, 29, 11), // "updatePopup"
QT_MOC_LITERAL(5, 41, 16), // "onEffectFinished"
QT_MOC_LITERAL(6, 58, 6), // "active"
QT_MOC_LITERAL(7, 65, 8), // "autoShow"
QT_MOC_LITERAL(8, 74, 9), // "showDelay"
QT_MOC_LITERAL(9, 84, 8), // "autoHide"
QT_MOC_LITERAL(10, 93, 9) // "hideDelay"

    },
    "ctkPopupWidget\0pinPopup\0\0pin\0updatePopup\0"
    "onEffectFinished\0active\0autoShow\0"
    "showDelay\0autoHide\0hideDelay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkPopupWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       5,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x09 /* Protected */,
       5,    0,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Int, 0x00095103,

       0        // eod
};

void ctkPopupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkPopupWidget *_t = static_cast<ctkPopupWidget *>(_o);
        switch (_id) {
        case 0: _t->pinPopup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updatePopup(); break;
        case 2: _t->onEffectFinished(); break;
        default: ;
        }
    }
}

const QMetaObject ctkPopupWidget::staticMetaObject = {
    { &ctkBasePopupWidget::staticMetaObject, qt_meta_stringdata_ctkPopupWidget.data,
      qt_meta_data_ctkPopupWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkPopupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkPopupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkPopupWidget.stringdata))
        return static_cast<void*>(const_cast< ctkPopupWidget*>(this));
    return ctkBasePopupWidget::qt_metacast(_clname);
}

int ctkPopupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkBasePopupWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isActive(); break;
        case 1: *reinterpret_cast< bool*>(_v) = autoShow(); break;
        case 2: *reinterpret_cast< int*>(_v) = showDelay(); break;
        case 3: *reinterpret_cast< bool*>(_v) = autoHide(); break;
        case 4: *reinterpret_cast< int*>(_v) = hideDelay(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setActive(*reinterpret_cast< bool*>(_v)); break;
        case 1: setAutoShow(*reinterpret_cast< bool*>(_v)); break;
        case 2: setShowDelay(*reinterpret_cast< int*>(_v)); break;
        case 3: setAutoHide(*reinterpret_cast< bool*>(_v)); break;
        case 4: setHideDelay(*reinterpret_cast< int*>(_v)); break;
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
