/****************************************************************************
** Meta object code from reading C++ file 'ctkCoordinatesWidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCoordinatesWidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCoordinatesWidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCoordinatesWidgetPrivate_t {
    QByteArrayData data[7];
    char stringdata[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCoordinatesWidgetPrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCoordinatesWidgetPrivate_t qt_meta_stringdata_ctkCoordinatesWidgetPrivate = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ctkCoordinatesWidgetPrivate"
QT_MOC_LITERAL(1, 28, 14), // "updateDecimals"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 19), // "updateOtherDecimals"
QT_MOC_LITERAL(4, 64, 20), // "setTemporaryDecimals"
QT_MOC_LITERAL(5, 85, 29), // "onValueProxyAboutToBeModified"
QT_MOC_LITERAL(6, 115, 20) // "onValueProxyModified"

    },
    "ctkCoordinatesWidgetPrivate\0updateDecimals\0"
    "\0updateOtherDecimals\0setTemporaryDecimals\0"
    "onValueProxyAboutToBeModified\0"
    "onValueProxyModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCoordinatesWidgetPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x0a /* Public */,
       4,    1,   43,    2, 0x0a /* Public */,
       5,    0,   46,    2, 0x0a /* Public */,
       6,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ctkCoordinatesWidgetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkCoordinatesWidgetPrivate *_t = static_cast<ctkCoordinatesWidgetPrivate *>(_o);
        switch (_id) {
        case 0: _t->updateDecimals(); break;
        case 1: _t->updateOtherDecimals((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setTemporaryDecimals((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onValueProxyAboutToBeModified(); break;
        case 4: _t->onValueProxyModified(); break;
        default: ;
        }
    }
}

const QMetaObject ctkCoordinatesWidgetPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkCoordinatesWidgetPrivate.data,
      qt_meta_data_ctkCoordinatesWidgetPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCoordinatesWidgetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCoordinatesWidgetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCoordinatesWidgetPrivate.stringdata))
        return static_cast<void*>(const_cast< ctkCoordinatesWidgetPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkCoordinatesWidgetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
