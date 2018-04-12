/****************************************************************************
** Meta object code from reading C++ file 'QmitkExtWorkbenchWindowAdvisorHack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkExtWorkbenchWindowAdvisorHack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkExtWorkbenchWindowAdvisorHack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkExtWorkbenchWindowAdvisorHack_t {
    QByteArrayData data[15];
    char stringdata[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkExtWorkbenchWindowAdvisorHack_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkExtWorkbenchWindowAdvisorHack_t qt_meta_stringdata_QmitkExtWorkbenchWindowAdvisorHack = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QmitkExtWorkbenchWindowAdviso..."
QT_MOC_LITERAL(1, 35, 6), // "onUndo"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "onRedo"
QT_MOC_LITERAL(4, 50, 16), // "onImageNavigator"
QT_MOC_LITERAL(5, 67, 15), // "onViewNavigator"
QT_MOC_LITERAL(6, 83, 17), // "onEditPreferences"
QT_MOC_LITERAL(7, 101, 6), // "onQuit"
QT_MOC_LITERAL(8, 108, 18), // "onResetPerspective"
QT_MOC_LITERAL(9, 127, 18), // "onClosePerspective"
QT_MOC_LITERAL(10, 146, 11), // "onNewWindow"
QT_MOC_LITERAL(11, 158, 7), // "onIntro"
QT_MOC_LITERAL(12, 166, 6), // "onHelp"
QT_MOC_LITERAL(13, 173, 25), // "onHelpOpenHelpPerspective"
QT_MOC_LITERAL(14, 199, 7) // "onAbout"

    },
    "QmitkExtWorkbenchWindowAdvisorHack\0"
    "onUndo\0\0onRedo\0onImageNavigator\0"
    "onViewNavigator\0onEditPreferences\0"
    "onQuit\0onResetPerspective\0onClosePerspective\0"
    "onNewWindow\0onIntro\0onHelp\0"
    "onHelpOpenHelpPerspective\0onAbout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkExtWorkbenchWindowAdvisorHack[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmitkExtWorkbenchWindowAdvisorHack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkExtWorkbenchWindowAdvisorHack *_t = static_cast<QmitkExtWorkbenchWindowAdvisorHack *>(_o);
        switch (_id) {
        case 0: _t->onUndo(); break;
        case 1: _t->onRedo(); break;
        case 2: _t->onImageNavigator(); break;
        case 3: _t->onViewNavigator(); break;
        case 4: _t->onEditPreferences(); break;
        case 5: _t->onQuit(); break;
        case 6: _t->onResetPerspective(); break;
        case 7: _t->onClosePerspective(); break;
        case 8: _t->onNewWindow(); break;
        case 9: _t->onIntro(); break;
        case 10: _t->onHelp(); break;
        case 11: _t->onHelpOpenHelpPerspective(); break;
        case 12: _t->onAbout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QmitkExtWorkbenchWindowAdvisorHack::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmitkExtWorkbenchWindowAdvisorHack.data,
      qt_meta_data_QmitkExtWorkbenchWindowAdvisorHack,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkExtWorkbenchWindowAdvisorHack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkExtWorkbenchWindowAdvisorHack::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkExtWorkbenchWindowAdvisorHack.stringdata))
        return static_cast<void*>(const_cast< QmitkExtWorkbenchWindowAdvisorHack*>(this));
    return QObject::qt_metacast(_clname);
}

int QmitkExtWorkbenchWindowAdvisorHack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
