/****************************************************************************
** Meta object code from reading C++ file 'berryHelpContentView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryHelpContentView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryHelpContentView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__HelpContentWidget_t {
    QByteArrayData data[6];
    char stringdata[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__HelpContentWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__HelpContentWidget_t qt_meta_stringdata_berry__HelpContentWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "berry::HelpContentWidget"
QT_MOC_LITERAL(1, 25, 13), // "linkActivated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "link"
QT_MOC_LITERAL(4, 45, 8), // "showLink"
QT_MOC_LITERAL(5, 54, 5) // "index"

    },
    "berry::HelpContentWidget\0linkActivated\0"
    "\0link\0showLink\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__HelpContentWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    5,

       0        // eod
};

void berry::HelpContentWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpContentWidget *_t = static_cast<HelpContentWidget *>(_o);
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->showLink((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HelpContentWidget::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpContentWidget::linkActivated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject berry::HelpContentWidget::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_berry__HelpContentWidget.data,
      qt_meta_data_berry__HelpContentWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::HelpContentWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::HelpContentWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__HelpContentWidget.stringdata))
        return static_cast<void*>(const_cast< HelpContentWidget*>(this));
    return QTreeView::qt_metacast(_clname);
}

int berry::HelpContentWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void berry::HelpContentWidget::linkActivated(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_berry__HelpContentView_t {
    QByteArrayData data[8];
    char stringdata[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__HelpContentView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__HelpContentView_t qt_meta_stringdata_berry__HelpContentView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "berry::HelpContentView"
QT_MOC_LITERAL(1, 23, 13), // "linkActivated"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "link"
QT_MOC_LITERAL(4, 43, 15), // "showContextMenu"
QT_MOC_LITERAL(5, 59, 3), // "pos"
QT_MOC_LITERAL(6, 63, 21), // "setContentsWidgetBusy"
QT_MOC_LITERAL(7, 85, 23) // "unsetContentsWidgetBusy"

    },
    "berry::HelpContentView\0linkActivated\0"
    "\0link\0showContextMenu\0pos\0"
    "setContentsWidgetBusy\0unsetContentsWidgetBusy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__HelpContentView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x09 /* Protected */,
       4,    1,   37,    2, 0x08 /* Private */,
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void berry::HelpContentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpContentView *_t = static_cast<HelpContentView *>(_o);
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->setContentsWidgetBusy(); break;
        case 3: _t->unsetContentsWidgetBusy(); break;
        default: ;
        }
    }
}

const QMetaObject berry::HelpContentView::staticMetaObject = {
    { &QtViewPart::staticMetaObject, qt_meta_stringdata_berry__HelpContentView.data,
      qt_meta_data_berry__HelpContentView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::HelpContentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::HelpContentView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__HelpContentView.stringdata))
        return static_cast<void*>(const_cast< HelpContentView*>(this));
    return QtViewPart::qt_metacast(_clname);
}

int berry::HelpContentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtViewPart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
