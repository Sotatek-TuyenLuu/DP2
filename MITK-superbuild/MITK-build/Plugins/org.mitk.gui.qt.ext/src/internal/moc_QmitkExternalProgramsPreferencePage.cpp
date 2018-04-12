/****************************************************************************
** Meta object code from reading C++ file 'QmitkExternalProgramsPreferencePage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkExternalProgramsPreferencePage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkExternalProgramsPreferencePage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkExternalProgramsPreferencePage_t {
    QByteArrayData data[13];
    char stringdata[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkExternalProgramsPreferencePage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkExternalProgramsPreferencePage_t qt_meta_stringdata_QmitkExternalProgramsPreferencePage = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QmitkExternalProgramsPreferen..."
QT_MOC_LITERAL(1, 36, 21), // "OnFFmpegButtonClicked"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 20), // "OnFFmpegProcessError"
QT_MOC_LITERAL(4, 80, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(5, 103, 5), // "error"
QT_MOC_LITERAL(6, 109, 23), // "OnFFmpegProcessFinished"
QT_MOC_LITERAL(7, 133, 8), // "exitCode"
QT_MOC_LITERAL(8, 142, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(9, 163, 10), // "exitStatus"
QT_MOC_LITERAL(10, 174, 22), // "OnGnuplotButtonClicked"
QT_MOC_LITERAL(11, 197, 21), // "OnGnuplotProcessError"
QT_MOC_LITERAL(12, 219, 24) // "OnGnuplotProcessFinished"

    },
    "QmitkExternalProgramsPreferencePage\0"
    "OnFFmpegButtonClicked\0\0OnFFmpegProcessError\0"
    "QProcess::ProcessError\0error\0"
    "OnFFmpegProcessFinished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "OnGnuplotButtonClicked\0OnGnuplotProcessError\0"
    "OnGnuplotProcessFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkExternalProgramsPreferencePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       6,    2,   48,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,
      11,    1,   54,    2, 0x08 /* Private */,
      12,    2,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,

       0        // eod
};

void QmitkExternalProgramsPreferencePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkExternalProgramsPreferencePage *_t = static_cast<QmitkExternalProgramsPreferencePage *>(_o);
        switch (_id) {
        case 0: _t->OnFFmpegButtonClicked(); break;
        case 1: _t->OnFFmpegProcessError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 2: _t->OnFFmpegProcessFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 3: _t->OnGnuplotButtonClicked(); break;
        case 4: _t->OnGnuplotProcessError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 5: _t->OnGnuplotProcessFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkExternalProgramsPreferencePage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmitkExternalProgramsPreferencePage.data,
      qt_meta_data_QmitkExternalProgramsPreferencePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkExternalProgramsPreferencePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkExternalProgramsPreferencePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkExternalProgramsPreferencePage.stringdata))
        return static_cast<void*>(const_cast< QmitkExternalProgramsPreferencePage*>(this));
    if (!strcmp(_clname, "berry::IQtPreferencePage"))
        return static_cast< berry::IQtPreferencePage*>(const_cast< QmitkExternalProgramsPreferencePage*>(this));
    if (!strcmp(_clname, "org.blueberry.ui.IPreferencePage"))
        return static_cast< berry::IPreferencePage*>(const_cast< QmitkExternalProgramsPreferencePage*>(this));
    return QObject::qt_metacast(_clname);
}

int QmitkExternalProgramsPreferencePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
