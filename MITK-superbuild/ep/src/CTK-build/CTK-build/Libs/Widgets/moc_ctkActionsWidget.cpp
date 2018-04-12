/****************************************************************************
** Meta object code from reading C++ file 'ctkActionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkActionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkActionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkActionsWidget_t {
    QByteArrayData data[6];
    char stringdata[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkActionsWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkActionsWidget_t qt_meta_stringdata_ctkActionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ctkActionsWidget"
QT_MOC_LITERAL(1, 17, 12), // "updateAction"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 28), // "actionsWithNoShortcutVisible"
QT_MOC_LITERAL(4, 60, 18), // "menuActionsVisible"
QT_MOC_LITERAL(5, 79, 10) // "sortColumn"

    },
    "ctkActionsWidget\0updateAction\0\0"
    "actionsWithNoShortcutVisible\0"
    "menuActionsVisible\0sortColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkActionsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00095103,
       4, QMetaType::Bool, 0x00095103,
       5, QMetaType::Int, 0x00095103,

       0        // eod
};

void ctkActionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkActionsWidget *_t = static_cast<ctkActionsWidget *>(_o);
        switch (_id) {
        case 0: _t->updateAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ctkActionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkActionsWidget.data,
      qt_meta_data_ctkActionsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkActionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkActionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkActionsWidget.stringdata))
        return static_cast<void*>(const_cast< ctkActionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkActionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = areActionsWithNoShortcutVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = areMenuActionsVisible(); break;
        case 2: *reinterpret_cast< int*>(_v) = sortColumn(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setActionsWithNoShortcutVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: setMenuActionsVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: setSortColumn(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_ctkSortFilterActionsProxyModel_t {
    QByteArrayData data[1];
    char stringdata[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkSortFilterActionsProxyModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkSortFilterActionsProxyModel_t qt_meta_stringdata_ctkSortFilterActionsProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 30) // "ctkSortFilterActionsProxyModel"

    },
    "ctkSortFilterActionsProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkSortFilterActionsProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ctkSortFilterActionsProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkSortFilterActionsProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_ctkSortFilterActionsProxyModel.data,
      qt_meta_data_ctkSortFilterActionsProxyModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkSortFilterActionsProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkSortFilterActionsProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkSortFilterActionsProxyModel.stringdata))
        return static_cast<void*>(const_cast< ctkSortFilterActionsProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ctkSortFilterActionsProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ctkRichTextItemDelegate_t {
    QByteArrayData data[1];
    char stringdata[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkRichTextItemDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkRichTextItemDelegate_t qt_meta_stringdata_ctkRichTextItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 23) // "ctkRichTextItemDelegate"

    },
    "ctkRichTextItemDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkRichTextItemDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ctkRichTextItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkRichTextItemDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_ctkRichTextItemDelegate.data,
      qt_meta_data_ctkRichTextItemDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkRichTextItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkRichTextItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkRichTextItemDelegate.stringdata))
        return static_cast<void*>(const_cast< ctkRichTextItemDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ctkRichTextItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
