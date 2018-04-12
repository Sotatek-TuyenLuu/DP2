/****************************************************************************
** Meta object code from reading C++ file 'QmitkColorPropertyEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkColorPropertyEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkColorPropertyEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkPopupColorChooser_t {
    QByteArrayData data[3];
    char stringdata[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkPopupColorChooser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkPopupColorChooser_t qt_meta_stringdata_QmitkPopupColorChooser = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QmitkPopupColorChooser"
QT_MOC_LITERAL(1, 23, 13), // "colorSelected"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "QmitkPopupColorChooser\0colorSelected\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkPopupColorChooser[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,

       0        // eod
};

void QmitkPopupColorChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkPopupColorChooser *_t = static_cast<QmitkPopupColorChooser *>(_o);
        switch (_id) {
        case 0: _t->colorSelected((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkPopupColorChooser::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkPopupColorChooser::colorSelected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmitkPopupColorChooser::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QmitkPopupColorChooser.data,
      qt_meta_data_QmitkPopupColorChooser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkPopupColorChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkPopupColorChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkPopupColorChooser.stringdata))
        return static_cast<void*>(const_cast< QmitkPopupColorChooser*>(this));
    return QFrame::qt_metacast(_clname);
}

int QmitkPopupColorChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QmitkPopupColorChooser::colorSelected(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QmitkColorPropertyEditor_t {
    QByteArrayData data[3];
    char stringdata[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkColorPropertyEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkColorPropertyEditor_t qt_meta_stringdata_QmitkColorPropertyEditor = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QmitkColorPropertyEditor"
QT_MOC_LITERAL(1, 25, 15), // "onColorSelected"
QT_MOC_LITERAL(2, 41, 0) // ""

    },
    "QmitkColorPropertyEditor\0onColorSelected\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkColorPropertyEditor[] = {

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
    QMetaType::Void, QMetaType::QColor,    2,

       0        // eod
};

void QmitkColorPropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkColorPropertyEditor *_t = static_cast<QmitkColorPropertyEditor *>(_o);
        switch (_id) {
        case 0: _t->onColorSelected((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkColorPropertyEditor::staticMetaObject = {
    { &QmitkColorPropertyView::staticMetaObject, qt_meta_stringdata_QmitkColorPropertyEditor.data,
      qt_meta_data_QmitkColorPropertyEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkColorPropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkColorPropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkColorPropertyEditor.stringdata))
        return static_cast<void*>(const_cast< QmitkColorPropertyEditor*>(this));
    return QmitkColorPropertyView::qt_metacast(_clname);
}

int QmitkColorPropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkColorPropertyView::qt_metacall(_c, _id, _a);
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
