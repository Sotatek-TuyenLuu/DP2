/****************************************************************************
** Meta object code from reading C++ file 'QmitkLiveWireTool2DGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkLiveWireTool2DGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkLiveWireTool2DGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkLiveWireTool2DGUI_t {
    QByteArrayData data[8];
    char stringdata[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkLiveWireTool2DGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkLiveWireTool2DGUI_t qt_meta_stringdata_QmitkLiveWireTool2DGUI = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QmitkLiveWireTool2DGUI"
QT_MOC_LITERAL(1, 23, 19), // "OnNewToolAssociated"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "mitk::Tool*"
QT_MOC_LITERAL(4, 56, 21), // "OnConfirmSegmentation"
QT_MOC_LITERAL(5, 78, 19), // "OnClearSegmentation"
QT_MOC_LITERAL(6, 98, 17), // "OnShowInformation"
QT_MOC_LITERAL(7, 116, 2) // "on"

    },
    "QmitkLiveWireTool2DGUI\0OnNewToolAssociated\0"
    "\0mitk::Tool*\0OnConfirmSegmentation\0"
    "OnClearSegmentation\0OnShowInformation\0"
    "on"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkLiveWireTool2DGUI[] = {

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
       4,    0,   37,    2, 0x09 /* Protected */,
       5,    0,   38,    2, 0x09 /* Protected */,
       6,    1,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void QmitkLiveWireTool2DGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkLiveWireTool2DGUI *_t = static_cast<QmitkLiveWireTool2DGUI *>(_o);
        switch (_id) {
        case 0: _t->OnNewToolAssociated((*reinterpret_cast< mitk::Tool*(*)>(_a[1]))); break;
        case 1: _t->OnConfirmSegmentation(); break;
        case 2: _t->OnClearSegmentation(); break;
        case 3: _t->OnShowInformation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkLiveWireTool2DGUI::staticMetaObject = {
    { &QmitkToolGUI::staticMetaObject, qt_meta_stringdata_QmitkLiveWireTool2DGUI.data,
      qt_meta_data_QmitkLiveWireTool2DGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkLiveWireTool2DGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkLiveWireTool2DGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkLiveWireTool2DGUI.stringdata))
        return static_cast<void*>(const_cast< QmitkLiveWireTool2DGUI*>(this));
    return QmitkToolGUI::qt_metacast(_clname);
}

int QmitkLiveWireTool2DGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkToolGUI::qt_metacall(_c, _id, _a);
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
