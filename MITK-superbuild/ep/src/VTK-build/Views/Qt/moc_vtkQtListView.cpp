/****************************************************************************
** Meta object code from reading C++ file 'vtkQtListView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../VTK/Views/Qt/vtkQtListView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vtkQtListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_vtkQtListView_t {
    QByteArrayData data[4];
    char stringdata[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vtkQtListView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vtkQtListView_t qt_meta_stringdata_vtkQtListView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "vtkQtListView"
QT_MOC_LITERAL(1, 14, 22), // "slotQtSelectionChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14) // "QItemSelection"

    },
    "vtkQtListView\0slotQtSelectionChanged\0"
    "\0QItemSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vtkQtListView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,

       0        // eod
};

void vtkQtListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        vtkQtListView *_t = static_cast<vtkQtListView *>(_o);
        switch (_id) {
        case 0: _t->slotQtSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject vtkQtListView::staticMetaObject = {
    { &vtkQtView::staticMetaObject, qt_meta_stringdata_vtkQtListView.data,
      qt_meta_data_vtkQtListView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *vtkQtListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vtkQtListView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_vtkQtListView.stringdata))
        return static_cast<void*>(const_cast< vtkQtListView*>(this));
    return vtkQtView::qt_metacast(_clname);
}

int vtkQtListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = vtkQtView::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
