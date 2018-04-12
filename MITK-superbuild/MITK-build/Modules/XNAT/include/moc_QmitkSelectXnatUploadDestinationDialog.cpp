/****************************************************************************
** Meta object code from reading C++ file 'QmitkSelectXnatUploadDestinationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/XNAT/include/QmitkSelectXnatUploadDestinationDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkSelectXnatUploadDestinationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkSelectXnatUploadDestinationDialog_t {
    QByteArrayData data[13];
    char stringdata[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkSelectXnatUploadDestinationDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkSelectXnatUploadDestinationDialog_t qt_meta_stringdata_QmitkSelectXnatUploadDestinationDialog = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QmitkSelectXnatUploadDestinat..."
QT_MOC_LITERAL(1, 39, 8), // "OnUpload"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 16), // "OnSelectResource"
QT_MOC_LITERAL(4, 66, 14), // "selectResource"
QT_MOC_LITERAL(5, 81, 20), // "OnSelectFromTreeView"
QT_MOC_LITERAL(6, 102, 18), // "selectFromTreeView"
QT_MOC_LITERAL(7, 121, 17), // "OnResourceEntered"
QT_MOC_LITERAL(8, 139, 15), // "resourceEntered"
QT_MOC_LITERAL(9, 155, 18), // "OnResourceSelected"
QT_MOC_LITERAL(10, 174, 8), // "resource"
QT_MOC_LITERAL(11, 183, 18), // "OnXnatNodeSelected"
QT_MOC_LITERAL(12, 202, 8) // "OnCancel"

    },
    "QmitkSelectXnatUploadDestinationDialog\0"
    "OnUpload\0\0OnSelectResource\0selectResource\0"
    "OnSelectFromTreeView\0selectFromTreeView\0"
    "OnResourceEntered\0resourceEntered\0"
    "OnResourceSelected\0resource\0"
    "OnXnatNodeSelected\0OnCancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkSelectXnatUploadDestinationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    1,   50,    2, 0x09 /* Protected */,
       5,    1,   53,    2, 0x09 /* Protected */,
       7,    1,   56,    2, 0x09 /* Protected */,
       9,    1,   59,    2, 0x09 /* Protected */,
      11,    1,   62,    2, 0x09 /* Protected */,
      12,    0,   65,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,

       0        // eod
};

void QmitkSelectXnatUploadDestinationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkSelectXnatUploadDestinationDialog *_t = static_cast<QmitkSelectXnatUploadDestinationDialog *>(_o);
        switch (_id) {
        case 0: _t->OnUpload(); break;
        case 1: _t->OnSelectResource((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->OnSelectFromTreeView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->OnResourceEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->OnResourceSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->OnXnatNodeSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->OnCancel(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkSelectXnatUploadDestinationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QmitkSelectXnatUploadDestinationDialog.data,
      qt_meta_data_QmitkSelectXnatUploadDestinationDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkSelectXnatUploadDestinationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkSelectXnatUploadDestinationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkSelectXnatUploadDestinationDialog.stringdata))
        return static_cast<void*>(const_cast< QmitkSelectXnatUploadDestinationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QmitkSelectXnatUploadDestinationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
