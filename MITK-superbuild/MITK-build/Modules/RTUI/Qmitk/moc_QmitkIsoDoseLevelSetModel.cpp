/****************************************************************************
** Meta object code from reading C++ file 'QmitkIsoDoseLevelSetModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/RTUI/Qmitk/QmitkIsoDoseLevelSetModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkIsoDoseLevelSetModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkIsoDoseLevelSetModel_t {
    QByteArrayData data[8];
    char stringdata[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkIsoDoseLevelSetModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkIsoDoseLevelSetModel_t qt_meta_stringdata_QmitkIsoDoseLevelSetModel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QmitkIsoDoseLevelSetModel"
QT_MOC_LITERAL(1, 26, 16), // "setReferenceDose"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 16), // "newReferenceDose"
QT_MOC_LITERAL(4, 61, 19), // "setShowAbsoluteDose"
QT_MOC_LITERAL(5, 81, 16), // "showAbsoluteDose"
QT_MOC_LITERAL(6, 98, 21), // "setVisibilityEditOnly"
QT_MOC_LITERAL(7, 120, 14) // "onlyVisibility"

    },
    "QmitkIsoDoseLevelSetModel\0setReferenceDose\0"
    "\0newReferenceDose\0setShowAbsoluteDose\0"
    "showAbsoluteDose\0setVisibilityEditOnly\0"
    "onlyVisibility"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkIsoDoseLevelSetModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void QmitkIsoDoseLevelSetModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkIsoDoseLevelSetModel *_t = static_cast<QmitkIsoDoseLevelSetModel *>(_o);
        switch (_id) {
        case 0: _t->setReferenceDose((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setShowAbsoluteDose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setVisibilityEditOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmitkIsoDoseLevelSetModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_QmitkIsoDoseLevelSetModel.data,
      qt_meta_data_QmitkIsoDoseLevelSetModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkIsoDoseLevelSetModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkIsoDoseLevelSetModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkIsoDoseLevelSetModel.stringdata))
        return static_cast<void*>(const_cast< QmitkIsoDoseLevelSetModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int QmitkIsoDoseLevelSetModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
