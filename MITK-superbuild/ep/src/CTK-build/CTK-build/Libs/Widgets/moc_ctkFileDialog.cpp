/****************************************************************************
** Meta object code from reading C++ file 'ctkFileDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkFileDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkFileDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkFileDialog_t {
    QByteArrayData data[12];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkFileDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkFileDialog_t qt_meta_stringdata_ctkFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkFileDialog"
QT_MOC_LITERAL(1, 14, 20), // "fileSelectionChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "selected"
QT_MOC_LITERAL(4, 45, 21), // "setAcceptButtonEnable"
QT_MOC_LITERAL(5, 67, 6), // "enable"
QT_MOC_LITERAL(6, 74, 18), // "onSelectionChanged"
QT_MOC_LITERAL(7, 93, 15), // "setBottomWidget"
QT_MOC_LITERAL(8, 109, 8), // "QWidget*"
QT_MOC_LITERAL(9, 118, 6), // "widget"
QT_MOC_LITERAL(10, 125, 5), // "label"
QT_MOC_LITERAL(11, 131, 12) // "bottomWidget"

    },
    "ctkFileDialog\0fileSelectionChanged\0\0"
    "selected\0setAcceptButtonEnable\0enable\0"
    "onSelectionChanged\0setBottomWidget\0"
    "QWidget*\0widget\0label\0bottomWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkFileDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       7,    2,   51,    2, 0x02 /* Public */,
       7,    1,   56,    2, 0x22 /* Public | MethodCloned */,
      11,    0,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,
    QMetaType::Void, 0x80000000 | 8,    9,
    0x80000000 | 8,

       0        // eod
};

void ctkFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkFileDialog *_t = static_cast<ctkFileDialog *>(_o);
        switch (_id) {
        case 0: _t->fileSelectionChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->setAcceptButtonEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onSelectionChanged(); break;
        case 3: _t->setBottomWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->setBottomWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 5: { QWidget* _r = _t->bottomWidget();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkFileDialog::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkFileDialog::fileSelectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ctkFileDialog::staticMetaObject = {
    { &QFileDialog::staticMetaObject, qt_meta_stringdata_ctkFileDialog.data,
      qt_meta_data_ctkFileDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkFileDialog.stringdata))
        return static_cast<void*>(const_cast< ctkFileDialog*>(this));
    return QFileDialog::qt_metacast(_clname);
}

int ctkFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
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
void ctkFileDialog::fileSelectionChanged(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
