/****************************************************************************
** Meta object code from reading C++ file 'QmitkMorphologicalOperationsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/SegmentationUtilities/MorphologicalOperations/QmitkMorphologicalOperationsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkMorphologicalOperationsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmitkMorphologicalOperationsWidget_t {
    QByteArrayData data[12];
    char stringdata[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmitkMorphologicalOperationsWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmitkMorphologicalOperationsWidget_t qt_meta_stringdata_QmitkMorphologicalOperationsWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QmitkMorphologicalOperationsW..."
QT_MOC_LITERAL(1, 35, 22), // "OnClosingButtonClicked"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 22), // "OnOpeningButtonClicked"
QT_MOC_LITERAL(4, 82, 25), // "OnDilatationButtonClicked"
QT_MOC_LITERAL(5, 108, 22), // "OnErosionButtonClicked"
QT_MOC_LITERAL(6, 131, 24), // "OnFillHolesButtonClicked"
QT_MOC_LITERAL(7, 156, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(8, 175, 5), // "index"
QT_MOC_LITERAL(9, 181, 21), // "const mitk::DataNode*"
QT_MOC_LITERAL(10, 203, 9), // "selection"
QT_MOC_LITERAL(11, 213, 21) // "OnRadioButtonsClicked"

    },
    "QmitkMorphologicalOperationsWidget\0"
    "OnClosingButtonClicked\0\0OnOpeningButtonClicked\0"
    "OnDilatationButtonClicked\0"
    "OnErosionButtonClicked\0OnFillHolesButtonClicked\0"
    "OnSelectionChanged\0index\0const mitk::DataNode*\0"
    "selection\0OnRadioButtonsClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmitkMorphologicalOperationsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    2,   54,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 9,    8,   10,
    QMetaType::Void,

       0        // eod
};

void QmitkMorphologicalOperationsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmitkMorphologicalOperationsWidget *_t = static_cast<QmitkMorphologicalOperationsWidget *>(_o);
        switch (_id) {
        case 0: _t->OnClosingButtonClicked(); break;
        case 1: _t->OnOpeningButtonClicked(); break;
        case 2: _t->OnDilatationButtonClicked(); break;
        case 3: _t->OnErosionButtonClicked(); break;
        case 4: _t->OnFillHolesButtonClicked(); break;
        case 5: _t->OnSelectionChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const mitk::DataNode*(*)>(_a[2]))); break;
        case 6: _t->OnRadioButtonsClicked(); break;
        default: ;
        }
    }
}

const QMetaObject QmitkMorphologicalOperationsWidget::staticMetaObject = {
    { &QmitkSegmentationUtilityWidget::staticMetaObject, qt_meta_stringdata_QmitkMorphologicalOperationsWidget.data,
      qt_meta_data_QmitkMorphologicalOperationsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmitkMorphologicalOperationsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmitkMorphologicalOperationsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmitkMorphologicalOperationsWidget.stringdata))
        return static_cast<void*>(const_cast< QmitkMorphologicalOperationsWidget*>(this));
    return QmitkSegmentationUtilityWidget::qt_metacast(_clname);
}

int QmitkMorphologicalOperationsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkSegmentationUtilityWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
