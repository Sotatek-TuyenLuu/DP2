/****************************************************************************
** Meta object code from reading C++ file 'QmitkXnatUploadFromDataStorageDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/XNAT/include/QmitkXnatUploadFromDataStorageDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkXnatUploadFromDataStorageDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkXnatUploadFromDataStorageDialog_t {
    QByteArrayData data[9];
    char stringdata[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkXnatUploadFromDataStorageDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkXnatUploadFromDataStorageDialog_t qt_meta_stringdata_QmitkXnatUploadFromDataStorageDialog = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QmitkXnatUploadFromDataStorag..."
QT_MOC_LITERAL(1, 37, 8), // "OnUpload"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 20), // "OnUploadSceneChecked"
QT_MOC_LITERAL(4, 68, 8), // "OnCancel"
QT_MOC_LITERAL(5, 77, 28), // "OnMITKProjectFileNameEntered"
QT_MOC_LITERAL(6, 106, 4), // "text"
QT_MOC_LITERAL(7, 111, 14), // "OnDataSelected"
QT_MOC_LITERAL(8, 126, 21) // "const mitk::DataNode*"

    },
    "QmitkXnatUploadFromDataStorageDialog\0"
    "OnUpload\0\0OnUploadSceneChecked\0OnCancel\0"
    "OnMITKProjectFileNameEntered\0text\0"
    "OnDataSelected\0const mitk::DataNode*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkXnatUploadFromDataStorageDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    1,   42,    2, 0x09 /* Protected */,
       7,    1,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void QmitkXnatUploadFromDataStorageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkXnatUploadFromDataStorageDialog *_t = static_cast<QmitkXnatUploadFromDataStorageDialog *>(_o);
        switch (_id) {
        case 0: _t->OnUpload(); break;
        case 1: _t->OnUploadSceneChecked(); break;
        case 2: _t->OnCancel(); break;
        case 3: _t->OnMITKProjectFileNameEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->OnDataSelected((*reinterpret_cast< const mitk::DataNode*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkXnatUploadFromDataStorageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QmitkXnatUploadFromDataStorageDialog.data,
      qt_meta_data_QmitkXnatUploadFromDataStorageDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkXnatUploadFromDataStorageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkXnatUploadFromDataStorageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkXnatUploadFromDataStorageDialog.stringdata))
        return static_cast<void*>(const_cast< QmitkXnatUploadFromDataStorageDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QmitkXnatUploadFromDataStorageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
