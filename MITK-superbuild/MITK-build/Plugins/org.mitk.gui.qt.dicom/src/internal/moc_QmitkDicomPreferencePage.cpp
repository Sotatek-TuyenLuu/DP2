/****************************************************************************
** Meta object code from reading C++ file 'QmitkDicomPreferencePage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkDicomPreferencePage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkDicomPreferencePage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkDicomPreferencePage_t {
    QByteArrayData data[4];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkDicomPreferencePage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkDicomPreferencePage_t qt_meta_stringdata_QmitkDicomPreferencePage = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QmitkDicomPreferencePage"
QT_MOC_LITERAL(1, 25, 19), // "DefaultButtonPushed"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 22) // "PathSelectButtonPushed"

    },
    "QmitkDicomPreferencePage\0DefaultButtonPushed\0"
    "\0PathSelectButtonPushed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkDicomPreferencePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmitkDicomPreferencePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkDicomPreferencePage *_t = static_cast<QmitkDicomPreferencePage *>(_o);
        switch (_id) {
        case 0: _t->DefaultButtonPushed(); break;
        case 1: _t->PathSelectButtonPushed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QmitkDicomPreferencePage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmitkDicomPreferencePage.data,
      qt_meta_data_QmitkDicomPreferencePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkDicomPreferencePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkDicomPreferencePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkDicomPreferencePage.stringdata))
        return static_cast<void*>(const_cast< QmitkDicomPreferencePage*>(this));
    if (!strcmp(_clname, "berry::IQtPreferencePage"))
        return static_cast< berry::IQtPreferencePage*>(const_cast< QmitkDicomPreferencePage*>(this));
    if (!strcmp(_clname, "org.blueberry.ui.IPreferencePage"))
        return static_cast< berry::IPreferencePage*>(const_cast< QmitkDicomPreferencePage*>(this));
    return QObject::qt_metacast(_clname);
}

int QmitkDicomPreferencePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
