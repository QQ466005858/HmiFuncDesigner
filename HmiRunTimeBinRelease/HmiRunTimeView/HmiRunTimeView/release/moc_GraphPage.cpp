/****************************************************************************
** Meta object code from reading C++ file 'GraphPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../HmiRunTime/HmiRunTimeView/HmiRunTimeView/GraphPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphPage_t {
    QByteArrayData data[13];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphPage_t qt_meta_stringdata_GraphPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GraphPage"
QT_MOC_LITERAL(1, 10, 15), // "newElementAdded"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 19), // "changeGraphPageName"
QT_MOC_LITERAL(4, 47, 15), // "elementsDeleted"
QT_MOC_LITERAL(5, 63, 16), // "elementIdChanged"
QT_MOC_LITERAL(6, 80, 23), // "signalShowAddProperties"
QT_MOC_LITERAL(7, 104, 16), // "refreshGraphPage"
QT_MOC_LITERAL(8, 121, 20), // "onExecScriptFunction"
QT_MOC_LITERAL(9, 142, 10), // "szFuncList"
QT_MOC_LITERAL(10, 153, 12), // "szMatchEvent"
QT_MOC_LITERAL(11, 166, 16), // "onExecScriptText"
QT_MOC_LITERAL(12, 183, 12) // "szScriptText"

    },
    "GraphPage\0newElementAdded\0\0"
    "changeGraphPageName\0elementsDeleted\0"
    "elementIdChanged\0signalShowAddProperties\0"
    "refreshGraphPage\0onExecScriptFunction\0"
    "szFuncList\0szMatchEvent\0onExecScriptText\0"
    "szScriptText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x08 /* Private */,
       8,    2,   60,    2, 0x08 /* Private */,
      11,    2,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   10,

       0        // eod
};

void GraphPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newElementAdded(); break;
        case 1: _t->changeGraphPageName(); break;
        case 2: _t->elementsDeleted(); break;
        case 3: _t->elementIdChanged(); break;
        case 4: _t->signalShowAddProperties(); break;
        case 5: _t->refreshGraphPage(); break;
        case 6: _t->onExecScriptFunction((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->onExecScriptText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphPage::newElementAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GraphPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphPage::changeGraphPageName)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GraphPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphPage::elementsDeleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GraphPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphPage::elementIdChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GraphPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphPage::signalShowAddProperties)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphPage::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_GraphPage.data,
    qt_meta_data_GraphPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GraphPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void GraphPage::newElementAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GraphPage::changeGraphPageName()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GraphPage::elementsDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GraphPage::elementIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GraphPage::signalShowAddProperties()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
