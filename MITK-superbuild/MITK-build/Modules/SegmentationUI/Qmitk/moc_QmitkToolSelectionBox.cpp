/****************************************************************************
** Meta object code from reading C++ file 'QmitkToolSelectionBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkToolSelectionBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkToolSelectionBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkToolSelectionBox_t {
    QByteArrayData data[16];
    char stringdata[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkToolSelectionBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkToolSelectionBox_t qt_meta_stringdata_QmitkToolSelectionBox = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QmitkToolSelectionBox"
QT_MOC_LITERAL(1, 22, 12), // "ToolSelected"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 2), // "id"
QT_MOC_LITERAL(4, 39, 10), // "setEnabled"
QT_MOC_LITERAL(5, 50, 14), // "SetEnabledMode"
QT_MOC_LITERAL(6, 65, 11), // "EnabledMode"
QT_MOC_LITERAL(7, 77, 4), // "mode"
QT_MOC_LITERAL(8, 82, 16), // "SetLayoutColumns"
QT_MOC_LITERAL(9, 99, 12), // "SetShowNames"
QT_MOC_LITERAL(10, 112, 23), // "SetGenerateAccelerators"
QT_MOC_LITERAL(11, 136, 14), // "SetToolGUIArea"
QT_MOC_LITERAL(12, 151, 8), // "QWidget*"
QT_MOC_LITERAL(13, 160, 12), // "parentWidget"
QT_MOC_LITERAL(14, 173, 17), // "toolButtonClicked"
QT_MOC_LITERAL(15, 191, 40) // "SetGUIEnabledAccordingToToolM..."

    },
    "QmitkToolSelectionBox\0ToolSelected\0\0"
    "id\0setEnabled\0SetEnabledMode\0EnabledMode\0"
    "mode\0SetLayoutColumns\0SetShowNames\0"
    "SetGenerateAccelerators\0SetToolGUIArea\0"
    "QWidget*\0parentWidget\0toolButtonClicked\0"
    "SetGUIEnabledAccordingToToolManagerState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkToolSelectionBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   62,    2, 0x0a /* Public */,
       5,    1,   65,    2, 0x0a /* Public */,
       8,    1,   68,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      11,    1,   77,    2, 0x0a /* Public */,
      14,    1,   80,    2, 0x09 /* Protected */,
      15,    0,   83,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void QmitkToolSelectionBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkToolSelectionBox *_t = static_cast<QmitkToolSelectionBox *>(_o);
        switch (_id) {
        case 0: _t->ToolSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SetEnabledMode((*reinterpret_cast< EnabledMode(*)>(_a[1]))); break;
        case 3: _t->SetLayoutColumns((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SetShowNames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->SetGenerateAccelerators((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->SetToolGUIArea((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 7: _t->toolButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->SetGUIEnabledAccordingToToolManagerState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkToolSelectionBox::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkToolSelectionBox::ToolSelected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmitkToolSelectionBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkToolSelectionBox.data,
      qt_meta_data_QmitkToolSelectionBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkToolSelectionBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkToolSelectionBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkToolSelectionBox.stringdata))
        return static_cast<void*>(const_cast< QmitkToolSelectionBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkToolSelectionBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QmitkToolSelectionBox::ToolSelected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
