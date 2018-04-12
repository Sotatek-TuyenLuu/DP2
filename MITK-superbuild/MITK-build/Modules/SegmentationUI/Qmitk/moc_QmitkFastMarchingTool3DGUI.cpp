/****************************************************************************
** Meta object code from reading C++ file 'QmitkFastMarchingTool3DGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkFastMarchingTool3DGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkFastMarchingTool3DGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkFastMarchingTool3DGUI_t {
    QByteArrayData data[14];
    char stringdata[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkFastMarchingTool3DGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkFastMarchingTool3DGUI_t qt_meta_stringdata_QmitkFastMarchingTool3DGUI = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QmitkFastMarchingTool3DGUI"
QT_MOC_LITERAL(1, 27, 19), // "OnNewToolAssociated"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "mitk::Tool*"
QT_MOC_LITERAL(4, 60, 18), // "OnThresholdChanged"
QT_MOC_LITERAL(5, 79, 14), // "OnAlphaChanged"
QT_MOC_LITERAL(6, 94, 13), // "OnBetaChanged"
QT_MOC_LITERAL(7, 108, 14), // "OnSigmaChanged"
QT_MOC_LITERAL(8, 123, 22), // "OnStoppingValueChanged"
QT_MOC_LITERAL(9, 146, 21), // "OnConfirmSegmentation"
QT_MOC_LITERAL(10, 168, 7), // "Refetch"
QT_MOC_LITERAL(11, 176, 10), // "SetStepper"
QT_MOC_LITERAL(12, 187, 14), // "mitk::Stepper*"
QT_MOC_LITERAL(13, 202, 12) // "OnClearSeeds"

    },
    "QmitkFastMarchingTool3DGUI\0"
    "OnNewToolAssociated\0\0mitk::Tool*\0"
    "OnThresholdChanged\0OnAlphaChanged\0"
    "OnBetaChanged\0OnSigmaChanged\0"
    "OnStoppingValueChanged\0OnConfirmSegmentation\0"
    "Refetch\0SetStepper\0mitk::Stepper*\0"
    "OnClearSeeds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkFastMarchingTool3DGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x09 /* Protected */,
       4,    2,   67,    2, 0x09 /* Protected */,
       5,    1,   72,    2, 0x09 /* Protected */,
       6,    1,   75,    2, 0x09 /* Protected */,
       7,    1,   78,    2, 0x09 /* Protected */,
       8,    1,   81,    2, 0x09 /* Protected */,
       9,    0,   84,    2, 0x09 /* Protected */,
      10,    0,   85,    2, 0x09 /* Protected */,
      11,    1,   86,    2, 0x09 /* Protected */,
      13,    0,   89,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,

       0        // eod
};

void QmitkFastMarchingTool3DGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkFastMarchingTool3DGUI *_t = static_cast<QmitkFastMarchingTool3DGUI *>(_o);
        switch (_id) {
        case 0: _t->OnNewToolAssociated((*reinterpret_cast< mitk::Tool*(*)>(_a[1]))); break;
        case 1: _t->OnThresholdChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->OnAlphaChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->OnBetaChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->OnSigmaChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->OnStoppingValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->OnConfirmSegmentation(); break;
        case 7: _t->Refetch(); break;
        case 8: _t->SetStepper((*reinterpret_cast< mitk::Stepper*(*)>(_a[1]))); break;
        case 9: _t->OnClearSeeds(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkFastMarchingTool3DGUI::staticMetaObject = {
    { &QmitkToolGUI::staticMetaObject, qt_meta_stringdata_QmitkFastMarchingTool3DGUI.data,
      qt_meta_data_QmitkFastMarchingTool3DGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkFastMarchingTool3DGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkFastMarchingTool3DGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkFastMarchingTool3DGUI.stringdata))
        return static_cast<void*>(const_cast< QmitkFastMarchingTool3DGUI*>(this));
    return QmitkToolGUI::qt_metacast(_clname);
}

int QmitkFastMarchingTool3DGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkToolGUI::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
