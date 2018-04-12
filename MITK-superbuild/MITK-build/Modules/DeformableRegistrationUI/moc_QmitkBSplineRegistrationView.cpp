/****************************************************************************
** Meta object code from reading C++ file 'QmitkBSplineRegistrationView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../MITK/Modules/DeformableRegistrationUI/QmitkBSplineRegistrationView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkBSplineRegistrationView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkBSplineRegistrationView_t {
    QByteArrayData data[8];
    char stringdata[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkBSplineRegistrationView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkBSplineRegistrationView_t qt_meta_stringdata_QmitkBSplineRegistrationView = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QmitkBSplineRegistrationView"
QT_MOC_LITERAL(1, 29, 23), // "CalculateTransformation"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 21), // "PrintDeformationField"
QT_MOC_LITERAL(4, 76, 22), // "SelectDeformationField"
QT_MOC_LITERAL(5, 99, 17), // "OptimizerSelected"
QT_MOC_LITERAL(6, 117, 9), // "optimizer"
QT_MOC_LITERAL(7, 127, 22) // "HideAllOptimizerFrames"

    },
    "QmitkBSplineRegistrationView\0"
    "CalculateTransformation\0\0PrintDeformationField\0"
    "SelectDeformationField\0OptimizerSelected\0"
    "optimizer\0HideAllOptimizerFrames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkBSplineRegistrationView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    1,   42,    2, 0x09 /* Protected */,
       7,    0,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void QmitkBSplineRegistrationView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkBSplineRegistrationView *_t = static_cast<QmitkBSplineRegistrationView *>(_o);
        switch (_id) {
        case 0: _t->CalculateTransformation(); break;
        case 1: _t->PrintDeformationField(); break;
        case 2: _t->SelectDeformationField(); break;
        case 3: _t->OptimizerSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->HideAllOptimizerFrames(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkBSplineRegistrationView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkBSplineRegistrationView.data,
      qt_meta_data_QmitkBSplineRegistrationView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkBSplineRegistrationView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkBSplineRegistrationView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkBSplineRegistrationView.stringdata))
        return static_cast<void*>(const_cast< QmitkBSplineRegistrationView*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkBSplineRegistrationView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
