/****************************************************************************
** Meta object code from reading C++ file 'ctkConsole_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkConsole_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkConsole_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkConsolePrivate_t {
    QByteArrayData data[9];
    char stringdata[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkConsolePrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkConsolePrivate_t qt_meta_stringdata_ctkConsolePrivate = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ctkConsolePrivate"
QT_MOC_LITERAL(1, 18, 16), // "insertCompletion"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "text"
QT_MOC_LITERAL(4, 41, 18), // "printOutputMessage"
QT_MOC_LITERAL(5, 60, 17), // "printErrorMessage"
QT_MOC_LITERAL(6, 78, 23), // "onScrollBarValueChanged"
QT_MOC_LITERAL(7, 102, 5), // "value"
QT_MOC_LITERAL(8, 108, 13) // "onTextChanged"

    },
    "ctkConsolePrivate\0insertCompletion\0\0"
    "text\0printOutputMessage\0printErrorMessage\0"
    "onScrollBarValueChanged\0value\0"
    "onTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkConsolePrivate[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       5,    1,   45,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void ctkConsolePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkConsolePrivate *_t = static_cast<ctkConsolePrivate *>(_o);
        switch (_id) {
        case 0: _t->insertCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->printOutputMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->printErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onScrollBarValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onTextChanged(); break;
        default: ;
        }
    }
}

const QMetaObject ctkConsolePrivate::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_ctkConsolePrivate.data,
      qt_meta_data_ctkConsolePrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkConsolePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkConsolePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkConsolePrivate.stringdata))
        return static_cast<void*>(const_cast< ctkConsolePrivate*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int ctkConsolePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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
