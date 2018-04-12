/****************************************************************************
** Meta object code from reading C++ file 'ctkDirectoryButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDirectoryButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDirectoryButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDirectoryButton_t {
    QByteArrayData data[21];
    char stringdata[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDirectoryButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDirectoryButton_t qt_meta_stringdata_ctkDirectoryButton = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ctkDirectoryButton"
QT_MOC_LITERAL(1, 19, 16), // "directoryChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "directorySelected"
QT_MOC_LITERAL(4, 55, 6), // "browse"
QT_MOC_LITERAL(5, 62, 10), // "acceptMode"
QT_MOC_LITERAL(6, 73, 23), // "QFileDialog::AcceptMode"
QT_MOC_LITERAL(7, 97, 9), // "directory"
QT_MOC_LITERAL(8, 107, 7), // "caption"
QT_MOC_LITERAL(9, 115, 4), // "text"
QT_MOC_LITERAL(10, 120, 4), // "icon"
QT_MOC_LITERAL(11, 125, 7), // "options"
QT_MOC_LITERAL(12, 133, 7), // "Options"
QT_MOC_LITERAL(13, 141, 6), // "Option"
QT_MOC_LITERAL(14, 148, 12), // "ShowDirsOnly"
QT_MOC_LITERAL(15, 161, 19), // "DontResolveSymlinks"
QT_MOC_LITERAL(16, 181, 20), // "DontConfirmOverwrite"
QT_MOC_LITERAL(17, 202, 12), // "DontUseSheet"
QT_MOC_LITERAL(18, 215, 19), // "DontUseNativeDialog"
QT_MOC_LITERAL(19, 235, 8), // "ReadOnly"
QT_MOC_LITERAL(20, 244, 21) // "HideNameFilterDetails"

    },
    "ctkDirectoryButton\0directoryChanged\0"
    "\0directorySelected\0browse\0acceptMode\0"
    "QFileDialog::AcceptMode\0directory\0"
    "caption\0text\0icon\0options\0Options\0"
    "Option\0ShowDirsOnly\0DontResolveSymlinks\0"
    "DontConfirmOverwrite\0DontUseSheet\0"
    "DontUseNativeDialog\0ReadOnly\0"
    "HideNameFilterDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDirectoryButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   36, // properties
       2,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::QString, 0x00595103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QIcon, 0x00095103,
      11, 0x80000000 | 12, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      13, 0x1,    7,   68,
      12, 0x1,    7,   82,

 // enum data: key, value
      14, uint(ctkDirectoryButton::ShowDirsOnly),
      15, uint(ctkDirectoryButton::DontResolveSymlinks),
      16, uint(ctkDirectoryButton::DontConfirmOverwrite),
      17, uint(ctkDirectoryButton::DontUseSheet),
      18, uint(ctkDirectoryButton::DontUseNativeDialog),
      19, uint(ctkDirectoryButton::ReadOnly),
      20, uint(ctkDirectoryButton::HideNameFilterDetails),
      14, uint(ctkDirectoryButton::ShowDirsOnly),
      15, uint(ctkDirectoryButton::DontResolveSymlinks),
      16, uint(ctkDirectoryButton::DontConfirmOverwrite),
      17, uint(ctkDirectoryButton::DontUseSheet),
      18, uint(ctkDirectoryButton::DontUseNativeDialog),
      19, uint(ctkDirectoryButton::ReadOnly),
      20, uint(ctkDirectoryButton::HideNameFilterDetails),

       0        // eod
};

void ctkDirectoryButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDirectoryButton *_t = static_cast<ctkDirectoryButton *>(_o);
        switch (_id) {
        case 0: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->directorySelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->browse(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDirectoryButton::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDirectoryButton::directoryChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkDirectoryButton::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDirectoryButton::directorySelected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ctkDirectoryButton::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkDirectoryButton.data,
      qt_meta_data_ctkDirectoryButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDirectoryButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDirectoryButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDirectoryButton.stringdata))
        return static_cast<void*>(const_cast< ctkDirectoryButton*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkDirectoryButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFileDialog::AcceptMode*>(_v) = acceptMode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = directory(); break;
        case 2: *reinterpret_cast< QString*>(_v) = caption(); break;
        case 3: *reinterpret_cast< QString*>(_v) = text(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = icon(); break;
        case 5: *reinterpret_cast<int*>(_v) = QFlag(options()); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAcceptMode(*reinterpret_cast< QFileDialog::AcceptMode*>(_v)); break;
        case 1: setDirectory(*reinterpret_cast< QString*>(_v)); break;
        case 2: setCaption(*reinterpret_cast< QString*>(_v)); break;
        case 3: setText(*reinterpret_cast< QString*>(_v)); break;
        case 4: setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: setOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkDirectoryButton::directoryChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDirectoryButton::directorySelected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
