/****************************************************************************
** Meta object code from reading C++ file 'berryQtShowPerspectiveDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryQtShowPerspectiveDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryQtShowPerspectiveDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__QtShowPerspectiveDialog_t {
    QByteArrayData data[4];
    char stringdata[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__QtShowPerspectiveDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__QtShowPerspectiveDialog_t qt_meta_stringdata_berry__QtShowPerspectiveDialog = {
    {
QT_MOC_LITERAL(0, 0, 30), // "berry::QtShowPerspectiveDialog"
QT_MOC_LITERAL(1, 31, 14), // "setDescription"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5) // "index"

    },
    "berry::QtShowPerspectiveDialog\0"
    "setDescription\0\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__QtShowPerspectiveDialog[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,

       0        // eod
};

void berry::QtShowPerspectiveDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtShowPerspectiveDialog *_t = static_cast<QtShowPerspectiveDialog *>(_o);
        switch (_id) {
        case 0: _t->setDescription((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject berry::QtShowPerspectiveDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_berry__QtShowPerspectiveDialog.data,
      qt_meta_data_berry__QtShowPerspectiveDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::QtShowPerspectiveDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::QtShowPerspectiveDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__QtShowPerspectiveDialog.stringdata))
        return static_cast<void*>(const_cast< QtShowPerspectiveDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int berry::QtShowPerspectiveDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
