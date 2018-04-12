/****************************************************************************
** Meta object code from reading C++ file 'QVTKQuickItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../MITK/Modules/OpenViewCore/QVTKQuickItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QVTKQuickItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QVTKQuickItem_t {
    QByteArrayData data[14];
    char stringdata[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVTKQuickItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVTKQuickItem_t qt_meta_stringdata_QVTKQuickItem = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QVTKQuickItem"
QT_MOC_LITERAL(1, 14, 5), // "paint"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "MakeCurrent"
QT_MOC_LITERAL(4, 33, 5), // "Start"
QT_MOC_LITERAL(5, 39, 3), // "End"
QT_MOC_LITERAL(6, 43, 9), // "IsCurrent"
QT_MOC_LITERAL(7, 53, 10), // "vtkObject*"
QT_MOC_LITERAL(8, 64, 6), // "caller"
QT_MOC_LITERAL(9, 71, 9), // "vtk_event"
QT_MOC_LITERAL(10, 81, 11), // "client_data"
QT_MOC_LITERAL(11, 93, 9), // "call_data"
QT_MOC_LITERAL(12, 103, 8), // "IsDirect"
QT_MOC_LITERAL(13, 112, 14) // "SupportsOpenGL"

    },
    "QVTKQuickItem\0paint\0\0MakeCurrent\0Start\0"
    "End\0IsCurrent\0vtkObject*\0caller\0"
    "vtk_event\0client_data\0call_data\0"
    "IsDirect\0SupportsOpenGL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVTKQuickItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    4,   53,    2, 0x09 /* Protected */,
      12,    4,   62,    2, 0x09 /* Protected */,
      13,    4,   71,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    8,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 7, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    8,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 7, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    8,    9,   10,   11,

       0        // eod
};

void QVTKQuickItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVTKQuickItem *_t = static_cast<QVTKQuickItem *>(_o);
        switch (_id) {
        case 0: _t->paint(); break;
        case 1: _t->MakeCurrent(); break;
        case 2: _t->Start(); break;
        case 3: _t->End(); break;
        case 4: _t->IsCurrent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 5: _t->IsDirect((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 6: _t->SupportsOpenGL((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject QVTKQuickItem::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QVTKQuickItem.data,
      qt_meta_data_QVTKQuickItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVTKQuickItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVTKQuickItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVTKQuickItem.stringdata))
        return static_cast<void*>(const_cast< QVTKQuickItem*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int QVTKQuickItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
