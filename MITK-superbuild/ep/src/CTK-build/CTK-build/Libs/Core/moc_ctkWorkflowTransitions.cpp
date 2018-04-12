/****************************************************************************
** Meta object code from reading C++ file 'ctkWorkflowTransitions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkWorkflowTransitions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkWorkflowTransitions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkWorkflowIntrastepTransition_t {
    QByteArrayData data[1];
    char stringdata[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkWorkflowIntrastepTransition_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkWorkflowIntrastepTransition_t qt_meta_stringdata_ctkWorkflowIntrastepTransition = {
    {
QT_MOC_LITERAL(0, 0, 30) // "ctkWorkflowIntrastepTransition"

    },
    "ctkWorkflowIntrastepTransition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkWorkflowIntrastepTransition[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ctkWorkflowIntrastepTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkWorkflowIntrastepTransition::staticMetaObject = {
    { &QAbstractTransition::staticMetaObject, qt_meta_stringdata_ctkWorkflowIntrastepTransition.data,
      qt_meta_data_ctkWorkflowIntrastepTransition,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkWorkflowIntrastepTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkWorkflowIntrastepTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkWorkflowIntrastepTransition.stringdata))
        return static_cast<void*>(const_cast< ctkWorkflowIntrastepTransition*>(this));
    return QAbstractTransition::qt_metacast(_clname);
}

int ctkWorkflowIntrastepTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTransition::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ctkWorkflowInterstepTransition_t {
    QByteArrayData data[7];
    char stringdata[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkWorkflowInterstepTransition_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkWorkflowInterstepTransition_t qt_meta_stringdata_ctkWorkflowInterstepTransition = {
    {
QT_MOC_LITERAL(0, 0, 30), // "ctkWorkflowInterstepTransition"
QT_MOC_LITERAL(1, 31, 23), // "InterstepTransitionType"
QT_MOC_LITERAL(2, 55, 20), // "TransitionToNextStep"
QT_MOC_LITERAL(3, 76, 24), // "TransitionToPreviousStep"
QT_MOC_LITERAL(4, 101, 16), // "StartingWorkflow"
QT_MOC_LITERAL(5, 118, 16), // "StoppingWorkflow"
QT_MOC_LITERAL(6, 135, 61) // "TransitionToPreviousStartingS..."

    },
    "ctkWorkflowInterstepTransition\0"
    "InterstepTransitionType\0TransitionToNextStep\0"
    "TransitionToPreviousStep\0StartingWorkflow\0"
    "StoppingWorkflow\0"
    "TransitionToPreviousStartingStepAfterSuccessfulGoToFinishStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkWorkflowInterstepTransition[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    5,   18,

 // enum data: key, value
       2, uint(ctkWorkflowInterstepTransition::TransitionToNextStep),
       3, uint(ctkWorkflowInterstepTransition::TransitionToPreviousStep),
       4, uint(ctkWorkflowInterstepTransition::StartingWorkflow),
       5, uint(ctkWorkflowInterstepTransition::StoppingWorkflow),
       6, uint(ctkWorkflowInterstepTransition::TransitionToPreviousStartingStepAfterSuccessfulGoToFinishStep),

       0        // eod
};

void ctkWorkflowInterstepTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkWorkflowInterstepTransition::staticMetaObject = {
    { &QAbstractTransition::staticMetaObject, qt_meta_stringdata_ctkWorkflowInterstepTransition.data,
      qt_meta_data_ctkWorkflowInterstepTransition,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkWorkflowInterstepTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkWorkflowInterstepTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkWorkflowInterstepTransition.stringdata))
        return static_cast<void*>(const_cast< ctkWorkflowInterstepTransition*>(this));
    return QAbstractTransition::qt_metacast(_clname);
}

int ctkWorkflowInterstepTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTransition::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
