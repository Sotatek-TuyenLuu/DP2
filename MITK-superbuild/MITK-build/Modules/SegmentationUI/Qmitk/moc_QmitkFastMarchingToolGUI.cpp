/****************************************************************************
** Meta object code from reading C++ file 'QmitkFastMarchingToolGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkFastMarchingToolGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkFastMarchingToolGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkFastMarchingToolGUI_t {
    QByteArrayData data[14];
    char stringdata[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkFastMarchingToolGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkFastMarchingToolGUI_t qt_meta_stringdata_QmitkFastMarchingToolGUI = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QmitkFastMarchingToolGUI"
QT_MOC_LITERAL(1, 25, 19), // "OnNewToolAssociated"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 11), // "mitk::Tool*"
QT_MOC_LITERAL(4, 58, 18), // "OnThresholdChanged"
QT_MOC_LITERAL(5, 77, 14), // "OnAlphaChanged"
QT_MOC_LITERAL(6, 92, 13), // "OnBetaChanged"
QT_MOC_LITERAL(7, 106, 14), // "OnSigmaChanged"
QT_MOC_LITERAL(8, 121, 22), // "OnStoppingValueChanged"
QT_MOC_LITERAL(9, 144, 21), // "OnConfirmSegmentation"
QT_MOC_LITERAL(10, 166, 7), // "Refetch"
QT_MOC_LITERAL(11, 174, 10), // "SetStepper"
QT_MOC_LITERAL(12, 185, 14), // "mitk::Stepper*"
QT_MOC_LITERAL(13, 200, 12) // "OnClearSeeds"

    },
    "QmitkFastMarchingToolGUI\0OnNewToolAssociated\0"
    "\0mitk::Tool*\0OnThresholdChanged\0"
    "OnAlphaChanged\0OnBetaChanged\0"
    "OnSigmaChanged\0OnStoppingValueChanged\0"
    "OnConfirmSegmentation\0Refetch\0SetStepper\0"
    "mitk::Stepper*\0OnClearSeeds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkFastMarchingToolGUI[] = {

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

void QmitkFastMarchingToolGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkFastMarchingToolGUI *_t = static_cast<QmitkFastMarchingToolGUI *>(_o);
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

const QMetaObject QmitkFastMarchingToolGUI::staticMetaObject = {
    { &QmitkToolGUI::staticMetaObject, qt_meta_stringdata_QmitkFastMarchingToolGUI.data,
      qt_meta_data_QmitkFastMarchingToolGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkFastMarchingToolGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkFastMarchingToolGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkFastMarchingToolGUI.stringdata))
        return static_cast<void*>(const_cast< QmitkFastMarchingToolGUI*>(this));
    return QmitkToolGUI::qt_metacast(_clname);
}

int QmitkFastMarchingToolGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
