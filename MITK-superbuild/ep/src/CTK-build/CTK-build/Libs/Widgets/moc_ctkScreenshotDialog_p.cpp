/****************************************************************************
** Meta object code from reading C++ file 'ctkScreenshotDialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkScreenshotDialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkScreenshotDialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkScreenshotDialogPrivate_t {
    QByteArrayData data[16];
    char stringdata[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkScreenshotDialogPrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkScreenshotDialogPrivate_t qt_meta_stringdata_ctkScreenshotDialogPrivate = {
    {
QT_MOC_LITERAL(0, 0, 26), // "ctkScreenshotDialogPrivate"
QT_MOC_LITERAL(1, 27, 14), // "saveScreenshot"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 14), // "delayInSeconds"
QT_MOC_LITERAL(4, 58, 19), // "updateFullNameLabel"
QT_MOC_LITERAL(5, 78, 17), // "setCountDownLabel"
QT_MOC_LITERAL(6, 96, 8), // "newValue"
QT_MOC_LITERAL(7, 105, 19), // "resetCountDownValue"
QT_MOC_LITERAL(8, 125, 15), // "updateCountDown"
QT_MOC_LITERAL(9, 141, 17), // "selectScaleFactor"
QT_MOC_LITERAL(10, 159, 5), // "scale"
QT_MOC_LITERAL(11, 165, 22), // "selectOutputResolution"
QT_MOC_LITERAL(12, 188, 15), // "lockAspectRatio"
QT_MOC_LITERAL(13, 204, 4), // "lock"
QT_MOC_LITERAL(14, 209, 13), // "onWidthEdited"
QT_MOC_LITERAL(15, 223, 14) // "onHeightEdited"

    },
    "ctkScreenshotDialogPrivate\0saveScreenshot\0"
    "\0delayInSeconds\0updateFullNameLabel\0"
    "setCountDownLabel\0newValue\0"
    "resetCountDownValue\0updateCountDown\0"
    "selectScaleFactor\0scale\0selectOutputResolution\0"
    "lockAspectRatio\0lock\0onWidthEdited\0"
    "onHeightEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkScreenshotDialogPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    0,   67,    2, 0x0a /* Public */,
       5,    1,   68,    2, 0x0a /* Public */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    1,   73,    2, 0x0a /* Public */,
      11,    1,   76,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,
      14,    0,   82,    2, 0x0a /* Public */,
      15,    0,   83,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ctkScreenshotDialogPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkScreenshotDialogPrivate *_t = static_cast<ctkScreenshotDialogPrivate *>(_o);
        switch (_id) {
        case 0: _t->saveScreenshot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateFullNameLabel(); break;
        case 2: _t->setCountDownLabel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->resetCountDownValue(); break;
        case 4: _t->updateCountDown(); break;
        case 5: _t->selectScaleFactor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->selectOutputResolution((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->lockAspectRatio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onWidthEdited(); break;
        case 9: _t->onHeightEdited(); break;
        default: ;
        }
    }
}

const QMetaObject ctkScreenshotDialogPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkScreenshotDialogPrivate.data,
      qt_meta_data_ctkScreenshotDialogPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkScreenshotDialogPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkScreenshotDialogPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkScreenshotDialogPrivate.stringdata))
        return static_cast<void*>(const_cast< ctkScreenshotDialogPrivate*>(this));
    if (!strcmp(_clname, "Ui_ctkScreenshotDialog"))
        return static_cast< Ui_ctkScreenshotDialog*>(const_cast< ctkScreenshotDialogPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkScreenshotDialogPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
