/****************************************************************************
** Meta object code from reading C++ file 'QmitkBoundingObjectWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkBoundingObjectWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkBoundingObjectWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkBoundingObjectWidget_t {
    QByteArrayData data[12];
    char stringdata[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkBoundingObjectWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkBoundingObjectWidget_t qt_meta_stringdata_QmitkBoundingObjectWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QmitkBoundingObjectWidget"
QT_MOC_LITERAL(1, 26, 22), // "BoundingObjectsChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 20), // "CreateBoundingObject"
QT_MOC_LITERAL(4, 71, 4), // "type"
QT_MOC_LITERAL(5, 76, 18), // "OnDelButtonClicked"
QT_MOC_LITERAL(6, 95, 16), // "SelectionChanged"
QT_MOC_LITERAL(7, 112, 19), // "OnItemDoubleClicked"
QT_MOC_LITERAL(8, 132, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(9, 149, 4), // "item"
QT_MOC_LITERAL(10, 154, 3), // "col"
QT_MOC_LITERAL(11, 158, 17) // "OnItemDataChanged"

    },
    "QmitkBoundingObjectWidget\0"
    "BoundingObjectsChanged\0\0CreateBoundingObject\0"
    "type\0OnDelButtonClicked\0SelectionChanged\0"
    "OnItemDoubleClicked\0QTreeWidgetItem*\0"
    "item\0col\0OnItemDataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkBoundingObjectWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x09 /* Protected */,
       5,    0,   48,    2, 0x09 /* Protected */,
       6,    0,   49,    2, 0x09 /* Protected */,
       7,    2,   50,    2, 0x09 /* Protected */,
      11,    2,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   10,

       0        // eod
};

void QmitkBoundingObjectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkBoundingObjectWidget *_t = static_cast<QmitkBoundingObjectWidget *>(_o);
        switch (_id) {
        case 0: _t->BoundingObjectsChanged(); break;
        case 1: _t->CreateBoundingObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnDelButtonClicked(); break;
        case 3: _t->SelectionChanged(); break;
        case 4: _t->OnItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->OnItemDataChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkBoundingObjectWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkBoundingObjectWidget::BoundingObjectsChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmitkBoundingObjectWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkBoundingObjectWidget.data,
      qt_meta_data_QmitkBoundingObjectWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkBoundingObjectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkBoundingObjectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkBoundingObjectWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkBoundingObjectWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkBoundingObjectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QmitkBoundingObjectWidget::BoundingObjectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
