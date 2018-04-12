/****************************************************************************
** Meta object code from reading C++ file 'QmitkStringPropertyEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgetsExt/include/QmitkStringPropertyEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkStringPropertyEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkStringPropertyEditor_t {
    QByteArrayData data[3];
    char stringdata[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkStringPropertyEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkStringPropertyEditor_t qt_meta_stringdata_QmitkStringPropertyEditor = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QmitkStringPropertyEditor"
QT_MOC_LITERAL(1, 26, 13), // "onTextChanged"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "QmitkStringPropertyEditor\0onTextChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkStringPropertyEditor[] = {

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
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void QmitkStringPropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkStringPropertyEditor *_t = static_cast<QmitkStringPropertyEditor *>(_o);
        switch (_id) {
        case 0: _t->onTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkStringPropertyEditor::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_QmitkStringPropertyEditor.data,
      qt_meta_data_QmitkStringPropertyEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkStringPropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkStringPropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkStringPropertyEditor.stringdata))
        return static_cast<void*>(const_cast< QmitkStringPropertyEditor*>(this));
    if (!strcmp(_clname, "mitk::PropertyEditor"))
        return static_cast< mitk::PropertyEditor*>(const_cast< QmitkStringPropertyEditor*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int QmitkStringPropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
