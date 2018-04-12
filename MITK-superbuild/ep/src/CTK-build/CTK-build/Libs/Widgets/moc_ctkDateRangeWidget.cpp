/****************************************************************************
** Meta object code from reading C++ file 'ctkDateRangeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDateRangeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDateRangeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDateRangeWidget_t {
    QByteArrayData data[21];
    char stringdata[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDateRangeWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDateRangeWidget_t qt_meta_stringdata_ctkDateRangeWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ctkDateRangeWidget"
QT_MOC_LITERAL(1, 19, 20), // "startDateTimeChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "value"
QT_MOC_LITERAL(4, 47, 18), // "endDateTimeChanged"
QT_MOC_LITERAL(5, 66, 16), // "setStartDateTime"
QT_MOC_LITERAL(6, 83, 5), // "start"
QT_MOC_LITERAL(7, 89, 14), // "setEndDateTime"
QT_MOC_LITERAL(8, 104, 3), // "end"
QT_MOC_LITERAL(9, 108, 16), // "setDateTimeRange"
QT_MOC_LITERAL(10, 125, 12), // "setDateRange"
QT_MOC_LITERAL(11, 138, 10), // "setAnyDate"
QT_MOC_LITERAL(12, 149, 8), // "setToday"
QT_MOC_LITERAL(13, 158, 12), // "setYesterday"
QT_MOC_LITERAL(14, 171, 11), // "setLastWeek"
QT_MOC_LITERAL(15, 183, 12), // "setLastMonth"
QT_MOC_LITERAL(16, 196, 14), // "setSelectRange"
QT_MOC_LITERAL(17, 211, 17), // "onDateTimeChanged"
QT_MOC_LITERAL(18, 229, 13), // "startDateTime"
QT_MOC_LITERAL(19, 243, 11), // "endDateTime"
QT_MOC_LITERAL(20, 255, 11) // "displayTime"

    },
    "ctkDateRangeWidget\0startDateTimeChanged\0"
    "\0value\0endDateTimeChanged\0setStartDateTime\0"
    "start\0setEndDateTime\0end\0setDateTimeRange\0"
    "setDateRange\0setAnyDate\0setToday\0"
    "setYesterday\0setLastWeek\0setLastMonth\0"
    "setSelectRange\0onDateTimeChanged\0"
    "startDateTime\0endDateTime\0displayTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDateRangeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       3,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   85,    2, 0x0a /* Public */,
       7,    1,   88,    2, 0x0a /* Public */,
       9,    2,   91,    2, 0x0a /* Public */,
      10,    2,   96,    2, 0x0a /* Public */,
      11,    0,  101,    2, 0x0a /* Public */,
      12,    0,  102,    2, 0x0a /* Public */,
      13,    0,  103,    2, 0x0a /* Public */,
      14,    0,  104,    2, 0x0a /* Public */,
      15,    0,  105,    2, 0x0a /* Public */,
      16,    0,  106,    2, 0x0a /* Public */,
      17,    0,  107,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void, QMetaType::QDateTime,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QDateTime,    6,
    QMetaType::Void, QMetaType::QDateTime,    8,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QDateTime,    6,    8,
    QMetaType::Void, QMetaType::QDate, QMetaType::QDate,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::QDateTime, 0x00495103,
      19, QMetaType::QDateTime, 0x00495103,
      20, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       1,
       0,

       0        // eod
};

void ctkDateRangeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDateRangeWidget *_t = static_cast<ctkDateRangeWidget *>(_o);
        switch (_id) {
        case 0: _t->startDateTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 1: _t->endDateTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 2: _t->setStartDateTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 3: _t->setEndDateTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 4: _t->setDateTimeRange((*reinterpret_cast< QDateTime(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2]))); break;
        case 5: _t->setDateRange((*reinterpret_cast< QDate(*)>(_a[1])),(*reinterpret_cast< QDate(*)>(_a[2]))); break;
        case 6: _t->setAnyDate(); break;
        case 7: _t->setToday(); break;
        case 8: _t->setYesterday(); break;
        case 9: _t->setLastWeek(); break;
        case 10: _t->setLastMonth(); break;
        case 11: _t->setSelectRange(); break;
        case 12: _t->onDateTimeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDateRangeWidget::*_t)(const QDateTime & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDateRangeWidget::startDateTimeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkDateRangeWidget::*_t)(const QDateTime & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDateRangeWidget::endDateTimeChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ctkDateRangeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkDateRangeWidget.data,
      qt_meta_data_ctkDateRangeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDateRangeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDateRangeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDateRangeWidget.stringdata))
        return static_cast<void*>(const_cast< ctkDateRangeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkDateRangeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDateTime*>(_v) = startDateTime(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = endDateTime(); break;
        case 2: *reinterpret_cast< bool*>(_v) = displayTime(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStartDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 1: setEndDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 2: setDisplayTime(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkDateRangeWidget::startDateTimeChanged(const QDateTime & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDateRangeWidget::endDateTimeChanged(const QDateTime & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
