/****************************************************************************
** Meta object code from reading C++ file 'QmitkLevelWindowPresetDefinitionDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgets/include/QmitkLevelWindowPresetDefinitionDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkLevelWindowPresetDefinitionDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkLevelWindowPresetDefinitionDialog_t {
    QByteArrayData data[9];
    char stringdata[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkLevelWindowPresetDefinitionDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkLevelWindowPresetDefinitionDialog_t qt_meta_stringdata_QmitkLevelWindowPresetDefinitionDialog = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QmitkLevelWindowPresetDefinit..."
QT_MOC_LITERAL(1, 39, 9), // "addPreset"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 12), // "removePreset"
QT_MOC_LITERAL(4, 63, 12), // "changePreset"
QT_MOC_LITERAL(5, 76, 24), // "ListViewSelectionChanged"
QT_MOC_LITERAL(6, 101, 14), // "QItemSelection"
QT_MOC_LITERAL(7, 116, 11), // "sortPresets"
QT_MOC_LITERAL(8, 128, 5) // "index"

    },
    "QmitkLevelWindowPresetDefinitionDialog\0"
    "addPreset\0\0removePreset\0changePreset\0"
    "ListViewSelectionChanged\0QItemSelection\0"
    "sortPresets\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkLevelWindowPresetDefinitionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    2,   42,    2, 0x09 /* Protected */,
       7,    1,   47,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    2,    2,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void QmitkLevelWindowPresetDefinitionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkLevelWindowPresetDefinitionDialog *_t = static_cast<QmitkLevelWindowPresetDefinitionDialog *>(_o);
        switch (_id) {
        case 0: _t->addPreset(); break;
        case 1: _t->removePreset(); break;
        case 2: _t->changePreset(); break;
        case 3: _t->ListViewSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 4: _t->sortPresets((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkLevelWindowPresetDefinitionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QmitkLevelWindowPresetDefinitionDialog.data,
      qt_meta_data_QmitkLevelWindowPresetDefinitionDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkLevelWindowPresetDefinitionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkLevelWindowPresetDefinitionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkLevelWindowPresetDefinitionDialog.stringdata))
        return static_cast<void*>(const_cast< QmitkLevelWindowPresetDefinitionDialog*>(this));
    if (!strcmp(_clname, "Ui::QmitkLevelWindowPresetDefinition"))
        return static_cast< Ui::QmitkLevelWindowPresetDefinition*>(const_cast< QmitkLevelWindowPresetDefinitionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QmitkLevelWindowPresetDefinitionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
