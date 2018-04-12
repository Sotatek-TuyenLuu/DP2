/****************************************************************************
** Meta object code from reading C++ file 'ctkErrorLogWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkErrorLogWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkErrorLogWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkErrorLogWidget_t {
    QByteArrayData data[21];
    char stringdata[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkErrorLogWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkErrorLogWidget_t qt_meta_stringdata_ctkErrorLogWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ctkErrorLogWidget"
QT_MOC_LITERAL(1, 18, 20), // "setAllEntriesVisible"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 10), // "visibility"
QT_MOC_LITERAL(4, 51, 22), // "setErrorEntriesVisible"
QT_MOC_LITERAL(5, 74, 24), // "setWarningEntriesVisible"
QT_MOC_LITERAL(6, 99, 21), // "setInfoEntriesVisible"
QT_MOC_LITERAL(7, 121, 24), // "setUnknownEntriesVisible"
QT_MOC_LITERAL(8, 146, 14), // "onRowsInserted"
QT_MOC_LITERAL(9, 161, 6), // "parent"
QT_MOC_LITERAL(10, 168, 5), // "first"
QT_MOC_LITERAL(11, 174, 4), // "last"
QT_MOC_LITERAL(12, 179, 23), // "onLogLevelFilterChanged"
QT_MOC_LITERAL(13, 203, 13), // "removeEntries"
QT_MOC_LITERAL(14, 217, 18), // "onSelectionChanged"
QT_MOC_LITERAL(15, 236, 14), // "QItemSelection"
QT_MOC_LITERAL(16, 251, 8), // "selected"
QT_MOC_LITERAL(17, 260, 10), // "deselected"
QT_MOC_LITERAL(18, 271, 15), // "setColumnHidden"
QT_MOC_LITERAL(19, 287, 8), // "columnId"
QT_MOC_LITERAL(20, 296, 6) // "hidden"

    },
    "ctkErrorLogWidget\0setAllEntriesVisible\0"
    "\0visibility\0setErrorEntriesVisible\0"
    "setWarningEntriesVisible\0setInfoEntriesVisible\0"
    "setUnknownEntriesVisible\0onRowsInserted\0"
    "parent\0first\0last\0onLogLevelFilterChanged\0"
    "removeEntries\0onSelectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "setColumnHidden\0columnId\0hidden"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkErrorLogWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       1,    0,   72,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   73,    2, 0x0a /* Public */,
       5,    1,   76,    2, 0x0a /* Public */,
       6,    1,   79,    2, 0x0a /* Public */,
       7,    1,   82,    2, 0x0a /* Public */,
       8,    3,   85,    2, 0x09 /* Protected */,
      12,    0,   92,    2, 0x09 /* Protected */,
      13,    0,   93,    2, 0x09 /* Protected */,
      14,    2,   94,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      18,    2,   99,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   19,   20,

       0        // eod
};

void ctkErrorLogWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkErrorLogWidget *_t = static_cast<ctkErrorLogWidget *>(_o);
        switch (_id) {
        case 0: _t->setAllEntriesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setAllEntriesVisible(); break;
        case 2: _t->setErrorEntriesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setWarningEntriesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setInfoEntriesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setUnknownEntriesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->onLogLevelFilterChanged(); break;
        case 8: _t->removeEntries(); break;
        case 9: _t->onSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 10: _t->setColumnHidden((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ctkErrorLogWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkErrorLogWidget.data,
      qt_meta_data_ctkErrorLogWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkErrorLogWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkErrorLogWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkErrorLogWidget.stringdata))
        return static_cast<void*>(const_cast< ctkErrorLogWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkErrorLogWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
