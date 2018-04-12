/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMThumbnailListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMThumbnailListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMThumbnailListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMThumbnailListWidget_t {
    QByteArrayData data[4];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMThumbnailListWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMThumbnailListWidget_t qt_meta_stringdata_ctkDICOMThumbnailListWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ctkDICOMThumbnailListWidget"
QT_MOC_LITERAL(1, 28, 13), // "addThumbnails"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5) // "index"

    },
    "ctkDICOMThumbnailListWidget\0addThumbnails\0"
    "\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMThumbnailListWidget[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,

       0        // eod
};

void ctkDICOMThumbnailListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMThumbnailListWidget *_t = static_cast<ctkDICOMThumbnailListWidget *>(_o);
        switch (_id) {
        case 0: _t->addThumbnails((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ctkDICOMThumbnailListWidget::staticMetaObject = {
    { &ctkThumbnailListWidget::staticMetaObject, qt_meta_stringdata_ctkDICOMThumbnailListWidget.data,
      qt_meta_data_ctkDICOMThumbnailListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMThumbnailListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMThumbnailListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMThumbnailListWidget.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMThumbnailListWidget*>(this));
    return ctkThumbnailListWidget::qt_metacast(_clname);
}

int ctkDICOMThumbnailListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkThumbnailListWidget::qt_metacall(_c, _id, _a);
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
