/****************************************************************************
** Meta object code from reading C++ file 'QmitkTransferFunctionGeneratorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkTransferFunctionGeneratorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkTransferFunctionGeneratorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkTransferFunctionGeneratorWidget_t {
    QByteArrayData data[12];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkTransferFunctionGeneratorWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkTransferFunctionGeneratorWidget_t qt_meta_stringdata_QmitkTransferFunctionGeneratorWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QmitkTransferFunctionGenerato..."
QT_MOC_LITERAL(1, 37, 33), // "SignalTransferFunctionModeCha..."
QT_MOC_LITERAL(2, 71, 0), // ""
QT_MOC_LITERAL(3, 72, 18), // "SignalUpdateCanvas"
QT_MOC_LITERAL(4, 91, 12), // "OnSavePreset"
QT_MOC_LITERAL(5, 104, 12), // "OnLoadPreset"
QT_MOC_LITERAL(6, 117, 18), // "OnDeltaLevelWindow"
QT_MOC_LITERAL(7, 136, 2), // "dx"
QT_MOC_LITERAL(8, 139, 2), // "dy"
QT_MOC_LITERAL(9, 142, 16), // "OnDeltaThreshold"
QT_MOC_LITERAL(10, 159, 8), // "OnPreset"
QT_MOC_LITERAL(11, 168, 4) // "mode"

    },
    "QmitkTransferFunctionGeneratorWidget\0"
    "SignalTransferFunctionModeChanged\0\0"
    "SignalUpdateCanvas\0OnSavePreset\0"
    "OnLoadPreset\0OnDeltaLevelWindow\0dx\0"
    "dy\0OnDeltaThreshold\0OnPreset\0mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkTransferFunctionGeneratorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   53,    2, 0x0a /* Public */,
       5,    0,   54,    2, 0x0a /* Public */,
       6,    2,   55,    2, 0x0a /* Public */,
       9,    2,   60,    2, 0x0a /* Public */,
      10,    1,   65,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void QmitkTransferFunctionGeneratorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkTransferFunctionGeneratorWidget *_t = static_cast<QmitkTransferFunctionGeneratorWidget *>(_o);
        switch (_id) {
        case 0: _t->SignalTransferFunctionModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SignalUpdateCanvas(); break;
        case 2: _t->OnSavePreset(); break;
        case 3: _t->OnLoadPreset(); break;
        case 4: _t->OnDeltaLevelWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->OnDeltaThreshold((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->OnPreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkTransferFunctionGeneratorWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkTransferFunctionGeneratorWidget::SignalTransferFunctionModeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkTransferFunctionGeneratorWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkTransferFunctionGeneratorWidget::SignalUpdateCanvas)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QmitkTransferFunctionGeneratorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkTransferFunctionGeneratorWidget.data,
      qt_meta_data_QmitkTransferFunctionGeneratorWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkTransferFunctionGeneratorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkTransferFunctionGeneratorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkTransferFunctionGeneratorWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkTransferFunctionGeneratorWidget*>(this));
    if (!strcmp(_clname, "Ui::QmitkTransferFunctionGeneratorWidget"))
        return static_cast< Ui::QmitkTransferFunctionGeneratorWidget*>(const_cast< QmitkTransferFunctionGeneratorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkTransferFunctionGeneratorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QmitkTransferFunctionGeneratorWidget::SignalTransferFunctionModeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmitkTransferFunctionGeneratorWidget::SignalUpdateCanvas()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
