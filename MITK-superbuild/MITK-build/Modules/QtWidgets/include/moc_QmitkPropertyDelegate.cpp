/****************************************************************************
** Meta object code from reading C++ file 'QmitkPropertyDelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgets/include/QmitkPropertyDelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkPropertyDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkPropertyDelegate_t {
    QByteArrayData data[8];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkPropertyDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkPropertyDelegate_t qt_meta_stringdata_QmitkPropertyDelegate = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QmitkPropertyDelegate"
QT_MOC_LITERAL(1, 22, 20), // "commitAndCloseEditor"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 15), // "showColorDialog"
QT_MOC_LITERAL(4, 60, 27), // "ComboBoxCurrentIndexChanged"
QT_MOC_LITERAL(5, 88, 5), // "index"
QT_MOC_LITERAL(6, 94, 19), // "SpinBoxValueChanged"
QT_MOC_LITERAL(7, 114, 5) // "value"

    },
    "QmitkPropertyDelegate\0commitAndCloseEditor\0"
    "\0showColorDialog\0ComboBoxCurrentIndexChanged\0"
    "index\0SpinBoxValueChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkPropertyDelegate[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void QmitkPropertyDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkPropertyDelegate *_t = static_cast<QmitkPropertyDelegate *>(_o);
        switch (_id) {
        case 0: _t->commitAndCloseEditor(); break;
        case 1: _t->showColorDialog(); break;
        case 2: _t->ComboBoxCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SpinBoxValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkPropertyDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_QmitkPropertyDelegate.data,
      qt_meta_data_QmitkPropertyDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkPropertyDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkPropertyDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkPropertyDelegate.stringdata))
        return static_cast<void*>(const_cast< QmitkPropertyDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int QmitkPropertyDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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
