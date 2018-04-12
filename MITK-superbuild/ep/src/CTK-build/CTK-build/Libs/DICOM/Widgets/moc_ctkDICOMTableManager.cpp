/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMTableManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMTableManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMTableManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMTableManager_t {
    QByteArrayData data[26];
    char stringdata[479];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMTableManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMTableManager_t qt_meta_stringdata_ctkDICOMTableManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ctkDICOMTableManager"
QT_MOC_LITERAL(1, 21, 24), // "patientsSelectionChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 62, 23), // "studiesSelectionChanged"
QT_MOC_LITERAL(5, 86, 22), // "seriesSelectionChanged"
QT_MOC_LITERAL(6, 109, 4), // "uids"
QT_MOC_LITERAL(7, 114, 21), // "patientsDoubleClicked"
QT_MOC_LITERAL(8, 136, 20), // "studiesDoubleClicked"
QT_MOC_LITERAL(9, 157, 19), // "seriesDoubleClicked"
QT_MOC_LITERAL(10, 177, 20), // "patientsRightClicked"
QT_MOC_LITERAL(11, 198, 19), // "studiesRightClicked"
QT_MOC_LITERAL(12, 218, 18), // "seriesRightClicked"
QT_MOC_LITERAL(13, 237, 22), // "onPatientsQueryChanged"
QT_MOC_LITERAL(14, 260, 21), // "onStudiesQueryChanged"
QT_MOC_LITERAL(15, 282, 26), // "onPatientsSelectionChanged"
QT_MOC_LITERAL(16, 309, 25), // "onStudiesSelectionChanged"
QT_MOC_LITERAL(17, 335, 16), // "tableOrientation"
QT_MOC_LITERAL(18, 352, 15), // "Qt::Orientation"
QT_MOC_LITERAL(19, 368, 18), // "dynamicTableLayout"
QT_MOC_LITERAL(20, 387, 14), // "displayDensity"
QT_MOC_LITERAL(21, 402, 36), // "ctkDICOMTableManager::Display..."
QT_MOC_LITERAL(22, 439, 14), // "DisplayDensity"
QT_MOC_LITERAL(23, 454, 7), // "Compact"
QT_MOC_LITERAL(24, 462, 4), // "Cozy"
QT_MOC_LITERAL(25, 467, 11) // "Comfortable"

    },
    "ctkDICOMTableManager\0patientsSelectionChanged\0"
    "\0QItemSelection\0studiesSelectionChanged\0"
    "seriesSelectionChanged\0uids\0"
    "patientsDoubleClicked\0studiesDoubleClicked\0"
    "seriesDoubleClicked\0patientsRightClicked\0"
    "studiesRightClicked\0seriesRightClicked\0"
    "onPatientsQueryChanged\0onStudiesQueryChanged\0"
    "onPatientsSelectionChanged\0"
    "onStudiesSelectionChanged\0tableOrientation\0"
    "Qt::Orientation\0dynamicTableLayout\0"
    "displayDensity\0ctkDICOMTableManager::DisplayDensity\0"
    "DisplayDensity\0Compact\0Cozy\0Comfortable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMTableManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       3,  148, // properties
       1,  157, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   94,    2, 0x06 /* Public */,
       4,    2,   99,    2, 0x06 /* Public */,
       5,    2,  104,    2, 0x06 /* Public */,
       1,    1,  109,    2, 0x06 /* Public */,
       4,    1,  112,    2, 0x06 /* Public */,
       5,    1,  115,    2, 0x06 /* Public */,
       7,    1,  118,    2, 0x06 /* Public */,
       8,    1,  121,    2, 0x06 /* Public */,
       9,    1,  124,    2, 0x06 /* Public */,
      10,    1,  127,    2, 0x06 /* Public */,
      11,    1,  130,    2, 0x06 /* Public */,
      12,    1,  133,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  136,    2, 0x0a /* Public */,
      14,    1,  139,    2, 0x0a /* Public */,
      15,    1,  142,    2, 0x0a /* Public */,
      16,    1,  145,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QStringList,    2,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x0009510b,
      19, QMetaType::Bool, 0x00095103,
      20, 0x80000000 | 21, 0x0009510b,

 // enums: name, flags, count, data
      22, 0x0,    3,  161,

 // enum data: key, value
      23, uint(ctkDICOMTableManager::Compact),
      24, uint(ctkDICOMTableManager::Cozy),
      25, uint(ctkDICOMTableManager::Comfortable),

       0        // eod
};

void ctkDICOMTableManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMTableManager *_t = static_cast<ctkDICOMTableManager *>(_o);
        switch (_id) {
        case 0: _t->patientsSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->studiesSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->seriesSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 3: _t->patientsSelectionChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->studiesSelectionChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->seriesSelectionChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->patientsDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->studiesDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->seriesDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->patientsRightClicked((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: _t->studiesRightClicked((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->seriesRightClicked((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->onPatientsQueryChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 13: _t->onStudiesQueryChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 14: _t->onPatientsSelectionChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 15: _t->onStudiesSelectionChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDICOMTableManager::*_t)(const QItemSelection & , const QItemSelection & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::patientsSelectionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkDICOMTableManager::*_t)(const QItemSelection & , const QItemSelection & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::studiesSelectionChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkDICOMTableManager::*_t)(const QItemSelection & , const QItemSelection & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::seriesSelectionChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkDICOMTableManager::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::patientsSelectionChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (ctkDICOMTableManager::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::studiesSelectionChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (ctkDICOMTableManager::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::seriesSelectionChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (ctkDICOMTableManager::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::patientsDoubleClicked)) {
                *result = 6;
            }
        }
        {
            typedef void (ctkDICOMTableManager::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::studiesDoubleClicked)) {
                *result = 7;
            }
        }
        {
            typedef void (ctkDICOMTableManager::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::seriesDoubleClicked)) {
                *result = 8;
            }
        }
        {
            typedef void (ctkDICOMTableManager::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::patientsRightClicked)) {
                *result = 9;
            }
        }
        {
            typedef void (ctkDICOMTableManager::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::studiesRightClicked)) {
                *result = 10;
            }
        }
        {
            typedef void (ctkDICOMTableManager::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMTableManager::seriesRightClicked)) {
                *result = 11;
            }
        }
    }
}

const QMetaObject ctkDICOMTableManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkDICOMTableManager.data,
      qt_meta_data_ctkDICOMTableManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMTableManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMTableManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMTableManager.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMTableManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkDICOMTableManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = tableOrientation(); break;
        case 1: *reinterpret_cast< bool*>(_v) = dynamicTableLayout(); break;
        case 2: *reinterpret_cast< ctkDICOMTableManager::DisplayDensity*>(_v) = displayDensity(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTableOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: setDynamicTableLayout(*reinterpret_cast< bool*>(_v)); break;
        case 2: setDisplayDensity(*reinterpret_cast< ctkDICOMTableManager::DisplayDensity*>(_v)); break;
        default: break;
        }
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

// SIGNAL 0
void ctkDICOMTableManager::patientsSelectionChanged(const QItemSelection & _t1, const QItemSelection & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDICOMTableManager::studiesSelectionChanged(const QItemSelection & _t1, const QItemSelection & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkDICOMTableManager::seriesSelectionChanged(const QItemSelection & _t1, const QItemSelection & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkDICOMTableManager::patientsSelectionChanged(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkDICOMTableManager::studiesSelectionChanged(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ctkDICOMTableManager::seriesSelectionChanged(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ctkDICOMTableManager::patientsDoubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ctkDICOMTableManager::studiesDoubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ctkDICOMTableManager::seriesDoubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ctkDICOMTableManager::patientsRightClicked(const QPoint & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ctkDICOMTableManager::studiesRightClicked(const QPoint & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ctkDICOMTableManager::seriesRightClicked(const QPoint & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
