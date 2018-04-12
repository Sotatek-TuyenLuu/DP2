/****************************************************************************
** Meta object code from reading C++ file 'ctkCheckableComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCheckableComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCheckableComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCheckableComboBox_t {
    QByteArrayData data[6];
    char stringdata[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCheckableComboBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCheckableComboBox_t qt_meta_stringdata_ctkCheckableComboBox = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ctkCheckableComboBox"
QT_MOC_LITERAL(1, 21, 21), // "checkedIndexesChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13), // "onDataChanged"
QT_MOC_LITERAL(4, 58, 7), // "topLeft"
QT_MOC_LITERAL(5, 66, 11) // "bottomRight"

    },
    "ctkCheckableComboBox\0checkedIndexesChanged\0"
    "\0onDataChanged\0topLeft\0bottomRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCheckableComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    4,    5,

       0        // eod
};

void ctkCheckableComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkCheckableComboBox *_t = static_cast<ctkCheckableComboBox *>(_o);
        switch (_id) {
        case 0: _t->checkedIndexesChanged(); break;
        case 1: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkCheckableComboBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCheckableComboBox::checkedIndexesChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ctkCheckableComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_ctkCheckableComboBox.data,
      qt_meta_data_ctkCheckableComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCheckableComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCheckableComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCheckableComboBox.stringdata))
        return static_cast<void*>(const_cast< ctkCheckableComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int ctkCheckableComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ctkCheckableComboBox::checkedIndexesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
