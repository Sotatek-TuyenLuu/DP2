/****************************************************************************
** Meta object code from reading C++ file 'berryHelpWebView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryHelpWebView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryHelpWebView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__HelpWebView_t {
    QByteArrayData data[19];
    char stringdata[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__HelpWebView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__HelpWebView_t qt_meta_stringdata_berry__HelpWebView = {
    {
QT_MOC_LITERAL(0, 0, 18), // "berry::HelpWebView"
QT_MOC_LITERAL(1, 19, 13), // "copyAvailable"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "enabled"
QT_MOC_LITERAL(4, 42, 16), // "forwardAvailable"
QT_MOC_LITERAL(5, 59, 17), // "backwardAvailable"
QT_MOC_LITERAL(6, 77, 11), // "highlighted"
QT_MOC_LITERAL(7, 89, 13), // "sourceChanged"
QT_MOC_LITERAL(8, 103, 14), // "printRequested"
QT_MOC_LITERAL(9, 118, 8), // "backward"
QT_MOC_LITERAL(10, 127, 4), // "home"
QT_MOC_LITERAL(11, 132, 5), // "print"
QT_MOC_LITERAL(12, 138, 7), // "scaleUp"
QT_MOC_LITERAL(13, 146, 9), // "scaleDown"
QT_MOC_LITERAL(14, 156, 10), // "resetScale"
QT_MOC_LITERAL(15, 167, 13), // "actionChanged"
QT_MOC_LITERAL(16, 181, 14), // "setLoadStarted"
QT_MOC_LITERAL(17, 196, 15), // "setLoadFinished"
QT_MOC_LITERAL(18, 212, 2) // "ok"

    },
    "berry::HelpWebView\0copyAvailable\0\0"
    "enabled\0forwardAvailable\0backwardAvailable\0"
    "highlighted\0sourceChanged\0printRequested\0"
    "backward\0home\0print\0scaleUp\0scaleDown\0"
    "resetScale\0actionChanged\0setLoadStarted\0"
    "setLoadFinished\0ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__HelpWebView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       5,    1,   95,    2, 0x06 /* Public */,
       6,    1,   98,    2, 0x06 /* Public */,
       7,    1,  101,    2, 0x06 /* Public */,
       8,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  105,    2, 0x0a /* Public */,
      10,    0,  106,    2, 0x0a /* Public */,
      11,    0,  107,    2, 0x0a /* Public */,
      12,    0,  108,    2, 0x0a /* Public */,
      13,    0,  109,    2, 0x0a /* Public */,
      14,    0,  110,    2, 0x0a /* Public */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    0,  112,    2, 0x08 /* Private */,
      17,    1,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,

       0        // eod
};

void berry::HelpWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpWebView *_t = static_cast<HelpWebView *>(_o);
        switch (_id) {
        case 0: _t->copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->forwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->backwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->highlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->printRequested(); break;
        case 6: _t->backward(); break;
        case 7: _t->home(); break;
        case 8: _t->print(); break;
        case 9: _t->scaleUp(); break;
        case 10: _t->scaleDown(); break;
        case 11: _t->resetScale(); break;
        case 12: _t->actionChanged(); break;
        case 13: _t->setLoadStarted(); break;
        case 14: _t->setLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HelpWebView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpWebView::copyAvailable)) {
                *result = 0;
            }
        }
        {
            typedef void (HelpWebView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpWebView::forwardAvailable)) {
                *result = 1;
            }
        }
        {
            typedef void (HelpWebView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpWebView::backwardAvailable)) {
                *result = 2;
            }
        }
        {
            typedef void (HelpWebView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpWebView::highlighted)) {
                *result = 3;
            }
        }
        {
            typedef void (HelpWebView::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpWebView::sourceChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (HelpWebView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpWebView::printRequested)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject berry::HelpWebView::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_berry__HelpWebView.data,
      qt_meta_data_berry__HelpWebView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::HelpWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::HelpWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__HelpWebView.stringdata))
        return static_cast<void*>(const_cast< HelpWebView*>(this));
    return QWebView::qt_metacast(_clname);
}

int berry::HelpWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void berry::HelpWebView::copyAvailable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void berry::HelpWebView::forwardAvailable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void berry::HelpWebView::backwardAvailable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void berry::HelpWebView::highlighted(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void berry::HelpWebView::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void berry::HelpWebView::printRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
