/****************************************************************************
** Meta object code from reading C++ file 'QmitkVolumeVisualizationView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkVolumeVisualizationView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkVolumeVisualizationView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkVolumeVisualizationView_t {
    QByteArrayData data[8];
    char stringdata[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkVolumeVisualizationView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkVolumeVisualizationView_t qt_meta_stringdata_QmitkVolumeVisualizationView = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QmitkVolumeVisualizationView"
QT_MOC_LITERAL(1, 29, 20), // "OnMitkInternalPreset"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 4), // "mode"
QT_MOC_LITERAL(4, 56, 17), // "OnEnableRendering"
QT_MOC_LITERAL(5, 74, 5), // "state"
QT_MOC_LITERAL(6, 80, 11), // "OnEnableLOD"
QT_MOC_LITERAL(7, 92, 12) // "OnRenderMode"

    },
    "QmitkVolumeVisualizationView\0"
    "OnMitkInternalPreset\0\0mode\0OnEnableRendering\0"
    "state\0OnEnableLOD\0OnRenderMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkVolumeVisualizationView[] = {

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
       1,    1,   34,    2, 0x09 /* Protected */,
       4,    1,   37,    2, 0x09 /* Protected */,
       6,    1,   40,    2, 0x09 /* Protected */,
       7,    1,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QmitkVolumeVisualizationView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkVolumeVisualizationView *_t = static_cast<QmitkVolumeVisualizationView *>(_o);
        switch (_id) {
        case 0: _t->OnMitkInternalPreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnEnableRendering((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->OnEnableLOD((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->OnRenderMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkVolumeVisualizationView::staticMetaObject = {
    { &QmitkAbstractView::staticMetaObject, qt_meta_stringdata_QmitkVolumeVisualizationView.data,
      qt_meta_data_QmitkVolumeVisualizationView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkVolumeVisualizationView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkVolumeVisualizationView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkVolumeVisualizationView.stringdata))
        return static_cast<void*>(const_cast< QmitkVolumeVisualizationView*>(this));
    return QmitkAbstractView::qt_metacast(_clname);
}

int QmitkVolumeVisualizationView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkAbstractView::qt_metacall(_c, _id, _a);
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
