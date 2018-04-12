/****************************************************************************
** Meta object code from reading C++ file 'berryHelpSearchView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/berryHelpSearchView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'berryHelpSearchView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_berry__HelpSearchView_t {
    QByteArrayData data[13];
    char stringdata[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_berry__HelpSearchView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_berry__HelpSearchView_t qt_meta_stringdata_berry__HelpSearchView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "berry::HelpSearchView"
QT_MOC_LITERAL(1, 22, 6), // "zoomIn"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "zoomOut"
QT_MOC_LITERAL(4, 38, 9), // "resetZoom"
QT_MOC_LITERAL(5, 48, 6), // "search"
QT_MOC_LITERAL(6, 55, 16), // "searchingStarted"
QT_MOC_LITERAL(7, 72, 17), // "searchingFinished"
QT_MOC_LITERAL(8, 90, 4), // "hits"
QT_MOC_LITERAL(9, 95, 15), // "showContextMenu"
QT_MOC_LITERAL(10, 111, 3), // "pos"
QT_MOC_LITERAL(11, 115, 15), // "requestShowLink"
QT_MOC_LITERAL(12, 131, 4) // "link"

    },
    "berry::HelpSearchView\0zoomIn\0\0zoomOut\0"
    "resetZoom\0search\0searchingStarted\0"
    "searchingFinished\0hits\0showContextMenu\0"
    "pos\0requestShowLink\0link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_berry__HelpSearchView[] = {

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
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void, QMetaType::QUrl,   12,

       0        // eod
};

void berry::HelpSearchView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpSearchView *_t = static_cast<HelpSearchView *>(_o);
        switch (_id) {
        case 0: _t->zoomIn(); break;
        case 1: _t->zoomOut(); break;
        case 2: _t->resetZoom(); break;
        case 3: _t->search(); break;
        case 4: _t->searchingStarted(); break;
        case 5: _t->searchingFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->requestShowLink((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject berry::HelpSearchView::staticMetaObject = {
    { &QtViewPart::staticMetaObject, qt_meta_stringdata_berry__HelpSearchView.data,
      qt_meta_data_berry__HelpSearchView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *berry::HelpSearchView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *berry::HelpSearchView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_berry__HelpSearchView.stringdata))
        return static_cast<void*>(const_cast< HelpSearchView*>(this));
    return QtViewPart::qt_metacast(_clname);
}

int berry::HelpSearchView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtViewPart::qt_metacall(_c, _id, _a);
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
