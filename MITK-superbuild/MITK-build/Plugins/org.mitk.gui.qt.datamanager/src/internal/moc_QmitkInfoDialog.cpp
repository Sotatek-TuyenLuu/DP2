/****************************************************************************
** Meta object code from reading C++ file 'QmitkInfoDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkInfoDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkInfoDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkInfoDialog_t {
    QByteArrayData data[9];
    char stringdata[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkInfoDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkInfoDialog_t qt_meta_stringdata_QmitkInfoDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QmitkInfoDialog"
QT_MOC_LITERAL(1, 16, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "const mitk::DataNode*"
QT_MOC_LITERAL(4, 58, 21), // "OnSearchButtonClicked"
QT_MOC_LITERAL(5, 80, 7), // "checked"
QT_MOC_LITERAL(6, 88, 21), // "OnCancelButtonClicked"
QT_MOC_LITERAL(7, 110, 18), // "KeyWordTextChanged"
QT_MOC_LITERAL(8, 129, 4) // "text"

    },
    "QmitkInfoDialog\0OnSelectionChanged\0\0"
    "const mitk::DataNode*\0OnSearchButtonClicked\0"
    "checked\0OnCancelButtonClicked\0"
    "KeyWordTextChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkInfoDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       4,    0,   50,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   51,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x2a /* Public | MethodCloned */,
       7,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void QmitkInfoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkInfoDialog *_t = static_cast<QmitkInfoDialog *>(_o);
        switch (_id) {
        case 0: _t->OnSelectionChanged((*reinterpret_cast< const mitk::DataNode*(*)>(_a[1]))); break;
        case 1: _t->OnSearchButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->OnSearchButtonClicked(); break;
        case 3: _t->OnCancelButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->OnCancelButtonClicked(); break;
        case 5: _t->KeyWordTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkInfoDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QmitkInfoDialog.data,
      qt_meta_data_QmitkInfoDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkInfoDialog.stringdata))
        return static_cast<void*>(const_cast< QmitkInfoDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QmitkInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
