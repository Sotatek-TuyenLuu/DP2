/****************************************************************************
** Meta object code from reading C++ file 'berrySavePerspectiveDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/dialogs/berrySavePerspectiveDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berrySavePerspectiveDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__SavePerspectiveDialog_t {
    QByteArrayData data[8];
    char stringdata[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__SavePerspectiveDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__SavePerspectiveDialog_t qt_meta_stringdata_berry__SavePerspectiveDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "berry::SavePerspectiveDialog"
QT_MOC_LITERAL(1, 29, 22), // "PerspectiveNameChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 4), // "name"
QT_MOC_LITERAL(4, 58, 19), // "PerspectiveSelected"
QT_MOC_LITERAL(5, 78, 14), // "QItemSelection"
QT_MOC_LITERAL(6, 93, 8), // "selected"
QT_MOC_LITERAL(7, 102, 10) // "deselected"

    },
    "berry::SavePerspectiveDialog\0"
    "PerspectiveNameChanged\0\0name\0"
    "PerspectiveSelected\0QItemSelection\0"
    "selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__SavePerspectiveDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       4,    2,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,

       0        // eod
};

void berry::SavePerspectiveDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SavePerspectiveDialog *_t = static_cast<SavePerspectiveDialog *>(_o);
        switch (_id) {
        case 0: _t->PerspectiveNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->PerspectiveSelected((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject berry::SavePerspectiveDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_berry__SavePerspectiveDialog.data,
      qt_meta_data_berry__SavePerspectiveDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::SavePerspectiveDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::SavePerspectiveDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__SavePerspectiveDialog.stringdata))
        return static_cast<void*>(const_cast< SavePerspectiveDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int berry::SavePerspectiveDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
