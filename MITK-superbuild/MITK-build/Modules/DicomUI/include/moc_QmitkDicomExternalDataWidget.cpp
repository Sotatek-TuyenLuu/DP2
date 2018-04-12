/****************************************************************************
** Meta object code from reading C++ file 'QmitkDicomExternalDataWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MITK/Modules/DicomUI/include/QmitkDicomExternalDataWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkDicomExternalDataWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkDicomExternalDataWidget_t {
    QByteArrayData data[11];
    char stringdata[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkDicomExternalDataWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkDicomExternalDataWidget_t qt_meta_stringdata_QmitkDicomExternalDataWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QmitkDicomExternalDataWidget"
QT_MOC_LITERAL(1, 29, 22), // "SignalStartDicomImport"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 24), // "SignalDicomToDataManager"
QT_MOC_LITERAL(4, 78, 23), // "OnDownloadButtonClicked"
QT_MOC_LITERAL(5, 102, 19), // "OnViewButtonClicked"
QT_MOC_LITERAL(6, 122, 18), // "OnStartDicomImport"
QT_MOC_LITERAL(7, 141, 16), // "OnFinishedImport"
QT_MOC_LITERAL(8, 158, 24), // "OnSeriesSelectionChanged"
QT_MOC_LITERAL(9, 183, 1), // "s"
QT_MOC_LITERAL(10, 185, 15) // "OnScanDirectory"

    },
    "QmitkDicomExternalDataWidget\0"
    "SignalStartDicomImport\0\0"
    "SignalDicomToDataManager\0"
    "OnDownloadButtonClicked\0OnViewButtonClicked\0"
    "OnStartDicomImport\0OnFinishedImport\0"
    "OnSeriesSelectionChanged\0s\0OnScanDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkDicomExternalDataWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   60,    2, 0x0a /* Public */,
       5,    0,   61,    2, 0x0a /* Public */,
       6,    1,   62,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QVariantHash,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    9,
    QMetaType::Void,

       0        // eod
};

void QmitkDicomExternalDataWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkDicomExternalDataWidget *_t = static_cast<QmitkDicomExternalDataWidget *>(_o);
        switch (_id) {
        case 0: _t->SignalStartDicomImport((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->SignalDicomToDataManager((*reinterpret_cast< QHash<QString,QVariant>(*)>(_a[1]))); break;
        case 2: _t->OnDownloadButtonClicked(); break;
        case 3: _t->OnViewButtonClicked(); break;
        case 4: _t->OnStartDicomImport((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->OnFinishedImport(); break;
        case 6: _t->OnSeriesSelectionChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 7: _t->OnScanDirectory(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmitkDicomExternalDataWidget::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkDicomExternalDataWidget::SignalStartDicomImport)) {
                *result = 0;
            }
        }
        {
            typedef void (QmitkDicomExternalDataWidget::*_t)(QHash<QString,QVariant> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmitkDicomExternalDataWidget::SignalDicomToDataManager)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QmitkDicomExternalDataWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmitkDicomExternalDataWidget.data,
      qt_meta_data_QmitkDicomExternalDataWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkDicomExternalDataWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkDicomExternalDataWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkDicomExternalDataWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkDicomExternalDataWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmitkDicomExternalDataWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QmitkDicomExternalDataWidget::SignalStartDicomImport(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmitkDicomExternalDataWidget::SignalDicomToDataManager(QHash<QString,QVariant> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
