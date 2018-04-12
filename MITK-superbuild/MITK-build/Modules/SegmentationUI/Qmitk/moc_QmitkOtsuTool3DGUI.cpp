/****************************************************************************
** Meta object code from reading C++ file 'QmitkOtsuTool3DGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkOtsuTool3DGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkOtsuTool3DGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkOtsuTool3DGUI_t {
    QByteArrayData data[11];
    char stringdata[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkOtsuTool3DGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkOtsuTool3DGUI_t qt_meta_stringdata_QmitkOtsuTool3DGUI = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QmitkOtsuTool3DGUI"
QT_MOC_LITERAL(1, 19, 19), // "OnNewToolAssociated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "mitk::Tool*"
QT_MOC_LITERAL(4, 52, 20), // "OnSpinboxValueAccept"
QT_MOC_LITERAL(5, 73, 26), // "OnSegmentationRegionAccept"
QT_MOC_LITERAL(6, 100, 24), // "OnRegionSelectionChanged"
QT_MOC_LITERAL(7, 125, 22), // "OnRegionSpinboxChanged"
QT_MOC_LITERAL(8, 148, 22), // "OnVolumePreviewChecked"
QT_MOC_LITERAL(9, 171, 31), // "OnAdvancedSettingsButtonToggled"
QT_MOC_LITERAL(10, 203, 7) // "toggled"

    },
    "QmitkOtsuTool3DGUI\0OnNewToolAssociated\0"
    "\0mitk::Tool*\0OnSpinboxValueAccept\0"
    "OnSegmentationRegionAccept\0"
    "OnRegionSelectionChanged\0"
    "OnRegionSpinboxChanged\0OnVolumePreviewChecked\0"
    "OnAdvancedSettingsButtonToggled\0toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkOtsuTool3DGUI[] = {

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
       1,    1,   49,    2, 0x09 /* Protected */,
       4,    0,   52,    2, 0x09 /* Protected */,
       5,    0,   53,    2, 0x09 /* Protected */,
       6,    0,   54,    2, 0x09 /* Protected */,
       7,    1,   55,    2, 0x09 /* Protected */,
       8,    1,   58,    2, 0x09 /* Protected */,
       9,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void QmitkOtsuTool3DGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkOtsuTool3DGUI *_t = static_cast<QmitkOtsuTool3DGUI *>(_o);
        switch (_id) {
        case 0: _t->OnNewToolAssociated((*reinterpret_cast< mitk::Tool*(*)>(_a[1]))); break;
        case 1: _t->OnSpinboxValueAccept(); break;
        case 2: _t->OnSegmentationRegionAccept(); break;
        case 3: _t->OnRegionSelectionChanged(); break;
        case 4: _t->OnRegionSpinboxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->OnVolumePreviewChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->OnAdvancedSettingsButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkOtsuTool3DGUI::staticMetaObject = {
    { &QmitkToolGUI::staticMetaObject, qt_meta_stringdata_QmitkOtsuTool3DGUI.data,
      qt_meta_data_QmitkOtsuTool3DGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkOtsuTool3DGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkOtsuTool3DGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkOtsuTool3DGUI.stringdata))
        return static_cast<void*>(const_cast< QmitkOtsuTool3DGUI*>(this));
    return QmitkToolGUI::qt_metacast(_clname);
}

int QmitkOtsuTool3DGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkToolGUI::qt_metacall(_c, _id, _a);
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
