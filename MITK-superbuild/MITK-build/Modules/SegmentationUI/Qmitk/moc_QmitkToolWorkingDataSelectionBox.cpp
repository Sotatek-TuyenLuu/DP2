/****************************************************************************
** Meta object code from reading C++ file 'QmitkToolWorkingDataSelectionBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkToolWorkingDataSelectionBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkToolWorkingDataSelectionBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkToolWorkingDataSelectionBox_t {
    QByteArrayData data[5];
    char stringdata[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkToolWorkingDataSelectionBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkToolWorkingDataSelectionBox_t qt_meta_stringdata_QmitkToolWorkingDataSelectionBox = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QmitkToolWorkingDataSelectionBox"
QT_MOC_LITERAL(1, 33, 19), // "WorkingNodeSelected"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 21), // "const mitk::DataNode*"
QT_MOC_LITERAL(4, 76, 29) // "OnWorkingDataSelectionChanged"

    },
    "QmitkToolWorkingDataSelectionBox\0"
    "WorkingNodeSelected\0\0const mitk::DataNode*\0"
    "OnWorkingDataSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkToolWorkingDataSelectionBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QmitkToolWorkingDataSelectionBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkToolWorkingDataSelectionBox *_t = static_cast<QmitkToolWorkingDataSelectionBox *>(_o);
        switch (_id) {
        case 0: _t->WorkingNodeSelected((*reinterpret_cast< const mitk::DataNode*(*)>(_a[1]))); break;
        case 1: _t->OnWorkingDataSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkToolWorkingDataSelectionBox::*_t)(const mitk::DataNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkToolWorkingDataSelectionBox::WorkingNodeSelected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmitkToolWorkingDataSelectionBox::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_QmitkToolWorkingDataSelectionBox.data,
      qt_meta_data_QmitkToolWorkingDataSelectionBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkToolWorkingDataSelectionBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkToolWorkingDataSelectionBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkToolWorkingDataSelectionBox.stringdata))
        return static_cast<void*>(const_cast< QmitkToolWorkingDataSelectionBox*>(this));
    return QListWidget::qt_metacast(_clname);
}

int QmitkToolWorkingDataSelectionBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QmitkToolWorkingDataSelectionBox::WorkingNodeSelected(const mitk::DataNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
