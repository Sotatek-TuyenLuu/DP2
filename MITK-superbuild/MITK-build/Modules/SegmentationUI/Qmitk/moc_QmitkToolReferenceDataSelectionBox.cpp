/****************************************************************************
** Meta object code from reading C++ file 'QmitkToolReferenceDataSelectionBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkToolReferenceDataSelectionBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkToolReferenceDataSelectionBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkToolReferenceDataSelectionBox_t {
    QByteArrayData data[7];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkToolReferenceDataSelectionBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkToolReferenceDataSelectionBox_t qt_meta_stringdata_QmitkToolReferenceDataSelectionBox = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QmitkToolReferenceDataSelecti..."
QT_MOC_LITERAL(1, 35, 21), // "ReferenceNodeSelected"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 21), // "const mitk::DataNode*"
QT_MOC_LITERAL(4, 80, 23), // "OnReferenceDataSelected"
QT_MOC_LITERAL(5, 104, 4), // "node"
QT_MOC_LITERAL(6, 109, 34) // "EnsureOnlyReferenceImageIsVis..."

    },
    "QmitkToolReferenceDataSelectionBox\0"
    "ReferenceNodeSelected\0\0const mitk::DataNode*\0"
    "OnReferenceDataSelected\0node\0"
    "EnsureOnlyReferenceImageIsVisibile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkToolReferenceDataSelectionBox[] = {

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
       4,    1,   32,    2, 0x09 /* Protected */,
       6,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    5,
    QMetaType::Void,

       0        // eod
};

void QmitkToolReferenceDataSelectionBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkToolReferenceDataSelectionBox *_t = static_cast<QmitkToolReferenceDataSelectionBox *>(_o);
        switch (_id) {
        case 0: _t->ReferenceNodeSelected((*reinterpret_cast< const mitk::DataNode*(*)>(_a[1]))); break;
        case 1: _t->OnReferenceDataSelected((*reinterpret_cast< const mitk::DataNode*(*)>(_a[1]))); break;
        case 2: _t->EnsureOnlyReferenceImageIsVisibile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkToolReferenceDataSelectionBox::*_t)(const mitk::DataNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkToolReferenceDataSelectionBox::ReferenceNodeSelected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmitkToolReferenceDataSelectionBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkToolReferenceDataSelectionBox.data,
      qt_meta_data_QmitkToolReferenceDataSelectionBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkToolReferenceDataSelectionBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkToolReferenceDataSelectionBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkToolReferenceDataSelectionBox.stringdata))
        return static_cast<void*>(const_cast< QmitkToolReferenceDataSelectionBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkToolReferenceDataSelectionBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QmitkToolReferenceDataSelectionBox::ReferenceNodeSelected(const mitk::DataNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
