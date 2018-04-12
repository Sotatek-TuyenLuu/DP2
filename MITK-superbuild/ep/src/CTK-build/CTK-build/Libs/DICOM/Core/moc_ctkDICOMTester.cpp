/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMTester.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMTester.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMTester.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMTester_t {
    QByteArrayData data[12];
    char stringdata[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMTester_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMTester_t qt_meta_stringdata_ctkDICOMTester = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ctkDICOMTester"
QT_MOC_LITERAL(1, 15, 13), // "startDCMQRSCP"
QT_MOC_LITERAL(2, 29, 9), // "QProcess*"
QT_MOC_LITERAL(3, 39, 0), // ""
QT_MOC_LITERAL(4, 40, 12), // "stopDCMQRSCP"
QT_MOC_LITERAL(5, 53, 9), // "storeData"
QT_MOC_LITERAL(6, 63, 4), // "data"
QT_MOC_LITERAL(7, 68, 18), // "dcmqrscpExecutable"
QT_MOC_LITERAL(8, 87, 18), // "dcmqrscpConfigFile"
QT_MOC_LITERAL(9, 106, 18), // "storeSCUExecutable"
QT_MOC_LITERAL(10, 125, 18), // "storeSCPExecutable"
QT_MOC_LITERAL(11, 144, 12) // "dcmqrscpPort"

    },
    "ctkDICOMTester\0startDCMQRSCP\0QProcess*\0"
    "\0stopDCMQRSCP\0storeData\0data\0"
    "dcmqrscpExecutable\0dcmqrscpConfigFile\0"
    "storeSCUExecutable\0storeSCPExecutable\0"
    "dcmqrscpPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMTester[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       5,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   29,    3, 0x02 /* Public */,
       4,    0,   30,    3, 0x02 /* Public */,
       5,    1,   31,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QStringList,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095003,
       8, QMetaType::QString, 0x00095003,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::Int, 0x00095003,

       0        // eod
};

void ctkDICOMTester::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMTester *_t = static_cast<ctkDICOMTester *>(_o);
        switch (_id) {
        case 0: { QProcess* _r = _t->startDCMQRSCP();
            if (_a[0]) *reinterpret_cast< QProcess**>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->stopDCMQRSCP();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->storeData((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ctkDICOMTester::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkDICOMTester.data,
      qt_meta_data_ctkDICOMTester,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMTester::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMTester::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMTester.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMTester*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkDICOMTester::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = dcmqrscpExecutable(); break;
        case 1: *reinterpret_cast< QString*>(_v) = dcmqrscpConfigFile(); break;
        case 2: *reinterpret_cast< QString*>(_v) = storeSCUExecutable(); break;
        case 3: *reinterpret_cast< QString*>(_v) = storeSCPExecutable(); break;
        case 4: *reinterpret_cast< int*>(_v) = dcmqrscpPort(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDCMQRSCPExecutable(*reinterpret_cast< QString*>(_v)); break;
        case 1: setDCMQRSCPConfigFile(*reinterpret_cast< QString*>(_v)); break;
        case 2: setStoreSCUExecutable(*reinterpret_cast< QString*>(_v)); break;
        case 3: setStoreSCPExecutable(*reinterpret_cast< QString*>(_v)); break;
        case 4: setDCMQRSCPPort(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
