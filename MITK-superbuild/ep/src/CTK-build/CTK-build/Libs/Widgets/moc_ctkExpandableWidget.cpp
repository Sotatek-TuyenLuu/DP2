/****************************************************************************
** Meta object code from reading C++ file 'ctkExpandableWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkExpandableWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkExpandableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkExpandableWidget_t {
    QByteArrayData data[7];
    char stringdata[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkExpandableWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkExpandableWidget_t qt_meta_stringdata_ctkExpandableWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ctkExpandableWidget"
QT_MOC_LITERAL(1, 20, 14), // "updateSizeHint"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "orientations"
QT_MOC_LITERAL(4, 49, 16), // "Qt::Orientations"
QT_MOC_LITERAL(5, 66, 14), // "sizeGripInside"
QT_MOC_LITERAL(6, 81, 15) // "sizeGripMargins"

    },
    "ctkExpandableWidget\0updateSizeHint\0\0"
    "orientations\0Qt::Orientations\0"
    "sizeGripInside\0sizeGripMargins"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkExpandableWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0009510b,
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::QSize, 0x00095103,

       0        // eod
};

void ctkExpandableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkExpandableWidget *_t = static_cast<ctkExpandableWidget *>(_o);
        switch (_id) {
        case 0: _t->updateSizeHint(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ctkExpandableWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ctkExpandableWidget.data,
      qt_meta_data_ctkExpandableWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkExpandableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkExpandableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkExpandableWidget.stringdata))
        return static_cast<void*>(const_cast< ctkExpandableWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int ctkExpandableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< Qt::Orientations*>(_v) = orientations(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isSizeGripInside(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = sizeGripMargins(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOrientations(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        case 1: setSizeGripInside(*reinterpret_cast< bool*>(_v)); break;
        case 2: setSizeGripMargins(*reinterpret_cast< QSize*>(_v)); break;
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
