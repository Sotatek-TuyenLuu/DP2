/****************************************************************************
** Meta object code from reading C++ file 'QmitkAddNewPropertyDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkAddNewPropertyDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkAddNewPropertyDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkAddNewPropertyDialog_t {
    QByteArrayData data[6];
    char stringdata[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkAddNewPropertyDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkAddNewPropertyDialog_t qt_meta_stringdata_QmitkAddNewPropertyDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QmitkAddNewPropertyDialog"
QT_MOC_LITERAL(1, 26, 14), // "AddNewProperty"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "ShowAdequateValueWidget"
QT_MOC_LITERAL(4, 66, 4), // "type"
QT_MOC_LITERAL(5, 71, 13) // "ValidateValue"

    },
    "QmitkAddNewPropertyDialog\0AddNewProperty\0"
    "\0ShowAdequateValueWidget\0type\0"
    "ValidateValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkAddNewPropertyDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Bool,

       0        // eod
};

void QmitkAddNewPropertyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkAddNewPropertyDialog *_t = static_cast<QmitkAddNewPropertyDialog *>(_o);
        switch (_id) {
        case 0: _t->AddNewProperty(); break;
        case 1: _t->ShowAdequateValueWidget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->ValidateValue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject QmitkAddNewPropertyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QmitkAddNewPropertyDialog.data,
      qt_meta_data_QmitkAddNewPropertyDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkAddNewPropertyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkAddNewPropertyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkAddNewPropertyDialog.stringdata))
        return static_cast<void*>(const_cast< QmitkAddNewPropertyDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QmitkAddNewPropertyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
