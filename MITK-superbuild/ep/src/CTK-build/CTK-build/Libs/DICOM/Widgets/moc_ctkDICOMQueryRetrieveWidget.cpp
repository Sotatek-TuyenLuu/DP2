/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMQueryRetrieveWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMQueryRetrieveWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMQueryRetrieveWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMQueryRetrieveWidget_t {
    QByteArrayData data[15];
    char stringdata[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMQueryRetrieveWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMQueryRetrieveWidget_t qt_meta_stringdata_ctkDICOMQueryRetrieveWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ctkDICOMQueryRetrieveWidget"
QT_MOC_LITERAL(1, 28, 16), // "studiesRetrieved"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8), // "canceled"
QT_MOC_LITERAL(4, 55, 19), // "setRetrieveDatabase"
QT_MOC_LITERAL(5, 75, 32), // "QSharedPointer<ctkDICOMDatabase>"
QT_MOC_LITERAL(6, 108, 16), // "retrieveDatabase"
QT_MOC_LITERAL(7, 125, 5), // "query"
QT_MOC_LITERAL(8, 131, 8), // "retrieve"
QT_MOC_LITERAL(9, 140, 6), // "cancel"
QT_MOC_LITERAL(10, 147, 22), // "onQueryProgressChanged"
QT_MOC_LITERAL(11, 170, 5), // "value"
QT_MOC_LITERAL(12, 176, 22), // "updateRetrieveProgress"
QT_MOC_LITERAL(13, 199, 17), // "dicomTableManager"
QT_MOC_LITERAL(14, 217, 21) // "ctkDICOMTableManager*"

    },
    "ctkDICOMQueryRetrieveWidget\0"
    "studiesRetrieved\0\0canceled\0"
    "setRetrieveDatabase\0"
    "QSharedPointer<ctkDICOMDatabase>\0"
    "retrieveDatabase\0query\0retrieve\0cancel\0"
    "onQueryProgressChanged\0value\0"
    "updateRetrieveProgress\0dicomTableManager\0"
    "ctkDICOMTableManager*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMQueryRetrieveWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   58,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x09 /* Protected */,
      12,    1,   67,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x00095009,

       0        // eod
};

void ctkDICOMQueryRetrieveWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMQueryRetrieveWidget *_t = static_cast<ctkDICOMQueryRetrieveWidget *>(_o);
        switch (_id) {
        case 0: _t->studiesRetrieved((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->canceled(); break;
        case 2: _t->setRetrieveDatabase((*reinterpret_cast< QSharedPointer<ctkDICOMDatabase>(*)>(_a[1]))); break;
        case 3: _t->query(); break;
        case 4: _t->retrieve(); break;
        case 5: _t->cancel(); break;
        case 6: _t->onQueryProgressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateRetrieveProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ctkDICOMDatabase> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDICOMQueryRetrieveWidget::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMQueryRetrieveWidget::studiesRetrieved)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkDICOMQueryRetrieveWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMQueryRetrieveWidget::canceled)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ctkDICOMQueryRetrieveWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkDICOMQueryRetrieveWidget.data,
      qt_meta_data_ctkDICOMQueryRetrieveWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMQueryRetrieveWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMQueryRetrieveWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMQueryRetrieveWidget.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMQueryRetrieveWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkDICOMQueryRetrieveWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ctkDICOMTableManager**>(_v) = dicomTableManager(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
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

// SIGNAL 0
void ctkDICOMQueryRetrieveWidget::studiesRetrieved(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDICOMQueryRetrieveWidget::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
