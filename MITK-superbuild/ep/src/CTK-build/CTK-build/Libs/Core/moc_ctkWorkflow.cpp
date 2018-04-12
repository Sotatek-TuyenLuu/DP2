/****************************************************************************
** Meta object code from reading C++ file 'ctkWorkflow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkWorkflow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkWorkflow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkWorkflow_t {
    QByteArrayData data[46];
    char stringdata[636];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkWorkflow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkWorkflow_t qt_meta_stringdata_ctkWorkflow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ctkWorkflow"
QT_MOC_LITERAL(1, 12, 18), // "currentStepChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "ctkWorkflowStep*"
QT_MOC_LITERAL(4, 49, 11), // "currentStep"
QT_MOC_LITERAL(5, 61, 14), // "stepRegistered"
QT_MOC_LITERAL(6, 76, 4), // "step"
QT_MOC_LITERAL(7, 81, 9), // "goForward"
QT_MOC_LITERAL(8, 91, 15), // "desiredBranchId"
QT_MOC_LITERAL(9, 107, 10), // "goBackward"
QT_MOC_LITERAL(10, 118, 8), // "goToStep"
QT_MOC_LITERAL(11, 127, 8), // "targetId"
QT_MOC_LITERAL(12, 136, 25), // "evaluateValidationResults"
QT_MOC_LITERAL(13, 162, 19), // "validationSucceeded"
QT_MOC_LITERAL(14, 182, 8), // "branchId"
QT_MOC_LITERAL(15, 191, 21), // "attemptToGoToNextStep"
QT_MOC_LITERAL(16, 213, 29), // "performTransitionBetweenSteps"
QT_MOC_LITERAL(17, 243, 5), // "start"
QT_MOC_LITERAL(18, 249, 4), // "stop"
QT_MOC_LITERAL(19, 254, 13), // "addTransition"
QT_MOC_LITERAL(20, 268, 6), // "origin"
QT_MOC_LITERAL(21, 275, 11), // "destination"
QT_MOC_LITERAL(22, 287, 37), // "ctkWorkflow::TransitionDirect..."
QT_MOC_LITERAL(23, 325, 14), // "directionality"
QT_MOC_LITERAL(24, 340, 13), // "hasTransition"
QT_MOC_LITERAL(25, 354, 11), // "initialStep"
QT_MOC_LITERAL(26, 366, 14), // "setInitialStep"
QT_MOC_LITERAL(27, 381, 7), // "hasStep"
QT_MOC_LITERAL(28, 389, 2), // "id"
QT_MOC_LITERAL(29, 392, 12), // "canGoForward"
QT_MOC_LITERAL(30, 405, 13), // "canGoBackward"
QT_MOC_LITERAL(31, 419, 11), // "canGoToStep"
QT_MOC_LITERAL(32, 431, 12), // "forwardSteps"
QT_MOC_LITERAL(33, 444, 23), // "QList<ctkWorkflowStep*>"
QT_MOC_LITERAL(34, 468, 13), // "backwardSteps"
QT_MOC_LITERAL(35, 482, 11), // "finishSteps"
QT_MOC_LITERAL(36, 494, 5), // "steps"
QT_MOC_LITERAL(37, 500, 22), // "backwardDistanceToStep"
QT_MOC_LITERAL(38, 523, 8), // "fromStep"
QT_MOC_LITERAL(39, 532, 9), // "isRunning"
QT_MOC_LITERAL(40, 542, 29), // "goBackToOriginStepUponSuccess"
QT_MOC_LITERAL(41, 572, 7), // "verbose"
QT_MOC_LITERAL(42, 580, 24), // "TransitionDirectionality"
QT_MOC_LITERAL(43, 605, 13), // "Bidirectional"
QT_MOC_LITERAL(44, 619, 7), // "Forward"
QT_MOC_LITERAL(45, 627, 8) // "Backward"

    },
    "ctkWorkflow\0currentStepChanged\0\0"
    "ctkWorkflowStep*\0currentStep\0"
    "stepRegistered\0step\0goForward\0"
    "desiredBranchId\0goBackward\0goToStep\0"
    "targetId\0evaluateValidationResults\0"
    "validationSucceeded\0branchId\0"
    "attemptToGoToNextStep\0"
    "performTransitionBetweenSteps\0start\0"
    "stop\0addTransition\0origin\0destination\0"
    "ctkWorkflow::TransitionDirectionality\0"
    "directionality\0hasTransition\0initialStep\0"
    "setInitialStep\0hasStep\0id\0canGoForward\0"
    "canGoBackward\0canGoToStep\0forwardSteps\0"
    "QList<ctkWorkflowStep*>\0backwardSteps\0"
    "finishSteps\0steps\0backwardDistanceToStep\0"
    "fromStep\0isRunning\0goBackToOriginStepUponSuccess\0"
    "verbose\0TransitionDirectionality\0"
    "Bidirectional\0Forward\0Backward"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkWorkflow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       3,  318, // properties
       1,  327, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  204,    2, 0x06 /* Public */,
       5,    1,  207,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  210,    2, 0x0a /* Public */,
       7,    0,  213,    2, 0x2a /* Public | MethodCloned */,
       9,    1,  214,    2, 0x0a /* Public */,
       9,    0,  217,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  218,    2, 0x0a /* Public */,
      12,    2,  221,    2, 0x0a /* Public */,
      15,    0,  226,    2, 0x09 /* Protected */,
      16,    0,  227,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      17,    0,  228,    2, 0x02 /* Public */,
      18,    0,  229,    2, 0x02 /* Public */,
      19,    4,  230,    2, 0x02 /* Public */,
      19,    3,  239,    2, 0x22 /* Public | MethodCloned */,
      19,    2,  246,    2, 0x22 /* Public | MethodCloned */,
      24,    4,  251,    2, 0x02 /* Public */,
      24,    3,  260,    2, 0x22 /* Public | MethodCloned */,
      24,    2,  267,    2, 0x22 /* Public | MethodCloned */,
      25,    0,  272,    2, 0x02 /* Public */,
      26,    1,  273,    2, 0x02 /* Public */,
       4,    0,  276,    2, 0x02 /* Public */,
      27,    1,  277,    2, 0x02 /* Public */,
       6,    1,  280,    2, 0x02 /* Public */,
      29,    1,  283,    2, 0x02 /* Public */,
      29,    0,  286,    2, 0x22 /* Public | MethodCloned */,
      30,    1,  287,    2, 0x02 /* Public */,
      30,    0,  290,    2, 0x22 /* Public | MethodCloned */,
      31,    2,  291,    2, 0x02 /* Public */,
      31,    1,  296,    2, 0x22 /* Public | MethodCloned */,
      32,    1,  299,    2, 0x02 /* Public */,
      32,    0,  302,    2, 0x22 /* Public | MethodCloned */,
      34,    1,  303,    2, 0x02 /* Public */,
      34,    0,  306,    2, 0x22 /* Public | MethodCloned */,
      35,    0,  307,    2, 0x02 /* Public */,
      36,    0,  308,    2, 0x02 /* Public */,
      37,    2,  309,    2, 0x02 /* Public */,
      37,    1,  314,    2, 0x22 /* Public | MethodCloned */,
      37,    0,  317,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   13,   14,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 22,   20,   21,   14,   23,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3, QMetaType::QString,   20,   21,   14,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3,   20,   21,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 22,   20,   21,   14,   23,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3, QMetaType::QString,   20,   21,   14,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3,   20,   21,
    0x80000000 | 3,
    QMetaType::Void, 0x80000000 | 3,    6,
    0x80000000 | 3,
    QMetaType::Bool, QMetaType::QString,   28,
    0x80000000 | 3, QMetaType::QString,   28,
    QMetaType::Bool, 0x80000000 | 3,    6,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 3,    6,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 3,   11,    6,
    QMetaType::Bool, QMetaType::QString,   11,
    0x80000000 | 33, 0x80000000 | 3,    6,
    0x80000000 | 33,
    0x80000000 | 33, 0x80000000 | 3,    6,
    0x80000000 | 33,
    0x80000000 | 33,
    0x80000000 | 33,
    QMetaType::Int, 0x80000000 | 3, 0x80000000 | 3,   38,   20,
    QMetaType::Int, 0x80000000 | 3,   38,
    QMetaType::Int,

 // properties: name, type, flags
      39, QMetaType::Bool, 0x00094001,
      40, QMetaType::Bool, 0x00095103,
      41, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
      42, 0x0,    3,  331,

 // enum data: key, value
      43, uint(ctkWorkflow::Bidirectional),
      44, uint(ctkWorkflow::Forward),
      45, uint(ctkWorkflow::Backward),

       0        // eod
};

void ctkWorkflow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkWorkflow *_t = static_cast<ctkWorkflow *>(_o);
        switch (_id) {
        case 0: _t->currentStepChanged((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1]))); break;
        case 1: _t->stepRegistered((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1]))); break;
        case 2: _t->goForward((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->goForward(); break;
        case 4: _t->goBackward((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->goBackward(); break;
        case 6: _t->goToStep((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->evaluateValidationResults((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->attemptToGoToNextStep(); break;
        case 9: _t->performTransitionBetweenSteps(); break;
        case 10: _t->start(); break;
        case 11: _t->stop(); break;
        case 12: { bool _r = _t->addTransition((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])),(*reinterpret_cast< ctkWorkflowStep*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const ctkWorkflow::TransitionDirectionality(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->addTransition((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])),(*reinterpret_cast< ctkWorkflowStep*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->addTransition((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])),(*reinterpret_cast< ctkWorkflowStep*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->hasTransition((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])),(*reinterpret_cast< ctkWorkflowStep*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const ctkWorkflow::TransitionDirectionality(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->hasTransition((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])),(*reinterpret_cast< ctkWorkflowStep*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->hasTransition((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])),(*reinterpret_cast< ctkWorkflowStep*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { ctkWorkflowStep* _r = _t->initialStep();
            if (_a[0]) *reinterpret_cast< ctkWorkflowStep**>(_a[0]) = _r; }  break;
        case 19: _t->setInitialStep((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1]))); break;
        case 20: { ctkWorkflowStep* _r = _t->currentStep();
            if (_a[0]) *reinterpret_cast< ctkWorkflowStep**>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->hasStep((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { ctkWorkflowStep* _r = _t->step((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ctkWorkflowStep**>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->canGoForward((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->canGoForward();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->canGoBackward((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->canGoBackward();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->canGoToStep((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< ctkWorkflowStep*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->canGoToStep((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { QList<ctkWorkflowStep*> _r = _t->forwardSteps((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<ctkWorkflowStep*>*>(_a[0]) = _r; }  break;
        case 30: { QList<ctkWorkflowStep*> _r = _t->forwardSteps();
            if (_a[0]) *reinterpret_cast< QList<ctkWorkflowStep*>*>(_a[0]) = _r; }  break;
        case 31: { QList<ctkWorkflowStep*> _r = _t->backwardSteps((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<ctkWorkflowStep*>*>(_a[0]) = _r; }  break;
        case 32: { QList<ctkWorkflowStep*> _r = _t->backwardSteps();
            if (_a[0]) *reinterpret_cast< QList<ctkWorkflowStep*>*>(_a[0]) = _r; }  break;
        case 33: { QList<ctkWorkflowStep*> _r = _t->finishSteps();
            if (_a[0]) *reinterpret_cast< QList<ctkWorkflowStep*>*>(_a[0]) = _r; }  break;
        case 34: { QList<ctkWorkflowStep*> _r = _t->steps();
            if (_a[0]) *reinterpret_cast< QList<ctkWorkflowStep*>*>(_a[0]) = _r; }  break;
        case 35: { int _r = _t->backwardDistanceToStep((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])),(*reinterpret_cast< ctkWorkflowStep*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->backwardDistanceToStep((*reinterpret_cast< ctkWorkflowStep*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: { int _r = _t->backwardDistanceToStep();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkWorkflow::*_t)(ctkWorkflowStep * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflow::currentStepChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkWorkflow::*_t)(ctkWorkflowStep * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkWorkflow::stepRegistered)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ctkWorkflow::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkWorkflow.data,
      qt_meta_data_ctkWorkflow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkWorkflow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkWorkflow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkWorkflow.stringdata))
        return static_cast<void*>(const_cast< ctkWorkflow*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkWorkflow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 38;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isRunning(); break;
        case 1: *reinterpret_cast< bool*>(_v) = goBackToOriginStepUponSuccess(); break;
        case 2: *reinterpret_cast< bool*>(_v) = verbose(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setGoBackToOriginStepUponSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: setVerbose(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkWorkflow::currentStepChanged(ctkWorkflowStep * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkWorkflow::stepRegistered(ctkWorkflowStep * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
