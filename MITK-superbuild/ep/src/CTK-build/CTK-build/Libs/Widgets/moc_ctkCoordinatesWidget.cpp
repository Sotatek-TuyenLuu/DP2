/****************************************************************************
** Meta object code from reading C++ file 'ctkCoordinatesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCoordinatesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCoordinatesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCoordinatesWidget_t {
    QByteArrayData data[21];
    char stringdata[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCoordinatesWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCoordinatesWidget_t qt_meta_stringdata_ctkCoordinatesWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ctkCoordinatesWidget"
QT_MOC_LITERAL(1, 21, 18), // "coordinatesChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7), // "double*"
QT_MOC_LITERAL(4, 49, 3), // "pos"
QT_MOC_LITERAL(5, 53, 9), // "normalize"
QT_MOC_LITERAL(6, 63, 11), // "setDecimals"
QT_MOC_LITERAL(7, 75, 8), // "decimals"
QT_MOC_LITERAL(8, 84, 17), // "updateCoordinates"
QT_MOC_LITERAL(9, 102, 16), // "updateCoordinate"
QT_MOC_LITERAL(10, 119, 10), // "coordinate"
QT_MOC_LITERAL(11, 130, 9), // "dimension"
QT_MOC_LITERAL(12, 140, 10), // "normalized"
QT_MOC_LITERAL(13, 151, 14), // "decimalsOption"
QT_MOC_LITERAL(14, 166, 33), // "ctkDoubleSpinBox::DecimalsOpt..."
QT_MOC_LITERAL(15, 200, 10), // "singleStep"
QT_MOC_LITERAL(16, 211, 7), // "minimum"
QT_MOC_LITERAL(17, 219, 7), // "maximum"
QT_MOC_LITERAL(18, 227, 11), // "coordinates"
QT_MOC_LITERAL(19, 239, 14), // "sizeHintPolicy"
QT_MOC_LITERAL(20, 254, 32) // "ctkDoubleSpinBox::SizeHintPolicy"

    },
    "ctkCoordinatesWidget\0coordinatesChanged\0"
    "\0double*\0pos\0normalize\0setDecimals\0"
    "decimals\0updateCoordinates\0updateCoordinate\0"
    "coordinate\0dimension\0normalized\0"
    "decimalsOption\0ctkDoubleSpinBox::DecimalsOptions\0"
    "singleStep\0minimum\0maximum\0coordinates\0"
    "sizeHintPolicy\0ctkDoubleSpinBox::SizeHintPolicy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCoordinatesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       9,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,
       8,    0,   46,    2, 0x09 /* Protected */,
       9,    1,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   10,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Bool, 0x00095103,
       7, QMetaType::Int, 0x00095103,
      13, 0x80000000 | 14, 0x0009510b,
      15, QMetaType::Double, 0x00085103,
      16, QMetaType::Double, 0x00095103,
      17, QMetaType::Double, 0x00095103,
      18, QMetaType::QString, 0x00095003,
      19, 0x80000000 | 20, 0x0009510b,

       0        // eod
};

void ctkCoordinatesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkCoordinatesWidget *_t = static_cast<ctkCoordinatesWidget *>(_o);
        switch (_id) {
        case 0: _t->coordinatesChanged((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 1: _t->normalize(); break;
        case 2: _t->setDecimals((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateCoordinates(); break;
        case 4: _t->updateCoordinate((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkCoordinatesWidget::*_t)(double * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCoordinatesWidget::coordinatesChanged)) {
                *result = 0;
            }
        }
    }
}

static const QMetaObject * const qt_meta_extradata_ctkCoordinatesWidget[] = {
        &ctkDoubleSpinBox::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject ctkCoordinatesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkCoordinatesWidget.data,
      qt_meta_data_ctkCoordinatesWidget,  qt_static_metacall, qt_meta_extradata_ctkCoordinatesWidget, Q_NULLPTR}
};


const QMetaObject *ctkCoordinatesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCoordinatesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCoordinatesWidget.stringdata))
        return static_cast<void*>(const_cast< ctkCoordinatesWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkCoordinatesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = dimension(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isNormalized(); break;
        case 2: *reinterpret_cast< int*>(_v) = decimals(); break;
        case 3: *reinterpret_cast< ctkDoubleSpinBox::DecimalsOptions*>(_v) = decimalsOption(); break;
        case 4: *reinterpret_cast< double*>(_v) = singleStep(); break;
        case 5: *reinterpret_cast< double*>(_v) = minimum(); break;
        case 6: *reinterpret_cast< double*>(_v) = maximum(); break;
        case 7: *reinterpret_cast< QString*>(_v) = coordinatesAsString(); break;
        case 8: *reinterpret_cast< ctkDoubleSpinBox::SizeHintPolicy*>(_v) = sizeHintPolicy(); break;
        default: break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDimension(*reinterpret_cast< int*>(_v)); break;
        case 1: setNormalized(*reinterpret_cast< bool*>(_v)); break;
        case 2: setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 3: setDecimalsOption(*reinterpret_cast< ctkDoubleSpinBox::DecimalsOptions*>(_v)); break;
        case 4: setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 5: setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 6: setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 7: setCoordinatesAsString(*reinterpret_cast< QString*>(_v)); break;
        case 8: setSizeHintPolicy(*reinterpret_cast< ctkDoubleSpinBox::SizeHintPolicy*>(_v)); break;
        default: break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkCoordinatesWidget::coordinatesChanged(double * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
