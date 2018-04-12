/****************************************************************************
** Meta object code from reading C++ file 'ctkMenuComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkMenuComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkMenuComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkMenuComboBox_t {
    QByteArrayData data[22];
    char stringdata[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkMenuComboBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkMenuComboBox_t qt_meta_stringdata_ctkMenuComboBox = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ctkMenuComboBox"
QT_MOC_LITERAL(1, 16, 13), // "actionChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "QAction*"
QT_MOC_LITERAL(4, 40, 6), // "action"
QT_MOC_LITERAL(5, 47, 10), // "popupShown"
QT_MOC_LITERAL(6, 58, 17), // "clearActiveAction"
QT_MOC_LITERAL(7, 76, 18), // "setToolButtonStyle"
QT_MOC_LITERAL(8, 95, 19), // "Qt::ToolButtonStyle"
QT_MOC_LITERAL(9, 115, 5), // "style"
QT_MOC_LITERAL(10, 121, 16), // "onActionSelected"
QT_MOC_LITERAL(11, 138, 17), // "onEditingFinished"
QT_MOC_LITERAL(12, 156, 11), // "defaultText"
QT_MOC_LITERAL(13, 168, 11), // "defaultIcon"
QT_MOC_LITERAL(14, 180, 12), // "editBehavior"
QT_MOC_LITERAL(15, 193, 16), // "EditableBehavior"
QT_MOC_LITERAL(16, 210, 17), // "searchIconVisible"
QT_MOC_LITERAL(17, 228, 15), // "toolButtonStyle"
QT_MOC_LITERAL(18, 244, 11), // "NotEditable"
QT_MOC_LITERAL(19, 256, 8), // "Editable"
QT_MOC_LITERAL(20, 265, 15), // "EditableOnFocus"
QT_MOC_LITERAL(21, 281, 15) // "EditableOnPopup"

    },
    "ctkMenuComboBox\0actionChanged\0\0QAction*\0"
    "action\0popupShown\0clearActiveAction\0"
    "setToolButtonStyle\0Qt::ToolButtonStyle\0"
    "style\0onActionSelected\0onEditingFinished\0"
    "defaultText\0defaultIcon\0editBehavior\0"
    "EditableBehavior\0searchIconVisible\0"
    "toolButtonStyle\0NotEditable\0Editable\0"
    "EditableOnFocus\0EditableOnPopup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkMenuComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   56, // properties
       1,   71, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   48,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,
      10,    1,   52,    2, 0x09 /* Protected */,
      11,    0,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QIcon, 0x00095103,
      14, 0x80000000 | 15, 0x0009500b,
      16, QMetaType::Bool, 0x00095103,
      17, 0x80000000 | 8, 0x0009510b,

 // enums: name, flags, count, data
      15, 0x0,    4,   75,

 // enum data: key, value
      18, uint(ctkMenuComboBox::NotEditable),
      19, uint(ctkMenuComboBox::Editable),
      20, uint(ctkMenuComboBox::EditableOnFocus),
      21, uint(ctkMenuComboBox::EditableOnPopup),

       0        // eod
};

void ctkMenuComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkMenuComboBox *_t = static_cast<ctkMenuComboBox *>(_o);
        switch (_id) {
        case 0: _t->actionChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->popupShown(); break;
        case 2: _t->clearActiveAction(); break;
        case 3: _t->setToolButtonStyle((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        case 4: _t->onActionSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->onEditingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkMenuComboBox::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkMenuComboBox::actionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkMenuComboBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkMenuComboBox::popupShown)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ctkMenuComboBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkMenuComboBox.data,
      qt_meta_data_ctkMenuComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkMenuComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkMenuComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkMenuComboBox.stringdata))
        return static_cast<void*>(const_cast< ctkMenuComboBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkMenuComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = defaultText(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = defaultIcon(); break;
        case 2: *reinterpret_cast< EditableBehavior*>(_v) = editableBehavior(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isSearchIconVisible(); break;
        case 4: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = toolButtonStyle(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDefaultText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setDefaultIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: setEditableBehavior(*reinterpret_cast< EditableBehavior*>(_v)); break;
        case 3: setSearchIconVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: setToolButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkMenuComboBox::actionChanged(QAction * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkMenuComboBox::popupShown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
