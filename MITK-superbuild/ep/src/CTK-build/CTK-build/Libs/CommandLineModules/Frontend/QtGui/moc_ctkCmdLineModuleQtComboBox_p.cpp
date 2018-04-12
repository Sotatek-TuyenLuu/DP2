/****************************************************************************
** Meta object code from reading C++ file 'ctkCmdLineModuleQtComboBox_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCmdLineModuleQtComboBox_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCmdLineModuleQtComboBox_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCmdLineModuleQtComboBox_t {
    QByteArrayData data[2];
    char stringdata[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCmdLineModuleQtComboBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCmdLineModuleQtComboBox_t qt_meta_stringdata_ctkCmdLineModuleQtComboBox = {
    {
QT_MOC_LITERAL(0, 0, 26), // "ctkCmdLineModuleQtComboBox"
QT_MOC_LITERAL(1, 27, 18) // "currentEnumeration"

    },
    "ctkCmdLineModuleQtComboBox\0"
    "currentEnumeration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCmdLineModuleQtComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,

       0        // eod
};

void ctkCmdLineModuleQtComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkCmdLineModuleQtComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_ctkCmdLineModuleQtComboBox.data,
      qt_meta_data_ctkCmdLineModuleQtComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCmdLineModuleQtComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCmdLineModuleQtComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCmdLineModuleQtComboBox.stringdata))
        return static_cast<void*>(const_cast< ctkCmdLineModuleQtComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int ctkCmdLineModuleQtComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = currentEnumeration(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentEnumeration(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
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
QT_END_MOC_NAMESPACE
