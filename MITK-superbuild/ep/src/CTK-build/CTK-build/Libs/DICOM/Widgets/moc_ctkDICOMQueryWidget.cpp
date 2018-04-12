/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMQueryWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMQueryWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMQueryWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMQueryWidget_t {
    QByteArrayData data[6];
    char stringdata[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMQueryWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMQueryWidget_t qt_meta_stringdata_ctkDICOMQueryWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ctkDICOMQueryWidget"
QT_MOC_LITERAL(1, 20, 16), // "parameterChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "returnPressed"
QT_MOC_LITERAL(4, 52, 15), // "onReturnPressed"
QT_MOC_LITERAL(5, 68, 10) // "startTimer"

    },
    "ctkDICOMQueryWidget\0parameterChanged\0"
    "\0returnPressed\0onReturnPressed\0"
    "startTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMQueryWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ctkDICOMQueryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMQueryWidget *_t = static_cast<ctkDICOMQueryWidget *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged(); break;
        case 1: _t->returnPressed(); break;
        case 2: _t->onReturnPressed(); break;
        case 3: _t->startTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDICOMQueryWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMQueryWidget::parameterChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkDICOMQueryWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMQueryWidget::returnPressed)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ctkDICOMQueryWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkDICOMQueryWidget.data,
      qt_meta_data_ctkDICOMQueryWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMQueryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMQueryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMQueryWidget.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMQueryWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkDICOMQueryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ctkDICOMQueryWidget::parameterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ctkDICOMQueryWidget::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
