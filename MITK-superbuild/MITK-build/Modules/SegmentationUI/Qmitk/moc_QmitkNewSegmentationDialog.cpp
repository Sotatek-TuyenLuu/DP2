/****************************************************************************
** Meta object code from reading C++ file 'QmitkNewSegmentationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/SegmentationUI/Qmitk/QmitkNewSegmentationDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkNewSegmentationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkNewSegmentationDialog_t {
    QByteArrayData data[11];
    char stringdata[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkNewSegmentationDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkNewSegmentationDialog_t qt_meta_stringdata_QmitkNewSegmentationDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QmitkNewSegmentationDialog"
QT_MOC_LITERAL(1, 27, 9), // "setPrompt"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "prompt"
QT_MOC_LITERAL(4, 45, 19), // "setSegmentationName"
QT_MOC_LITERAL(5, 65, 4), // "name"
QT_MOC_LITERAL(6, 70, 15), // "onAcceptClicked"
QT_MOC_LITERAL(7, 86, 21), // "onNewOrganNameChanged"
QT_MOC_LITERAL(8, 108, 17), // "onColorBtnClicked"
QT_MOC_LITERAL(9, 126, 13), // "onColorChange"
QT_MOC_LITERAL(10, 140, 13) // "completedWord"

    },
    "QmitkNewSegmentationDialog\0setPrompt\0"
    "\0prompt\0setSegmentationName\0name\0"
    "onAcceptClicked\0onNewOrganNameChanged\0"
    "onColorBtnClicked\0onColorChange\0"
    "completedWord"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkNewSegmentationDialog[] = {

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
       6,    0,   50,    2, 0x09 /* Protected */,
       7,    1,   51,    2, 0x09 /* Protected */,
       8,    0,   54,    2, 0x09 /* Protected */,
       9,    1,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void QmitkNewSegmentationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkNewSegmentationDialog *_t = static_cast<QmitkNewSegmentationDialog *>(_o);
        switch (_id) {
        case 0: _t->setPrompt((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setSegmentationName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onAcceptClicked(); break;
        case 3: _t->onNewOrganNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onColorBtnClicked(); break;
        case 5: _t->onColorChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkNewSegmentationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QmitkNewSegmentationDialog.data,
      qt_meta_data_QmitkNewSegmentationDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkNewSegmentationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkNewSegmentationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkNewSegmentationDialog.stringdata))
        return static_cast<void*>(const_cast< QmitkNewSegmentationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QmitkNewSegmentationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
