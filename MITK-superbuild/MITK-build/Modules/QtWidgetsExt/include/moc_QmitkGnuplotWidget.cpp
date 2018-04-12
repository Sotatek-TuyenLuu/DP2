/****************************************************************************
** Meta object code from reading C++ file 'QmitkGnuplotWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkGnuplotWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkGnuplotWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkGnuplotWidget_t {
    QByteArrayData data[14];
    char stringdata[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkGnuplotWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkGnuplotWidget_t qt_meta_stringdata_QmitkGnuplotWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QmitkGnuplotWidget"
QT_MOC_LITERAL(1, 19, 21), // "OnProcessStateChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(4, 65, 5), // "state"
QT_MOC_LITERAL(5, 71, 14), // "OnProcessError"
QT_MOC_LITERAL(6, 86, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(7, 109, 5), // "error"
QT_MOC_LITERAL(8, 115, 17), // "OnProcessFinished"
QT_MOC_LITERAL(9, 133, 8), // "exitCode"
QT_MOC_LITERAL(10, 142, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(11, 163, 10), // "exitStatus"
QT_MOC_LITERAL(12, 174, 10), // "OnCopyPlot"
QT_MOC_LITERAL(13, 185, 12) // "OnCopyScript"

    },
    "QmitkGnuplotWidget\0OnProcessStateChanged\0"
    "\0QProcess::ProcessState\0state\0"
    "OnProcessError\0QProcess::ProcessError\0"
    "error\0OnProcessFinished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "OnCopyPlot\0OnCopyScript"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkGnuplotWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       8,    2,   45,    2, 0x08 /* Private */,
      12,    0,   50,    2, 0x08 /* Private */,
      13,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmitkGnuplotWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkGnuplotWidget *_t = static_cast<QmitkGnuplotWidget *>(_o);
        switch (_id) {
        case 0: _t->OnProcessStateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 1: _t->OnProcessError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 2: _t->OnProcessFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 3: _t->OnCopyPlot(); break;
        case 4: _t->OnCopyScript(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkGnuplotWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkGnuplotWidget.data,
      qt_meta_data_QmitkGnuplotWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkGnuplotWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkGnuplotWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkGnuplotWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkGnuplotWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkGnuplotWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
