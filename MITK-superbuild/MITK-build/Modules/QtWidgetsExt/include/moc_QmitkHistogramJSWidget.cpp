/****************************************************************************
** Meta object code from reading C++ file 'QmitkHistogramJSWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkHistogramJSWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkHistogramJSWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkHistogramJSWidget_t {
    QByteArrayData data[11];
    char stringdata[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkHistogramJSWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkHistogramJSWidget_t qt_meta_stringdata_QmitkHistogramJSWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QmitkHistogramJSWidget"
QT_MOC_LITERAL(1, 23, 17), // "SignalDataChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 18), // "SignalGraphChanged"
QT_MOC_LITERAL(4, 61, 11), // "AddJSObject"
QT_MOC_LITERAL(5, 73, 24), // "OnBarRadioButtonSelected"
QT_MOC_LITERAL(6, 98, 25), // "OnLineRadioButtonSelected"
QT_MOC_LITERAL(7, 124, 11), // "measurement"
QT_MOC_LITERAL(8, 136, 9), // "frequency"
QT_MOC_LITERAL(9, 146, 12), // "useLineGraph"
QT_MOC_LITERAL(10, 159, 16) // "intensityProfile"

    },
    "QmitkHistogramJSWidget\0SignalDataChanged\0"
    "\0SignalGraphChanged\0AddJSObject\0"
    "OnBarRadioButtonSelected\0"
    "OnLineRadioButtonSelected\0measurement\0"
    "frequency\0useLineGraph\0intensityProfile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkHistogramJSWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QVariantList, 0x00095001,
       8, QMetaType::QVariantList, 0x00095001,
       9, QMetaType::Bool, 0x00095001,
      10, QMetaType::Bool, 0x00095001,

       0        // eod
};

void QmitkHistogramJSWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkHistogramJSWidget *_t = static_cast<QmitkHistogramJSWidget *>(_o);
        switch (_id) {
        case 0: _t->SignalDataChanged(); break;
        case 1: _t->SignalGraphChanged(); break;
        case 2: _t->AddJSObject(); break;
        case 3: _t->OnBarRadioButtonSelected(); break;
        case 4: _t->OnLineRadioButtonSelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkHistogramJSWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkHistogramJSWidget::SignalDataChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkHistogramJSWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkHistogramJSWidget::SignalGraphChanged)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QmitkHistogramJSWidget::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_QmitkHistogramJSWidget.data,
      qt_meta_data_QmitkHistogramJSWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkHistogramJSWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkHistogramJSWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkHistogramJSWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkHistogramJSWidget*>(this));
    return QWebView::qt_metacast(_clname);
}

int QmitkHistogramJSWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QVariant>*>(_v) = GetMeasurement(); break;
        case 1: *reinterpret_cast< QList<QVariant>*>(_v) = GetFrequency(); break;
        case 2: *reinterpret_cast< bool*>(_v) = GetUseLineGraph(); break;
        case 3: *reinterpret_cast< bool*>(_v) = GetIntensityProfile(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QmitkHistogramJSWidget::SignalDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmitkHistogramJSWidget::SignalGraphChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
