/****************************************************************************
** Meta object code from reading C++ file 'ctkCheckableHeaderView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCheckableHeaderView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCheckableHeaderView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCheckableHeaderView_t {
    QByteArrayData data[13];
    char stringdata[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCheckableHeaderView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCheckableHeaderView_t qt_meta_stringdata_ctkCheckableHeaderView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ctkCheckableHeaderView"
QT_MOC_LITERAL(1, 23, 13), // "setCheckState"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "section"
QT_MOC_LITERAL(4, 46, 14), // "Qt::CheckState"
QT_MOC_LITERAL(5, 61, 10), // "checkState"
QT_MOC_LITERAL(6, 72, 19), // "onHeaderDataChanged"
QT_MOC_LITERAL(7, 92, 15), // "Qt::Orientation"
QT_MOC_LITERAL(8, 108, 6), // "orient"
QT_MOC_LITERAL(9, 115, 5), // "first"
QT_MOC_LITERAL(10, 121, 4), // "last"
QT_MOC_LITERAL(11, 126, 23), // "onHeaderSectionInserted"
QT_MOC_LITERAL(12, 150, 19) // "updateHeaderPixmaps"

    },
    "ctkCheckableHeaderView\0setCheckState\0"
    "\0section\0Qt::CheckState\0checkState\0"
    "onHeaderDataChanged\0Qt::Orientation\0"
    "orient\0first\0last\0onHeaderSectionInserted\0"
    "updateHeaderPixmaps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCheckableHeaderView[] = {

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
       6,    3,   39,    2, 0x08 /* Private */,
      11,    0,   46,    2, 0x08 /* Private */,
      12,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ctkCheckableHeaderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkCheckableHeaderView *_t = static_cast<ctkCheckableHeaderView *>(_o);
        switch (_id) {
        case 0: _t->setCheckState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 1: _t->onHeaderDataChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->onHeaderSectionInserted(); break;
        case 3: _t->updateHeaderPixmaps(); break;
        default: ;
        }
    }
}

const QMetaObject ctkCheckableHeaderView::staticMetaObject = {
    { &QHeaderView::staticMetaObject, qt_meta_stringdata_ctkCheckableHeaderView.data,
      qt_meta_data_ctkCheckableHeaderView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCheckableHeaderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCheckableHeaderView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCheckableHeaderView.stringdata))
        return static_cast<void*>(const_cast< ctkCheckableHeaderView*>(this));
    return QHeaderView::qt_metacast(_clname);
}

int ctkCheckableHeaderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
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
