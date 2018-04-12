/****************************************************************************
** Meta object code from reading C++ file 'QmitkNumberPropertyView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkNumberPropertyView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkNumberPropertyView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkNumberPropertyView_t {
    QByteArrayData data[4];
    char stringdata[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkNumberPropertyView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkNumberPropertyView_t qt_meta_stringdata_QmitkNumberPropertyView = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QmitkNumberPropertyView"
QT_MOC_LITERAL(1, 24, 13), // "decimalPlaces"
QT_MOC_LITERAL(2, 38, 6), // "suffix"
QT_MOC_LITERAL(3, 45, 11) // "showPercent"

    },
    "QmitkNumberPropertyView\0decimalPlaces\0"
    "suffix\0showPercent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkNumberPropertyView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Short, 0x00095103,
       2, QMetaType::QString, 0x00095103,
       3, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QmitkNumberPropertyView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QmitkNumberPropertyView::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_QmitkNumberPropertyView.data,
      qt_meta_data_QmitkNumberPropertyView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkNumberPropertyView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkNumberPropertyView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkNumberPropertyView.stringdata))
        return static_cast<void*>(const_cast< QmitkNumberPropertyView*>(this));
    if (!strcmp(_clname, "mitk::PropertyView"))
        return static_cast< mitk::PropertyView*>(const_cast< QmitkNumberPropertyView*>(this));
    return QLabel::qt_metacast(_clname);
}

int QmitkNumberPropertyView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< short*>(_v) = decimalPlaces(); break;
        case 1: *reinterpret_cast< QString*>(_v) = suffix(); break;
        case 2: *reinterpret_cast< bool*>(_v) = showPercent(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDecimalPlaces(*reinterpret_cast< short*>(_v)); break;
        case 1: setSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 2: setShowPercent(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
