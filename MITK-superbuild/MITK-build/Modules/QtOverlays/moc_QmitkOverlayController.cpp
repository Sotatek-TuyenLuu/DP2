/****************************************************************************
** Meta object code from reading C++ file 'QmitkOverlayController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../MITK/Modules/QtOverlays/QmitkOverlayController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkOverlayController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkOverlayController_t {
    QByteArrayData data[10];
    char stringdata[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkOverlayController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkOverlayController_t qt_meta_stringdata_QmitkOverlayController = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QmitkOverlayController"
QT_MOC_LITERAL(1, 23, 24), // "AdjustAllOverlayPosition"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 21), // "AdjustOverlayPosition"
QT_MOC_LITERAL(4, 71, 29), // "QmitkOverlay::DisplayPosition"
QT_MOC_LITERAL(5, 101, 15), // "displayPosition"
QT_MOC_LITERAL(6, 117, 17), // "UpdateAllOverlays"
QT_MOC_LITERAL(7, 135, 17), // "UpdateOverlayData"
QT_MOC_LITERAL(8, 153, 13), // "QmitkOverlay*"
QT_MOC_LITERAL(9, 167, 7) // "overlay"

    },
    "QmitkOverlayController\0AdjustAllOverlayPosition\0"
    "\0AdjustOverlayPosition\0"
    "QmitkOverlay::DisplayPosition\0"
    "displayPosition\0UpdateAllOverlays\0"
    "UpdateOverlayData\0QmitkOverlay*\0overlay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkOverlayController[] = {

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
       3,    1,   35,    2, 0x0a /* Public */,
       6,    0,   38,    2, 0x0a /* Public */,
       7,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void QmitkOverlayController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkOverlayController *_t = static_cast<QmitkOverlayController *>(_o);
        switch (_id) {
        case 0: _t->AdjustAllOverlayPosition(); break;
        case 1: _t->AdjustOverlayPosition((*reinterpret_cast< QmitkOverlay::DisplayPosition(*)>(_a[1]))); break;
        case 2: _t->UpdateAllOverlays(); break;
        case 3: _t->UpdateOverlayData((*reinterpret_cast< QmitkOverlay*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmitkOverlay* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QmitkOverlayController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmitkOverlayController.data,
      qt_meta_data_QmitkOverlayController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkOverlayController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkOverlayController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkOverlayController.stringdata))
        return static_cast<void*>(const_cast< QmitkOverlayController*>(this));
    return QObject::qt_metacast(_clname);
}

int QmitkOverlayController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
