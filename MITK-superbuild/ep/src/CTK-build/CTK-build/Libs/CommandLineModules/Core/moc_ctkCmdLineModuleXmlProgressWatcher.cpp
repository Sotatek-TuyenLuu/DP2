/****************************************************************************
** Meta object code from reading C++ file 'ctkCmdLineModuleXmlProgressWatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../CTK/Libs/CommandLineModules/Core/ctkCmdLineModuleXmlProgressWatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCmdLineModuleXmlProgressWatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkCmdLineModuleXmlProgressWatcher_t {
    QByteArrayData data[19];
    char stringdata[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCmdLineModuleXmlProgressWatcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCmdLineModuleXmlProgressWatcher_t qt_meta_stringdata_ctkCmdLineModuleXmlProgressWatcher = {
    {
QT_MOC_LITERAL(0, 0, 34), // "ctkCmdLineModuleXmlProgressWa..."
QT_MOC_LITERAL(1, 35, 13), // "filterStarted"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 4), // "name"
QT_MOC_LITERAL(4, 55, 7), // "comment"
QT_MOC_LITERAL(5, 63, 14), // "filterProgress"
QT_MOC_LITERAL(6, 78, 8), // "progress"
QT_MOC_LITERAL(7, 87, 12), // "filterResult"
QT_MOC_LITERAL(8, 100, 9), // "parameter"
QT_MOC_LITERAL(9, 110, 5), // "value"
QT_MOC_LITERAL(10, 116, 14), // "filterFinished"
QT_MOC_LITERAL(11, 131, 14), // "filterXmlError"
QT_MOC_LITERAL(12, 146, 5), // "error"
QT_MOC_LITERAL(13, 152, 19), // "outputDataAvailable"
QT_MOC_LITERAL(14, 172, 10), // "outputData"
QT_MOC_LITERAL(15, 183, 18), // "errorDataAvailable"
QT_MOC_LITERAL(16, 202, 9), // "errorData"
QT_MOC_LITERAL(17, 212, 12), // "_q_readyRead"
QT_MOC_LITERAL(18, 225, 17) // "_q_readyReadError"

    },
    "ctkCmdLineModuleXmlProgressWatcher\0"
    "filterStarted\0\0name\0comment\0filterProgress\0"
    "progress\0filterResult\0parameter\0value\0"
    "filterFinished\0filterXmlError\0error\0"
    "outputDataAvailable\0outputData\0"
    "errorDataAvailable\0errorData\0_q_readyRead\0"
    "_q_readyReadError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCmdLineModuleXmlProgressWatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    2,   64,    2, 0x06 /* Public */,
       7,    2,   69,    2, 0x06 /* Public */,
      10,    2,   74,    2, 0x06 /* Public */,
      11,    1,   79,    2, 0x06 /* Public */,
      13,    1,   82,    2, 0x06 /* Public */,
      15,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   88,    2, 0x08 /* Private */,
      18,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Float, QMetaType::QString,    6,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QByteArray,   14,
    QMetaType::Void, QMetaType::QByteArray,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ctkCmdLineModuleXmlProgressWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkCmdLineModuleXmlProgressWatcher *_t = static_cast<ctkCmdLineModuleXmlProgressWatcher *>(_o);
        switch (_id) {
        case 0: _t->filterStarted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->filterProgress((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->filterResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->filterFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->filterXmlError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->outputDataAvailable((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 6: _t->errorDataAvailable((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 7: _t->d->_q_readyRead(); break;
        case 8: _t->d->_q_readyReadError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkCmdLineModuleXmlProgressWatcher::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCmdLineModuleXmlProgressWatcher::filterStarted)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkCmdLineModuleXmlProgressWatcher::*_t)(float , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCmdLineModuleXmlProgressWatcher::filterProgress)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkCmdLineModuleXmlProgressWatcher::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCmdLineModuleXmlProgressWatcher::filterResult)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkCmdLineModuleXmlProgressWatcher::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCmdLineModuleXmlProgressWatcher::filterFinished)) {
                *result = 3;
            }
        }
        {
            typedef void (ctkCmdLineModuleXmlProgressWatcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCmdLineModuleXmlProgressWatcher::filterXmlError)) {
                *result = 4;
            }
        }
        {
            typedef void (ctkCmdLineModuleXmlProgressWatcher::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCmdLineModuleXmlProgressWatcher::outputDataAvailable)) {
                *result = 5;
            }
        }
        {
            typedef void (ctkCmdLineModuleXmlProgressWatcher::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkCmdLineModuleXmlProgressWatcher::errorDataAvailable)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject ctkCmdLineModuleXmlProgressWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkCmdLineModuleXmlProgressWatcher.data,
      qt_meta_data_ctkCmdLineModuleXmlProgressWatcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkCmdLineModuleXmlProgressWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCmdLineModuleXmlProgressWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCmdLineModuleXmlProgressWatcher.stringdata))
        return static_cast<void*>(const_cast< ctkCmdLineModuleXmlProgressWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkCmdLineModuleXmlProgressWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ctkCmdLineModuleXmlProgressWatcher::filterStarted(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkCmdLineModuleXmlProgressWatcher::filterProgress(float _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkCmdLineModuleXmlProgressWatcher::filterResult(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkCmdLineModuleXmlProgressWatcher::filterFinished(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkCmdLineModuleXmlProgressWatcher::filterXmlError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ctkCmdLineModuleXmlProgressWatcher::outputDataAvailable(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ctkCmdLineModuleXmlProgressWatcher::errorDataAvailable(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
