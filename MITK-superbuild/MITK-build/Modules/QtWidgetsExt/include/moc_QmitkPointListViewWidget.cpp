/****************************************************************************
** Meta object code from reading C++ file 'QmitkPointListViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkPointListViewWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkPointListViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkPointListViewWidget_t {
    QByteArrayData data[7];
    char stringdata[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkPointListViewWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkPointListViewWidget_t qt_meta_stringdata_QmitkPointListViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QmitkPointListViewWidget"
QT_MOC_LITERAL(1, 25, 21), // "PointSelectionChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 19), // "OnItemDoubleClicked"
QT_MOC_LITERAL(4, 68, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 85, 4), // "item"
QT_MOC_LITERAL(6, 90, 19) // "OnCurrentRowChanged"

    },
    "QmitkPointListViewWidget\0PointSelectionChanged\0"
    "\0OnItemDoubleClicked\0QListWidgetItem*\0"
    "item\0OnCurrentRowChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkPointListViewWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x09 /* Protected */,
       6,    1,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void QmitkPointListViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkPointListViewWidget *_t = static_cast<QmitkPointListViewWidget *>(_o);
        switch (_id) {
        case 0: _t->PointSelectionChanged(); break;
        case 1: _t->OnItemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->OnCurrentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkPointListViewWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkPointListViewWidget::PointSelectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmitkPointListViewWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_QmitkPointListViewWidget.data,
      qt_meta_data_QmitkPointListViewWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkPointListViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkPointListViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkPointListViewWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkPointListViewWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int QmitkPointListViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QmitkPointListViewWidget::PointSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
