/****************************************************************************
** Meta object code from reading C++ file 'QmitkNumberPropertyEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkNumberPropertyEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkNumberPropertyEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkNumberPropertyEditor_t {
    QByteArrayData data[7];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkNumberPropertyEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkNumberPropertyEditor_t qt_meta_stringdata_QmitkNumberPropertyEditor = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QmitkNumberPropertyEditor"
QT_MOC_LITERAL(1, 26, 14), // "onValueChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "decimalPlaces"
QT_MOC_LITERAL(4, 56, 11), // "showPercent"
QT_MOC_LITERAL(5, 68, 8), // "minValue"
QT_MOC_LITERAL(6, 77, 8) // "maxValue"

    },
    "QmitkNumberPropertyEditor\0onValueChanged\0"
    "\0decimalPlaces\0showPercent\0minValue\0"
    "maxValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkNumberPropertyEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
       3, QMetaType::Short, 0x00095103,
       4, QMetaType::Bool, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::Int, 0x00095103,

       0        // eod
};

void QmitkNumberPropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkNumberPropertyEditor *_t = static_cast<QmitkNumberPropertyEditor *>(_o);
        switch (_id) {
        case 0: _t->onValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkNumberPropertyEditor::staticMetaObject = {
    { &QSpinBox::staticMetaObject, qt_meta_stringdata_QmitkNumberPropertyEditor.data,
      qt_meta_data_QmitkNumberPropertyEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkNumberPropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkNumberPropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkNumberPropertyEditor.stringdata))
        return static_cast<void*>(const_cast< QmitkNumberPropertyEditor*>(this));
    if (!strcmp(_clname, "mitk::PropertyEditor"))
        return static_cast< mitk::PropertyEditor*>(const_cast< QmitkNumberPropertyEditor*>(this));
    return QSpinBox::qt_metacast(_clname);
}

int QmitkNumberPropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< short*>(_v) = getDecimalPlaces(); break;
        case 1: *reinterpret_cast< bool*>(_v) = getShowPercent(); break;
        case 2: *reinterpret_cast< int*>(_v) = minValue(); break;
        case 3: *reinterpret_cast< int*>(_v) = maxValue(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDecimalPlaces(*reinterpret_cast< short*>(_v)); break;
        case 1: setShowPercent(*reinterpret_cast< bool*>(_v)); break;
        case 2: setMinValue(*reinterpret_cast< int*>(_v)); break;
        case 3: setMaxValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
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
QT_END_MOC_NAMESPACE
