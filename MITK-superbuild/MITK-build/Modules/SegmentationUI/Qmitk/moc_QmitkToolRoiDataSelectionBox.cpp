/****************************************************************************
** Meta object code from reading C++ file 'QmitkToolRoiDataSelectionBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkToolRoiDataSelectionBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkToolRoiDataSelectionBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkToolRoiDataSelectionBox_t {
    QByteArrayData data[7];
    char stringdata[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkToolRoiDataSelectionBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkToolRoiDataSelectionBox_t qt_meta_stringdata_QmitkToolRoiDataSelectionBox = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QmitkToolRoiDataSelectionBox"
QT_MOC_LITERAL(1, 29, 15), // "RoiDataSelected"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "const mitk::DataNode*"
QT_MOC_LITERAL(4, 68, 4), // "node"
QT_MOC_LITERAL(5, 73, 25), // "OnRoiDataSelectionChanged"
QT_MOC_LITERAL(6, 99, 4) // "name"

    },
    "QmitkToolRoiDataSelectionBox\0"
    "RoiDataSelected\0\0const mitk::DataNode*\0"
    "node\0OnRoiDataSelectionChanged\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkToolRoiDataSelectionBox[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x09 /* Protected */,
       5,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void QmitkToolRoiDataSelectionBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkToolRoiDataSelectionBox *_t = static_cast<QmitkToolRoiDataSelectionBox *>(_o);
        switch (_id) {
        case 0: _t->RoiDataSelected((*reinterpret_cast< const mitk::DataNode*(*)>(_a[1]))); break;
        case 1: _t->OnRoiDataSelectionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnRoiDataSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkToolRoiDataSelectionBox::*_t)(const mitk::DataNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkToolRoiDataSelectionBox::RoiDataSelected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmitkToolRoiDataSelectionBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkToolRoiDataSelectionBox.data,
      qt_meta_data_QmitkToolRoiDataSelectionBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkToolRoiDataSelectionBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkToolRoiDataSelectionBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkToolRoiDataSelectionBox.stringdata))
        return static_cast<void*>(const_cast< QmitkToolRoiDataSelectionBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkToolRoiDataSelectionBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QmitkToolRoiDataSelectionBox::RoiDataSelected(const mitk::DataNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
