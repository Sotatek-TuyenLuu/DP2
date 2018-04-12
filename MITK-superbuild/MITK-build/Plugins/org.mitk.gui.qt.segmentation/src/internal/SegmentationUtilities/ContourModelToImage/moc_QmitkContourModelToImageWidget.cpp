/****************************************************************************
** Meta object code from reading C++ file 'QmitkContourModelToImageWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/SegmentationUtilities/ContourModelToImage/QmitkContourModelToImageWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkContourModelToImageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkContourModelToImageWidget_t {
    QByteArrayData data[8];
    char stringdata[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkContourModelToImageWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkContourModelToImageWidget_t qt_meta_stringdata_QmitkContourModelToImageWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QmitkContourModelToImageWidget"
QT_MOC_LITERAL(1, 31, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "index"
QT_MOC_LITERAL(4, 57, 21), // "const mitk::DataNode*"
QT_MOC_LITERAL(5, 79, 9), // "selection"
QT_MOC_LITERAL(6, 89, 16), // "OnProcessPressed"
QT_MOC_LITERAL(7, 106, 20) // "OnProcessingFinished"

    },
    "QmitkContourModelToImageWidget\0"
    "OnSelectionChanged\0\0index\0"
    "const mitk::DataNode*\0selection\0"
    "OnProcessPressed\0OnProcessingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkContourModelToImageWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x08 /* Private */,
       6,    0,   34,    2, 0x08 /* Private */,
       7,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmitkContourModelToImageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkContourModelToImageWidget *_t = static_cast<QmitkContourModelToImageWidget *>(_o);
        switch (_id) {
        case 0: _t->OnSelectionChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const mitk::DataNode*(*)>(_a[2]))); break;
        case 1: _t->OnProcessPressed(); break;
        case 2: _t->OnProcessingFinished(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkContourModelToImageWidget::staticMetaObject = {
    { &QmitkSegmentationUtilityWidget::staticMetaObject, qt_meta_stringdata_QmitkContourModelToImageWidget.data,
      qt_meta_data_QmitkContourModelToImageWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkContourModelToImageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkContourModelToImageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkContourModelToImageWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkContourModelToImageWidget*>(this));
    return QmitkSegmentationUtilityWidget::qt_metacast(_clname);
}

int QmitkContourModelToImageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkSegmentationUtilityWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
