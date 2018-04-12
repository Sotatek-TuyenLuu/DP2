/****************************************************************************
** Meta object code from reading C++ file 'ctkWorkflowWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkWorkflowWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkWorkflowWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkWorkflowWidget_t {
    QByteArrayData data[19];
    char stringdata[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkWorkflowWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkWorkflowWidget_t qt_meta_stringdata_ctkWorkflowWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ctkWorkflowWidget"
QT_MOC_LITERAL(1, 18, 20), // "onCurrentStepChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "ctkWorkflowStep*"
QT_MOC_LITERAL(4, 57, 11), // "currentStep"
QT_MOC_LITERAL(5, 69, 16), // "onStepRegistered"
QT_MOC_LITERAL(6, 86, 4), // "step"
QT_MOC_LITERAL(7, 91, 8), // "workflow"
QT_MOC_LITERAL(8, 100, 12), // "ctkWorkflow*"
QT_MOC_LITERAL(9, 113, 11), // "setWorkflow"
QT_MOC_LITERAL(10, 125, 11), // "newWorkflow"
QT_MOC_LITERAL(11, 137, 10), // "widgetStep"
QT_MOC_LITERAL(12, 148, 22), // "ctkWorkflowWidgetStep*"
QT_MOC_LITERAL(13, 171, 2), // "id"
QT_MOC_LITERAL(14, 174, 16), // "workflowGroupBox"
QT_MOC_LITERAL(15, 191, 20), // "ctkWorkflowGroupBox*"
QT_MOC_LITERAL(16, 212, 15), // "buttonBoxWidget"
QT_MOC_LITERAL(17, 228, 27), // "ctkWorkflowButtonBoxWidget*"
QT_MOC_LITERAL(18, 256, 19) // "showButtonBoxWidget"

    },
    "ctkWorkflowWidget\0onCurrentStepChanged\0"
    "\0ctkWorkflowStep*\0currentStep\0"
    "onStepRegistered\0step\0workflow\0"
    "ctkWorkflow*\0setWorkflow\0newWorkflow\0"
    "widgetStep\0ctkWorkflowWidgetStep*\0id\0"
    "workflowGroupBox\0ctkWorkflowGroupBox*\0"
    "buttonBoxWidget\0ctkWorkflowButtonBoxWidget*\0"
    "showButtonBoxWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkWorkflowWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   55,    2, 0x02 /* Public */,
       9,    1,   56,    2, 0x02 /* Public */,
      11,    1,   59,    2, 0x02 /* Public */,
      14,    0,   62,    2, 0x02 /* Public */,
      16,    0,   63,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,

 // methods: parameters
    0x80000000 | 8,
    QMetaType::Void, 0x80000000 | 8,   10,
    0x80000000 | 12, QMetaType::QString,   13,
    0x80000000 | 15,
    0x80000000 | 17,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkWorkflowWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkWorkflowWidget *_t = static_cast<ctkWorkflowWidget *>(_o);
        switch (_id) {
        case 0: _t->onCurrentStepChanged((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1]))); break;
        case 1: _t->onStepRegistered((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1]))); break;
        case 2: { ctkWorkflow* _r = _t->workflow();
            if (_a[0]) *reinterpret_cast< ctkWorkflow**>(_a[0]) = _r; }  break;
        case 3: _t->setWorkflow((*reinterpret_cast< ctkWorkflow*(*)>(_a[1]))); break;
        case 4: { ctkWorkflowWidgetStep* _r = _t->widgetStep((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ctkWorkflowWidgetStep**>(_a[0]) = _r; }  break;
        case 5: { ctkWorkflowGroupBox* _r = _t->workflowGroupBox();
            if (_a[0]) *reinterpret_cast< ctkWorkflowGroupBox**>(_a[0]) = _r; }  break;
        case 6: { ctkWorkflowButtonBoxWidget* _r = _t->buttonBoxWidget();
            if (_a[0]) *reinterpret_cast< ctkWorkflowButtonBoxWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ctkWorkflowWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkWorkflowWidget.data,
      qt_meta_data_ctkWorkflowWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkWorkflowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkWorkflowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkWorkflowWidget.stringdata))
        return static_cast<void*>(const_cast< ctkWorkflowWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkWorkflowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = showButtonBoxWidget(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setShowButtonBoxWidget(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
