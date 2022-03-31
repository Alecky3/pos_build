/****************************************************************************
** Meta object code from reading C++ file 'startup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../POS/startup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StartUp_t {
    QByteArrayData data[22];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StartUp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StartUp_t qt_meta_stringdata_StartUp = {
    {
QT_MOC_LITERAL(0, 0, 7), // "StartUp"
QT_MOC_LITERAL(1, 8, 23), // "dbSuccessMessageChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "dbErrorMessageChanged"
QT_MOC_LITERAL(4, 55, 20), // "dbFailMessageChanged"
QT_MOC_LITERAL(5, 76, 28), // "sqliteConnectMessagesChanged"
QT_MOC_LITERAL(6, 105, 7), // "message"
QT_MOC_LITERAL(7, 113, 24), // "updateConnectedDatabases"
QT_MOC_LITERAL(8, 138, 6), // "dbName"
QT_MOC_LITERAL(9, 145, 22), // "updateDefaultDatabases"
QT_MOC_LITERAL(10, 168, 6), // "action"
QT_MOC_LITERAL(11, 175, 9), // "databases"
QT_MOC_LITERAL(12, 185, 25), // "QList<availableDatabases>"
QT_MOC_LITERAL(13, 211, 16), // "defaultDatabases"
QT_MOC_LITERAL(14, 228, 18), // "connectedDatabases"
QT_MOC_LITERAL(15, 247, 16), // "connectDatabases"
QT_MOC_LITERAL(16, 264, 13), // "sqliteConnect"
QT_MOC_LITERAL(17, 278, 10), // "parameters"
QT_MOC_LITERAL(18, 289, 6), // "signUp"
QT_MOC_LITERAL(19, 296, 12), // "mysqlConnect"
QT_MOC_LITERAL(20, 309, 14), // "mariadbConnect"
QT_MOC_LITERAL(21, 324, 16) // "posgresqlConnect"

    },
    "StartUp\0dbSuccessMessageChanged\0\0"
    "dbErrorMessageChanged\0dbFailMessageChanged\0"
    "sqliteConnectMessagesChanged\0message\0"
    "updateConnectedDatabases\0dbName\0"
    "updateDefaultDatabases\0action\0databases\0"
    "QList<availableDatabases>\0defaultDatabases\0"
    "connectedDatabases\0connectDatabases\0"
    "sqliteConnect\0parameters\0signUp\0"
    "mysqlConnect\0mariadbConnect\0"
    "posgresqlConnect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StartUp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    1,   92,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   95,    2, 0x02 /* Public */,
       9,    2,   98,    2, 0x02 /* Public */,
      11,    0,  103,    2, 0x02 /* Public */,
      13,    0,  104,    2, 0x02 /* Public */,
      14,    0,  105,    2, 0x02 /* Public */,
      15,    0,  106,    2, 0x02 /* Public */,
      16,    1,  107,    2, 0x02 /* Public */,
      18,    1,  110,    2, 0x02 /* Public */,
      19,    1,  113,    2, 0x02 /* Public */,
      20,    1,  116,    2, 0x02 /* Public */,
      21,    1,  119,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,   10,
    0x80000000 | 12,
    QMetaType::QStringList,
    0x80000000 | 12,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QStringList,   17,
    QMetaType::Bool, QMetaType::QStringList,   17,
    QMetaType::Bool, QMetaType::QStringList,   17,
    QMetaType::Bool, QMetaType::QStringList,   17,
    QMetaType::Bool, QMetaType::QStringList,   17,

       0        // eod
};

void StartUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StartUp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dbSuccessMessageChanged(); break;
        case 1: _t->dbErrorMessageChanged(); break;
        case 2: _t->dbFailMessageChanged(); break;
        case 3: _t->sqliteConnectMessagesChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateConnectedDatabases((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updateDefaultDatabases((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: { QList<availableDatabases> _r = _t->databases();
            if (_a[0]) *reinterpret_cast< QList<availableDatabases>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QStringList _r = _t->defaultDatabases();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 8: { QList<availableDatabases> _r = _t->connectedDatabases();
            if (_a[0]) *reinterpret_cast< QList<availableDatabases>*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->connectDatabases(); break;
        case 10: { bool _r = _t->sqliteConnect((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->signUp((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->mysqlConnect((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->mariadbConnect((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->posgresqlConnect((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StartUp::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StartUp::dbSuccessMessageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StartUp::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StartUp::dbErrorMessageChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StartUp::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StartUp::dbFailMessageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StartUp::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StartUp::sqliteConnectMessagesChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StartUp::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StartUp.data,
    qt_meta_data_StartUp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StartUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StartUp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StartUp.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StartUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void StartUp::dbSuccessMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void StartUp::dbErrorMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void StartUp::dbFailMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void StartUp::sqliteConnectMessagesChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
