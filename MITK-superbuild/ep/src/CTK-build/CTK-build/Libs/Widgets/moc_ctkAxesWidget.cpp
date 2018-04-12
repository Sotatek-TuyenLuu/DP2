/****************************************************************************
** Meta object code from reading C++ file 'ctkAxesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkAxesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkAxesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkAxesWidget_t {
    QByteArrayData data[24];
    char stringdata[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkAxesWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkAxesWidget_t qt_meta_stringdata_ctkAxesWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkAxesWidget"
QT_MOC_LITERAL(1, 14, 18), // "currentAxisChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "ctkAxesWidget::Axis"
QT_MOC_LITERAL(4, 54, 4), // "axis"
QT_MOC_LITERAL(5, 59, 14), // "setCurrentAxis"
QT_MOC_LITERAL(6, 74, 4), // "Axis"
QT_MOC_LITERAL(7, 79, 20), // "setCurrentAxisToNone"
QT_MOC_LITERAL(8, 100, 12), // "setAutoReset"
QT_MOC_LITERAL(9, 113, 5), // "reset"
QT_MOC_LITERAL(10, 119, 15), // "minimumSizeHint"
QT_MOC_LITERAL(11, 135, 8), // "sizeHint"
QT_MOC_LITERAL(12, 144, 17), // "hasHeightForWidth"
QT_MOC_LITERAL(13, 162, 14), // "heightForWidth"
QT_MOC_LITERAL(14, 177, 5), // "width"
QT_MOC_LITERAL(15, 183, 11), // "currentAxis"
QT_MOC_LITERAL(16, 195, 9), // "autoReset"
QT_MOC_LITERAL(17, 205, 4), // "None"
QT_MOC_LITERAL(18, 210, 5), // "Right"
QT_MOC_LITERAL(19, 216, 4), // "Left"
QT_MOC_LITERAL(20, 221, 8), // "Superior"
QT_MOC_LITERAL(21, 230, 8), // "Inferior"
QT_MOC_LITERAL(22, 239, 8), // "Anterior"
QT_MOC_LITERAL(23, 248, 9) // "Posterior"

    },
    "ctkAxesWidget\0currentAxisChanged\0\0"
    "ctkAxesWidget::Axis\0axis\0setCurrentAxis\0"
    "Axis\0setCurrentAxisToNone\0setAutoReset\0"
    "reset\0minimumSizeHint\0sizeHint\0"
    "hasHeightForWidth\0heightForWidth\0width\0"
    "currentAxis\0autoReset\0None\0Right\0Left\0"
    "Superior\0Inferior\0Anterior\0Posterior"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkAxesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   70, // properties
       1,   78, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
      10,    0,   64,    2, 0x0a /* Public */,
      11,    0,   65,    2, 0x0a /* Public */,
      12,    0,   66,    2, 0x0a /* Public */,
      13,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::QSize,
    QMetaType::QSize,
    QMetaType::Bool,
    QMetaType::Int, QMetaType::Int,   14,

 // properties: name, type, flags
      15, 0x80000000 | 6, 0x0049510b,
      16, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,

 // enums: name, flags, count, data
       6, 0x0,    7,   82,

 // enum data: key, value
      17, uint(ctkAxesWidget::None),
      18, uint(ctkAxesWidget::Right),
      19, uint(ctkAxesWidget::Left),
      20, uint(ctkAxesWidget::Superior),
      21, uint(ctkAxesWidget::Inferior),
      22, uint(ctkAxesWidget::Anterior),
      23, uint(ctkAxesWidget::Posterior),

       0        // eod
};

void ctkAxesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkAxesWidget *_t = static_cast<ctkAxesWidget *>(_o);
        switch (_id) {
        case 0: _t->currentAxisChanged((*reinterpret_cast< ctkAxesWidget::Axis(*)>(_a[1]))); break;
        case 1: _t->setCurrentAxis((*reinterpret_cast< Axis(*)>(_a[1]))); break;
        case 2: _t->setCurrentAxisToNone(); break;
        case 3: _t->setAutoReset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { QSize _r = _t->minimumSizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 5: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->hasHeightForWidth();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->heightForWidth((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ctkAxesWidget::Axis >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkAxesWidget::*_t)(ctkAxesWidget::Axis );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkAxesWidget::currentAxisChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ctkAxesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkAxesWidget.data,
      qt_meta_data_ctkAxesWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkAxesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkAxesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkAxesWidget.stringdata))
        return static_cast<void*>(const_cast< ctkAxesWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkAxesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Axis*>(_v) = currentAxis(); break;
        case 1: *reinterpret_cast< bool*>(_v) = autoReset(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentAxis(*reinterpret_cast< Axis*>(_v)); break;
        case 1: setAutoReset(*reinterpret_cast< bool*>(_v)); break;
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

// SIGNAL 0
void ctkAxesWidget::currentAxisChanged(ctkAxesWidget::Axis _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
