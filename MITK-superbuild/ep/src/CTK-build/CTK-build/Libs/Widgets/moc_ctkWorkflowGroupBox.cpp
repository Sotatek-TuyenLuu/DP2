/****************************************************************************
** Meta object code from reading C++ file 'ctkWorkflowGroupBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkWorkflowGroupBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkWorkflowGroupBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkWorkflowGroupBox_t {
    QByteArrayData data[12];
    char stringdata[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkWorkflowGroupBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkWorkflowGroupBox_t qt_meta_stringdata_ctkWorkflowGroupBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ctkWorkflowGroupBox"
QT_MOC_LITERAL(1, 20, 14), // "updateGroupBox"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "ctkWorkflowStep*"
QT_MOC_LITERAL(4, 53, 11), // "currentStep"
QT_MOC_LITERAL(5, 65, 7), // "preText"
QT_MOC_LITERAL(6, 73, 8), // "postText"
QT_MOC_LITERAL(7, 82, 11), // "titleFormat"
QT_MOC_LITERAL(8, 94, 14), // "subTitleFormat"
QT_MOC_LITERAL(9, 109, 15), // "errorTextFormat"
QT_MOC_LITERAL(10, 125, 28), // "hideWidgetsOfNonCurrentSteps"
QT_MOC_LITERAL(11, 154, 16) // "errorTextEnabled"

    },
    "ctkWorkflowGroupBox\0updateGroupBox\0\0"
    "ctkWorkflowStep*\0currentStep\0preText\0"
    "postText\0titleFormat\0subTitleFormat\0"
    "errorTextFormat\0hideWidgetsOfNonCurrentSteps\0"
    "errorTextEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkWorkflowGroupBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkWorkflowGroupBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkWorkflowGroupBox *_t = static_cast<ctkWorkflowGroupBox *>(_o);
        switch (_id) {
        case 0: _t->updateGroupBox((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ctkWorkflowGroupBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkWorkflowGroupBox.data,
      qt_meta_data_ctkWorkflowGroupBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkWorkflowGroupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkWorkflowGroupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkWorkflowGroupBox.stringdata))
        return static_cast<void*>(const_cast< ctkWorkflowGroupBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkWorkflowGroupBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = preText(); break;
        case 1: *reinterpret_cast< QString*>(_v) = postText(); break;
        case 2: *reinterpret_cast< QString*>(_v) = titleFormat(); break;
        case 3: *reinterpret_cast< QString*>(_v) = subTitleFormat(); break;
        case 4: *reinterpret_cast< QString*>(_v) = errorTextFormat(); break;
        case 5: *reinterpret_cast< bool*>(_v) = hideWidgetsOfNonCurrentSteps(); break;
        case 6: *reinterpret_cast< bool*>(_v) = errorTextEnabled(); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPreText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setPostText(*reinterpret_cast< QString*>(_v)); break;
        case 2: setTitleFormat(*reinterpret_cast< QString*>(_v)); break;
        case 3: setSubTitleFormat(*reinterpret_cast< QString*>(_v)); break;
        case 4: setErrorTextFormat(*reinterpret_cast< QString*>(_v)); break;
        case 5: setHideWidgetsOfNonCurrentSteps(*reinterpret_cast< bool*>(_v)); break;
        case 6: setErrorTextEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
