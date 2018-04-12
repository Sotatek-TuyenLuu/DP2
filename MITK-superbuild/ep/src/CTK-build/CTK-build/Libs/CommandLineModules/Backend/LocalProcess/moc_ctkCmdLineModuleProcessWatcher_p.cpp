/****************************************************************************
** Meta object code from reading C++ file 'ctkCmdLineModuleProcessWatcher_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCmdLineModuleProcessWatcher_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCmdLineModuleProcessWatcher_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCmdLineModuleProcessWatcher_t {
    QByteArrayData data[20];
    char stringdata[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCmdLineModuleProcessWatcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCmdLineModuleProcessWatcher_t qt_meta_stringdata_ctkCmdLineModuleProcessWatcher = {
    {
QT_MOC_LITERAL(0, 0, 30), // "ctkCmdLineModuleProcessWatcher"
QT_MOC_LITERAL(1, 31, 13), // "filterStarted"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 4), // "name"
QT_MOC_LITERAL(4, 51, 7), // "comment"
QT_MOC_LITERAL(5, 59, 14), // "filterProgress"
QT_MOC_LITERAL(6, 74, 8), // "progress"
QT_MOC_LITERAL(7, 83, 12), // "filterResult"
QT_MOC_LITERAL(8, 96, 9), // "parameter"
QT_MOC_LITERAL(9, 106, 5), // "value"
QT_MOC_LITERAL(10, 112, 14), // "filterFinished"
QT_MOC_LITERAL(11, 127, 14), // "filterXmlError"
QT_MOC_LITERAL(12, 142, 5), // "error"
QT_MOC_LITERAL(13, 148, 12), // "pauseProcess"
QT_MOC_LITERAL(14, 161, 13), // "resumeProcess"
QT_MOC_LITERAL(15, 175, 13), // "cancelProcess"
QT_MOC_LITERAL(16, 189, 19), // "outputDataAvailable"
QT_MOC_LITERAL(17, 209, 10), // "outputData"
QT_MOC_LITERAL(18, 220, 18), // "errorDataAvailable"
QT_MOC_LITERAL(19, 239, 9) // "errorData"

    },
    "ctkCmdLineModuleProcessWatcher\0"
    "filterStarted\0\0name\0comment\0filterProgress\0"
    "progress\0filterResult\0parameter\0value\0"
    "filterFinished\0filterXmlError\0error\0"
    "pauseProcess\0resumeProcess\0cancelProcess\0"
    "outputDataAvailable\0outputData\0"
    "errorDataAvailable\0errorData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCmdLineModuleProcessWatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x09 /* Protected */,
       5,    2,   69,    2, 0x09 /* Protected */,
       7,    2,   74,    2, 0x09 /* Protected */,
      10,    2,   79,    2, 0x09 /* Protected */,
      11,    1,   84,    2, 0x09 /* Protected */,
      13,    0,   87,    2, 0x09 /* Protected */,
      14,    0,   88,    2, 0x09 /* Protected */,
      15,    0,   89,    2, 0x09 /* Protected */,
      16,    1,   90,    2, 0x09 /* Protected */,
      18,    1,   93,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Float, QMetaType::QString,    6,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void, QMetaType::QByteArray,   19,

       0        // eod
};

void ctkCmdLineModuleProcessWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkCmdLineModuleProcessWatcher *_t = static_cast<ctkCmdLineModuleProcessWatcher *>(_o);
        switch (_id) {
        case 0: _t->filterStarted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->filterProgress((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->filterResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->filterFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->filterXmlError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->pauseProcess(); break;
        case 6: _t->resumeProcess(); break;
        case 7: _t->cancelProcess(); break;
        case 8: _t->outputDataAvailable((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 9: _t->errorDataAvailable((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ctkCmdLineModuleProcessWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkCmdLineModuleProcessWatcher.data,
      qt_meta_data_ctkCmdLineModuleProcessWatcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCmdLineModuleProcessWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCmdLineModuleProcessWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCmdLineModuleProcessWatcher.stringdata))
        return static_cast<void*>(const_cast< ctkCmdLineModuleProcessWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkCmdLineModuleProcessWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
