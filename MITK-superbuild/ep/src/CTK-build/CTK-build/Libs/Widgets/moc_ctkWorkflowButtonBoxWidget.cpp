/****************************************************************************
** Meta object code from reading C++ file 'ctkWorkflowButtonBoxWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkWorkflowButtonBoxWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkWorkflowButtonBoxWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkWorkflowButtonBoxWidget_t {
    QByteArrayData data[14];
    char stringdata[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkWorkflowButtonBoxWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkWorkflowButtonBoxWidget_t qt_meta_stringdata_ctkWorkflowButtonBoxWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "ctkWorkflowButtonBoxWidget"
QT_MOC_LITERAL(1, 27, 13), // "updateButtons"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "ctkWorkflowStep*"
QT_MOC_LITERAL(4, 59, 11), // "currentStep"
QT_MOC_LITERAL(5, 71, 15), // "prepareGoToStep"
QT_MOC_LITERAL(6, 87, 10), // "backButton"
QT_MOC_LITERAL(7, 98, 14), // "ctkPushButton*"
QT_MOC_LITERAL(8, 113, 10), // "nextButton"
QT_MOC_LITERAL(9, 124, 16), // "backButtonFormat"
QT_MOC_LITERAL(10, 141, 16), // "nextButtonFormat"
QT_MOC_LITERAL(11, 158, 17), // "goToButtonsFormat"
QT_MOC_LITERAL(12, 176, 15), // "hideGoToButtons"
QT_MOC_LITERAL(13, 192, 18) // "hideInvalidButtons"

    },
    "ctkWorkflowButtonBoxWidget\0updateButtons\0"
    "\0ctkWorkflowStep*\0currentStep\0"
    "prepareGoToStep\0backButton\0ctkPushButton*\0"
    "nextButton\0backButtonFormat\0"
    "nextButtonFormat\0goToButtonsFormat\0"
    "hideGoToButtons\0hideInvalidButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkWorkflowButtonBoxWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   38,    2, 0x02 /* Public */,
       8,    0,   39,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 7,
    0x80000000 | 7,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkWorkflowButtonBoxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkWorkflowButtonBoxWidget *_t = static_cast<ctkWorkflowButtonBoxWidget *>(_o);
        switch (_id) {
        case 0: _t->updateButtons((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1]))); break;
        case 1: _t->prepareGoToStep(); break;
        case 2: { ctkPushButton* _r = _t->backButton();
            if (_a[0]) *reinterpret_cast< ctkPushButton**>(_a[0]) = _r; }  break;
        case 3: { ctkPushButton* _r = _t->nextButton();
            if (_a[0]) *reinterpret_cast< ctkPushButton**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ctkWorkflowButtonBoxWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkWorkflowButtonBoxWidget.data,
      qt_meta_data_ctkWorkflowButtonBoxWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkWorkflowButtonBoxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkWorkflowButtonBoxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkWorkflowButtonBoxWidget.stringdata))
        return static_cast<void*>(const_cast< ctkWorkflowButtonBoxWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkWorkflowButtonBoxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = backButtonFormat(); break;
        case 1: *reinterpret_cast< QString*>(_v) = nextButtonFormat(); break;
        case 2: *reinterpret_cast< QString*>(_v) = goToButtonsFormat(); break;
        case 3: *reinterpret_cast< bool*>(_v) = hideGoToButtons(); break;
        case 4: *reinterpret_cast< bool*>(_v) = hideInvalidButtons(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBackButtonFormat(*reinterpret_cast< QString*>(_v)); break;
        case 1: setNextButtonFormat(*reinterpret_cast< QString*>(_v)); break;
        case 2: setGoToButtonsFormat(*reinterpret_cast< QString*>(_v)); break;
        case 3: setHideGoToButtons(*reinterpret_cast< bool*>(_v)); break;
        case 4: setHideInvalidButtons(*reinterpret_cast< bool*>(_v)); break;
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
QT_END_MOC_NAMESPACE
