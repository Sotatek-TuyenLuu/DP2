/****************************************************************************
** Meta object code from reading C++ file 'QmitkPropertyTreeView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkPropertyTreeView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkPropertyTreeView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkPropertyTreeView_t {
    QByteArrayData data[11];
    char stringdata[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkPropertyTreeView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkPropertyTreeView_t qt_meta_stringdata_QmitkPropertyTreeView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QmitkPropertyTreeView"
QT_MOC_LITERAL(1, 22, 19), // "OnCurrentRowChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 7), // "current"
QT_MOC_LITERAL(4, 51, 8), // "previous"
QT_MOC_LITERAL(5, 60, 21), // "OnPropertyListChanged"
QT_MOC_LITERAL(6, 82, 5), // "index"
QT_MOC_LITERAL(7, 88, 16), // "OnAddNewProperty"
QT_MOC_LITERAL(8, 105, 19), // "OnFilterTextChanged"
QT_MOC_LITERAL(9, 125, 6), // "filter"
QT_MOC_LITERAL(10, 132, 12) // "OnModelReset"

    },
    "QmitkPropertyTreeView\0OnCurrentRowChanged\0"
    "\0current\0previous\0OnPropertyListChanged\0"
    "index\0OnAddNewProperty\0OnFilterTextChanged\0"
    "filter\0OnModelReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkPropertyTreeView[] = {

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
       1,    2,   39,    2, 0x08 /* Private */,
       5,    1,   44,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,
       8,    1,   48,    2, 0x08 /* Private */,
      10,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void QmitkPropertyTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkPropertyTreeView *_t = static_cast<QmitkPropertyTreeView *>(_o);
        switch (_id) {
        case 0: _t->OnCurrentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->OnPropertyListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnAddNewProperty(); break;
        case 3: _t->OnFilterTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->OnModelReset(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkPropertyTreeView::staticMetaObject = {
    { &QmitkAbstractView::staticMetaObject, qt_meta_stringdata_QmitkPropertyTreeView.data,
      qt_meta_data_QmitkPropertyTreeView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkPropertyTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkPropertyTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkPropertyTreeView.stringdata))
        return static_cast<void*>(const_cast< QmitkPropertyTreeView*>(this));
    if (!strcmp(_clname, "mitk::IRenderWindowPartListener"))
        return static_cast< mitk::IRenderWindowPartListener*>(const_cast< QmitkPropertyTreeView*>(this));
    return QmitkAbstractView::qt_metacast(_clname);
}

int QmitkPropertyTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkAbstractView::qt_metacall(_c, _id, _a);
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
