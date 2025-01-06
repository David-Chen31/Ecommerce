/****************************************************************************
** Meta object code from reading C++ file 'root.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../root.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'root.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Root_t {
    QByteArrayData data[9];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Root_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Root_t qt_meta_stringdata_Root = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Root"
QT_MOC_LITERAL(1, 5, 21), // "on_homeButton_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 26), // "on_SkipToPromotion_clicked"
QT_MOC_LITERAL(4, 55, 36), // "on_SkipToFindGoodCommodities_..."
QT_MOC_LITERAL(5, 92, 29), // "on_SkipToShoppingCart_clicked"
QT_MOC_LITERAL(6, 122, 32), // "on_SkipToPurchaseHistory_clicked"
QT_MOC_LITERAL(7, 155, 24), // "on_RefreshButton_clicked"
QT_MOC_LITERAL(8, 180, 24) // "on_SkipToMessage_clicked"

    },
    "Root\0on_homeButton_clicked\0\0"
    "on_SkipToPromotion_clicked\0"
    "on_SkipToFindGoodCommodities_clicked\0"
    "on_SkipToShoppingCart_clicked\0"
    "on_SkipToPurchaseHistory_clicked\0"
    "on_RefreshButton_clicked\0"
    "on_SkipToMessage_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Root[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Root::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Root *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_homeButton_clicked(); break;
        case 1: _t->on_SkipToPromotion_clicked(); break;
        case 2: _t->on_SkipToFindGoodCommodities_clicked(); break;
        case 3: _t->on_SkipToShoppingCart_clicked(); break;
        case 4: _t->on_SkipToPurchaseHistory_clicked(); break;
        case 5: _t->on_RefreshButton_clicked(); break;
        case 6: _t->on_SkipToMessage_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Root::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Root.data,
    qt_meta_data_Root,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Root::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Root::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Root.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Root::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
