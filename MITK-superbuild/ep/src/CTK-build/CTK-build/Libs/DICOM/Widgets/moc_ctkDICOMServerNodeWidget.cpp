/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMServerNodeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMServerNodeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMServerNodeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMServerNodeWidget_t {
    QByteArrayData data[7];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMServerNodeWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMServerNodeWidget_t qt_meta_stringdata_ctkDICOMServerNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ctkDICOMServerNodeWidget"
QT_MOC_LITERAL(1, 25, 13), // "addServerNode"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 23), // "removeCurrentServerNode"
QT_MOC_LITERAL(4, 64, 12), // "readSettings"
QT_MOC_LITERAL(5, 77, 12), // "saveSettings"
QT_MOC_LITERAL(6, 90, 29) // "updateRemoveButtonEnableState"

    },
    "ctkDICOMServerNodeWidget\0addServerNode\0"
    "\0removeCurrentServerNode\0readSettings\0"
    "saveSettings\0updateRemoveButtonEnableState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMServerNodeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ctkDICOMServerNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMServerNodeWidget *_t = static_cast<ctkDICOMServerNodeWidget *>(_o);
        switch (_id) {
        case 0: { int _r = _t->addServerNode();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->removeCurrentServerNode(); break;
        case 2: _t->readSettings(); break;
        case 3: _t->saveSettings(); break;
        case 4: _t->updateRemoveButtonEnableState(); break;
        default: ;
        }
    }
}

const QMetaObject ctkDICOMServerNodeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkDICOMServerNodeWidget.data,
      qt_meta_data_ctkDICOMServerNodeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMServerNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMServerNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMServerNodeWidget.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMServerNodeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkDICOMServerNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
