/****************************************************************************
** Meta object code from reading C++ file 'ctkCommandLineParser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../MITK/Applications/PluginGenerator/ctkCommandLineParser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCommandLineParser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCommandLineParser_t {
    QByteArrayData data[8];
    char stringdata[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCommandLineParser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCommandLineParser_t qt_meta_stringdata_ctkCommandLineParser = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ctkCommandLineParser"
QT_MOC_LITERAL(1, 21, 13), // "argumentAdded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "argument"
QT_MOC_LITERAL(4, 45, 14), // "argumentParsed"
QT_MOC_LITERAL(5, 60, 11), // "errorString"
QT_MOC_LITERAL(6, 72, 17), // "unparsedArguments"
QT_MOC_LITERAL(7, 90, 15) // "settingsEnabled"

    },
    "ctkCommandLineParser\0argumentAdded\0\0"
    "argument\0argumentParsed\0errorString\0"
    "unparsedArguments\0settingsEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCommandLineParser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       4,    1,   27,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095001,
       6, QMetaType::QStringList, 0x00095001,
       7, QMetaType::Bool, 0x00095001,

       0        // eod
};

void ctkCommandLineParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkCommandLineParser *_t = static_cast<ctkCommandLineParser *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->argumentAdded((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->argumentParsed((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ctkCommandLineParser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkCommandLineParser.data,
      qt_meta_data_ctkCommandLineParser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCommandLineParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCommandLineParser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCommandLineParser.stringdata))
        return static_cast<void*>(const_cast< ctkCommandLineParser*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkCommandLineParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = errorString(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = unparsedArguments(); break;
        case 2: *reinterpret_cast< bool*>(_v) = settingsEnabled(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
