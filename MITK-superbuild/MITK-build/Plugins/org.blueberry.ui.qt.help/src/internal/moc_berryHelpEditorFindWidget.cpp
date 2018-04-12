/****************************************************************************
** Meta object code from reading C++ file 'berryHelpEditorFindWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryHelpEditorFindWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryHelpEditorFindWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__HelpEditorFindWidget_t {
    QByteArrayData data[10];
    char stringdata[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__HelpEditorFindWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__HelpEditorFindWidget_t qt_meta_stringdata_berry__HelpEditorFindWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "berry::HelpEditorFindWidget"
QT_MOC_LITERAL(1, 28, 13), // "escapePressed"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "findNext"
QT_MOC_LITERAL(4, 52, 12), // "findPrevious"
QT_MOC_LITERAL(5, 65, 4), // "find"
QT_MOC_LITERAL(6, 70, 4), // "text"
QT_MOC_LITERAL(7, 75, 7), // "forward"
QT_MOC_LITERAL(8, 83, 13), // "updateButtons"
QT_MOC_LITERAL(9, 97, 11) // "textChanged"

    },
    "berry::HelpEditorFindWidget\0escapePressed\0"
    "\0findNext\0findPrevious\0find\0text\0"
    "forward\0updateButtons\0textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__HelpEditorFindWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    2,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   52,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void berry::HelpEditorFindWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpEditorFindWidget *_t = static_cast<HelpEditorFindWidget *>(_o);
        switch (_id) {
        case 0: _t->escapePressed(); break;
        case 1: _t->findNext(); break;
        case 2: _t->findPrevious(); break;
        case 3: _t->find((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->updateButtons(); break;
        case 5: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HelpEditorFindWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpEditorFindWidget::escapePressed)) {
                *result = 0;
            }
        }
        {
            typedef void (HelpEditorFindWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpEditorFindWidget::findNext)) {
                *result = 1;
            }
        }
        {
            typedef void (HelpEditorFindWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpEditorFindWidget::findPrevious)) {
                *result = 2;
            }
        }
        {
            typedef void (HelpEditorFindWidget::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpEditorFindWidget::find)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject berry::HelpEditorFindWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_berry__HelpEditorFindWidget.data,
      qt_meta_data_berry__HelpEditorFindWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::HelpEditorFindWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::HelpEditorFindWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__HelpEditorFindWidget.stringdata))
        return static_cast<void*>(const_cast< HelpEditorFindWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int berry::HelpEditorFindWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void berry::HelpEditorFindWidget::escapePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void berry::HelpEditorFindWidget::findNext()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void berry::HelpEditorFindWidget::findPrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void berry::HelpEditorFindWidget::find(const QString & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
