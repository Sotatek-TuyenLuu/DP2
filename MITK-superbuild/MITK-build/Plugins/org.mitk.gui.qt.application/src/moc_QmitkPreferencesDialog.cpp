/****************************************************************************
** Meta object code from reading C++ file 'QmitkPreferencesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/QmitkPreferencesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkPreferencesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkPreferencesDialog_t {
    QByteArrayData data[10];
    char stringdata[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkPreferencesDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkPreferencesDialog_t qt_meta_stringdata_QmitkPreferencesDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QmitkPreferencesDialog"
QT_MOC_LITERAL(1, 23, 21), // "OnImportButtonClicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "OnExportButtonClicked"
QT_MOC_LITERAL(4, 68, 16), // "OnDialogAccepted"
QT_MOC_LITERAL(5, 85, 16), // "OnDialogRejected"
QT_MOC_LITERAL(6, 102, 20), // "OnKeywordTextChanged"
QT_MOC_LITERAL(7, 123, 1), // "s"
QT_MOC_LITERAL(8, 125, 24), // "OnKeywordEditingFinished"
QT_MOC_LITERAL(9, 150, 37) // "OnPreferencesTreeItemSelectio..."

    },
    "QmitkPreferencesDialog\0OnImportButtonClicked\0"
    "\0OnExportButtonClicked\0OnDialogAccepted\0"
    "OnDialogRejected\0OnKeywordTextChanged\0"
    "s\0OnKeywordEditingFinished\0"
    "OnPreferencesTreeItemSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkPreferencesDialog[] = {

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
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    1,   53,    2, 0x09 /* Protected */,
       8,    0,   56,    2, 0x09 /* Protected */,
       9,    0,   57,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmitkPreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkPreferencesDialog *_t = static_cast<QmitkPreferencesDialog *>(_o);
        switch (_id) {
        case 0: _t->OnImportButtonClicked(); break;
        case 1: _t->OnExportButtonClicked(); break;
        case 2: _t->OnDialogAccepted(); break;
        case 3: _t->OnDialogRejected(); break;
        case 4: _t->OnKeywordTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->OnKeywordEditingFinished(); break;
        case 6: _t->OnPreferencesTreeItemSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkPreferencesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QmitkPreferencesDialog.data,
      qt_meta_data_QmitkPreferencesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkPreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkPreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkPreferencesDialog.stringdata))
        return static_cast<void*>(const_cast< QmitkPreferencesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QmitkPreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
