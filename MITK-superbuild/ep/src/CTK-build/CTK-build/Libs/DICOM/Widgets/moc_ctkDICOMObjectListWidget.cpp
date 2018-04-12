/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMObjectListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMObjectListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMObjectListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMObjectListWidget_t {
    QByteArrayData data[11];
    char stringdata[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMObjectListWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMObjectListWidget_t qt_meta_stringdata_ctkDICOMObjectListWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ctkDICOMObjectListWidget"
QT_MOC_LITERAL(1, 25, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "setCurrentFile"
QT_MOC_LITERAL(4, 55, 11), // "newFileName"
QT_MOC_LITERAL(5, 67, 11), // "setFileList"
QT_MOC_LITERAL(6, 79, 8), // "fileList"
QT_MOC_LITERAL(7, 88, 13), // "openLookupUrl"
QT_MOC_LITERAL(8, 102, 12), // "updateWidget"
QT_MOC_LITERAL(9, 115, 8), // "copyPath"
QT_MOC_LITERAL(10, 124, 11) // "currentFile"

    },
    "ctkDICOMObjectListWidget\0doubleClicked\0"
    "\0setCurrentFile\0newFileName\0setFileList\0"
    "fileList\0openLookupUrl\0updateWidget\0"
    "copyPath\0currentFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMObjectListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       7,    1,   53,    2, 0x09 /* Protected */,
       8,    0,   56,    2, 0x09 /* Protected */,
       9,    0,   57,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00095103,
       6, QMetaType::QStringList, 0x00095103,

       0        // eod
};

void ctkDICOMObjectListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMObjectListWidget *_t = static_cast<ctkDICOMObjectListWidget *>(_o);
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->setCurrentFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setFileList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->openLookupUrl((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->updateWidget(); break;
        case 5: _t->copyPath(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDICOMObjectListWidget::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMObjectListWidget::doubleClicked)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ctkDICOMObjectListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkDICOMObjectListWidget.data,
      qt_meta_data_ctkDICOMObjectListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMObjectListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMObjectListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMObjectListWidget.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMObjectListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkDICOMObjectListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = currentFile(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = fileList(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentFile(*reinterpret_cast< QString*>(_v)); break;
        case 1: setFileList(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkDICOMObjectListWidget::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
