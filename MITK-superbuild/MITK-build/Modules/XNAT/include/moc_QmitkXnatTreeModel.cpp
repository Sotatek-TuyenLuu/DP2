/****************************************************************************
** Meta object code from reading C++ file 'QmitkXnatTreeModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/XNAT/include/QmitkXnatTreeModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkXnatTreeModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkXnatTreeModel_t {
    QByteArrayData data[5];
    char stringdata[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkXnatTreeModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkXnatTreeModel_t qt_meta_stringdata_QmitkXnatTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QmitkXnatTreeModel"
QT_MOC_LITERAL(1, 19, 15), // "ResourceDropped"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "QList<mitk::DataNode*>"
QT_MOC_LITERAL(4, 59, 14) // "ctkXnatObject*"

    },
    "QmitkXnatTreeModel\0ResourceDropped\0\0"
    "QList<mitk::DataNode*>\0ctkXnatObject*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkXnatTreeModel[] = {

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
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, QMetaType::QModelIndex,    2,    2,    2,

       0        // eod
};

void QmitkXnatTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkXnatTreeModel *_t = static_cast<QmitkXnatTreeModel *>(_o);
        switch (_id) {
        case 0: _t->ResourceDropped((*reinterpret_cast< const QList<mitk::DataNode*>(*)>(_a[1])),(*reinterpret_cast< ctkXnatObject*(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkXnatTreeModel::*_t)(const QList<mitk::DataNode*> & , ctkXnatObject * , const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkXnatTreeModel::ResourceDropped)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmitkXnatTreeModel::staticMetaObject = {
    { &ctkXnatTreeModel::staticMetaObject, qt_meta_stringdata_QmitkXnatTreeModel.data,
      qt_meta_data_QmitkXnatTreeModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkXnatTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkXnatTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkXnatTreeModel.stringdata))
        return static_cast<void*>(const_cast< QmitkXnatTreeModel*>(this));
    return ctkXnatTreeModel::qt_metacast(_clname);
}

int QmitkXnatTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkXnatTreeModel::qt_metacall(_c, _id, _a);
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
void QmitkXnatTreeModel::ResourceDropped(const QList<mitk::DataNode*> & _t1, ctkXnatObject * _t2, const QModelIndex & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
