/****************************************************************************
** Meta object code from reading C++ file 'qclickablelabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/qclickablelabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qclickablelabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QClickableLabel_t {
    QByteArrayData data[6];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QClickableLabel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QClickableLabel_t qt_meta_stringdata_QClickableLabel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QClickableLabel"
QT_MOC_LITERAL(1, 16, 12), // "mousePressed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "hotspotName"
QT_MOC_LITERAL(4, 42, 12), // "hotspotIndex"
QT_MOC_LITERAL(5, 55, 13) // "mouseReleased"

    },
    "QClickableLabel\0mousePressed\0\0hotspotName\0"
    "hotspotIndex\0mouseReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QClickableLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       1,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::UInt,    4,

       0        // eod
};

void QClickableLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QClickableLabel *_t = static_cast<QClickableLabel *>(_o);
        switch (_id) {
        case 0: _t->mousePressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->mousePressed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->mouseReleased((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mouseReleased((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QClickableLabel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QClickableLabel::mousePressed)) {
                *result = 0;
            }
        }
        {
            typedef void (QClickableLabel::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QClickableLabel::mousePressed)) {
                *result = 1;
            }
        }
        {
            typedef void (QClickableLabel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QClickableLabel::mouseReleased)) {
                *result = 2;
            }
        }
        {
            typedef void (QClickableLabel::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QClickableLabel::mouseReleased)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QClickableLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_QClickableLabel.data,
      qt_meta_data_QClickableLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QClickableLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QClickableLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QClickableLabel.stringdata))
        return static_cast<void*>(const_cast< QClickableLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int QClickableLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QClickableLabel::mousePressed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QClickableLabel::mousePressed(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QClickableLabel::mouseReleased(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QClickableLabel::mouseReleased(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
