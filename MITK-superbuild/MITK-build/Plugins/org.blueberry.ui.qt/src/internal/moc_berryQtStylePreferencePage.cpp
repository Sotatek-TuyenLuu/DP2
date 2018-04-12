/****************************************************************************
** Meta object code from reading C++ file 'berryQtStylePreferencePage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryQtStylePreferencePage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryQtStylePreferencePage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__QtStylePreferencePage_t {
    QByteArrayData data[9];
    char stringdata[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__QtStylePreferencePage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__QtStylePreferencePage_t qt_meta_stringdata_berry__QtStylePreferencePage = {
    {
QT_MOC_LITERAL(0, 0, 28), // "berry::QtStylePreferencePage"
QT_MOC_LITERAL(1, 29, 12), // "StyleChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 16), // "IconThemeChanged"
QT_MOC_LITERAL(4, 60, 14), // "AddPathClicked"
QT_MOC_LITERAL(5, 75, 17), // "RemovePathClicked"
QT_MOC_LITERAL(6, 93, 15), // "EditPathClicked"
QT_MOC_LITERAL(7, 109, 7), // "checked"
QT_MOC_LITERAL(8, 117, 21) // "UpdatePathListButtons"

    },
    "berry::QtStylePreferencePage\0StyleChanged\0"
    "\0IconThemeChanged\0AddPathClicked\0"
    "RemovePathClicked\0EditPathClicked\0"
    "checked\0UpdatePathListButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__QtStylePreferencePage[] = {

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
       1,    1,   44,    2, 0x09 /* Protected */,
       3,    1,   47,    2, 0x09 /* Protected */,
       4,    1,   50,    2, 0x09 /* Protected */,
       5,    1,   53,    2, 0x09 /* Protected */,
       6,    1,   56,    2, 0x09 /* Protected */,
       8,    0,   59,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void berry::QtStylePreferencePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtStylePreferencePage *_t = static_cast<QtStylePreferencePage *>(_o);
        switch (_id) {
        case 0: _t->StyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->IconThemeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->AddPathClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->RemovePathClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->EditPathClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->UpdatePathListButtons(); break;
        default: ;
        }
    }
}

const QMetaObject berry::QtStylePreferencePage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_berry__QtStylePreferencePage.data,
      qt_meta_data_berry__QtStylePreferencePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::QtStylePreferencePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::QtStylePreferencePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__QtStylePreferencePage.stringdata))
        return static_cast<void*>(const_cast< QtStylePreferencePage*>(this));
    if (!strcmp(_clname, "IQtPreferencePage"))
        return static_cast< IQtPreferencePage*>(const_cast< QtStylePreferencePage*>(this));
    if (!strcmp(_clname, "org.blueberry.ui.IPreferencePage"))
        return static_cast< berry::IPreferencePage*>(const_cast< QtStylePreferencePage*>(this));
    return QObject::qt_metacast(_clname);
}

int berry::QtStylePreferencePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
