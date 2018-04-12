/****************************************************************************
** Meta object code from reading C++ file 'QmitkTransferFunctionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkTransferFunctionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkTransferFunctionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkTransferFunctionWidget_t {
    QByteArrayData data[14];
    char stringdata[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkTransferFunctionWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkTransferFunctionWidget_t qt_meta_stringdata_QmitkTransferFunctionWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QmitkTransferFunctionWidget"
QT_MOC_LITERAL(1, 28, 15), // "SetXValueScalar"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4), // "text"
QT_MOC_LITERAL(4, 50, 15), // "SetYValueScalar"
QT_MOC_LITERAL(5, 66, 17), // "SetXValueGradient"
QT_MOC_LITERAL(6, 84, 17), // "SetYValueGradient"
QT_MOC_LITERAL(7, 102, 14), // "SetXValueColor"
QT_MOC_LITERAL(8, 117, 14), // "OnUpdateCanvas"
QT_MOC_LITERAL(9, 132, 12), // "UpdateRanges"
QT_MOC_LITERAL(10, 145, 13), // "OnResetSlider"
QT_MOC_LITERAL(11, 159, 13), // "OnSpanChanged"
QT_MOC_LITERAL(12, 173, 5), // "lower"
QT_MOC_LITERAL(13, 179, 5) // "upper"

    },
    "QmitkTransferFunctionWidget\0SetXValueScalar\0"
    "\0text\0SetYValueScalar\0SetXValueGradient\0"
    "SetYValueGradient\0SetXValueColor\0"
    "OnUpdateCanvas\0UpdateRanges\0OnResetSlider\0"
    "OnSpanChanged\0lower\0upper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkTransferFunctionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       5,    1,   65,    2, 0x0a /* Public */,
       6,    1,   68,    2, 0x0a /* Public */,
       7,    1,   71,    2, 0x0a /* Public */,
       8,    0,   74,    2, 0x0a /* Public */,
       9,    0,   75,    2, 0x0a /* Public */,
      10,    0,   76,    2, 0x0a /* Public */,
      11,    2,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,

       0        // eod
};

void QmitkTransferFunctionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkTransferFunctionWidget *_t = static_cast<QmitkTransferFunctionWidget *>(_o);
        switch (_id) {
        case 0: _t->SetXValueScalar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SetYValueScalar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->SetXValueGradient((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->SetYValueGradient((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->SetXValueColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->OnUpdateCanvas(); break;
        case 6: _t->UpdateRanges(); break;
        case 7: _t->OnResetSlider(); break;
        case 8: _t->OnSpanChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkTransferFunctionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkTransferFunctionWidget.data,
      qt_meta_data_QmitkTransferFunctionWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkTransferFunctionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkTransferFunctionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkTransferFunctionWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkTransferFunctionWidget*>(this));
    if (!strcmp(_clname, "Ui::QmitkTransferFunctionWidget"))
        return static_cast< Ui::QmitkTransferFunctionWidget*>(const_cast< QmitkTransferFunctionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkTransferFunctionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
