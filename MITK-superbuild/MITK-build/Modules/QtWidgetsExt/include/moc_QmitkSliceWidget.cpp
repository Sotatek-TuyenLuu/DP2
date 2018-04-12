/****************************************************************************
** Meta object code from reading C++ file 'QmitkSliceWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkSliceWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkSliceWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkSliceWidget_t {
    QByteArrayData data[19];
    char stringdata[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkSliceWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkSliceWidget_t qt_meta_stringdata_QmitkSliceWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QmitkSliceWidget"
QT_MOC_LITERAL(1, 17, 7), // "SetData"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 46), // "mitk::DataStorage::SetOfObjec..."
QT_MOC_LITERAL(4, 73, 2), // "it"
QT_MOC_LITERAL(5, 76, 46), // "mitk::SliceNavigationControll..."
QT_MOC_LITERAL(6, 123, 4), // "view"
QT_MOC_LITERAL(7, 128, 23), // "mitk::DataNode::Pointer"
QT_MOC_LITERAL(8, 152, 4), // "node"
QT_MOC_LITERAL(9, 157, 10), // "InitWidget"
QT_MOC_LITERAL(10, 168, 13), // "viewDirection"
QT_MOC_LITERAL(11, 182, 10), // "wheelEvent"
QT_MOC_LITERAL(12, 193, 12), // "QWheelEvent*"
QT_MOC_LITERAL(13, 206, 1), // "e"
QT_MOC_LITERAL(14, 208, 10), // "ChangeView"
QT_MOC_LITERAL(15, 219, 8), // "QAction*"
QT_MOC_LITERAL(16, 228, 3), // "val"
QT_MOC_LITERAL(17, 232, 21), // "SetLevelWindowEnabled"
QT_MOC_LITERAL(18, 254, 6) // "enable"

    },
    "QmitkSliceWidget\0SetData\0\0"
    "mitk::DataStorage::SetOfObjects::ConstIterator\0"
    "it\0mitk::SliceNavigationController::ViewDirection\0"
    "view\0mitk::DataNode::Pointer\0node\0"
    "InitWidget\0viewDirection\0wheelEvent\0"
    "QWheelEvent*\0e\0ChangeView\0QAction*\0"
    "val\0SetLevelWindowEnabled\0enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkSliceWidget[] = {

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
       1,    1,   54,    2, 0x0a /* Public */,
       1,    2,   57,    2, 0x0a /* Public */,
       1,    1,   62,    2, 0x0a /* Public */,
       1,    2,   65,    2, 0x0a /* Public */,
       9,    1,   70,    2, 0x0a /* Public */,
      11,    1,   73,    2, 0x0a /* Public */,
      14,    1,   76,    2, 0x0a /* Public */,
      17,    1,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 5,    8,    6,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Bool,   18,

       0        // eod
};

void QmitkSliceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkSliceWidget *_t = static_cast<QmitkSliceWidget *>(_o);
        switch (_id) {
        case 0: _t->SetData((*reinterpret_cast< mitk::DataStorage::SetOfObjects::ConstIterator(*)>(_a[1]))); break;
        case 1: _t->SetData((*reinterpret_cast< mitk::DataStorage::SetOfObjects::ConstIterator(*)>(_a[1])),(*reinterpret_cast< mitk::SliceNavigationController::ViewDirection(*)>(_a[2]))); break;
        case 2: _t->SetData((*reinterpret_cast< mitk::DataNode::Pointer(*)>(_a[1]))); break;
        case 3: _t->SetData((*reinterpret_cast< mitk::DataNode::Pointer(*)>(_a[1])),(*reinterpret_cast< mitk::SliceNavigationController::ViewDirection(*)>(_a[2]))); break;
        case 4: _t->InitWidget((*reinterpret_cast< mitk::SliceNavigationController::ViewDirection(*)>(_a[1]))); break;
        case 5: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 6: _t->ChangeView((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->SetLevelWindowEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkSliceWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkSliceWidget.data,
      qt_meta_data_QmitkSliceWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkSliceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkSliceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkSliceWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkSliceWidget*>(this));
    if (!strcmp(_clname, "Ui::QmitkSliceWidgetUi"))
        return static_cast< Ui::QmitkSliceWidgetUi*>(const_cast< QmitkSliceWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkSliceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
