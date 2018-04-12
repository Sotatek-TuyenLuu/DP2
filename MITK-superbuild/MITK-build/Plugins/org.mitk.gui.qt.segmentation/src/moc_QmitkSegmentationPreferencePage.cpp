/****************************************************************************
** Meta object code from reading C++ file 'QmitkSegmentationPreferencePage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/QmitkSegmentationPreferencePage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkSegmentationPreferencePage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkSegmentationPreferencePage_t {
    QByteArrayData data[4];
    char stringdata[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkSegmentationPreferencePage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkSegmentationPreferencePage_t qt_meta_stringdata_QmitkSegmentationPreferencePage = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QmitkSegmentationPreferencePage"
QT_MOC_LITERAL(1, 32, 32), // "OnVolumeRenderingCheckboxChecked"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 26) // "OnSmoothingCheckboxChecked"

    },
    "QmitkSegmentationPreferencePage\0"
    "OnVolumeRenderingCheckboxChecked\0\0"
    "OnSmoothingCheckboxChecked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkSegmentationPreferencePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       3,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void QmitkSegmentationPreferencePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkSegmentationPreferencePage *_t = static_cast<QmitkSegmentationPreferencePage *>(_o);
        switch (_id) {
        case 0: _t->OnVolumeRenderingCheckboxChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnSmoothingCheckboxChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkSegmentationPreferencePage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmitkSegmentationPreferencePage.data,
      qt_meta_data_QmitkSegmentationPreferencePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkSegmentationPreferencePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkSegmentationPreferencePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkSegmentationPreferencePage.stringdata))
        return static_cast<void*>(const_cast< QmitkSegmentationPreferencePage*>(this));
    if (!strcmp(_clname, "berry::IQtPreferencePage"))
        return static_cast< berry::IQtPreferencePage*>(const_cast< QmitkSegmentationPreferencePage*>(this));
    if (!strcmp(_clname, "org.blueberry.ui.IPreferencePage"))
        return static_cast< berry::IPreferencePage*>(const_cast< QmitkSegmentationPreferencePage*>(this));
    return QObject::qt_metacast(_clname);
}

int QmitkSegmentationPreferencePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
