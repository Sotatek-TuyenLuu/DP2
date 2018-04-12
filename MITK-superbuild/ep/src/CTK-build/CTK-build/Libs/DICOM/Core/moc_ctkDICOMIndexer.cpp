/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMIndexer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMIndexer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMIndexer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMIndexer_t {
    QByteArrayData data[20];
    char stringdata[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMIndexer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMIndexer_t qt_meta_stringdata_ctkDICOMIndexer = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ctkDICOMIndexer"
QT_MOC_LITERAL(1, 16, 17), // "foundFilesToIndex"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "indexingFileNumber"
QT_MOC_LITERAL(4, 54, 16), // "indexingFilePath"
QT_MOC_LITERAL(5, 71, 8), // "progress"
QT_MOC_LITERAL(6, 80, 16), // "indexingComplete"
QT_MOC_LITERAL(7, 97, 6), // "cancel"
QT_MOC_LITERAL(8, 104, 12), // "addDirectory"
QT_MOC_LITERAL(9, 117, 17), // "ctkDICOMDatabase&"
QT_MOC_LITERAL(10, 135, 8), // "database"
QT_MOC_LITERAL(11, 144, 13), // "directoryName"
QT_MOC_LITERAL(12, 158, 24), // "destinationDirectoryName"
QT_MOC_LITERAL(13, 183, 11), // "addDicomdir"
QT_MOC_LITERAL(14, 195, 14), // "addListOfFiles"
QT_MOC_LITERAL(15, 210, 11), // "listOfFiles"
QT_MOC_LITERAL(16, 222, 7), // "addFile"
QT_MOC_LITERAL(17, 230, 8), // "filePath"
QT_MOC_LITERAL(18, 239, 15), // "refreshDatabase"
QT_MOC_LITERAL(19, 255, 21) // "waitForImportFinished"

    },
    "ctkDICOMIndexer\0foundFilesToIndex\0\0"
    "indexingFileNumber\0indexingFilePath\0"
    "progress\0indexingComplete\0cancel\0"
    "addDirectory\0ctkDICOMDatabase&\0database\0"
    "directoryName\0destinationDirectoryName\0"
    "addDicomdir\0addListOfFiles\0listOfFiles\0"
    "addFile\0filePath\0refreshDatabase\0"
    "waitForImportFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMIndexer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    1,   97,    2, 0x06 /* Public */,
       4,    1,  100,    2, 0x06 /* Public */,
       5,    1,  103,    2, 0x06 /* Public */,
       6,    0,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  107,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    3,  108,    2, 0x02 /* Public */,
       8,    2,  115,    2, 0x22 /* Public | MethodCloned */,
      13,    3,  120,    2, 0x02 /* Public */,
      13,    2,  127,    2, 0x22 /* Public | MethodCloned */,
      14,    3,  132,    2, 0x02 /* Public */,
      14,    2,  139,    2, 0x22 /* Public | MethodCloned */,
      16,    3,  144,    2, 0x02 /* Public */,
      16,    2,  151,    2, 0x22 /* Public | MethodCloned */,
      18,    2,  156,    2, 0x02 /* Public */,
      19,    0,  161,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::QString,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   11,
    QMetaType::Bool, 0x80000000 | 9, QMetaType::QString, QMetaType::QString,   10,   11,   12,
    QMetaType::Bool, 0x80000000 | 9, QMetaType::QString,   10,   11,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QStringList, QMetaType::QString,   10,   15,   12,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QStringList,   10,   15,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::QString,   10,   17,   12,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   17,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   11,
    QMetaType::Void,

       0        // eod
};

void ctkDICOMIndexer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMIndexer *_t = static_cast<ctkDICOMIndexer *>(_o);
        switch (_id) {
        case 0: _t->foundFilesToIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->indexingFileNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->indexingFilePath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->indexingComplete(); break;
        case 5: _t->cancel(); break;
        case 6: _t->addDirectory((*reinterpret_cast< ctkDICOMDatabase(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->addDirectory((*reinterpret_cast< ctkDICOMDatabase(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: { bool _r = _t->addDicomdir((*reinterpret_cast< ctkDICOMDatabase(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->addDicomdir((*reinterpret_cast< ctkDICOMDatabase(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->addListOfFiles((*reinterpret_cast< ctkDICOMDatabase(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->addListOfFiles((*reinterpret_cast< ctkDICOMDatabase(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 12: _t->addFile((*reinterpret_cast< ctkDICOMDatabase(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: _t->addFile((*reinterpret_cast< ctkDICOMDatabase(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->refreshDatabase((*reinterpret_cast< ctkDICOMDatabase(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->waitForImportFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDICOMIndexer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMIndexer::foundFilesToIndex)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkDICOMIndexer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMIndexer::indexingFileNumber)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkDICOMIndexer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMIndexer::indexingFilePath)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkDICOMIndexer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMIndexer::progress)) {
                *result = 3;
            }
        }
        {
            typedef void (ctkDICOMIndexer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMIndexer::indexingComplete)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject ctkDICOMIndexer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkDICOMIndexer.data,
      qt_meta_data_ctkDICOMIndexer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMIndexer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMIndexer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMIndexer.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMIndexer*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkDICOMIndexer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void ctkDICOMIndexer::foundFilesToIndex(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDICOMIndexer::indexingFileNumber(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkDICOMIndexer::indexingFilePath(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkDICOMIndexer::progress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkDICOMIndexer::indexingComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
