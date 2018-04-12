/****************************************************************************
** Meta object code from reading C++ file 'QmitkPickingToolGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkPickingToolGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkPickingToolGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkPickingToolGUI_t {
    QByteArrayData data[5];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkPickingToolGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkPickingToolGUI_t qt_meta_stringdata_QmitkPickingToolGUI = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QmitkPickingToolGUI"
QT_MOC_LITERAL(1, 20, 19), // "OnNewToolAssociated"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "mitk::Tool*"
QT_MOC_LITERAL(4, 53, 21) // "OnConfirmSegmentation"

    },
    "QmitkPickingToolGUI\0OnNewToolAssociated\0"
    "\0mitk::Tool*\0OnConfirmSegmentation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkPickingToolGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       4,    0,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

       0        // eod
};

void QmitkPickingToolGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkPickingToolGUI *_t = static_cast<QmitkPickingToolGUI *>(_o);
        switch (_id) {
        case 0: _t->OnNewToolAssociated((*reinterpret_cast< mitk::Tool*(*)>(_a[1]))); break;
        case 1: _t->OnConfirmSegmentation(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkPickingToolGUI::staticMetaObject = {
    { &QmitkToolGUI::staticMetaObject, qt_meta_stringdata_QmitkPickingToolGUI.data,
      qt_meta_data_QmitkPickingToolGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkPickingToolGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkPickingToolGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkPickingToolGUI.stringdata))
        return static_cast<void*>(const_cast< QmitkPickingToolGUI*>(this));
    return QmitkToolGUI::qt_metacast(_clname);
}

int QmitkPickingToolGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkToolGUI::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
