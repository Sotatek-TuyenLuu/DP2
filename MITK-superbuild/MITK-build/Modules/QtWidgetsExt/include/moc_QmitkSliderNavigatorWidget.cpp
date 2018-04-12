/****************************************************************************
** Meta object code from reading C++ file 'QmitkSliderNavigatorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkSliderNavigatorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkSliderNavigatorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkSliderNavigatorWidget_t {
    QByteArrayData data[25];
    char stringdata[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkSliderNavigatorWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkSliderNavigatorWidget_t qt_meta_stringdata_QmitkSliderNavigatorWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QmitkSliderNavigatorWidget"
QT_MOC_LITERAL(1, 27, 7), // "Refetch"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "SetStepper"
QT_MOC_LITERAL(4, 47, 14), // "mitk::Stepper*"
QT_MOC_LITERAL(5, 62, 7), // "stepper"
QT_MOC_LITERAL(6, 70, 10), // "ShowLabels"
QT_MOC_LITERAL(7, 81, 4), // "show"
QT_MOC_LITERAL(8, 86, 13), // "ShowLabelUnit"
QT_MOC_LITERAL(9, 100, 6), // "SetPos"
QT_MOC_LITERAL(10, 107, 3), // "val"
QT_MOC_LITERAL(11, 111, 19), // "SetInverseDirection"
QT_MOC_LITERAL(12, 131, 16), // "inverseDirection"
QT_MOC_LITERAL(13, 148, 19), // "slider_valueChanged"
QT_MOC_LITERAL(14, 168, 14), // "SetLabelValues"
QT_MOC_LITERAL(15, 183, 3), // "min"
QT_MOC_LITERAL(16, 187, 3), // "max"
QT_MOC_LITERAL(17, 191, 19), // "SetLabelValuesValid"
QT_MOC_LITERAL(18, 211, 8), // "minValid"
QT_MOC_LITERAL(19, 220, 8), // "maxValid"
QT_MOC_LITERAL(20, 229, 12), // "SetLabelUnit"
QT_MOC_LITERAL(21, 242, 11), // "const char*"
QT_MOC_LITERAL(22, 254, 4), // "unit"
QT_MOC_LITERAL(23, 259, 9), // "SetLabels"
QT_MOC_LITERAL(24, 269, 20) // "spinBox_valueChanged"

    },
    "QmitkSliderNavigatorWidget\0Refetch\0\0"
    "SetStepper\0mitk::Stepper*\0stepper\0"
    "ShowLabels\0show\0ShowLabelUnit\0SetPos\0"
    "val\0SetInverseDirection\0inverseDirection\0"
    "slider_valueChanged\0SetLabelValues\0"
    "min\0max\0SetLabelValuesValid\0minValid\0"
    "maxValid\0SetLabelUnit\0const char*\0"
    "unit\0SetLabels\0spinBox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkSliderNavigatorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       6,    1,   78,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
       9,    1,   84,    2, 0x0a /* Public */,
      11,    1,   87,    2, 0x0a /* Public */,
      13,    1,   90,    2, 0x09 /* Protected */,
      14,    2,   93,    2, 0x09 /* Protected */,
      17,    2,   98,    2, 0x09 /* Protected */,
      20,    1,  103,    2, 0x09 /* Protected */,
      23,    0,  106,    2, 0x09 /* Protected */,
      24,    1,  107,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   15,   16,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void QmitkSliderNavigatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkSliderNavigatorWidget *_t = static_cast<QmitkSliderNavigatorWidget *>(_o);
        switch (_id) {
        case 0: _t->Refetch(); break;
        case 1: _t->SetStepper((*reinterpret_cast< mitk::Stepper*(*)>(_a[1]))); break;
        case 2: _t->ShowLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->ShowLabelUnit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SetPos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->SetInverseDirection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->SetLabelValues((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->SetLabelValuesValid((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->SetLabelUnit((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 10: _t->SetLabels(); break;
        case 11: _t->spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkSliderNavigatorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkSliderNavigatorWidget.data,
      qt_meta_data_QmitkSliderNavigatorWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkSliderNavigatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkSliderNavigatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkSliderNavigatorWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkSliderNavigatorWidget*>(this));
    if (!strcmp(_clname, "Ui::QmitkSliderNavigator"))
        return static_cast< Ui::QmitkSliderNavigator*>(const_cast< QmitkSliderNavigatorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkSliderNavigatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
