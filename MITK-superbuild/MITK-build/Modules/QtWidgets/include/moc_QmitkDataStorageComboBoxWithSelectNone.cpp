/****************************************************************************
** Meta object code from reading C++ file 'QmitkDataStorageComboBoxWithSelectNone.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgets/include/QmitkDataStorageComboBoxWithSelectNone.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkDataStorageComboBoxWithSelectNone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkDataStorageComboBoxWithSelectNone_t {
    QByteArrayData data[4];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkDataStorageComboBoxWithSelectNone_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkDataStorageComboBoxWithSelectNone_t qt_meta_stringdata_QmitkDataStorageComboBoxWithSelectNone = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QmitkDataStorageComboBoxWithS..."
QT_MOC_LITERAL(1, 39, 12), // "SelectedNode"
QT_MOC_LITERAL(2, 52, 15), // "mitkDataNodePtr"
QT_MOC_LITERAL(3, 68, 12) // "currentValue"

    },
    "QmitkDataStorageComboBoxWithSelectNone\0"
    "SelectedNode\0mitkDataNodePtr\0currentValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkDataStorageComboBoxWithSelectNone[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009500b,
       3, QMetaType::QString, 0x00095103,

       0        // eod
};

void QmitkDataStorageComboBoxWithSelectNone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mitkDataNodePtr >(); break;
        }
    }

    Q_UNUSED(_o);
}

const QMetaObject QmitkDataStorageComboBoxWithSelectNone::staticMetaObject = {
    { &QmitkDataStorageComboBox::staticMetaObject, qt_meta_stringdata_QmitkDataStorageComboBoxWithSelectNone.data,
      qt_meta_data_QmitkDataStorageComboBoxWithSelectNone,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkDataStorageComboBoxWithSelectNone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkDataStorageComboBoxWithSelectNone::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkDataStorageComboBoxWithSelectNone.stringdata))
        return static_cast<void*>(const_cast< QmitkDataStorageComboBoxWithSelectNone*>(this));
    return QmitkDataStorageComboBox::qt_metacast(_clname);
}

int QmitkDataStorageComboBoxWithSelectNone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkDataStorageComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< mitkDataNodePtr*>(_v) = GetSelectedNode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = currentValue(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: SetSelectedNode(*reinterpret_cast< mitkDataNodePtr*>(_v)); break;
        case 1: setCurrentValue(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
