/****************************************************************************
** Meta object code from reading C++ file 'berryHelpIndexView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryHelpIndexView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryHelpIndexView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__HelpIndexWidget_t {
    QByteArrayData data[14];
    char stringdata[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__HelpIndexWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__HelpIndexWidget_t qt_meta_stringdata_berry__HelpIndexWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "berry::HelpIndexWidget"
QT_MOC_LITERAL(1, 23, 13), // "linkActivated"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "link"
QT_MOC_LITERAL(4, 43, 7), // "keyword"
QT_MOC_LITERAL(5, 51, 14), // "linksActivated"
QT_MOC_LITERAL(6, 66, 18), // "QMap<QString,QUrl>"
QT_MOC_LITERAL(7, 85, 5), // "links"
QT_MOC_LITERAL(8, 91, 13), // "filterIndices"
QT_MOC_LITERAL(9, 105, 6), // "filter"
QT_MOC_LITERAL(10, 112, 8), // "wildcard"
QT_MOC_LITERAL(11, 121, 19), // "activateCurrentItem"
QT_MOC_LITERAL(12, 141, 8), // "showLink"
QT_MOC_LITERAL(13, 150, 5) // "index"

    },
    "berry::HelpIndexWidget\0linkActivated\0"
    "\0link\0keyword\0linksActivated\0"
    "QMap<QString,QUrl>\0links\0filterIndices\0"
    "filter\0wildcard\0activateCurrentItem\0"
    "showLink\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__HelpIndexWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   54,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   62,    2, 0x0a /* Public */,
      12,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   13,

       0        // eod
};

void berry::HelpIndexWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpIndexWidget *_t = static_cast<HelpIndexWidget *>(_o);
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->linksActivated((*reinterpret_cast< const QMap<QString,QUrl>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->filterIndices((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->filterIndices((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->activateCurrentItem(); break;
        case 5: _t->showLink((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HelpIndexWidget::*_t)(const QUrl & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpIndexWidget::linkActivated)) {
                *result = 0;
            }
        }
        {
            typedef void (HelpIndexWidget::*_t)(const QMap<QString,QUrl> & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpIndexWidget::linksActivated)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject berry::HelpIndexWidget::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_berry__HelpIndexWidget.data,
      qt_meta_data_berry__HelpIndexWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::HelpIndexWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::HelpIndexWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__HelpIndexWidget.stringdata))
        return static_cast<void*>(const_cast< HelpIndexWidget*>(this));
    return QListView::qt_metacast(_clname);
}

int berry::HelpIndexWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
void berry::HelpIndexWidget::linkActivated(const QUrl & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void berry::HelpIndexWidget::linksActivated(const QMap<QString,QUrl> & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_berry__HelpIndexView_t {
    QByteArrayData data[14];
    char stringdata[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__HelpIndexView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__HelpIndexView_t qt_meta_stringdata_berry__HelpIndexView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "berry::HelpIndexView"
QT_MOC_LITERAL(1, 21, 13), // "linkActivated"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "link"
QT_MOC_LITERAL(4, 41, 14), // "linksActivated"
QT_MOC_LITERAL(5, 56, 18), // "QMap<QString,QUrl>"
QT_MOC_LITERAL(6, 75, 5), // "links"
QT_MOC_LITERAL(7, 81, 7), // "keyword"
QT_MOC_LITERAL(8, 89, 13), // "filterIndices"
QT_MOC_LITERAL(9, 103, 6), // "filter"
QT_MOC_LITERAL(10, 110, 20), // "enableSearchLineEdit"
QT_MOC_LITERAL(11, 131, 21), // "disableSearchLineEdit"
QT_MOC_LITERAL(12, 153, 18), // "setIndexWidgetBusy"
QT_MOC_LITERAL(13, 172, 20) // "unsetIndexWidgetBusy"

    },
    "berry::HelpIndexView\0linkActivated\0\0"
    "link\0linksActivated\0QMap<QString,QUrl>\0"
    "links\0keyword\0filterIndices\0filter\0"
    "enableSearchLineEdit\0disableSearchLineEdit\0"
    "setIndexWidgetBusy\0unsetIndexWidgetBusy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__HelpIndexView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x09 /* Protected */,
       4,    2,   52,    2, 0x09 /* Protected */,
       8,    1,   57,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,
      12,    0,   62,    2, 0x08 /* Private */,
      13,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void berry::HelpIndexView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpIndexView *_t = static_cast<HelpIndexView *>(_o);
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->linksActivated((*reinterpret_cast< const QMap<QString,QUrl>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->filterIndices((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->enableSearchLineEdit(); break;
        case 4: _t->disableSearchLineEdit(); break;
        case 5: _t->setIndexWidgetBusy(); break;
        case 6: _t->unsetIndexWidgetBusy(); break;
        default: ;
        }
    }
}

const QMetaObject berry::HelpIndexView::staticMetaObject = {
    { &QtViewPart::staticMetaObject, qt_meta_stringdata_berry__HelpIndexView.data,
      qt_meta_data_berry__HelpIndexView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::HelpIndexView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::HelpIndexView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__HelpIndexView.stringdata))
        return static_cast<void*>(const_cast< HelpIndexView*>(this));
    return QtViewPart::qt_metacast(_clname);
}

int berry::HelpIndexView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtViewPart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
