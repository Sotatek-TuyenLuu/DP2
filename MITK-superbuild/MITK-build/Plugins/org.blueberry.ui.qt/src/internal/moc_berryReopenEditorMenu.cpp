/****************************************************************************
** Meta object code from reading C++ file 'berryReopenEditorMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryReopenEditorMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryReopenEditorMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__ReopenEditorMenu_t {
    QByteArrayData data[5];
    char stringdata[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__ReopenEditorMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__ReopenEditorMenu_t qt_meta_stringdata_berry__ReopenEditorMenu = {
    {
QT_MOC_LITERAL(0, 0, 23), // "berry::ReopenEditorMenu"
QT_MOC_LITERAL(1, 24, 15), // "MenuAboutToShow"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "IMenuManager*"
QT_MOC_LITERAL(4, 55, 7) // "manager"

    },
    "berry::ReopenEditorMenu\0MenuAboutToShow\0"
    "\0IMenuManager*\0manager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__ReopenEditorMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void berry::ReopenEditorMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReopenEditorMenu *_t = static_cast<ReopenEditorMenu *>(_o);
        switch (_id) {
        case 0: _t->MenuAboutToShow((*reinterpret_cast< IMenuManager*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject berry::ReopenEditorMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_berry__ReopenEditorMenu.data,
      qt_meta_data_berry__ReopenEditorMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::ReopenEditorMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::ReopenEditorMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__ReopenEditorMenu.stringdata))
        return static_cast<void*>(const_cast< ReopenEditorMenu*>(this));
    if (!strcmp(_clname, "ContributionItem"))
        return static_cast< ContributionItem*>(const_cast< ReopenEditorMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int berry::ReopenEditorMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
