/****************************************************************************
** Meta object code from reading C++ file 'QmitkSegmentationView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkSegmentationView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkSegmentationView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkSegmentationView_t {
    QByteArrayData data[13];
    char stringdata[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkSegmentationView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkSegmentationView_t qt_meta_stringdata_QmitkSegmentationView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QmitkSegmentationView"
QT_MOC_LITERAL(1, 22, 33), // "OnPatientComboBoxSelectionCha..."
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 21), // "const mitk::DataNode*"
QT_MOC_LITERAL(4, 79, 4), // "node"
QT_MOC_LITERAL(5, 84, 38), // "OnSegmentationComboBoxSelecti..."
QT_MOC_LITERAL(6, 123, 21), // "CreateNewSegmentation"
QT_MOC_LITERAL(7, 145, 22), // "OnManualTool2DSelected"
QT_MOC_LITERAL(8, 168, 2), // "id"
QT_MOC_LITERAL(9, 171, 30), // "OnWorkingNodeVisibilityChanged"
QT_MOC_LITERAL(10, 202, 23), // "OnBinaryPropertyChanged"
QT_MOC_LITERAL(11, 226, 17), // "OnShowMarkerNodes"
QT_MOC_LITERAL(12, 244, 18) // "OnTabWidgetChanged"

    },
    "QmitkSegmentationView\0"
    "OnPatientComboBoxSelectionChanged\0\0"
    "const mitk::DataNode*\0node\0"
    "OnSegmentationComboBoxSelectionChanged\0"
    "CreateNewSegmentation\0OnManualTool2DSelected\0"
    "id\0OnWorkingNodeVisibilityChanged\0"
    "OnBinaryPropertyChanged\0OnShowMarkerNodes\0"
    "OnTabWidgetChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkSegmentationView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x09 /* Protected */,
       5,    1,   57,    2, 0x09 /* Protected */,
       6,    0,   60,    2, 0x09 /* Protected */,
       7,    1,   61,    2, 0x09 /* Protected */,
       9,    0,   64,    2, 0x09 /* Protected */,
      10,    0,   65,    2, 0x09 /* Protected */,
      11,    1,   66,    2, 0x09 /* Protected */,
      12,    1,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void QmitkSegmentationView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkSegmentationView *_t = static_cast<QmitkSegmentationView *>(_o);
        switch (_id) {
        case 0: _t->OnPatientComboBoxSelectionChanged((*reinterpret_cast< const mitk::DataNode*(*)>(_a[1]))); break;
        case 1: _t->OnSegmentationComboBoxSelectionChanged((*reinterpret_cast< const mitk::DataNode*(*)>(_a[1]))); break;
        case 2: _t->CreateNewSegmentation(); break;
        case 3: _t->OnManualTool2DSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnWorkingNodeVisibilityChanged(); break;
        case 5: _t->OnBinaryPropertyChanged(); break;
        case 6: _t->OnShowMarkerNodes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->OnTabWidgetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkSegmentationView::staticMetaObject = {
    { &QmitkFunctionality::staticMetaObject, qt_meta_stringdata_QmitkSegmentationView.data,
      qt_meta_data_QmitkSegmentationView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkSegmentationView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkSegmentationView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkSegmentationView.stringdata))
        return static_cast<void*>(const_cast< QmitkSegmentationView*>(this));
    return QmitkFunctionality::qt_metacast(_clname);
}

int QmitkSegmentationView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkFunctionality::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
