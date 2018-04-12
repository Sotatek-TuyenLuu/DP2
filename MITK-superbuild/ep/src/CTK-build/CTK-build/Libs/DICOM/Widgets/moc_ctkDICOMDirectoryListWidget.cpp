/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMDirectoryListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMDirectoryListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMDirectoryListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMDirectoryListWidget_t {
    QByteArrayData data[8];
    char stringdata[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMDirectoryListWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMDirectoryListWidget_t qt_meta_stringdata_ctkDICOMDirectoryListWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ctkDICOMDirectoryListWidget"
QT_MOC_LITERAL(1, 28, 12), // "addDirectory"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 15), // "removeDirectory"
QT_MOC_LITERAL(4, 58, 25), // "directorySelectionChanged"
QT_MOC_LITERAL(5, 84, 14), // "QItemSelection"
QT_MOC_LITERAL(6, 99, 8), // "selected"
QT_MOC_LITERAL(7, 108, 10) // "deselected"

    },
    "ctkDICOMDirectoryListWidget\0addDirectory\0"
    "\0removeDirectory\0directorySelectionChanged\0"
    "QItemSelection\0selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMDirectoryListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       1,    1,   35,    2, 0x0a /* Public */,
       3,    0,   38,    2, 0x0a /* Public */,
       4,    2,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,

       0        // eod
};

void ctkDICOMDirectoryListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMDirectoryListWidget *_t = static_cast<ctkDICOMDirectoryListWidget *>(_o);
        switch (_id) {
        case 0: _t->addDirectory(); break;
        case 1: _t->addDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->removeDirectory(); break;
        case 3: _t->directorySelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ctkDICOMDirectoryListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkDICOMDirectoryListWidget.data,
      qt_meta_data_ctkDICOMDirectoryListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMDirectoryListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMDirectoryListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMDirectoryListWidget.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMDirectoryListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkDICOMDirectoryListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
