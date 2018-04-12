/****************************************************************************
** Meta object code from reading C++ file 'QmitkDicomLocalStorageWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/DicomUI/include/QmitkDicomLocalStorageWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkDicomLocalStorageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkDicomLocalStorageWidget_t {
    QByteArrayData data[10];
    char stringdata[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkDicomLocalStorageWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkDicomLocalStorageWidget_t qt_meta_stringdata_QmitkDicomLocalStorageWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QmitkDicomLocalStorageWidget"
QT_MOC_LITERAL(1, 29, 20), // "SignalFinishedImport"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 24), // "SignalDicomToDataManager"
QT_MOC_LITERAL(4, 76, 18), // "SignalCancelImport"
QT_MOC_LITERAL(5, 95, 19), // "OnViewButtonClicked"
QT_MOC_LITERAL(6, 115, 21), // "OnDeleteButtonClicked"
QT_MOC_LITERAL(7, 137, 18), // "OnStartDicomImport"
QT_MOC_LITERAL(8, 156, 9), // "dicomData"
QT_MOC_LITERAL(9, 166, 24) // "OnSeriesSelectionChanged"

    },
    "QmitkDicomLocalStorageWidget\0"
    "SignalFinishedImport\0\0SignalDicomToDataManager\0"
    "SignalCancelImport\0OnViewButtonClicked\0"
    "OnDeleteButtonClicked\0OnStartDicomImport\0"
    "dicomData\0OnSeriesSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkDicomLocalStorageWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       4,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   59,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantHash,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QStringList,    2,

       0        // eod
};

void QmitkDicomLocalStorageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkDicomLocalStorageWidget *_t = static_cast<QmitkDicomLocalStorageWidget *>(_o);
        switch (_id) {
        case 0: _t->SignalFinishedImport(); break;
        case 1: _t->SignalDicomToDataManager((*reinterpret_cast< QHash<QString,QVariant>(*)>(_a[1]))); break;
        case 2: _t->SignalCancelImport(); break;
        case 3: _t->OnViewButtonClicked(); break;
        case 4: _t->OnDeleteButtonClicked(); break;
        case 5: _t->OnStartDicomImport((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->OnStartDicomImport((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 7: _t->OnSeriesSelectionChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkDicomLocalStorageWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkDicomLocalStorageWidget::SignalFinishedImport)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkDicomLocalStorageWidget::*_t)(QHash<QString,QVariant> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkDicomLocalStorageWidget::SignalDicomToDataManager)) {
                *result = 1;
            }
        }
        {
            typedef void (QmitkDicomLocalStorageWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkDicomLocalStorageWidget::SignalCancelImport)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QmitkDicomLocalStorageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkDicomLocalStorageWidget.data,
      qt_meta_data_QmitkDicomLocalStorageWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkDicomLocalStorageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkDicomLocalStorageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkDicomLocalStorageWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkDicomLocalStorageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkDicomLocalStorageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QmitkDicomLocalStorageWidget::SignalFinishedImport()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmitkDicomLocalStorageWidget::SignalDicomToDataManager(QHash<QString,QVariant> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmitkDicomLocalStorageWidget::SignalCancelImport()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
