/****************************************************************************
** Meta object code from reading C++ file 'QmitkHistogramWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkHistogramWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkHistogramWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkHistogramWidget_t {
    QByteArrayData data[4];
    char stringdata[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkHistogramWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkHistogramWidget_t qt_meta_stringdata_QmitkHistogramWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QmitkHistogramWidget"
QT_MOC_LITERAL(1, 21, 8), // "OnSelect"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3) // "pos"

    },
    "QmitkHistogramWidget\0OnSelect\0\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkHistogramWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF,    3,

       0        // eod
};

void QmitkHistogramWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkHistogramWidget *_t = static_cast<QmitkHistogramWidget *>(_o);
        switch (_id) {
        case 0: _t->OnSelect((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkHistogramWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QmitkHistogramWidget.data,
      qt_meta_data_QmitkHistogramWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkHistogramWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkHistogramWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkHistogramWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkHistogramWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int QmitkHistogramWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
