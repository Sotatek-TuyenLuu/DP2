/****************************************************************************
** Meta object code from reading C++ file 'QmitkDeformableClippingPlaneView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkDeformableClippingPlaneView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkDeformableClippingPlaneView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkDeformableClippingPlaneView_t {
    QByteArrayData data[11];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkDeformableClippingPlaneView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkDeformableClippingPlaneView_t qt_meta_stringdata_QmitkDeformableClippingPlaneView = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QmitkDeformableClippingPlaneView"
QT_MOC_LITERAL(1, 33, 26), // "OnComboBoxSelectionChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 21), // "const mitk::DataNode*"
QT_MOC_LITERAL(4, 83, 4), // "node"
QT_MOC_LITERAL(5, 88, 24), // "OnCreateNewClippingPlane"
QT_MOC_LITERAL(6, 113, 25), // "OnCalculateClippingVolume"
QT_MOC_LITERAL(7, 139, 17), // "OnTranslationMode"
QT_MOC_LITERAL(8, 157, 5), // "check"
QT_MOC_LITERAL(9, 163, 14), // "OnRotationMode"
QT_MOC_LITERAL(10, 178, 17) // "OnDeformationMode"

    },
    "QmitkDeformableClippingPlaneView\0"
    "OnComboBoxSelectionChanged\0\0"
    "const mitk::DataNode*\0node\0"
    "OnCreateNewClippingPlane\0"
    "OnCalculateClippingVolume\0OnTranslationMode\0"
    "check\0OnRotationMode\0OnDeformationMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkDeformableClippingPlaneView[] = {

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
       1,    1,   44,    2, 0x09 /* Protected */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    1,   49,    2, 0x09 /* Protected */,
       9,    1,   52,    2, 0x09 /* Protected */,
      10,    1,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void QmitkDeformableClippingPlaneView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkDeformableClippingPlaneView *_t = static_cast<QmitkDeformableClippingPlaneView *>(_o);
        switch (_id) {
        case 0: _t->OnComboBoxSelectionChanged((*reinterpret_cast< const mitk::DataNode*(*)>(_a[1]))); break;
        case 1: _t->OnCreateNewClippingPlane(); break;
        case 2: _t->OnCalculateClippingVolume(); break;
        case 3: _t->OnTranslationMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->OnRotationMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->OnDeformationMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkDeformableClippingPlaneView::staticMetaObject = {
    { &QmitkFunctionality::staticMetaObject, qt_meta_stringdata_QmitkDeformableClippingPlaneView.data,
      qt_meta_data_QmitkDeformableClippingPlaneView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkDeformableClippingPlaneView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkDeformableClippingPlaneView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkDeformableClippingPlaneView.stringdata))
        return static_cast<void*>(const_cast< QmitkDeformableClippingPlaneView*>(this));
    return QmitkFunctionality::qt_metacast(_clname);
}

int QmitkDeformableClippingPlaneView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkFunctionality::qt_metacall(_c, _id, _a);
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
