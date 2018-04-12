/****************************************************************************
** Meta object code from reading C++ file 'QVTKWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../VTK/GUISupport/Qt/QVTKWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QVTKWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QVTKWidget_t {
    QByteArrayData data[11];
    char stringdata[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVTKWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVTKWidget_t qt_meta_stringdata_QVTKWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QVTKWidget"
QT_MOC_LITERAL(1, 11, 10), // "mouseEvent"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 36, 5), // "event"
QT_MOC_LITERAL(5, 42, 16), // "cachedImageDirty"
QT_MOC_LITERAL(6, 59, 16), // "cachedImageClean"
QT_MOC_LITERAL(7, 76, 22), // "markCachedImageAsDirty"
QT_MOC_LITERAL(8, 99, 16), // "saveImageToCache"
QT_MOC_LITERAL(9, 116, 26), // "automaticImageCacheEnabled"
QT_MOC_LITERAL(10, 143, 26) // "maxRenderRateForImageCache"

    },
    "QVTKWidget\0mouseEvent\0\0QMouseEvent*\0"
    "event\0cachedImageDirty\0cachedImageClean\0"
    "markCachedImageAsDirty\0saveImageToCache\0"
    "automaticImageCacheEnabled\0"
    "maxRenderRateForImageCache"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVTKWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   44,    2, 0x0a /* Public */,
       8,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Double, 0x00095103,

       0        // eod
};

void QVTKWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVTKWidget *_t = static_cast<QVTKWidget *>(_o);
        switch (_id) {
        case 0: _t->mouseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->cachedImageDirty(); break;
        case 2: _t->cachedImageClean(); break;
        case 3: _t->markCachedImageAsDirty(); break;
        case 4: _t->saveImageToCache(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QVTKWidget::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVTKWidget::mouseEvent)) {
                *result = 0;
            }
        }
        {
            typedef void (QVTKWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVTKWidget::cachedImageDirty)) {
                *result = 1;
            }
        }
        {
            typedef void (QVTKWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVTKWidget::cachedImageClean)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QVTKWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QVTKWidget.data,
      qt_meta_data_QVTKWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVTKWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVTKWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVTKWidget.stringdata))
        return static_cast<void*>(const_cast< QVTKWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QVTKWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isAutomaticImageCacheEnabled(); break;
        case 1: *reinterpret_cast< double*>(_v) = maxRenderRateForImageCache(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAutomaticImageCacheEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: setMaxRenderRateForImageCache(*reinterpret_cast< double*>(_v)); break;
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
void QVTKWidget::mouseEvent(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QVTKWidget::cachedImageDirty()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QVTKWidget::cachedImageClean()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
