/****************************************************************************
** Meta object code from reading C++ file 'QmitkFreeIsoDoseLevelWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/RTUI/Qmitk/QmitkFreeIsoDoseLevelWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkFreeIsoDoseLevelWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkFreeIsoDoseLevelWidget_t {
    QByteArrayData data[20];
    char stringdata[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkFreeIsoDoseLevelWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkFreeIsoDoseLevelWidget_t qt_meta_stringdata_QmitkFreeIsoDoseLevelWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QmitkFreeIsoDoseLevelWidget"
QT_MOC_LITERAL(1, 28, 12), // "ValueChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 19), // "mitk::IsoDoseLevel*"
QT_MOC_LITERAL(4, 62, 18), // "mitk::DoseValueRel"
QT_MOC_LITERAL(5, 81, 8), // "oldValue"
QT_MOC_LITERAL(6, 90, 12), // "ColorChanged"
QT_MOC_LITERAL(7, 103, 25), // "VisualizationStyleChanged"
QT_MOC_LITERAL(8, 129, 16), // "setReferenceDose"
QT_MOC_LITERAL(9, 146, 16), // "newReferenceDose"
QT_MOC_LITERAL(10, 163, 15), // "setIsoDoseLevel"
QT_MOC_LITERAL(11, 179, 5), // "level"
QT_MOC_LITERAL(12, 185, 17), // "OnRelValueChanged"
QT_MOC_LITERAL(13, 203, 8), // "newValue"
QT_MOC_LITERAL(14, 212, 17), // "OnAbsValueChanged"
QT_MOC_LITERAL(15, 230, 15), // "OnSliderChanged"
QT_MOC_LITERAL(16, 246, 16), // "OnVisibleClicked"
QT_MOC_LITERAL(17, 263, 7), // "checked"
QT_MOC_LITERAL(18, 271, 14), // "OnColorChanged"
QT_MOC_LITERAL(19, 286, 5) // "color"

    },
    "QmitkFreeIsoDoseLevelWidget\0ValueChanged\0"
    "\0mitk::IsoDoseLevel*\0mitk::DoseValueRel\0"
    "oldValue\0ColorChanged\0VisualizationStyleChanged\0"
    "setReferenceDose\0newReferenceDose\0"
    "setIsoDoseLevel\0level\0OnRelValueChanged\0"
    "newValue\0OnAbsValueChanged\0OnSliderChanged\0"
    "OnVisibleClicked\0checked\0OnColorChanged\0"
    "color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkFreeIsoDoseLevelWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       6,    1,   69,    2, 0x06 /* Public */,
       7,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   75,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x0a /* Public */,
      14,    1,   84,    2, 0x0a /* Public */,
      15,    1,   87,    2, 0x0a /* Public */,
      16,    1,   90,    2, 0x0a /* Public */,
      18,    1,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    5,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QColor,   19,

       0        // eod
};

void QmitkFreeIsoDoseLevelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkFreeIsoDoseLevelWidget *_t = static_cast<QmitkFreeIsoDoseLevelWidget *>(_o);
        switch (_id) {
        case 0: _t->ValueChanged((*reinterpret_cast< mitk::IsoDoseLevel*(*)>(_a[1])),(*reinterpret_cast< mitk::DoseValueRel(*)>(_a[2]))); break;
        case 1: _t->ColorChanged((*reinterpret_cast< mitk::IsoDoseLevel*(*)>(_a[1]))); break;
        case 2: _t->VisualizationStyleChanged((*reinterpret_cast< mitk::IsoDoseLevel*(*)>(_a[1]))); break;
        case 3: _t->setReferenceDose((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setIsoDoseLevel((*reinterpret_cast< mitk::IsoDoseLevel*(*)>(_a[1]))); break;
        case 5: _t->OnRelValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->OnAbsValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->OnSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->OnVisibleClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->OnColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkFreeIsoDoseLevelWidget::*_t)(mitk::IsoDoseLevel * , mitk::DoseValueRel );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkFreeIsoDoseLevelWidget::ValueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkFreeIsoDoseLevelWidget::*_t)(mitk::IsoDoseLevel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkFreeIsoDoseLevelWidget::ColorChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QmitkFreeIsoDoseLevelWidget::*_t)(mitk::IsoDoseLevel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkFreeIsoDoseLevelWidget::VisualizationStyleChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QmitkFreeIsoDoseLevelWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkFreeIsoDoseLevelWidget.data,
      qt_meta_data_QmitkFreeIsoDoseLevelWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkFreeIsoDoseLevelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkFreeIsoDoseLevelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkFreeIsoDoseLevelWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkFreeIsoDoseLevelWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkFreeIsoDoseLevelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QmitkFreeIsoDoseLevelWidget::ValueChanged(mitk::IsoDoseLevel * _t1, mitk::DoseValueRel _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmitkFreeIsoDoseLevelWidget::ColorChanged(mitk::IsoDoseLevel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmitkFreeIsoDoseLevelWidget::VisualizationStyleChanged(mitk::IsoDoseLevel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
