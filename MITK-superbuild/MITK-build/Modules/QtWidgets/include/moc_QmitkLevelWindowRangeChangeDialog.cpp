/****************************************************************************
** Meta object code from reading C++ file 'QmitkLevelWindowRangeChangeDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgets/include/QmitkLevelWindowRangeChangeDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkLevelWindowRangeChangeDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkLevelWindowRangeChangeDialog_t {
    QByteArrayData data[3];
    char stringdata[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkLevelWindowRangeChangeDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkLevelWindowRangeChangeDialog_t qt_meta_stringdata_QmitkLevelWindowRangeChangeDialog = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QmitkLevelWindowRangeChangeDi..."
QT_MOC_LITERAL(1, 34, 14), // "inputValidator"
QT_MOC_LITERAL(2, 49, 0) // ""

    },
    "QmitkLevelWindowRangeChangeDialog\0"
    "inputValidator\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkLevelWindowRangeChangeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QmitkLevelWindowRangeChangeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkLevelWindowRangeChangeDialog *_t = static_cast<QmitkLevelWindowRangeChangeDialog *>(_o);
        switch (_id) {
        case 0: _t->inputValidator(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QmitkLevelWindowRangeChangeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QmitkLevelWindowRangeChangeDialog.data,
      qt_meta_data_QmitkLevelWindowRangeChangeDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkLevelWindowRangeChangeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkLevelWindowRangeChangeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkLevelWindowRangeChangeDialog.stringdata))
        return static_cast<void*>(const_cast< QmitkLevelWindowRangeChangeDialog*>(this));
    if (!strcmp(_clname, "Ui::QmitkLevelWindowRangeChange"))
        return static_cast< Ui::QmitkLevelWindowRangeChange*>(const_cast< QmitkLevelWindowRangeChangeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QmitkLevelWindowRangeChangeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
