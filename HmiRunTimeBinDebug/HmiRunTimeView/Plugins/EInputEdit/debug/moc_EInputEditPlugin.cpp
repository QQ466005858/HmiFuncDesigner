/****************************************************************************
** Meta object code from reading C++ file 'EInputEditPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../HmiRunTime/HmiRunTimeView/Plugins/EInputEdit/EInputEditPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EInputEditPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EInputEditPlugin_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EInputEditPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EInputEditPlugin_t qt_meta_stringdata_EInputEditPlugin = {
    {
QT_MOC_LITERAL(0, 0, 16) // "EInputEditPlugin"

    },
    "EInputEditPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EInputEditPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void EInputEditPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EInputEditPlugin::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_EInputEditPlugin.data,
    qt_meta_data_EInputEditPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EInputEditPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EInputEditPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EInputEditPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IHmiRunTimeViewPlugin"))
        return static_cast< IHmiRunTimeViewPlugin*>(this);
    if (!strcmp(_clname, "HmiRunTime.HmiRunTimeView.PluginInterface"))
        return static_cast< IHmiRunTimeViewPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int EInputEditPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x29,  'H',  'm',  'i',  'R',  'u', 
    'n',  'T',  'i',  'm',  'e',  '.',  'H',  'm', 
    'i',  'R',  'u',  'n',  'T',  'i',  'm',  'e', 
    'V',  'i',  'e',  'w',  '.',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x70,  'E',  'I',  'n',  'p',  'u',  't', 
    'E',  'd',  'i',  't',  'P',  'l',  'u',  'g', 
    'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x64,  'K',  'e',  'y',  's',  0x80, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(EInputEditPlugin, EInputEditPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
