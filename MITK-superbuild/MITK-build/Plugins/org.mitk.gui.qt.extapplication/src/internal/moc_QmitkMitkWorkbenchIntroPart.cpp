/****************************************************************************
** Meta object code from reading C++ file 'QmitkMitkWorkbenchIntroPart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkMitkWorkbenchIntroPart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkMitkWorkbenchIntroPart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkMitkWorkbenchIntroPart_t {
    QByteArrayData data[4];
    char stringdata[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkMitkWorkbenchIntroPart_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkMitkWorkbenchIntroPart_t qt_meta_stringdata_QmitkMitkWorkbenchIntroPart = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QmitkMitkWorkbenchIntroPart"
QT_MOC_LITERAL(1, 28, 12), // "DelegateMeTo"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10) // "ShowMeNext"

    },
    "QmitkMitkWorkbenchIntroPart\0DelegateMeTo\0"
    "\0ShowMeNext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkMitkWorkbenchIntroPart[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

       0        // eod
};

void QmitkMitkWorkbenchIntroPart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkMitkWorkbenchIntroPart *_t = static_cast<QmitkMitkWorkbenchIntroPart *>(_o);
        switch (_id) {
        case 0: _t->DelegateMeTo((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkMitkWorkbenchIntroPart::staticMetaObject = {
    { &berry::QtIntroPart::staticMetaObject, qt_meta_stringdata_QmitkMitkWorkbenchIntroPart.data,
      qt_meta_data_QmitkMitkWorkbenchIntroPart,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkMitkWorkbenchIntroPart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkMitkWorkbenchIntroPart::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkMitkWorkbenchIntroPart.stringdata))
        return static_cast<void*>(const_cast< QmitkMitkWorkbenchIntroPart*>(this));
    return berry::QtIntroPart::qt_metacast(_clname);
}

int QmitkMitkWorkbenchIntroPart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = berry::QtIntroPart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
