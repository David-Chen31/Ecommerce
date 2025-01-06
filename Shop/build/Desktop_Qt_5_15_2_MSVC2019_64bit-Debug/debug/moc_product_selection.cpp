/****************************************************************************
** Meta object code from reading C++ file 'product_selection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../ContentWidget/Promotion/product_selection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'product_selection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProductSelection_t {
    QByteArrayData data[7];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProductSelection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProductSelection_t qt_meta_stringdata_ProductSelection = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ProductSelection"
QT_MOC_LITERAL(1, 17, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 17), // "onProductSelected"
QT_MOC_LITERAL(4, 60, 21), // "ProductCardPromotion*"
QT_MOC_LITERAL(5, 82, 4), // "card"
QT_MOC_LITERAL(6, 87, 33) // "on_confirmSelectionButton_cli..."

    },
    "ProductSelection\0on_searchButton_clicked\0"
    "\0onProductSelected\0ProductCardPromotion*\0"
    "card\0on_confirmSelectionButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProductSelection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

       0        // eod
};

void ProductSelection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProductSelection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_searchButton_clicked(); break;
        case 1: _t->onProductSelected((*reinterpret_cast< ProductCardPromotion*(*)>(_a[1]))); break;
        case 2: _t->on_confirmSelectionButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProductSelection::staticMetaObject = { {
    QMetaObject::SuperData::link<ContentWidget::staticMetaObject>(),
    qt_meta_stringdata_ProductSelection.data,
    qt_meta_data_ProductSelection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProductSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProductSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProductSelection.stringdata0))
        return static_cast<void*>(this);
    return ContentWidget::qt_metacast(_clname);
}

int ProductSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ContentWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
