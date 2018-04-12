/****************************************************************************
** Meta object code from reading C++ file 'ctkDICOMDatabase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDICOMDatabase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDICOMDatabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ctkDICOMDatabase_t {
    QByteArrayData data[82];
    char stringdata[1120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDICOMDatabase_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDICOMDatabase_t qt_meta_stringdata_ctkDICOMDatabase = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ctkDICOMDatabase"
QT_MOC_LITERAL(1, 17, 12), // "patientAdded"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "studyAdded"
QT_MOC_LITERAL(4, 42, 11), // "seriesAdded"
QT_MOC_LITERAL(5, 54, 13), // "instanceAdded"
QT_MOC_LITERAL(6, 68, 15), // "databaseChanged"
QT_MOC_LITERAL(7, 84, 19), // "schemaUpdateStarted"
QT_MOC_LITERAL(8, 104, 20), // "schemaUpdateProgress"
QT_MOC_LITERAL(9, 125, 13), // "schemaUpdated"
QT_MOC_LITERAL(10, 139, 12), // "openDatabase"
QT_MOC_LITERAL(11, 152, 12), // "databaseFile"
QT_MOC_LITERAL(12, 165, 14), // "connectionName"
QT_MOC_LITERAL(13, 180, 13), // "closeDatabase"
QT_MOC_LITERAL(14, 194, 18), // "initializeDatabase"
QT_MOC_LITERAL(15, 213, 11), // "const char*"
QT_MOC_LITERAL(16, 225, 10), // "schemaFile"
QT_MOC_LITERAL(17, 236, 12), // "updateSchema"
QT_MOC_LITERAL(18, 249, 20), // "updateSchemaIfNeeded"
QT_MOC_LITERAL(19, 270, 13), // "schemaVersion"
QT_MOC_LITERAL(20, 284, 19), // "schemaVersionLoaded"
QT_MOC_LITERAL(21, 304, 8), // "patients"
QT_MOC_LITERAL(22, 313, 17), // "studiesForPatient"
QT_MOC_LITERAL(23, 331, 10), // "patientUID"
QT_MOC_LITERAL(24, 342, 14), // "seriesForStudy"
QT_MOC_LITERAL(25, 357, 8), // "studyUID"
QT_MOC_LITERAL(26, 366, 14), // "studyForSeries"
QT_MOC_LITERAL(27, 381, 9), // "seriesUID"
QT_MOC_LITERAL(28, 391, 15), // "patientForStudy"
QT_MOC_LITERAL(29, 407, 14), // "filesForSeries"
QT_MOC_LITERAL(30, 422, 19), // "descriptionsForFile"
QT_MOC_LITERAL(31, 442, 22), // "QHash<QString,QString>"
QT_MOC_LITERAL(32, 465, 8), // "fileName"
QT_MOC_LITERAL(33, 474, 20), // "descriptionForSeries"
QT_MOC_LITERAL(34, 495, 19), // "descriptionForStudy"
QT_MOC_LITERAL(35, 515, 14), // "nameForPatient"
QT_MOC_LITERAL(36, 530, 15), // "fileForInstance"
QT_MOC_LITERAL(37, 546, 14), // "sopInstanceUID"
QT_MOC_LITERAL(38, 561, 13), // "seriesForFile"
QT_MOC_LITERAL(39, 575, 15), // "instanceForFile"
QT_MOC_LITERAL(40, 591, 25), // "insertDateTimeForInstance"
QT_MOC_LITERAL(41, 617, 8), // "allFiles"
QT_MOC_LITERAL(42, 626, 18), // "loadInstanceHeader"
QT_MOC_LITERAL(43, 645, 14), // "loadFileHeader"
QT_MOC_LITERAL(44, 660, 10), // "headerKeys"
QT_MOC_LITERAL(45, 671, 11), // "headerValue"
QT_MOC_LITERAL(46, 683, 3), // "key"
QT_MOC_LITERAL(47, 687, 6), // "insert"
QT_MOC_LITERAL(48, 694, 12), // "ctkDICOMItem"
QT_MOC_LITERAL(49, 707, 10), // "ctkDataset"
QT_MOC_LITERAL(50, 718, 9), // "storeFile"
QT_MOC_LITERAL(51, 728, 17), // "generateThumbnail"
QT_MOC_LITERAL(52, 746, 8), // "filePath"
QT_MOC_LITERAL(53, 755, 15), // "createHierarchy"
QT_MOC_LITERAL(54, 771, 24), // "destinationDirectoryName"
QT_MOC_LITERAL(55, 796, 12), // "removeSeries"
QT_MOC_LITERAL(56, 809, 17), // "seriesInstanceUID"
QT_MOC_LITERAL(57, 827, 11), // "removeStudy"
QT_MOC_LITERAL(58, 839, 16), // "studyInstanceUID"
QT_MOC_LITERAL(59, 856, 13), // "removePatient"
QT_MOC_LITERAL(60, 870, 9), // "patientID"
QT_MOC_LITERAL(61, 880, 13), // "instanceValue"
QT_MOC_LITERAL(62, 894, 3), // "tag"
QT_MOC_LITERAL(63, 898, 5), // "group"
QT_MOC_LITERAL(64, 904, 7), // "element"
QT_MOC_LITERAL(65, 912, 9), // "fileValue"
QT_MOC_LITERAL(66, 922, 17), // "tagToGroupElement"
QT_MOC_LITERAL(67, 940, 15), // "unsigned short&"
QT_MOC_LITERAL(68, 956, 17), // "groupElementToTag"
QT_MOC_LITERAL(69, 974, 14), // "tagCacheExists"
QT_MOC_LITERAL(70, 989, 18), // "initializeTagCache"
QT_MOC_LITERAL(71, 1008, 9), // "cachedTag"
QT_MOC_LITERAL(72, 1018, 8), // "cacheTag"
QT_MOC_LITERAL(73, 1027, 5), // "value"
QT_MOC_LITERAL(74, 1033, 9), // "cacheTags"
QT_MOC_LITERAL(75, 1043, 15), // "sopInstanceUIDs"
QT_MOC_LITERAL(76, 1059, 4), // "tags"
QT_MOC_LITERAL(77, 1064, 6), // "values"
QT_MOC_LITERAL(78, 1071, 6), // "isOpen"
QT_MOC_LITERAL(79, 1078, 9), // "lastError"
QT_MOC_LITERAL(80, 1088, 16), // "databaseFilename"
QT_MOC_LITERAL(81, 1105, 14) // "tagsToPrecache"

    },
    "ctkDICOMDatabase\0patientAdded\0\0"
    "studyAdded\0seriesAdded\0instanceAdded\0"
    "databaseChanged\0schemaUpdateStarted\0"
    "schemaUpdateProgress\0schemaUpdated\0"
    "openDatabase\0databaseFile\0connectionName\0"
    "closeDatabase\0initializeDatabase\0"
    "const char*\0schemaFile\0updateSchema\0"
    "updateSchemaIfNeeded\0schemaVersion\0"
    "schemaVersionLoaded\0patients\0"
    "studiesForPatient\0patientUID\0"
    "seriesForStudy\0studyUID\0studyForSeries\0"
    "seriesUID\0patientForStudy\0filesForSeries\0"
    "descriptionsForFile\0QHash<QString,QString>\0"
    "fileName\0descriptionForSeries\0"
    "descriptionForStudy\0nameForPatient\0"
    "fileForInstance\0sopInstanceUID\0"
    "seriesForFile\0instanceForFile\0"
    "insertDateTimeForInstance\0allFiles\0"
    "loadInstanceHeader\0loadFileHeader\0"
    "headerKeys\0headerValue\0key\0insert\0"
    "ctkDICOMItem\0ctkDataset\0storeFile\0"
    "generateThumbnail\0filePath\0createHierarchy\0"
    "destinationDirectoryName\0removeSeries\0"
    "seriesInstanceUID\0removeStudy\0"
    "studyInstanceUID\0removePatient\0patientID\0"
    "instanceValue\0tag\0group\0element\0"
    "fileValue\0tagToGroupElement\0unsigned short&\0"
    "groupElementToTag\0tagCacheExists\0"
    "initializeTagCache\0cachedTag\0cacheTag\0"
    "value\0cacheTags\0sopInstanceUIDs\0tags\0"
    "values\0isOpen\0lastError\0databaseFilename\0"
    "tagsToPrecache"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDICOMDatabase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      59,   14, // methods
       4,  520, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  309,    2, 0x06 /* Public */,
       3,    1,  318,    2, 0x06 /* Public */,
       4,    1,  321,    2, 0x06 /* Public */,
       5,    1,  324,    2, 0x06 /* Public */,
       6,    0,  327,    2, 0x06 /* Public */,
       7,    1,  328,    2, 0x06 /* Public */,
       8,    1,  331,    2, 0x06 /* Public */,
       8,    1,  334,    2, 0x06 /* Public */,
       9,    0,  337,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    2,  338,    2, 0x02 /* Public */,
      10,    1,  343,    2, 0x22 /* Public | MethodCloned */,
      13,    0,  346,    2, 0x02 /* Public */,
      14,    1,  347,    2, 0x02 /* Public */,
      14,    0,  350,    2, 0x22 /* Public | MethodCloned */,
      17,    1,  351,    2, 0x02 /* Public */,
      17,    0,  354,    2, 0x22 /* Public | MethodCloned */,
      18,    1,  355,    2, 0x02 /* Public */,
      18,    0,  358,    2, 0x22 /* Public | MethodCloned */,
      19,    0,  359,    2, 0x02 /* Public */,
      20,    0,  360,    2, 0x02 /* Public */,
      21,    0,  361,    2, 0x02 /* Public */,
      22,    1,  362,    2, 0x02 /* Public */,
      24,    1,  365,    2, 0x02 /* Public */,
      26,    1,  368,    2, 0x02 /* Public */,
      28,    1,  371,    2, 0x02 /* Public */,
      29,    1,  374,    2, 0x02 /* Public */,
      30,    1,  377,    2, 0x02 /* Public */,
      33,    1,  380,    2, 0x02 /* Public */,
      34,    1,  383,    2, 0x02 /* Public */,
      35,    1,  386,    2, 0x02 /* Public */,
      36,    1,  389,    2, 0x02 /* Public */,
      38,    1,  392,    2, 0x02 /* Public */,
      39,    1,  395,    2, 0x02 /* Public */,
      40,    1,  398,    2, 0x02 /* Public */,
      41,    0,  401,    2, 0x02 /* Public */,
      42,    1,  402,    2, 0x02 /* Public */,
      43,    1,  405,    2, 0x02 /* Public */,
      44,    0,  408,    2, 0x02 /* Public */,
      45,    1,  409,    2, 0x02 /* Public */,
      47,    3,  412,    2, 0x02 /* Public */,
      47,    5,  419,    2, 0x02 /* Public */,
      47,    4,  430,    2, 0x22 /* Public | MethodCloned */,
      47,    3,  439,    2, 0x22 /* Public | MethodCloned */,
      47,    2,  446,    2, 0x22 /* Public | MethodCloned */,
      47,    1,  451,    2, 0x22 /* Public | MethodCloned */,
      55,    1,  454,    2, 0x02 /* Public */,
      57,    1,  457,    2, 0x02 /* Public */,
      59,    1,  460,    2, 0x02 /* Public */,
      61,    2,  463,    2, 0x02 /* Public */,
      61,    3,  468,    2, 0x02 /* Public */,
      65,    2,  475,    2, 0x02 /* Public */,
      65,    3,  480,    2, 0x02 /* Public */,
      66,    3,  487,    2, 0x02 /* Public */,
      68,    2,  494,    2, 0x02 /* Public */,
      69,    0,  499,    2, 0x02 /* Public */,
      70,    0,  500,    2, 0x02 /* Public */,
      71,    2,  501,    2, 0x02 /* Public */,
      72,    3,  506,    2, 0x02 /* Public */,
      74,    3,  513,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 15,   16,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 15,   16,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 15,   16,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::QStringList, QMetaType::QString,   23,
    QMetaType::QStringList, QMetaType::QString,   25,
    QMetaType::QString, QMetaType::QString,   27,
    QMetaType::QString, QMetaType::QString,   25,
    QMetaType::QStringList, QMetaType::QString,   27,
    0x80000000 | 31, QMetaType::QString,   32,
    QMetaType::QString, QMetaType::QString,   27,
    QMetaType::QString, QMetaType::QString,   25,
    QMetaType::QString, QMetaType::QString,   23,
    QMetaType::QString, QMetaType::QString,   37,
    QMetaType::QString, QMetaType::QString,   32,
    QMetaType::QString, QMetaType::QString,   32,
    QMetaType::QDateTime, QMetaType::QString,   32,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::QStringList,
    QMetaType::QString, QMetaType::QString,   46,
    QMetaType::Void, 0x80000000 | 48, QMetaType::Bool, QMetaType::Bool,   49,   50,   51,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   52,   50,   51,   53,   54,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   52,   50,   51,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   52,   50,   51,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   52,   50,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Bool, QMetaType::QString,   56,
    QMetaType::Bool, QMetaType::QString,   58,
    QMetaType::Bool, QMetaType::QString,   60,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   37,   62,
    QMetaType::QString, QMetaType::QString, QMetaType::UShort, QMetaType::UShort,   37,   63,   64,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   32,   62,
    QMetaType::QString, QMetaType::QString, QMetaType::UShort, QMetaType::UShort,   32,   63,   64,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 67, 0x80000000 | 67,   62,   63,   64,
    QMetaType::QString, QMetaType::UShort, QMetaType::UShort,   63,   64,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   37,   62,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,   37,   62,   73,
    QMetaType::Bool, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QStringList,   75,   76,   77,

 // properties: name, type, flags
      78, QMetaType::Bool, 0x00095001,
      79, QMetaType::QString, 0x00095001,
      80, QMetaType::QString, 0x00095001,
      81, QMetaType::QStringList, 0x00095103,

       0        // eod
};

void ctkDICOMDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkDICOMDatabase *_t = static_cast<ctkDICOMDatabase *>(_o);
        switch (_id) {
        case 0: _t->patientAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->studyAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->seriesAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->instanceAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->databaseChanged(); break;
        case 5: _t->schemaUpdateStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->schemaUpdateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->schemaUpdateProgress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->schemaUpdated(); break;
        case 9: _t->openDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->openDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->closeDatabase(); break;
        case 12: { bool _r = _t->initializeDatabase((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->initializeDatabase();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->updateSchema((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->updateSchema();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->updateSchemaIfNeeded((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->updateSchemaIfNeeded();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->schemaVersion();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QString _r = _t->schemaVersionLoaded();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: { QStringList _r = _t->patients();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 21: { QStringList _r = _t->studiesForPatient((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 22: { QStringList _r = _t->seriesForStudy((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->studyForSeries((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { QString _r = _t->patientForStudy((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: { QStringList _r = _t->filesForSeries((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 26: { QHash<QString,QString> _r = _t->descriptionsForFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHash<QString,QString>*>(_a[0]) = _r; }  break;
        case 27: { QString _r = _t->descriptionForSeries((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 28: { QString _r = _t->descriptionForStudy((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 29: { QString _r = _t->nameForPatient((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 30: { QString _r = _t->fileForInstance((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->seriesForFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 32: { QString _r = _t->instanceForFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 33: { QDateTime _r = _t->insertDateTimeForInstance((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 34: { QStringList _r = _t->allFiles();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 35: _t->loadInstanceHeader((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->loadFileHeader((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: { QStringList _r = _t->headerKeys();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 38: { QString _r = _t->headerValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 39: _t->insert((*reinterpret_cast< const ctkDICOMItem(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 40: _t->insert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 41: _t->insert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 42: _t->insert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 43: _t->insert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 44: _t->insert((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: { bool _r = _t->removeSeries((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->removeStudy((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->removePatient((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { QString _r = _t->instanceValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 49: { QString _r = _t->instanceValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const unsigned short(*)>(_a[2])),(*reinterpret_cast< const unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 50: { QString _r = _t->fileValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 51: { QString _r = _t->fileValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const unsigned short(*)>(_a[2])),(*reinterpret_cast< const unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->tagToGroupElement((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: { QString _r = _t->groupElementToTag((*reinterpret_cast< const unsigned short(*)>(_a[1])),(*reinterpret_cast< const unsigned short(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 54: { bool _r = _t->tagCacheExists();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 55: { bool _r = _t->initializeTagCache();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: { QString _r = _t->cachedTag((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 57: { bool _r = _t->cacheTag((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 58: { bool _r = _t->cacheTags((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ctkDICOMDatabase::*_t)(int , QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMDatabase::patientAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (ctkDICOMDatabase::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMDatabase::studyAdded)) {
                *result = 1;
            }
        }
        {
            typedef void (ctkDICOMDatabase::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMDatabase::seriesAdded)) {
                *result = 2;
            }
        }
        {
            typedef void (ctkDICOMDatabase::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMDatabase::instanceAdded)) {
                *result = 3;
            }
        }
        {
            typedef void (ctkDICOMDatabase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMDatabase::databaseChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (ctkDICOMDatabase::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMDatabase::schemaUpdateStarted)) {
                *result = 5;
            }
        }
        {
            typedef void (ctkDICOMDatabase::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMDatabase::schemaUpdateProgress)) {
                *result = 6;
            }
        }
        {
            typedef void (ctkDICOMDatabase::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMDatabase::schemaUpdateProgress)) {
                *result = 7;
            }
        }
        {
            typedef void (ctkDICOMDatabase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ctkDICOMDatabase::schemaUpdated)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject ctkDICOMDatabase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ctkDICOMDatabase.data,
      qt_meta_data_ctkDICOMDatabase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ctkDICOMDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDICOMDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDICOMDatabase.stringdata))
        return static_cast<void*>(const_cast< ctkDICOMDatabase*>(this));
    return QObject::qt_metacast(_clname);
}

int ctkDICOMDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 59)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 59;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isOpen(); break;
        case 1: *reinterpret_cast< QString*>(_v) = lastError(); break;
        case 2: *reinterpret_cast< QString*>(_v) = databaseFilename(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = tagsToPrecache(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: setTagsToPrecache(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkDICOMDatabase::patientAdded(int _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDICOMDatabase::studyAdded(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkDICOMDatabase::seriesAdded(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkDICOMDatabase::instanceAdded(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkDICOMDatabase::databaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void ctkDICOMDatabase::schemaUpdateStarted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ctkDICOMDatabase::schemaUpdateProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ctkDICOMDatabase::schemaUpdateProgress(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ctkDICOMDatabase::schemaUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
