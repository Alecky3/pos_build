/****************************************************************************
** Meta object code from reading C++ file 'postablemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../POS/postablemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'postablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PosTableModel_t {
    QByteArrayData data[27];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PosTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PosTableModel_t qt_meta_stringdata_PosTableModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PosTableModel"
QT_MOC_LITERAL(1, 14, 19), // "currentTableChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "totalsChanged"
QT_MOC_LITERAL(4, 49, 15), // "rowCountChanged"
QT_MOC_LITERAL(5, 65, 15), // "creatingReceipt"
QT_MOC_LITERAL(6, 81, 23), // "finishedCreatingReceipt"
QT_MOC_LITERAL(7, 105, 16), // "finishedPrinting"
QT_MOC_LITERAL(8, 122, 20), // "setModelCurrentTable"
QT_MOC_LITERAL(9, 143, 19), // "updateColumnHeaders"
QT_MOC_LITERAL(10, 163, 9), // "newRecord"
QT_MOC_LITERAL(11, 173, 12), // "removeRecord"
QT_MOC_LITERAL(12, 186, 3), // "row"
QT_MOC_LITERAL(13, 190, 12), // "updateRecord"
QT_MOC_LITERAL(14, 203, 6), // "column"
QT_MOC_LITERAL(15, 210, 5), // "value"
QT_MOC_LITERAL(16, 216, 19), // "getCurrentImagePath"
QT_MOC_LITERAL(17, 236, 10), // "setNewData"
QT_MOC_LITERAL(18, 247, 4), // "data"
QT_MOC_LITERAL(19, 252, 15), // "insertNewRecord"
QT_MOC_LITERAL(20, 268, 4), // "code"
QT_MOC_LITERAL(21, 273, 11), // "receiptData"
QT_MOC_LITERAL(22, 285, 12), // "printReceipt"
QT_MOC_LITERAL(23, 298, 7), // "addSale"
QT_MOC_LITERAL(24, 306, 18), // "updateCurrentTable"
QT_MOC_LITERAL(25, 325, 12), // "currentTable"
QT_MOC_LITERAL(26, 338, 6) // "totals"

    },
    "PosTableModel\0currentTableChanged\0\0"
    "totalsChanged\0rowCountChanged\0"
    "creatingReceipt\0finishedCreatingReceipt\0"
    "finishedPrinting\0setModelCurrentTable\0"
    "updateColumnHeaders\0newRecord\0"
    "removeRecord\0row\0updateRecord\0column\0"
    "value\0getCurrentImagePath\0setNewData\0"
    "data\0insertNewRecord\0code\0receiptData\0"
    "printReceipt\0addSale\0updateCurrentTable\0"
    "currentTable\0totals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PosTableModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       2,  162, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    0,  115,    2, 0x06 /* Public */,
       4,    0,  116,    2, 0x06 /* Public */,
       5,    0,  117,    2, 0x06 /* Public */,
       6,    0,  118,    2, 0x06 /* Public */,
       7,    0,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  120,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,  121,    2, 0x02 /* Public */,
      10,    0,  122,    2, 0x02 /* Public */,
      11,    1,  123,    2, 0x02 /* Public */,
      13,    3,  126,    2, 0x02 /* Public */,
      16,    1,  133,    2, 0x02 /* Public */,
      17,    3,  136,    2, 0x02 /* Public */,
      17,    2,  143,    2, 0x22 /* Public | MethodCloned */,
      19,    3,  148,    2, 0x02 /* Public */,
      19,    1,  155,    2, 0x02 /* Public */,
      21,    0,  158,    2, 0x02 /* Public */,
      22,    0,  159,    2, 0x02 /* Public */,
      23,    0,  160,    2, 0x02 /* Public */,
      24,    0,  161,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QVariant,   12,   14,   15,
    QMetaType::QString, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QVariant,   12,   14,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QVariant,   12,   14,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      25, QMetaType::QString, 0x00495103,
      26, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void PosTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PosTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentTableChanged(); break;
        case 1: _t->totalsChanged(); break;
        case 2: _t->rowCountChanged(); break;
        case 3: _t->creatingReceipt(); break;
        case 4: _t->finishedCreatingReceipt(); break;
        case 5: _t->finishedPrinting(); break;
        case 6: _t->setModelCurrentTable(); break;
        case 7: _t->updateColumnHeaders(); break;
        case 8: _t->newRecord(); break;
        case 9: _t->removeRecord((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateRecord((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 11: { QString _r = _t->getCurrentImagePath((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setNewData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 13: _t->setNewData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->insertNewRecord((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 15: _t->insertNewRecord((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: { QString _r = _t->receiptData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->printReceipt(); break;
        case 18: _t->addSale(); break;
        case 19: _t->updateCurrentTable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PosTableModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PosTableModel::currentTableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PosTableModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PosTableModel::totalsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PosTableModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PosTableModel::rowCountChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PosTableModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PosTableModel::creatingReceipt)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PosTableModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PosTableModel::finishedCreatingReceipt)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PosTableModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PosTableModel::finishedPrinting)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PosTableModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentTable(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->totals(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PosTableModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentTable(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PosTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSqlTableModel::staticMetaObject>(),
    qt_meta_stringdata_PosTableModel.data,
    qt_meta_data_PosTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PosTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PosTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PosTableModel.stringdata0))
        return static_cast<void*>(this);
    return QSqlTableModel::qt_metacast(_clname);
}

int PosTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PosTableModel::currentTableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PosTableModel::totalsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PosTableModel::rowCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PosTableModel::creatingReceipt()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PosTableModel::finishedCreatingReceipt()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PosTableModel::finishedPrinting()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
