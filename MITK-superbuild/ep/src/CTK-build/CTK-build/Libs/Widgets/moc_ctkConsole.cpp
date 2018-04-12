/****************************************************************************
** Meta object code from reading C++ file 'ctkConsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkConsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkConsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkConsole_t {
    QByteArrayData data[36];
    char stringdata[475];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkConsole_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkConsole_t qt_meta_stringdata_ctkConsole = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ctkConsole"
QT_MOC_LITERAL(1, 11, 14), // "aboutToExecute"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "executed"
QT_MOC_LITERAL(4, 36, 5), // "clear"
QT_MOC_LITERAL(5, 42, 5), // "reset"
QT_MOC_LITERAL(6, 48, 4), // "exec"
QT_MOC_LITERAL(7, 53, 7), // "runFile"
QT_MOC_LITERAL(8, 61, 8), // "filePath"
QT_MOC_LITERAL(9, 70, 9), // "printHelp"
QT_MOC_LITERAL(10, 80, 11), // "promptColor"
QT_MOC_LITERAL(11, 92, 15), // "outputTextColor"
QT_MOC_LITERAL(12, 108, 14), // "errorTextColor"
QT_MOC_LITERAL(13, 123, 14), // "stdinTextColor"
QT_MOC_LITERAL(14, 138, 16), // "commandTextColor"
QT_MOC_LITERAL(15, 155, 16), // "welcomeTextColor"
QT_MOC_LITERAL(16, 172, 15), // "backgroundColor"
QT_MOC_LITERAL(17, 188, 3), // "ps1"
QT_MOC_LITERAL(18, 192, 3), // "ps2"
QT_MOC_LITERAL(19, 196, 11), // "editorHints"
QT_MOC_LITERAL(20, 208, 11), // "EditorHints"
QT_MOC_LITERAL(21, 220, 15), // "scrollBarPolicy"
QT_MOC_LITERAL(22, 236, 19), // "Qt::ScrollBarPolicy"
QT_MOC_LITERAL(23, 256, 18), // "completerShortcuts"
QT_MOC_LITERAL(24, 275, 19), // "QList<QKeySequence>"
QT_MOC_LITERAL(25, 295, 14), // "runFileOptions"
QT_MOC_LITERAL(26, 310, 14), // "RunFileOptions"
QT_MOC_LITERAL(27, 325, 10), // "EditorHint"
QT_MOC_LITERAL(28, 336, 7), // "NoHints"
QT_MOC_LITERAL(29, 344, 20), // "AutomaticIndentation"
QT_MOC_LITERAL(30, 365, 20), // "RemoveTrailingSpaces"
QT_MOC_LITERAL(31, 386, 21), // "SplitCopiedTextByLine"
QT_MOC_LITERAL(32, 408, 13), // "RunFileOption"
QT_MOC_LITERAL(33, 422, 22), // "NoRunFileUserInterface"
QT_MOC_LITERAL(34, 445, 13), // "RunFileButton"
QT_MOC_LITERAL(35, 459, 15) // "RunFileShortcut"

    },
    "ctkConsole\0aboutToExecute\0\0executed\0"
    "clear\0reset\0exec\0runFile\0filePath\0"
    "printHelp\0promptColor\0outputTextColor\0"
    "errorTextColor\0stdinTextColor\0"
    "commandTextColor\0welcomeTextColor\0"
    "backgroundColor\0ps1\0ps2\0editorHints\0"
    "EditorHints\0scrollBarPolicy\0"
    "Qt::ScrollBarPolicy\0completerShortcuts\0"
    "QList<QKeySequence>\0runFileOptions\0"
    "RunFileOptions\0EditorHint\0NoHints\0"
    "AutomaticIndentation\0RemoveTrailingSpaces\0"
    "SplitCopiedTextByLine\0RunFileOption\0"
    "NoRunFileUserInterface\0RunFileButton\0"
    "RunFileShortcut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
      13,   70, // properties
       4,  109, // enums/sets
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
       7,    1,   65,    2, 0x0a /* Public */,
       7,    0,   68,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QColor, 0x00095103,
      11, QMetaType::QColor, 0x00095103,
      12, QMetaType::QColor, 0x00095103,
      13, QMetaType::QColor, 0x00095103,
      14, QMetaType::QColor, 0x00095103,
      15, QMetaType::QColor, 0x00095103,
      16, QMetaType::QColor, 0x00095103,
      17, QMetaType::QString, 0x00095103,
      18, QMetaType::QString, 0x00095103,
      19, 0x80000000 | 20, 0x0009510b,
      21, 0x80000000 | 22, 0x0009510b,
      23, 0x80000000 | 24, 0x0009510b,
      25, 0x80000000 | 26, 0x0009510b,

 // enums: name, flags, count, data
      27, 0x1,    4,  125,
      20, 0x1,    4,  133,
      32, 0x1,    3,  141,
      26, 0x1,    3,  147,

 // enum data: key, value
      28, uint(ctkConsole::NoHints),
      29, uint(ctkConsole::AutomaticIndentation),
      30, uint(ctkConsole::RemoveTrailingSpaces),
      31, uint(ctkConsole::SplitCopiedTextByLine),
      28, uint(ctkConsole::NoHints),
      29, uint(ctkConsole::AutomaticIndentation),
      30, uint(ctkConsole::RemoveTrailingSpaces),
      31, uint(ctkConsole::SplitCopiedTextByLine),
      33, uint(ctkConsole::NoRunFileUserInterface),
      34, uint(ctkConsole::RunFileButton),
      35, uint(ctkConsole::RunFileShortcut),
      33, uint(ctkConsole::NoRunFileUserInterface),
      34, uint(ctkConsole::RunFileButton),
      35, uint(ctkConsole::RunFileShortcut),

       0        // eod
};

void ctkConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkConsole *_t = static_cast<ctkConsole *>(_o);
        switch (_id) {
        case 0: _t->aboutToExecute((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->executed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->reset(); break;
        case 4: _t->exec((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->runFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->runFile(); break;
        case 7: _t->printHelp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkConsole::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkConsole::aboutToExecute)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkConsole::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkConsole::executed)) {
                *result = 1;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QKeySequence> >(); break;
        }
    }

}

const QMetaObject ctkConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ctkConsole.data,
      qt_meta_data_ctkConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkConsole.stringdata))
        return static_cast<void*>(const_cast< ctkConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int ctkConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = promptColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = outputTextColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = errorTextColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = stdinTextColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = commandTextColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = welcomeTextColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = backgroundColor(); break;
        case 7: *reinterpret_cast< QString*>(_v) = ps1(); break;
        case 8: *reinterpret_cast< QString*>(_v) = ps2(); break;
        case 9: *reinterpret_cast<int*>(_v) = QFlag(editorHints()); break;
        case 10: *reinterpret_cast< Qt::ScrollBarPolicy*>(_v) = scrollBarPolicy(); break;
        case 11: *reinterpret_cast< QList<QKeySequence>*>(_v) = completerShortcuts(); break;
        case 12: *reinterpret_cast<int*>(_v) = QFlag(runFileOptions()); break;
        default: break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPromptColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setOutputTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setErrorTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setStdinTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: setCommandTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: setWelcomeTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: setPs1(*reinterpret_cast< QString*>(_v)); break;
        case 8: setPs2(*reinterpret_cast< QString*>(_v)); break;
        case 9: setEditorHints(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 10: setScrollBarPolicy(*reinterpret_cast< Qt::ScrollBarPolicy*>(_v)); break;
        case 11: setCompleterShortcuts(*reinterpret_cast< QList<QKeySequence>*>(_v)); break;
        case 12: setRunFileOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkConsole::aboutToExecute(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkConsole::executed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
