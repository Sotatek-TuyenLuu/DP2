/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMTableView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMTableView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMTableView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMTableView_t {
    QByteArrayData data[16];
    char stringdata[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMTableView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMTableView_t qt_meta_stringdata_ctkDICOMTableView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ctkDICOMTableView"
QT_MOC_LITERAL(1, 18, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "uids"
QT_MOC_LITERAL(4, 41, 14), // "QItemSelection"
QT_MOC_LITERAL(5, 56, 12), // "queryChanged"
QT_MOC_LITERAL(6, 69, 13), // "doubleClicked"
QT_MOC_LITERAL(7, 83, 18), // "onSelectionChanged"
QT_MOC_LITERAL(8, 102, 13), // "onUpdateQuery"
QT_MOC_LITERAL(9, 116, 28), // "onCustomContextMenuRequested"
QT_MOC_LITERAL(10, 145, 5), // "point"
QT_MOC_LITERAL(11, 151, 17), // "onDatabaseChanged"
QT_MOC_LITERAL(12, 169, 15), // "onFilterChanged"
QT_MOC_LITERAL(13, 185, 15), // "onInstanceAdded"
QT_MOC_LITERAL(14, 201, 9), // "selectAll"
QT_MOC_LITERAL(15, 211, 12) // "filterActive"

    },
    "ctkDICOMTableView\0selectionChanged\0\0"
    "uids\0QItemSelection\0queryChanged\0"
    "doubleClicked\0onSelectionChanged\0"
    "onUpdateQuery\0onCustomContextMenuRequested\0"
    "point\0onDatabaseChanged\0onFilterChanged\0"
    "onInstanceAdded\0selectAll\0filterActive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMTableView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       1,    2,   72,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   83,    2, 0x0a /* Public */,
       8,    1,   84,    2, 0x0a /* Public */,
       9,    1,   87,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x09 /* Protected */,
      12,    0,   91,    2, 0x09 /* Protected */,
      13,    0,   92,    2, 0x09 /* Protected */,
      14,    0,   93,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QModelIndex,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00095001,

       0        // eod
};

void ctkDICOMTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMTableView *_t = static_cast<ctkDICOMTableView *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->queryChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->onSelectionChanged(); break;
        case 5: _t->onUpdateQuery((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->onCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->onDatabaseChanged(); break;
        case 8: _t->onFilterChanged(); break;
        case 9: _t->onInstanceAdded(); break;
        case 10: _t->selectAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDICOMTableView::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableView::selectionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkDICOMTableView::*_t)(const QItemSelection & , const QItemSelection & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableView::selectionChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkDICOMTableView::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableView::queryChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkDICOMTableView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableView::doubleClicked)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject ctkDICOMTableView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkDICOMTableView.data,
      qt_meta_data_ctkDICOMTableView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMTableView.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMTableView*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkDICOMTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = filterActive(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkDICOMTableView::selectionChanged(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDICOMTableView::selectionChanged(const QItemSelection & _t1, const QItemSelection & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkDICOMTableView::queryChanged(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkDICOMTableView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
