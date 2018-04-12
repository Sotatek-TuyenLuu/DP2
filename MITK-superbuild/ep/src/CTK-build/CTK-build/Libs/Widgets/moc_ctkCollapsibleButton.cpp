/****************************************************************************
** Meta object code from reading C++ file 'ctkCollapsibleButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCollapsibleButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCollapsibleButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCollapsibleButton_t {
    QByteArrayData data[19];
    char stringdata[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCollapsibleButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCollapsibleButton_t qt_meta_stringdata_ctkCollapsibleButton = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ctkCollapsibleButton"
QT_MOC_LITERAL(1, 21, 17), // "contentsCollapsed"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "collapse"
QT_MOC_LITERAL(4, 49, 1), // "c"
QT_MOC_LITERAL(5, 51, 9), // "onToggled"
QT_MOC_LITERAL(6, 61, 7), // "clicked"
QT_MOC_LITERAL(7, 69, 9), // "collapsed"
QT_MOC_LITERAL(8, 79, 15), // "collapsedHeight"
QT_MOC_LITERAL(9, 95, 4), // "flat"
QT_MOC_LITERAL(10, 100, 18), // "contentsFrameShape"
QT_MOC_LITERAL(11, 119, 13), // "QFrame::Shape"
QT_MOC_LITERAL(12, 133, 19), // "contentsFrameShadow"
QT_MOC_LITERAL(13, 153, 14), // "QFrame::Shadow"
QT_MOC_LITERAL(14, 168, 17), // "contentsLineWidth"
QT_MOC_LITERAL(15, 186, 20), // "contentsMidLineWidth"
QT_MOC_LITERAL(16, 207, 19), // "buttonTextAlignment"
QT_MOC_LITERAL(17, 227, 13), // "Qt::Alignment"
QT_MOC_LITERAL(18, 241, 18) // "indicatorAlignment"

    },
    "ctkCollapsibleButton\0contentsCollapsed\0"
    "\0collapse\0c\0onToggled\0clicked\0collapsed\0"
    "collapsedHeight\0flat\0contentsFrameShape\0"
    "QFrame::Shape\0contentsFrameShadow\0"
    "QFrame::Shadow\0contentsLineWidth\0"
    "contentsMidLineWidth\0buttonTextAlignment\0"
    "Qt::Alignment\0indicatorAlignment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCollapsibleButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       9,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x09 /* Protected */,
       5,    1,   40,    2, 0x09 /* Protected */,
       5,    0,   43,    2, 0x29 /* Protected | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, 0x80000000 | 11, 0x0009510b,
      12, 0x80000000 | 13, 0x0009510b,
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Int, 0x00095103,
      16, 0x80000000 | 17, 0x0009510b,
      18, 0x80000000 | 17, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void ctkCollapsibleButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkCollapsibleButton *_t = static_cast<ctkCollapsibleButton *>(_o);
        switch (_id) {
        case 0: _t->contentsCollapsed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->collapse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onToggled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkCollapsibleButton::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCollapsibleButton::contentsCollapsed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ctkCollapsibleButton::staticMetaObject = {
    { &QAbstractButton::staticMetaObject, qt_meta_stringdata_ctkCollapsibleButton.data,
      qt_meta_data_ctkCollapsibleButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCollapsibleButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCollapsibleButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCollapsibleButton.stringdata))
        return static_cast<void*>(const_cast< ctkCollapsibleButton*>(this));
    return QAbstractButton::qt_metacast(_clname);
}

int ctkCollapsibleButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = collapsed(); break;
        case 1: *reinterpret_cast< int*>(_v) = collapsedHeight(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isFlat(); break;
        case 3: *reinterpret_cast< QFrame::Shape*>(_v) = contentsFrameShape(); break;
        case 4: *reinterpret_cast< QFrame::Shadow*>(_v) = contentsFrameShadow(); break;
        case 5: *reinterpret_cast< int*>(_v) = contentsLineWidth(); break;
        case 6: *reinterpret_cast< int*>(_v) = contentsMidLineWidth(); break;
        case 7: *reinterpret_cast< Qt::Alignment*>(_v) = buttonTextAlignment(); break;
        case 8: *reinterpret_cast< Qt::Alignment*>(_v) = indicatorAlignment(); break;
        default: break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCollapsed(*reinterpret_cast< bool*>(_v)); break;
        case 1: setCollapsedHeight(*reinterpret_cast< int*>(_v)); break;
        case 2: setFlat(*reinterpret_cast< bool*>(_v)); break;
        case 3: setContentsFrameShape(*reinterpret_cast< QFrame::Shape*>(_v)); break;
        case 4: setContentsFrameShadow(*reinterpret_cast< QFrame::Shadow*>(_v)); break;
        case 5: setContentsLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: setContentsMidLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 7: setButtonTextAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 8: setIndicatorAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        default: break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkCollapsibleButton::contentsCollapsed(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
