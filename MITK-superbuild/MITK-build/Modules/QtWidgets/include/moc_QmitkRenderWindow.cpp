/****************************************************************************
** Meta object code from reading C++ file 'QmitkRenderWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgets/include/QmitkRenderWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkRenderWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkRenderWindow_t {
    QByteArrayData data[15];
    char stringdata[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkRenderWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkRenderWindow_t qt_meta_stringdata_QmitkRenderWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QmitkRenderWindow"
QT_MOC_LITERAL(1, 18, 9), // "ResetView"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 27), // "ChangeCrosshairRotationMode"
QT_MOC_LITERAL(4, 57, 25), // "SignalLayoutDesignChanged"
QT_MOC_LITERAL(5, 83, 17), // "layoutDesignIndex"
QT_MOC_LITERAL(6, 101, 5), // "moved"
QT_MOC_LITERAL(7, 107, 12), // "NodesDropped"
QT_MOC_LITERAL(8, 120, 18), // "QmitkRenderWindow*"
QT_MOC_LITERAL(9, 139, 10), // "thisWindow"
QT_MOC_LITERAL(10, 150, 28), // "std::vector<mitk::DataNode*>"
QT_MOC_LITERAL(11, 179, 5), // "nodes"
QT_MOC_LITERAL(12, 185, 20), // "OnChangeLayoutDesign"
QT_MOC_LITERAL(13, 206, 24), // "OnWidgetPlaneModeChanged"
QT_MOC_LITERAL(14, 231, 16) // "DeferredHideMenu"

    },
    "QmitkRenderWindow\0ResetView\0\0"
    "ChangeCrosshairRotationMode\0"
    "SignalLayoutDesignChanged\0layoutDesignIndex\0"
    "moved\0NodesDropped\0QmitkRenderWindow*\0"
    "thisWindow\0std::vector<mitk::DataNode*>\0"
    "nodes\0OnChangeLayoutDesign\0"
    "OnWidgetPlaneModeChanged\0DeferredHideMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkRenderWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       4,    1,   58,    2, 0x06 /* Public */,
       6,    0,   61,    2, 0x06 /* Public */,
       7,    2,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   67,    2, 0x09 /* Protected */,
      13,    1,   70,    2, 0x09 /* Protected */,
      14,    0,   73,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void QmitkRenderWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkRenderWindow *_t = static_cast<QmitkRenderWindow *>(_o);
        switch (_id) {
        case 0: _t->ResetView(); break;
        case 1: _t->ChangeCrosshairRotationMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SignalLayoutDesignChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->moved(); break;
        case 4: _t->NodesDropped((*reinterpret_cast< QmitkRenderWindow*(*)>(_a[1])),(*reinterpret_cast< std::vector<mitk::DataNode*>(*)>(_a[2]))); break;
        case 5: _t->OnChangeLayoutDesign((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->OnWidgetPlaneModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->DeferredHideMenu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmitkRenderWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkRenderWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkRenderWindow::ResetView)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkRenderWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkRenderWindow::ChangeCrosshairRotationMode)) {
                *result = 1;
            }
        }
        {
            typedef void (QmitkRenderWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkRenderWindow::SignalLayoutDesignChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QmitkRenderWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkRenderWindow::moved)) {
                *result = 3;
            }
        }
        {
            typedef void (QmitkRenderWindow::*_t)(QmitkRenderWindow * , std::vector<mitk::DataNode*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkRenderWindow::NodesDropped)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QmitkRenderWindow::staticMetaObject = {
    { &QVTKWidget::staticMetaObject, qt_meta_stringdata_QmitkRenderWindow.data,
      qt_meta_data_QmitkRenderWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkRenderWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkRenderWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkRenderWindow.stringdata))
        return static_cast<void*>(const_cast< QmitkRenderWindow*>(this));
    if (!strcmp(_clname, "mitk::RenderWindowBase"))
        return static_cast< mitk::RenderWindowBase*>(const_cast< QmitkRenderWindow*>(this));
    return QVTKWidget::qt_metacast(_clname);
}

int QmitkRenderWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVTKWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QmitkRenderWindow::ResetView()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmitkRenderWindow::ChangeCrosshairRotationMode(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmitkRenderWindow::SignalLayoutDesignChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QmitkRenderWindow::moved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QmitkRenderWindow::NodesDropped(QmitkRenderWindow * _t1, std::vector<mitk::DataNode*> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
