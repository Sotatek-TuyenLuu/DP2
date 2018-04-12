/****************************************************************************
** Meta object code from reading C++ file 'ctkPathLineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../CTK/Libs/Widgets/ctkPathLineEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkPathLineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkPathLineEdit_t {
    QByteArrayData data[54];
    char stringdata[679];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkPathLineEdit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkPathLineEdit_t qt_meta_stringdata_ctkPathLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ctkPathLineEdit"
QT_MOC_LITERAL(1, 16, 17), // "validInputChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "currentPathChanged"
QT_MOC_LITERAL(4, 54, 4), // "path"
QT_MOC_LITERAL(5, 59, 14), // "setCurrentPath"
QT_MOC_LITERAL(6, 74, 6), // "browse"
QT_MOC_LITERAL(7, 81, 15), // "retrieveHistory"
QT_MOC_LITERAL(8, 97, 23), // "addCurrentPathToHistory"
QT_MOC_LITERAL(9, 121, 19), // "setCurrentDirectory"
QT_MOC_LITERAL(10, 141, 9), // "directory"
QT_MOC_LITERAL(11, 151, 19), // "updateHasValidInput"
QT_MOC_LITERAL(12, 171, 30), // "_q_recomputeCompleterPopupSize"
QT_MOC_LITERAL(13, 202, 5), // "label"
QT_MOC_LITERAL(14, 208, 11), // "nameFilters"
QT_MOC_LITERAL(15, 220, 7), // "filters"
QT_MOC_LITERAL(16, 228, 7), // "Filters"
QT_MOC_LITERAL(17, 236, 11), // "currentPath"
QT_MOC_LITERAL(18, 248, 7), // "options"
QT_MOC_LITERAL(19, 256, 7), // "Options"
QT_MOC_LITERAL(20, 264, 10), // "settingKey"
QT_MOC_LITERAL(21, 275, 16), // "showBrowseButton"
QT_MOC_LITERAL(22, 292, 17), // "showHistoryButton"
QT_MOC_LITERAL(23, 310, 16), // "sizeAdjustPolicy"
QT_MOC_LITERAL(24, 327, 16), // "SizeAdjustPolicy"
QT_MOC_LITERAL(25, 344, 21), // "minimumContentsLength"
QT_MOC_LITERAL(26, 366, 4), // "Dirs"
QT_MOC_LITERAL(27, 371, 5), // "Files"
QT_MOC_LITERAL(28, 377, 6), // "Drives"
QT_MOC_LITERAL(29, 384, 10), // "NoSymLinks"
QT_MOC_LITERAL(30, 395, 10), // "AllEntries"
QT_MOC_LITERAL(31, 406, 8), // "TypeMask"
QT_MOC_LITERAL(32, 415, 8), // "Readable"
QT_MOC_LITERAL(33, 424, 8), // "Writable"
QT_MOC_LITERAL(34, 433, 10), // "Executable"
QT_MOC_LITERAL(35, 444, 14), // "PermissionMask"
QT_MOC_LITERAL(36, 459, 8), // "Modified"
QT_MOC_LITERAL(37, 468, 6), // "Hidden"
QT_MOC_LITERAL(38, 475, 6), // "System"
QT_MOC_LITERAL(39, 482, 10), // "AccessMask"
QT_MOC_LITERAL(40, 493, 7), // "AllDirs"
QT_MOC_LITERAL(41, 501, 13), // "CaseSensitive"
QT_MOC_LITERAL(42, 515, 14), // "NoDotAndDotDot"
QT_MOC_LITERAL(43, 530, 5), // "NoDot"
QT_MOC_LITERAL(44, 536, 8), // "NoDotDot"
QT_MOC_LITERAL(45, 545, 8), // "NoFilter"
QT_MOC_LITERAL(46, 554, 6), // "Option"
QT_MOC_LITERAL(47, 561, 12), // "ShowDirsOnly"
QT_MOC_LITERAL(48, 574, 19), // "DontResolveSymlinks"
QT_MOC_LITERAL(49, 594, 20), // "DontConfirmOverwrite"
QT_MOC_LITERAL(50, 615, 12), // "DontUseSheet"
QT_MOC_LITERAL(51, 628, 19), // "DontUseNativeDialog"
QT_MOC_LITERAL(52, 648, 8), // "ReadOnly"
QT_MOC_LITERAL(53, 657, 21) // "HideNameFilterDetails"

    },
    "ctkPathLineEdit\0validInputChanged\0\0"
    "currentPathChanged\0path\0setCurrentPath\0"
    "browse\0retrieveHistory\0addCurrentPathToHistory\0"
    "setCurrentDirectory\0directory\0"
    "updateHasValidInput\0_q_recomputeCompleterPopupSize\0"
    "label\0nameFilters\0filters\0Filters\0"
    "currentPath\0options\0Options\0settingKey\0"
    "showBrowseButton\0showHistoryButton\0"
    "sizeAdjustPolicy\0SizeAdjustPolicy\0"
    "minimumContentsLength\0Dirs\0Files\0"
    "Drives\0NoSymLinks\0AllEntries\0TypeMask\0"
    "Readable\0Writable\0Executable\0"
    "PermissionMask\0Modified\0Hidden\0System\0"
    "AccessMask\0AllDirs\0CaseSensitive\0"
    "NoDotAndDotDot\0NoDot\0NoDotDot\0NoFilter\0"
    "Option\0ShowDirsOnly\0DontResolveSymlinks\0"
    "DontConfirmOverwrite\0DontUseSheet\0"
    "DontUseNativeDialog\0ReadOnly\0"
    "HideNameFilterDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkPathLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      11,   76, // properties
       3,  109, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   65,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x09 /* Protected */,
      11,    0,   74,    2, 0x09 /* Protected */,
      12,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00095103,
      14, QMetaType::QStringList, 0x00095103,
      15, 0x80000000 | 16, 0x0009510b,
      17, QMetaType::QString, 0x00195103,
      18, 0x80000000 | 19, 0x0009510b,
      20, QMetaType::QString, 0x00095103,
      21, QMetaType::Bool, 0x00095103,
      22, QMetaType::Bool, 0x00095103,
      23, 0x80000000 | 24, 0x0009510b,
      25, QMetaType::Int, 0x00095103,
      14, QMetaType::QStringList, 0x00095103,

 // enums: name, flags, count, data
      16, 0x1,   20,  121,
      46, 0x1,    7,  161,
      19, 0x1,    7,  175,

 // enum data: key, value
      26, uint(ctkPathLineEdit::Dirs),
      27, uint(ctkPathLineEdit::Files),
      28, uint(ctkPathLineEdit::Drives),
      29, uint(ctkPathLineEdit::NoSymLinks),
      30, uint(ctkPathLineEdit::AllEntries),
      31, uint(ctkPathLineEdit::TypeMask),
      32, uint(ctkPathLineEdit::Readable),
      33, uint(ctkPathLineEdit::Writable),
      34, uint(ctkPathLineEdit::Executable),
      35, uint(ctkPathLineEdit::PermissionMask),
      36, uint(ctkPathLineEdit::Modified),
      37, uint(ctkPathLineEdit::Hidden),
      38, uint(ctkPathLineEdit::System),
      39, uint(ctkPathLineEdit::AccessMask),
      40, uint(ctkPathLineEdit::AllDirs),
      41, uint(ctkPathLineEdit::CaseSensitive),
      42, uint(ctkPathLineEdit::NoDotAndDotDot),
      43, uint(ctkPathLineEdit::NoDot),
      44, uint(ctkPathLineEdit::NoDotDot),
      45, uint(ctkPathLineEdit::NoFilter),
      47, uint(ctkPathLineEdit::ShowDirsOnly),
      48, uint(ctkPathLineEdit::DontResolveSymlinks),
      49, uint(ctkPathLineEdit::DontConfirmOverwrite),
      50, uint(ctkPathLineEdit::DontUseSheet),
      51, uint(ctkPathLineEdit::DontUseNativeDialog),
      52, uint(ctkPathLineEdit::ReadOnly),
      53, uint(ctkPathLineEdit::HideNameFilterDetails),
      47, uint(ctkPathLineEdit::ShowDirsOnly),
      48, uint(ctkPathLineEdit::DontResolveSymlinks),
      49, uint(ctkPathLineEdit::DontConfirmOverwrite),
      50, uint(ctkPathLineEdit::DontUseSheet),
      51, uint(ctkPathLineEdit::DontUseNativeDialog),
      52, uint(ctkPathLineEdit::ReadOnly),
      53, uint(ctkPathLineEdit::HideNameFilterDetails),

       0        // eod
};

void ctkPathLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkPathLineEdit *_t = static_cast<ctkPathLineEdit *>(_o);
        switch (_id) {
        case 0: _t->validInputChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->currentPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setCurrentPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->browse(); break;
        case 4: _t->retrieveHistory(); break;
        case 5: _t->addCurrentPathToHistory(); break;
        case 6: _t->setCurrentDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateHasValidInput(); break;
        case 8: _t->d_ptr->_q_recomputeCompleterPopupSize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkPathLineEdit::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkPathLineEdit::validInputChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkPathLineEdit::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkPathLineEdit::currentPathChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ctkPathLineEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkPathLineEdit.data,
      qt_meta_data_ctkPathLineEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkPathLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkPathLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkPathLineEdit.stringdata))
        return static_cast<void*>(const_cast< ctkPathLineEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkPathLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = label(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = nameFilters(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(filters()); break;
        case 3: *reinterpret_cast< QString*>(_v) = currentPath(); break;
        case 4: *reinterpret_cast<int*>(_v) = QFlag(options()); break;
        case 5: *reinterpret_cast< QString*>(_v) = settingKey(); break;
        case 6: *reinterpret_cast< bool*>(_v) = showBrowseButton(); break;
        case 7: *reinterpret_cast< bool*>(_v) = showHistoryButton(); break;
        case 8: *reinterpret_cast< SizeAdjustPolicy*>(_v) = sizeAdjustPolicy(); break;
        case 9: *reinterpret_cast< int*>(_v) = minimumContentsLength(); break;
        case 10: *reinterpret_cast< QStringList*>(_v) = nameFilters(); break;
        default: break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 1: setNameFilters(*reinterpret_cast< QStringList*>(_v)); break;
        case 2: setFilters(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 3: setCurrentPath(*reinterpret_cast< QString*>(_v)); break;
        case 4: setOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 5: setSettingKey(*reinterpret_cast< QString*>(_v)); break;
        case 6: setShowBrowseButton(*reinterpret_cast< bool*>(_v)); break;
        case 7: setShowHistoryButton(*reinterpret_cast< bool*>(_v)); break;
        case 8: setSizeAdjustPolicy(*reinterpret_cast< SizeAdjustPolicy*>(_v)); break;
        case 9: setMinimumContentsLength(*reinterpret_cast< int*>(_v)); break;
        case 10: setNameFilters(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkPathLineEdit::validInputChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkPathLineEdit::currentPathChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
