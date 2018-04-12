/****************************************************************************
** Meta object code from reading C++ file 'QmitkPointListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkPointListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkPointListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkPointListWidget_t {
    QByteArrayData data[20];
    char stringdata[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkPointListWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkPointListWidget_t qt_meta_stringdata_QmitkPointListWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QmitkPointListWidget"
QT_MOC_LITERAL(1, 21, 13), // "EditPointSets"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "active"
QT_MOC_LITERAL(4, 43, 21), // "PointSelectionChanged"
QT_MOC_LITERAL(5, 65, 16), // "PointListChanged"
QT_MOC_LITERAL(6, 82, 20), // "DeactivateInteractor"
QT_MOC_LITERAL(7, 103, 10), // "deactivate"
QT_MOC_LITERAL(8, 114, 16), // "EnableEditButton"
QT_MOC_LITERAL(9, 131, 7), // "enabled"
QT_MOC_LITERAL(10, 139, 15), // "OnBtnSavePoints"
QT_MOC_LITERAL(11, 155, 15), // "OnBtnLoadPoints"
QT_MOC_LITERAL(12, 171, 19), // "RemoveSelectedPoint"
QT_MOC_LITERAL(13, 191, 21), // "MoveSelectedPointDown"
QT_MOC_LITERAL(14, 213, 19), // "MoveSelectedPointUp"
QT_MOC_LITERAL(15, 233, 13), // "OnBtnAddPoint"
QT_MOC_LITERAL(16, 247, 7), // "checked"
QT_MOC_LITERAL(17, 255, 21), // "OnBtnAddPointManually"
QT_MOC_LITERAL(18, 277, 23), // "OnPointSelectionChanged"
QT_MOC_LITERAL(19, 301, 17) // "OnListDoubleClick"

    },
    "QmitkPointListWidget\0EditPointSets\0\0"
    "active\0PointSelectionChanged\0"
    "PointListChanged\0DeactivateInteractor\0"
    "deactivate\0EnableEditButton\0enabled\0"
    "OnBtnSavePoints\0OnBtnLoadPoints\0"
    "RemoveSelectedPoint\0MoveSelectedPointDown\0"
    "MoveSelectedPointUp\0OnBtnAddPoint\0"
    "checked\0OnBtnAddPointManually\0"
    "OnPointSelectionChanged\0OnListDoubleClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkPointListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    0,   87,    2, 0x06 /* Public */,
       5,    0,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   89,    2, 0x0a /* Public */,
       8,    1,   92,    2, 0x0a /* Public */,
      10,    0,   95,    2, 0x09 /* Protected */,
      11,    0,   96,    2, 0x09 /* Protected */,
      12,    0,   97,    2, 0x09 /* Protected */,
      13,    0,   98,    2, 0x09 /* Protected */,
      14,    0,   99,    2, 0x09 /* Protected */,
      15,    1,  100,    2, 0x09 /* Protected */,
      17,    0,  103,    2, 0x09 /* Protected */,
      18,    0,  104,    2, 0x09 /* Protected */,
      19,    0,  105,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmitkPointListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkPointListWidget *_t = static_cast<QmitkPointListWidget *>(_o);
        switch (_id) {
        case 0: _t->EditPointSets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->PointSelectionChanged(); break;
        case 2: _t->PointListChanged(); break;
        case 3: _t->DeactivateInteractor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->EnableEditButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->OnBtnSavePoints(); break;
        case 6: _t->OnBtnLoadPoints(); break;
        case 7: _t->RemoveSelectedPoint(); break;
        case 8: _t->MoveSelectedPointDown(); break;
        case 9: _t->MoveSelectedPointUp(); break;
        case 10: _t->OnBtnAddPoint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->OnBtnAddPointManually(); break;
        case 12: _t->OnPointSelectionChanged(); break;
        case 13: _t->OnListDoubleClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkPointListWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkPointListWidget::EditPointSets)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkPointListWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkPointListWidget::PointSelectionChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QmitkPointListWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkPointListWidget::PointListChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QmitkPointListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkPointListWidget.data,
      qt_meta_data_QmitkPointListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkPointListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkPointListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkPointListWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkPointListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkPointListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QmitkPointListWidget::EditPointSets(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmitkPointListWidget::PointSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QmitkPointListWidget::PointListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
