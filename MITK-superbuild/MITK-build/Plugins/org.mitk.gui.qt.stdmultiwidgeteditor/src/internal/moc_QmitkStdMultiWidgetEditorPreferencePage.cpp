/****************************************************************************
** Meta object code from reading C++ file 'QmitkStdMultiWidgetEditorPreferencePage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkStdMultiWidgetEditorPreferencePage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkStdMultiWidgetEditorPreferencePage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkStdMultiWidgetEditorPreferencePage_t {
    QByteArrayData data[9];
    char stringdata[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkStdMultiWidgetEditorPreferencePage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkStdMultiWidgetEditorPreferencePage_t qt_meta_stringdata_QmitkStdMultiWidgetEditorPreferencePage = {
    {
QT_MOC_LITERAL(0, 0, 39), // "QmitkStdMultiWidgetEditorPref..."
QT_MOC_LITERAL(1, 40, 22), // "ResetPreferencesAndGUI"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 19), // "ChangeRenderingMode"
QT_MOC_LITERAL(4, 84, 1), // "i"
QT_MOC_LITERAL(5, 86, 23), // "OnWidgetComboBoxChanged"
QT_MOC_LITERAL(6, 110, 21), // "AnnotationTextChanged"
QT_MOC_LITERAL(7, 132, 4), // "text"
QT_MOC_LITERAL(8, 137, 25) // "ColorChooserButtonClicked"

    },
    "QmitkStdMultiWidgetEditorPreferencePage\0"
    "ResetPreferencesAndGUI\0\0ChangeRenderingMode\0"
    "i\0OnWidgetComboBoxChanged\0"
    "AnnotationTextChanged\0text\0"
    "ColorChooserButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkStdMultiWidgetEditorPreferencePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       6,    1,   46,    2, 0x0a /* Public */,
       8,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void QmitkStdMultiWidgetEditorPreferencePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkStdMultiWidgetEditorPreferencePage *_t = static_cast<QmitkStdMultiWidgetEditorPreferencePage *>(_o);
        switch (_id) {
        case 0: _t->ResetPreferencesAndGUI(); break;
        case 1: _t->ChangeRenderingMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnWidgetComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->AnnotationTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->ColorChooserButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkStdMultiWidgetEditorPreferencePage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmitkStdMultiWidgetEditorPreferencePage.data,
      qt_meta_data_QmitkStdMultiWidgetEditorPreferencePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkStdMultiWidgetEditorPreferencePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkStdMultiWidgetEditorPreferencePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkStdMultiWidgetEditorPreferencePage.stringdata))
        return static_cast<void*>(const_cast< QmitkStdMultiWidgetEditorPreferencePage*>(this));
    if (!strcmp(_clname, "berry::IQtPreferencePage"))
        return static_cast< berry::IQtPreferencePage*>(const_cast< QmitkStdMultiWidgetEditorPreferencePage*>(this));
    if (!strcmp(_clname, "org.blueberry.ui.IPreferencePage"))
        return static_cast< berry::IPreferencePage*>(const_cast< QmitkStdMultiWidgetEditorPreferencePage*>(this));
    return QObject::qt_metacast(_clname);
}

int QmitkStdMultiWidgetEditorPreferencePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
