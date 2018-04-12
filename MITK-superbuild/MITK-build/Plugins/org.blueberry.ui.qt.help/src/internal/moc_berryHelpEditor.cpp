/****************************************************************************
** Meta object code from reading C++ file 'berryHelpEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryHelpEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryHelpEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__HelpEditor_t {
    QByteArrayData data[13];
    char stringdata[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__HelpEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__HelpEditor_t qt_meta_stringdata_berry__HelpEditor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "berry::HelpEditor"
QT_MOC_LITERAL(1, 18, 15), // "HomePageChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "page"
QT_MOC_LITERAL(4, 40, 19), // "OpenHelpPerspective"
QT_MOC_LITERAL(5, 60, 20), // "CloseHelpPerspective"
QT_MOC_LITERAL(6, 81, 15), // "InitializeTitle"
QT_MOC_LITERAL(7, 97, 14), // "ShowTextSearch"
QT_MOC_LITERAL(8, 112, 8), // "findNext"
QT_MOC_LITERAL(9, 121, 12), // "findPrevious"
QT_MOC_LITERAL(10, 134, 4), // "find"
QT_MOC_LITERAL(11, 139, 3), // "ttf"
QT_MOC_LITERAL(12, 143, 7) // "forward"

    },
    "berry::HelpEditor\0HomePageChanged\0\0"
    "page\0OpenHelpPerspective\0CloseHelpPerspective\0"
    "InitializeTitle\0ShowTextSearch\0findNext\0"
    "findPrevious\0find\0ttf\0forward"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__HelpEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    2,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   11,   12,

       0        // eod
};

void berry::HelpEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpEditor *_t = static_cast<HelpEditor *>(_o);
        switch (_id) {
        case 0: _t->HomePageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->OpenHelpPerspective(); break;
        case 2: _t->CloseHelpPerspective(); break;
        case 3: _t->InitializeTitle(); break;
        case 4: _t->ShowTextSearch(); break;
        case 5: _t->findNext(); break;
        case 6: _t->findPrevious(); break;
        case 7: _t->find((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject berry::HelpEditor::staticMetaObject = {
    { &QtEditorPart::staticMetaObject, qt_meta_stringdata_berry__HelpEditor.data,
      qt_meta_data_berry__HelpEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::HelpEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::HelpEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__HelpEditor.stringdata))
        return static_cast<void*>(const_cast< HelpEditor*>(this));
    if (!strcmp(_clname, "IReusableEditor"))
        return static_cast< IReusableEditor*>(const_cast< HelpEditor*>(this));
    if (!strcmp(_clname, "IPartListener"))
        return static_cast< IPartListener*>(const_cast< HelpEditor*>(this));
    if (!strcmp(_clname, "IPerspectiveListener"))
        return static_cast< IPerspectiveListener*>(const_cast< HelpEditor*>(this));
    return QtEditorPart::qt_metacast(_clname);
}

int berry::HelpEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtEditorPart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
