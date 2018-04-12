/****************************************************************************
** Meta object code from reading C++ file 'ctkSettingsPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkSettingsPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkSettingsPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkSettingsPanel_t {
    QByteArrayData data[24];
    char stringdata[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkSettingsPanel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkSettingsPanel_t qt_meta_stringdata_ctkSettingsPanel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ctkSettingsPanel"
QT_MOC_LITERAL(1, 17, 14), // "settingChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "key"
QT_MOC_LITERAL(4, 37, 5), // "value"
QT_MOC_LITERAL(5, 43, 13), // "applySettings"
QT_MOC_LITERAL(6, 57, 13), // "resetSettings"
QT_MOC_LITERAL(7, 71, 22), // "restoreDefaultSettings"
QT_MOC_LITERAL(8, 94, 14), // "reloadSettings"
QT_MOC_LITERAL(9, 109, 13), // "updateSetting"
QT_MOC_LITERAL(10, 123, 16), // "registerProperty"
QT_MOC_LITERAL(11, 140, 10), // "settingKey"
QT_MOC_LITERAL(12, 151, 6), // "object"
QT_MOC_LITERAL(13, 158, 14), // "objectProperty"
QT_MOC_LITERAL(14, 173, 14), // "propertySignal"
QT_MOC_LITERAL(15, 188, 12), // "settingLabel"
QT_MOC_LITERAL(16, 201, 14), // "SettingOptions"
QT_MOC_LITERAL(17, 216, 7), // "options"
QT_MOC_LITERAL(18, 224, 10), // "QSettings*"
QT_MOC_LITERAL(19, 235, 8), // "settings"
QT_MOC_LITERAL(20, 244, 13), // "SettingOption"
QT_MOC_LITERAL(21, 258, 10), // "OptionNone"
QT_MOC_LITERAL(22, 269, 20), // "OptionRequireRestart"
QT_MOC_LITERAL(23, 290, 14) // "OptionAll_Mask"

    },
    "ctkSettingsPanel\0settingChanged\0\0key\0"
    "value\0applySettings\0resetSettings\0"
    "restoreDefaultSettings\0reloadSettings\0"
    "updateSetting\0registerProperty\0"
    "settingKey\0object\0objectProperty\0"
    "propertySignal\0settingLabel\0SettingOptions\0"
    "options\0QSettings*\0settings\0SettingOption\0"
    "OptionNone\0OptionRequireRestart\0"
    "OptionAll_Mask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkSettingsPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,  124, // properties
       2,  127, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   69,    2, 0x0a /* Public */,
       6,    0,   70,    2, 0x0a /* Public */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    1,   73,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      10,    7,   76,    2, 0x02 /* Public */,
      10,    6,   91,    2, 0x22 /* Public | MethodCloned */,
      10,    5,  104,    2, 0x22 /* Public | MethodCloned */,
      10,    4,  115,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QByteArray, QMetaType::QString, 0x80000000 | 16, 0x80000000 | 18,   11,   12,   13,   14,   15,   17,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QByteArray, QMetaType::QString, 0x80000000 | 16,   11,   12,   13,   14,   15,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QByteArray, QMetaType::QString,   11,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QByteArray,   11,   12,   13,   14,

 // properties: name, type, flags
      19, 0x80000000 | 18, 0x0009510b,

 // enums: name, flags, count, data
      20, 0x0,    3,  135,
      16, 0x1,    3,  141,

 // enum data: key, value
      21, uint(ctkSettingsPanel::OptionNone),
      22, uint(ctkSettingsPanel::OptionRequireRestart),
      23, uint(ctkSettingsPanel::OptionAll_Mask),
      21, uint(ctkSettingsPanel::OptionNone),
      22, uint(ctkSettingsPanel::OptionRequireRestart),
      23, uint(ctkSettingsPanel::OptionAll_Mask),

       0        // eod
};

void ctkSettingsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkSettingsPanel *_t = static_cast<ctkSettingsPanel *>(_o);
        switch (_id) {
        case 0: _t->settingChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->applySettings(); break;
        case 2: _t->resetSettings(); break;
        case 3: _t->restoreDefaultSettings(); break;
        case 4: _t->reloadSettings(); break;
        case 5: _t->updateSetting((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->registerProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< SettingOptions(*)>(_a[6])),(*reinterpret_cast< QSettings*(*)>(_a[7]))); break;
        case 7: _t->registerProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< SettingOptions(*)>(_a[6]))); break;
        case 8: _t->registerProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 9: _t->registerProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkSettingsPanel::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkSettingsPanel::settingChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ctkSettingsPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkSettingsPanel.data,
      qt_meta_data_ctkSettingsPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkSettingsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkSettingsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkSettingsPanel.stringdata))
        return static_cast<void*>(const_cast< ctkSettingsPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkSettingsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSettings**>(_v) = settings(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSettings(*reinterpret_cast< QSettings**>(_v)); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkSettingsPanel::settingChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
