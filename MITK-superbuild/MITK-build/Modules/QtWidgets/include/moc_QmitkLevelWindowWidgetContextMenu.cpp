/****************************************************************************
** Meta object code from reading C++ file 'QmitkLevelWindowWidgetContextMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/QtWidgets/include/QmitkLevelWindowWidgetContextMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkLevelWindowWidgetContextMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkLevelWindowWidgetContextMenu_t {
    QByteArrayData data[15];
    char stringdata[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkLevelWindowWidgetContextMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkLevelWindowWidgetContextMenu_t qt_meta_stringdata_QmitkLevelWindowWidgetContextMenu = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QmitkLevelWindowWidgetContext..."
QT_MOC_LITERAL(1, 34, 9), // "setPreset"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 8), // "QAction*"
QT_MOC_LITERAL(4, 54, 12), // "presetAction"
QT_MOC_LITERAL(5, 67, 23), // "useOptimizedLevelWindow"
QT_MOC_LITERAL(6, 91, 25), // "useAllGreyvaluesFromImage"
QT_MOC_LITERAL(7, 117, 8), // "setFixed"
QT_MOC_LITERAL(8, 126, 9), // "addPreset"
QT_MOC_LITERAL(9, 136, 21), // "setDefaultLevelWindow"
QT_MOC_LITERAL(10, 158, 20), // "setDefaultScaleRange"
QT_MOC_LITERAL(11, 179, 16), // "changeScaleRange"
QT_MOC_LITERAL(12, 196, 8), // "setImage"
QT_MOC_LITERAL(13, 205, 11), // "imageAction"
QT_MOC_LITERAL(14, 217, 16) // "setMaximumWindow"

    },
    "QmitkLevelWindowWidgetContextMenu\0"
    "setPreset\0\0QAction*\0presetAction\0"
    "useOptimizedLevelWindow\0"
    "useAllGreyvaluesFromImage\0setFixed\0"
    "addPreset\0setDefaultLevelWindow\0"
    "setDefaultScaleRange\0changeScaleRange\0"
    "setImage\0imageAction\0setMaximumWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkLevelWindowWidgetContextMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x09 /* Protected */,
       5,    0,   67,    2, 0x09 /* Protected */,
       6,    0,   68,    2, 0x09 /* Protected */,
       7,    0,   69,    2, 0x09 /* Protected */,
       8,    0,   70,    2, 0x09 /* Protected */,
       9,    0,   71,    2, 0x09 /* Protected */,
      10,    0,   72,    2, 0x09 /* Protected */,
      11,    0,   73,    2, 0x09 /* Protected */,
      12,    1,   74,    2, 0x09 /* Protected */,
      14,    0,   77,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   13,
    QMetaType::Void,

       0        // eod
};

void QmitkLevelWindowWidgetContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkLevelWindowWidgetContextMenu *_t = static_cast<QmitkLevelWindowWidgetContextMenu *>(_o);
        switch (_id) {
        case 0: _t->setPreset((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->useOptimizedLevelWindow(); break;
        case 2: _t->useAllGreyvaluesFromImage(); break;
        case 3: _t->setFixed(); break;
        case 4: _t->addPreset(); break;
        case 5: _t->setDefaultLevelWindow(); break;
        case 6: _t->setDefaultScaleRange(); break;
        case 7: _t->changeScaleRange(); break;
        case 8: _t->setImage((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: _t->setMaximumWindow(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkLevelWindowWidgetContextMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkLevelWindowWidgetContextMenu.data,
      qt_meta_data_QmitkLevelWindowWidgetContextMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkLevelWindowWidgetContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkLevelWindowWidgetContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkLevelWindowWidgetContextMenu.stringdata))
        return static_cast<void*>(const_cast< QmitkLevelWindowWidgetContextMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkLevelWindowWidgetContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
