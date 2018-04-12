/****************************************************************************
** Meta object code from reading C++ file 'QVTKWidget2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../VTK/GUISupport/QtOpenGL/QVTKWidget2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QVTKWidget2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QVTKWidget2_t {
    QByteArrayData data[14];
    char stringdata[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVTKWidget2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVTKWidget2_t qt_meta_stringdata_QVTKWidget2 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QVTKWidget2"
QT_MOC_LITERAL(1, 12, 11), // "MakeCurrent"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "IsCurrent"
QT_MOC_LITERAL(4, 35, 10), // "vtkObject*"
QT_MOC_LITERAL(5, 46, 6), // "caller"
QT_MOC_LITERAL(6, 53, 9), // "vtk_event"
QT_MOC_LITERAL(7, 63, 11), // "client_data"
QT_MOC_LITERAL(8, 75, 9), // "call_data"
QT_MOC_LITERAL(9, 85, 5), // "Frame"
QT_MOC_LITERAL(10, 91, 5), // "Start"
QT_MOC_LITERAL(11, 97, 3), // "End"
QT_MOC_LITERAL(12, 101, 8), // "IsDirect"
QT_MOC_LITERAL(13, 110, 14) // "SupportsOpenGL"

    },
    "QVTKWidget2\0MakeCurrent\0\0IsCurrent\0"
    "vtkObject*\0caller\0vtk_event\0client_data\0"
    "call_data\0Frame\0Start\0End\0IsDirect\0"
    "SupportsOpenGL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVTKWidget2[] = {

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
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    4,   50,    2, 0x09 /* Protected */,
       9,    0,   59,    2, 0x09 /* Protected */,
      10,    0,   60,    2, 0x09 /* Protected */,
      11,    0,   61,    2, 0x09 /* Protected */,
      12,    4,   62,    2, 0x09 /* Protected */,
      13,    4,   71,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    5,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 4, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    5,    6,    7,    8,

       0        // eod
};

void QVTKWidget2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVTKWidget2 *_t = static_cast<QVTKWidget2 *>(_o);
        switch (_id) {
        case 0: _t->MakeCurrent(); break;
        case 1: _t->IsCurrent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 2: _t->Frame(); break;
        case 3: _t->Start(); break;
        case 4: _t->End(); break;
        case 5: _t->IsDirect((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 6: _t->SupportsOpenGL((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject QVTKWidget2::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_QVTKWidget2.data,
      qt_meta_data_QVTKWidget2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVTKWidget2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVTKWidget2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVTKWidget2.stringdata))
        return static_cast<void*>(const_cast< QVTKWidget2*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int QVTKWidget2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
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
