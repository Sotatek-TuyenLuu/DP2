/****************************************************************************
** Meta object code from reading C++ file 'ctkBooleanMapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkBooleanMapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkBooleanMapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkBooleanMapper_t {
    QByteArrayData data[20];
    char stringdata[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkBooleanMapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkBooleanMapper_t qt_meta_stringdata_ctkBooleanMapper = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ctkBooleanMapper"
QT_MOC_LITERAL(1, 17, 12), // "valueChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "value"
QT_MOC_LITERAL(4, 37, 17), // "complementChanged"
QT_MOC_LITERAL(5, 55, 10), // "complement"
QT_MOC_LITERAL(6, 66, 17), // "valueAsIntChanged"
QT_MOC_LITERAL(7, 84, 20), // "valueAsStringChanged"
QT_MOC_LITERAL(8, 105, 8), // "setValue"
QT_MOC_LITERAL(9, 114, 13), // "setComplement"
QT_MOC_LITERAL(10, 128, 13), // "setValueAsInt"
QT_MOC_LITERAL(11, 142, 16), // "setValueAsString"
QT_MOC_LITERAL(12, 159, 6), // "toggle"
QT_MOC_LITERAL(13, 166, 16), // "emitValueChanged"
QT_MOC_LITERAL(14, 183, 18), // "emitValueAsChanged"
QT_MOC_LITERAL(15, 202, 12), // "propertyName"
QT_MOC_LITERAL(16, 215, 10), // "valueAsInt"
QT_MOC_LITERAL(17, 226, 13), // "valueAsString"
QT_MOC_LITERAL(18, 240, 9), // "trueValue"
QT_MOC_LITERAL(19, 250, 10) // "falseValue"

    },
    "ctkBooleanMapper\0valueChanged\0\0value\0"
    "complementChanged\0complement\0"
    "valueAsIntChanged\0valueAsStringChanged\0"
    "setValue\0setComplement\0setValueAsInt\0"
    "setValueAsString\0toggle\0emitValueChanged\0"
    "emitValueAsChanged\0propertyName\0"
    "valueAsInt\0valueAsString\0trueValue\0"
    "falseValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkBooleanMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       7,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,
       7,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   81,    2, 0x0a /* Public */,
       9,    1,   84,    2, 0x0a /* Public */,
      10,    1,   87,    2, 0x0a /* Public */,
      11,    1,   90,    2, 0x0a /* Public */,
      12,    0,   93,    2, 0x0a /* Public */,
      13,    0,   94,    2, 0x09 /* Protected */,
      14,    0,   95,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QByteArray, 0x00095001,
       3, QMetaType::Bool, 0x00485103,
       5, QMetaType::Bool, 0x00485103,
      16, QMetaType::Int, 0x00485103,
      17, QMetaType::QString, 0x00485103,
      18, QMetaType::QVariant, 0x00095103,
      19, QMetaType::QVariant, 0x00095103,

 // properties: notify_signal_id
       0,
       1,
       1,
       2,
       3,
       0,
       0,

       0        // eod
};

void ctkBooleanMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkBooleanMapper *_t = static_cast<ctkBooleanMapper *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->complementChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->valueAsIntChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->valueAsStringChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setComplement((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setValueAsInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setValueAsString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->toggle(); break;
        case 9: _t->emitValueChanged(); break;
        case 10: _t->emitValueAsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkBooleanMapper::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkBooleanMapper::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkBooleanMapper::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkBooleanMapper::complementChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkBooleanMapper::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkBooleanMapper::valueAsIntChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkBooleanMapper::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkBooleanMapper::valueAsStringChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject ctkBooleanMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkBooleanMapper.data,
      qt_meta_data_ctkBooleanMapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkBooleanMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkBooleanMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkBooleanMapper.stringdata))
        return static_cast<void*>(const_cast< ctkBooleanMapper*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkBooleanMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = propertyName(); break;
        case 1: *reinterpret_cast< bool*>(_v) = value(); break;
        case 2: *reinterpret_cast< bool*>(_v) = complement(); break;
        case 3: *reinterpret_cast< int*>(_v) = valueAsInt(); break;
        case 4: *reinterpret_cast< QString*>(_v) = valueAsString(); break;
        case 5: *reinterpret_cast< QVariant*>(_v) = trueValue(); break;
        case 6: *reinterpret_cast< QVariant*>(_v) = falseValue(); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setValue(*reinterpret_cast< bool*>(_v)); break;
        case 2: setComplement(*reinterpret_cast< bool*>(_v)); break;
        case 3: setValueAsInt(*reinterpret_cast< int*>(_v)); break;
        case 4: setValueAsString(*reinterpret_cast< QString*>(_v)); break;
        case 5: setTrueValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 6: setFalseValue(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkBooleanMapper::valueChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkBooleanMapper::complementChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkBooleanMapper::valueAsIntChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkBooleanMapper::valueAsStringChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
