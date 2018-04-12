/****************************************************************************
** Meta object code from reading C++ file 'QmitkPointListView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkPointListView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkPointListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkPointListView_t {
    QByteArrayData data[17];
    char stringdata[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkPointListView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkPointListView_t qt_meta_stringdata_QmitkPointListView = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QmitkPointListView"
QT_MOC_LITERAL(1, 19, 27), // "SignalPointSelectionChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 20), // "OnPointDoubleClicked"
QT_MOC_LITERAL(4, 69, 5), // "index"
QT_MOC_LITERAL(5, 75, 26), // "OnPointSetSelectionChanged"
QT_MOC_LITERAL(6, 102, 26), // "OnListViewSelectionChanged"
QT_MOC_LITERAL(7, 129, 14), // "QItemSelection"
QT_MOC_LITERAL(8, 144, 8), // "selected"
QT_MOC_LITERAL(9, 153, 10), // "deselected"
QT_MOC_LITERAL(10, 164, 15), // "fadeTimeStepOut"
QT_MOC_LITERAL(11, 180, 7), // "ctxMenu"
QT_MOC_LITERAL(12, 188, 3), // "pos"
QT_MOC_LITERAL(13, 192, 9), // "SetFading"
QT_MOC_LITERAL(14, 202, 5), // "onOff"
QT_MOC_LITERAL(15, 208, 14), // "ClearPointList"
QT_MOC_LITERAL(16, 223, 16) // "ClearPointListTS"

    },
    "QmitkPointListView\0SignalPointSelectionChanged\0"
    "\0OnPointDoubleClicked\0index\0"
    "OnPointSetSelectionChanged\0"
    "OnListViewSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0fadeTimeStepOut\0"
    "ctxMenu\0pos\0SetFading\0onOff\0ClearPointList\0"
    "ClearPointListTS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkPointListView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x09 /* Protected */,
       5,    0,   63,    2, 0x09 /* Protected */,
       6,    2,   64,    2, 0x09 /* Protected */,
      10,    0,   69,    2, 0x09 /* Protected */,
      11,    1,   70,    2, 0x09 /* Protected */,
      13,    1,   73,    2, 0x09 /* Protected */,
      15,    0,   76,    2, 0x09 /* Protected */,
      16,    0,   77,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmitkPointListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkPointListView *_t = static_cast<QmitkPointListView *>(_o);
        switch (_id) {
        case 0: _t->SignalPointSelectionChanged(); break;
        case 1: _t->OnPointDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->OnPointSetSelectionChanged(); break;
        case 3: _t->OnListViewSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 4: _t->fadeTimeStepOut(); break;
        case 5: _t->ctxMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->SetFading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->ClearPointList(); break;
        case 8: _t->ClearPointListTS(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkPointListView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkPointListView::SignalPointSelectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmitkPointListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_QmitkPointListView.data,
      qt_meta_data_QmitkPointListView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkPointListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkPointListView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkPointListView.stringdata))
        return static_cast<void*>(const_cast< QmitkPointListView*>(this));
    return QListView::qt_metacast(_clname);
}

int QmitkPointListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QmitkPointListView::SignalPointSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
