/****************************************************************************
** Meta object code from reading C++ file 'QmitkPropertyItemDelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkPropertyItemDelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkPropertyItemDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkColorWidget_t {
    QByteArrayData data[5];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkColorWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkColorWidget_t qt_meta_stringdata_QmitkColorWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QmitkColorWidget"
QT_MOC_LITERAL(1, 17, 11), // "ColorPicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "OnButtonClicked"
QT_MOC_LITERAL(4, 46, 25) // "OnLineEditEditingFinished"

    },
    "QmitkColorWidget\0ColorPicked\0\0"
    "OnButtonClicked\0OnLineEditEditingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkColorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmitkColorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkColorWidget *_t = static_cast<QmitkColorWidget *>(_o);
        switch (_id) {
        case 0: _t->ColorPicked(); break;
        case 1: _t->OnButtonClicked(); break;
        case 2: _t->OnLineEditEditingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkColorWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkColorWidget::ColorPicked)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QmitkColorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkColorWidget.data,
      qt_meta_data_QmitkColorWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkColorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkColorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkColorWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkColorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkColorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QmitkColorWidget::ColorPicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_QmitkComboBoxListView_t {
    QByteArrayData data[1];
    char stringdata[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkComboBoxListView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkComboBoxListView_t qt_meta_stringdata_QmitkComboBoxListView = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QmitkComboBoxListView"

    },
    "QmitkComboBoxListView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkComboBoxListView[] = {

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

void QmitkComboBoxListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QmitkComboBoxListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_QmitkComboBoxListView.data,
      qt_meta_data_QmitkComboBoxListView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkComboBoxListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkComboBoxListView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkComboBoxListView.stringdata))
        return static_cast<void*>(const_cast< QmitkComboBoxListView*>(this));
    return QListView::qt_metacast(_clname);
}

int QmitkComboBoxListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QmitkPropertyItemDelegate_t {
    QByteArrayData data[6];
    char stringdata[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkPropertyItemDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkPropertyItemDelegate_t qt_meta_stringdata_QmitkPropertyItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QmitkPropertyItemDelegate"
QT_MOC_LITERAL(1, 26, 29), // "OnComboBoxCurrentIndexChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 5), // "index"
QT_MOC_LITERAL(4, 63, 24), // "OnSpinBoxEditingFinished"
QT_MOC_LITERAL(5, 88, 13) // "OnColorPicked"

    },
    "QmitkPropertyItemDelegate\0"
    "OnComboBoxCurrentIndexChanged\0\0index\0"
    "OnSpinBoxEditingFinished\0OnColorPicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkPropertyItemDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmitkPropertyItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkPropertyItemDelegate *_t = static_cast<QmitkPropertyItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->OnComboBoxCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnSpinBoxEditingFinished(); break;
        case 2: _t->OnColorPicked(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkPropertyItemDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_QmitkPropertyItemDelegate.data,
      qt_meta_data_QmitkPropertyItemDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkPropertyItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkPropertyItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkPropertyItemDelegate.stringdata))
        return static_cast<void*>(const_cast< QmitkPropertyItemDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int QmitkPropertyItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
