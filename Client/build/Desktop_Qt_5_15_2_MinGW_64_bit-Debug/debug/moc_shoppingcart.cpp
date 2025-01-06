/****************************************************************************
** Meta object code from reading C++ file 'shoppingcart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../shoppingcart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shoppingcart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShoppingCart_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShoppingCart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShoppingCart_t qt_meta_stringdata_ShoppingCart = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ShoppingCart"
QT_MOC_LITERAL(1, 13, 22), // "onCheckAllStateChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "isCheck"
QT_MOC_LITERAL(4, 45, 19), // "updateSelectedItems"
QT_MOC_LITERAL(5, 65, 10), // "isSelected"
QT_MOC_LITERAL(6, 76, 5) // "price"

    },
    "ShoppingCart\0onCheckAllStateChanged\0"
    "\0isCheck\0updateSelectedItems\0isSelected\0"
    "price"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShoppingCart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    2,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double,    5,    6,

       0        // eod
};

void ShoppingCart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShoppingCart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCheckAllStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateSelectedItems((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ShoppingCart::staticMetaObject = { {
    QMetaObject::SuperData::link<FunctionZone::staticMetaObject>(),
    qt_meta_stringdata_ShoppingCart.data,
    qt_meta_data_ShoppingCart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShoppingCart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShoppingCart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShoppingCart.stringdata0))
        return static_cast<void*>(this);
    return FunctionZone::qt_metacast(_clname);
}

int ShoppingCart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FunctionZone::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
