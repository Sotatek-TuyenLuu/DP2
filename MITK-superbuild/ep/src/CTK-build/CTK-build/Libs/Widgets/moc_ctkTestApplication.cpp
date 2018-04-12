/****************************************************************************
** Meta object code from reading C++ file 'ctkTestApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkTestApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkTestApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkTestApplication_t {
    QByteArrayData data[3];
    char stringdata[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkTestApplication_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkTestApplication_t qt_meta_stringdata_ctkTestApplication = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ctkTestApplication"
QT_MOC_LITERAL(1, 19, 11), // "runTestSlot"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "ctkTestApplication\0runTestSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkTestApplication[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ctkTestApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkTestApplication *_t = static_cast<ctkTestApplication *>(_o);
        switch (_id) {
        case 0: _t->runTestSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ctkTestApplication::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkTestApplication.data,
      qt_meta_data_ctkTestApplication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkTestApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkTestApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkTestApplication.stringdata))
        return static_cast<void*>(const_cast< ctkTestApplication*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkTestApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
