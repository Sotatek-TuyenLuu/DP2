/****************************************************************************
** Meta object code from reading C++ file 'berryQtShowViewDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryQtShowViewDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryQtShowViewDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__QtShowViewDialog_t {
    QByteArrayData data[14];
    char stringdata[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__QtShowViewDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__QtShowViewDialog_t qt_meta_stringdata_berry__QtShowViewDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "berry::QtShowViewDialog"
QT_MOC_LITERAL(1, 24, 14), // "setDescription"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "index"
QT_MOC_LITERAL(4, 46, 19), // "enableKeywordFilter"
QT_MOC_LITERAL(5, 66, 6), // "enable"
QT_MOC_LITERAL(6, 73, 9), // "setFilter"
QT_MOC_LITERAL(7, 83, 6), // "filter"
QT_MOC_LITERAL(8, 90, 17), // "categoryCollapsed"
QT_MOC_LITERAL(9, 108, 16), // "categoryExpanded"
QT_MOC_LITERAL(10, 125, 16), // "selectionChanged"
QT_MOC_LITERAL(11, 142, 14), // "QItemSelection"
QT_MOC_LITERAL(12, 157, 8), // "selected"
QT_MOC_LITERAL(13, 166, 10) // "deselected"

    },
    "berry::QtShowViewDialog\0setDescription\0"
    "\0index\0enableKeywordFilter\0enable\0"
    "setFilter\0filter\0categoryCollapsed\0"
    "categoryExpanded\0selectionChanged\0"
    "QItemSelection\0selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__QtShowViewDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,
       9,    1,   56,    2, 0x08 /* Private */,
      10,    2,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,

       0        // eod
};

void berry::QtShowViewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtShowViewDialog *_t = static_cast<QtShowViewDialog *>(_o);
        switch (_id) {
        case 0: _t->setDescription((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->enableKeywordFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->categoryCollapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->categoryExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject berry::QtShowViewDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_berry__QtShowViewDialog.data,
      qt_meta_data_berry__QtShowViewDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::QtShowViewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::QtShowViewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__QtShowViewDialog.stringdata))
        return static_cast<void*>(const_cast< QtShowViewDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int berry::QtShowViewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
