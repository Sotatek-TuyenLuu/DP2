/****************************************************************************
** Meta object code from reading C++ file 'QmitkMouseModeSwitcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgets/include/QmitkMouseModeSwitcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkMouseModeSwitcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkMouseModeSwitcher_t {
    QByteArrayData data[13];
    char stringdata[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkMouseModeSwitcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkMouseModeSwitcher_t qt_meta_stringdata_QmitkMouseModeSwitcher = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QmitkMouseModeSwitcher"
QT_MOC_LITERAL(1, 23, 17), // "MouseModeSelected"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 34), // "mitk::MouseModeSwitcher::Mous..."
QT_MOC_LITERAL(4, 77, 2), // "id"
QT_MOC_LITERAL(5, 80, 20), // "setMouseModeSwitcher"
QT_MOC_LITERAL(6, 101, 24), // "mitk::MouseModeSwitcher*"
QT_MOC_LITERAL(7, 126, 18), // "modeSelectedByUser"
QT_MOC_LITERAL(8, 145, 9), // "addButton"
QT_MOC_LITERAL(9, 155, 9), // "MouseMode"
QT_MOC_LITERAL(10, 165, 8), // "toolName"
QT_MOC_LITERAL(11, 174, 4), // "icon"
QT_MOC_LITERAL(12, 179, 2) // "on"

    },
    "QmitkMouseModeSwitcher\0MouseModeSelected\0"
    "\0mitk::MouseModeSwitcher::MouseMode\0"
    "id\0setMouseModeSwitcher\0"
    "mitk::MouseModeSwitcher*\0modeSelectedByUser\0"
    "addButton\0MouseMode\0toolName\0icon\0on"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkMouseModeSwitcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x09 /* Protected */,
       8,    4,   46,    2, 0x09 /* Protected */,
       8,    3,   55,    2, 0x29 /* Protected | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::QIcon, QMetaType::Bool,    4,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::QIcon,    4,   10,   11,

       0        // eod
};

void QmitkMouseModeSwitcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkMouseModeSwitcher *_t = static_cast<QmitkMouseModeSwitcher *>(_o);
        switch (_id) {
        case 0: _t->MouseModeSelected((*reinterpret_cast< mitk::MouseModeSwitcher::MouseMode(*)>(_a[1]))); break;
        case 1: _t->setMouseModeSwitcher((*reinterpret_cast< mitk::MouseModeSwitcher*(*)>(_a[1]))); break;
        case 2: _t->modeSelectedByUser(); break;
        case 3: _t->addButton((*reinterpret_cast< MouseMode(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->addButton((*reinterpret_cast< MouseMode(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkMouseModeSwitcher::*_t)(mitk::MouseModeSwitcher::MouseMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkMouseModeSwitcher::MouseModeSelected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmitkMouseModeSwitcher::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_QmitkMouseModeSwitcher.data,
      qt_meta_data_QmitkMouseModeSwitcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkMouseModeSwitcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkMouseModeSwitcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkMouseModeSwitcher.stringdata))
        return static_cast<void*>(const_cast< QmitkMouseModeSwitcher*>(this));
    return QToolBar::qt_metacast(_clname);
}

int QmitkMouseModeSwitcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QmitkMouseModeSwitcher::MouseModeSelected(mitk::MouseModeSwitcher::MouseMode _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
