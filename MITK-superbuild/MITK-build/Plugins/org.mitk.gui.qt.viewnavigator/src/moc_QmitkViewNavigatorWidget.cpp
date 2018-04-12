/****************************************************************************
** Meta object code from reading C++ file 'QmitkViewNavigatorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/QmitkViewNavigatorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkViewNavigatorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkViewNavigatorWidget_t {
    QByteArrayData data[13];
    char stringdata[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkViewNavigatorWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkViewNavigatorWidget_t qt_meta_stringdata_QmitkViewNavigatorWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QmitkViewNavigatorWidget"
QT_MOC_LITERAL(1, 25, 19), // "CustomMenuRequested"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 3), // "pos"
QT_MOC_LITERAL(4, 50, 11), // "ItemClicked"
QT_MOC_LITERAL(5, 62, 5), // "index"
QT_MOC_LITERAL(6, 68, 24), // "SaveCurrentPerspectiveAs"
QT_MOC_LITERAL(7, 93, 23), // "ResetCurrentPerspective"
QT_MOC_LITERAL(8, 117, 20), // "CloseAllPerspectives"
QT_MOC_LITERAL(9, 138, 16), // "ClosePerspective"
QT_MOC_LITERAL(10, 155, 9), // "ExpandAll"
QT_MOC_LITERAL(11, 165, 11), // "CollapseAll"
QT_MOC_LITERAL(12, 177, 13) // "FilterChanged"

    },
    "QmitkViewNavigatorWidget\0CustomMenuRequested\0"
    "\0pos\0ItemClicked\0index\0SaveCurrentPerspectiveAs\0"
    "ResetCurrentPerspective\0CloseAllPerspectives\0"
    "ClosePerspective\0ExpandAll\0CollapseAll\0"
    "FilterChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkViewNavigatorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       6,    0,   65,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,
       9,    0,   68,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    0,   70,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmitkViewNavigatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkViewNavigatorWidget *_t = static_cast<QmitkViewNavigatorWidget *>(_o);
        switch (_id) {
        case 0: _t->CustomMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->ItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->SaveCurrentPerspectiveAs(); break;
        case 3: _t->ResetCurrentPerspective(); break;
        case 4: _t->CloseAllPerspectives(); break;
        case 5: _t->ClosePerspective(); break;
        case 6: _t->ExpandAll(); break;
        case 7: _t->CollapseAll(); break;
        case 8: _t->FilterChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkViewNavigatorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkViewNavigatorWidget.data,
      qt_meta_data_QmitkViewNavigatorWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkViewNavigatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkViewNavigatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkViewNavigatorWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkViewNavigatorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkViewNavigatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
