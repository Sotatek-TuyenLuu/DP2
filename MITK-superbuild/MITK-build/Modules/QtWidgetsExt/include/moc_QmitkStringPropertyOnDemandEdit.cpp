/****************************************************************************
** Meta object code from reading C++ file 'QmitkStringPropertyOnDemandEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkStringPropertyOnDemandEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkStringPropertyOnDemandEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QClickableLabel2_t {
    QByteArrayData data[3];
    char stringdata[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QClickableLabel2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QClickableLabel2_t qt_meta_stringdata_QClickableLabel2 = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QClickableLabel2"
QT_MOC_LITERAL(1, 17, 7), // "clicked"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "QClickableLabel2\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QClickableLabel2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QClickableLabel2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QClickableLabel2 *_t = static_cast<QClickableLabel2 *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QClickableLabel2::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QClickableLabel2::clicked)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QClickableLabel2::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_QClickableLabel2.data,
      qt_meta_data_QClickableLabel2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QClickableLabel2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QClickableLabel2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QClickableLabel2.stringdata))
        return static_cast<void*>(const_cast< QClickableLabel2*>(this));
    return QLabel::qt_metacast(_clname);
}

int QClickableLabel2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QClickableLabel2::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_QmitkStringPropertyOnDemandEdit_t {
    QByteArrayData data[3];
    char stringdata[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkStringPropertyOnDemandEdit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkStringPropertyOnDemandEdit_t qt_meta_stringdata_QmitkStringPropertyOnDemandEdit = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QmitkStringPropertyOnDemandEdit"
QT_MOC_LITERAL(1, 32, 19), // "onToolButtonClicked"
QT_MOC_LITERAL(2, 52, 0) // ""

    },
    "QmitkStringPropertyOnDemandEdit\0"
    "onToolButtonClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkStringPropertyOnDemandEdit[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QmitkStringPropertyOnDemandEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkStringPropertyOnDemandEdit *_t = static_cast<QmitkStringPropertyOnDemandEdit *>(_o);
        switch (_id) {
        case 0: _t->onToolButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QmitkStringPropertyOnDemandEdit::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QmitkStringPropertyOnDemandEdit.data,
      qt_meta_data_QmitkStringPropertyOnDemandEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkStringPropertyOnDemandEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkStringPropertyOnDemandEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkStringPropertyOnDemandEdit.stringdata))
        return static_cast<void*>(const_cast< QmitkStringPropertyOnDemandEdit*>(this));
    if (!strcmp(_clname, "mitk::PropertyEditor"))
        return static_cast< mitk::PropertyEditor*>(const_cast< QmitkStringPropertyOnDemandEdit*>(this));
    return QFrame::qt_metacast(_clname);
}

int QmitkStringPropertyOnDemandEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
