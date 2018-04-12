/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMItemView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMItemView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMItemView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMItemView_t {
    QByteArrayData data[19];
    char stringdata[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMItemView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMItemView_t qt_meta_stringdata_ctkDICOMItemView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ctkDICOMItemView"
QT_MOC_LITERAL(1, 17, 16), // "requestNextImage"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "requestPreviousImage"
QT_MOC_LITERAL(4, 56, 14), // "imageDisplayed"
QT_MOC_LITERAL(5, 71, 7), // "imageID"
QT_MOC_LITERAL(6, 79, 5), // "count"
QT_MOC_LITERAL(7, 85, 8), // "addImage"
QT_MOC_LITERAL(8, 94, 5), // "image"
QT_MOC_LITERAL(9, 100, 11), // "DicomImage&"
QT_MOC_LITERAL(10, 112, 8), // "dcmImage"
QT_MOC_LITERAL(11, 121, 16), // "defaultIntensity"
QT_MOC_LITERAL(12, 138, 15), // "onModelSelected"
QT_MOC_LITERAL(13, 154, 5), // "index"
QT_MOC_LITERAL(14, 160, 12), // "displayImage"
QT_MOC_LITERAL(15, 173, 10), // "imageIndex"
QT_MOC_LITERAL(16, 184, 6), // "update"
QT_MOC_LITERAL(17, 191, 11), // "zoomChanged"
QT_MOC_LITERAL(18, 203, 11) // "sizeChanged"

    },
    "ctkDICOMItemView\0requestNextImage\0\0"
    "requestPreviousImage\0imageDisplayed\0"
    "imageID\0count\0addImage\0image\0DicomImage&\0"
    "dcmImage\0defaultIntensity\0onModelSelected\0"
    "index\0displayImage\0imageIndex\0update\0"
    "zoomChanged\0sizeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMItemView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    2,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   76,    2, 0x0a /* Public */,
       7,    2,   79,    2, 0x0a /* Public */,
       7,    1,   84,    2, 0x2a /* Public | MethodCloned */,
      12,    1,   87,    2, 0x0a /* Public */,
      14,    1,   90,    2, 0x0a /* Public */,
      16,    2,   93,    2, 0x0a /* Public */,
      16,    1,   98,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  101,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    8,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,   11,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   17,   18,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,

       0        // eod
};

void ctkDICOMItemView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMItemView *_t = static_cast<ctkDICOMItemView *>(_o);
        switch (_id) {
        case 0: _t->requestNextImage(); break;
        case 1: _t->requestPreviousImage(); break;
        case 2: _t->imageDisplayed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->addImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 4: _t->addImage((*reinterpret_cast< DicomImage(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->addImage((*reinterpret_cast< DicomImage(*)>(_a[1]))); break;
        case 6: _t->onModelSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->displayImage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->update((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->update((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDICOMItemView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMItemView::requestNextImage)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkDICOMItemView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMItemView::requestPreviousImage)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkDICOMItemView::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMItemView::imageDisplayed)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ctkDICOMItemView::staticMetaObject = {
    { &ctkQImageView::staticMetaObject, qt_meta_stringdata_ctkDICOMItemView.data,
      qt_meta_data_ctkDICOMItemView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMItemView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMItemView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMItemView.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMItemView*>(this));
    return ctkQImageView::qt_metacast(_clname);
}

int ctkDICOMItemView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkQImageView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ctkDICOMItemView::requestNextImage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ctkDICOMItemView::requestPreviousImage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ctkDICOMItemView::imageDisplayed(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
