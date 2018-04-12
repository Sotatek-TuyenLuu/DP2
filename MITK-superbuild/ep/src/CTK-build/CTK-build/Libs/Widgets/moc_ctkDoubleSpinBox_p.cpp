/****************************************************************************
** Meta object code from reading C++ file 'ctkDoubleSpinBox_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDoubleSpinBox_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDoubleSpinBox_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkQDoubleSpinBox_t {
    QByteArrayData data[2];
    char stringdata[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkQDoubleSpinBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkQDoubleSpinBox_t qt_meta_stringdata_ctkQDoubleSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ctkQDoubleSpinBox"
QT_MOC_LITERAL(1, 18, 16) // "invertedControls"

    },
    "ctkQDoubleSpinBox\0invertedControls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkQDoubleSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkQDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkQDoubleSpinBox::staticMetaObject = {
    { &QDoubleSpinBox::staticMetaObject, qt_meta_stringdata_ctkQDoubleSpinBox.data,
      qt_meta_data_ctkQDoubleSpinBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkQDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkQDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkQDoubleSpinBox.stringdata))
        return static_cast<void*>(const_cast< ctkQDoubleSpinBox*>(this));
    return QDoubleSpinBox::qt_metacast(_clname);
}

int ctkQDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = invertedControls(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setInvertedControls(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_ctkDoubleSpinBoxPrivate_t {
    QByteArrayData data[7];
    char stringdata[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDoubleSpinBoxPrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDoubleSpinBoxPrivate_t qt_meta_stringdata_ctkDoubleSpinBoxPrivate = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ctkDoubleSpinBoxPrivate"
QT_MOC_LITERAL(1, 24, 17), // "editorTextChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "text"
QT_MOC_LITERAL(4, 48, 14), // "onValueChanged"
QT_MOC_LITERAL(5, 63, 29), // "onValueProxyAboutToBeModified"
QT_MOC_LITERAL(6, 93, 20) // "onValueProxyModified"

    },
    "ctkDoubleSpinBoxPrivate\0editorTextChanged\0"
    "\0text\0onValueChanged\0onValueProxyAboutToBeModified\0"
    "onValueProxyModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDoubleSpinBoxPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ctkDoubleSpinBoxPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDoubleSpinBoxPrivate *_t = static_cast<ctkDoubleSpinBoxPrivate *>(_o);
        switch (_id) {
        case 0: _t->editorTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onValueChanged(); break;
        case 2: _t->onValueProxyAboutToBeModified(); break;
        case 3: _t->onValueProxyModified(); break;
        default: ;
        }
    }
}

const QMetaObject ctkDoubleSpinBoxPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkDoubleSpinBoxPrivate.data,
      qt_meta_data_ctkDoubleSpinBoxPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDoubleSpinBoxPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDoubleSpinBoxPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDoubleSpinBoxPrivate.stringdata))
        return static_cast<void*>(const_cast< ctkDoubleSpinBoxPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkDoubleSpinBoxPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
