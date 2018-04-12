/****************************************************************************
** Meta object code from reading C++ file 'ctkErrorLogTerminalOutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkErrorLogTerminalOutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkErrorLogTerminalOutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkErrorLogTerminalOutput_t {
    QByteArrayData data[6];
    char stringdata[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkErrorLogTerminalOutput_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkErrorLogTerminalOutput_t qt_meta_stringdata_ctkErrorLogTerminalOutput = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ctkErrorLogTerminalOutput"
QT_MOC_LITERAL(1, 26, 15), // "TerminalOutputs"
QT_MOC_LITERAL(2, 42, 4), // "None"
QT_MOC_LITERAL(3, 47, 13), // "StandardError"
QT_MOC_LITERAL(4, 61, 14), // "StandardOutput"
QT_MOC_LITERAL(5, 76, 3) // "All"

    },
    "ctkErrorLogTerminalOutput\0TerminalOutputs\0"
    "None\0StandardError\0StandardOutput\0All"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkErrorLogTerminalOutput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x1,    4,   18,

 // enum data: key, value
       2, uint(ctkErrorLogTerminalOutput::None),
       3, uint(ctkErrorLogTerminalOutput::StandardError),
       4, uint(ctkErrorLogTerminalOutput::StandardOutput),
       5, uint(ctkErrorLogTerminalOutput::All),

       0        // eod
};

void ctkErrorLogTerminalOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ctkErrorLogTerminalOutput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkErrorLogTerminalOutput.data,
      qt_meta_data_ctkErrorLogTerminalOutput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkErrorLogTerminalOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkErrorLogTerminalOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkErrorLogTerminalOutput.stringdata))
        return static_cast<void*>(const_cast< ctkErrorLogTerminalOutput*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkErrorLogTerminalOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
