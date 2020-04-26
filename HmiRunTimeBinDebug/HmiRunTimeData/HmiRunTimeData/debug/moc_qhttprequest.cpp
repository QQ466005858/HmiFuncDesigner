/****************************************************************************
** Meta object code from reading C++ file 'qhttprequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../HmiRunTime/HttpServer/libhttp/qhttprequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttprequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QHttpRequest_t {
    QByteArrayData data[41];
    char stringdata0[435];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHttpRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHttpRequest_t qt_meta_stringdata_QHttpRequest = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QHttpRequest"
QT_MOC_LITERAL(1, 13, 4), // "data"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "end"
QT_MOC_LITERAL(4, 23, 10), // "appendBody"
QT_MOC_LITERAL(5, 34, 4), // "body"
QT_MOC_LITERAL(6, 39, 7), // "headers"
QT_MOC_LITERAL(7, 47, 10), // "HeaderHash"
QT_MOC_LITERAL(8, 58, 13), // "remoteAddress"
QT_MOC_LITERAL(9, 72, 10), // "remotePort"
QT_MOC_LITERAL(10, 83, 6), // "method"
QT_MOC_LITERAL(11, 90, 3), // "url"
QT_MOC_LITERAL(12, 94, 4), // "path"
QT_MOC_LITERAL(13, 99, 11), // "httpVersion"
QT_MOC_LITERAL(14, 111, 10), // "HttpMethod"
QT_MOC_LITERAL(15, 122, 11), // "HTTP_DELETE"
QT_MOC_LITERAL(16, 134, 8), // "HTTP_GET"
QT_MOC_LITERAL(17, 143, 9), // "HTTP_HEAD"
QT_MOC_LITERAL(18, 153, 9), // "HTTP_POST"
QT_MOC_LITERAL(19, 163, 8), // "HTTP_PUT"
QT_MOC_LITERAL(20, 172, 12), // "HTTP_CONNECT"
QT_MOC_LITERAL(21, 185, 12), // "HTTP_OPTIONS"
QT_MOC_LITERAL(22, 198, 10), // "HTTP_TRACE"
QT_MOC_LITERAL(23, 209, 9), // "HTTP_COPY"
QT_MOC_LITERAL(24, 219, 9), // "HTTP_LOCK"
QT_MOC_LITERAL(25, 229, 10), // "HTTP_MKCOL"
QT_MOC_LITERAL(26, 240, 9), // "HTTP_MOVE"
QT_MOC_LITERAL(27, 250, 13), // "HTTP_PROPFIND"
QT_MOC_LITERAL(28, 264, 14), // "HTTP_PROPPATCH"
QT_MOC_LITERAL(29, 279, 11), // "HTTP_SEARCH"
QT_MOC_LITERAL(30, 291, 11), // "HTTP_UNLOCK"
QT_MOC_LITERAL(31, 303, 11), // "HTTP_REPORT"
QT_MOC_LITERAL(32, 315, 15), // "HTTP_MKACTIVITY"
QT_MOC_LITERAL(33, 331, 13), // "HTTP_CHECKOUT"
QT_MOC_LITERAL(34, 345, 10), // "HTTP_MERGE"
QT_MOC_LITERAL(35, 356, 12), // "HTTP_MSEARCH"
QT_MOC_LITERAL(36, 369, 11), // "HTTP_NOTIFY"
QT_MOC_LITERAL(37, 381, 14), // "HTTP_SUBSCRIBE"
QT_MOC_LITERAL(38, 396, 16), // "HTTP_UNSUBSCRIBE"
QT_MOC_LITERAL(39, 413, 10), // "HTTP_PATCH"
QT_MOC_LITERAL(40, 424, 10) // "HTTP_PURGE"

    },
    "QHttpRequest\0data\0\0end\0appendBody\0"
    "body\0headers\0HeaderHash\0remoteAddress\0"
    "remotePort\0method\0url\0path\0httpVersion\0"
    "HttpMethod\0HTTP_DELETE\0HTTP_GET\0"
    "HTTP_HEAD\0HTTP_POST\0HTTP_PUT\0HTTP_CONNECT\0"
    "HTTP_OPTIONS\0HTTP_TRACE\0HTTP_COPY\0"
    "HTTP_LOCK\0HTTP_MKCOL\0HTTP_MOVE\0"
    "HTTP_PROPFIND\0HTTP_PROPPATCH\0HTTP_SEARCH\0"
    "HTTP_UNLOCK\0HTTP_REPORT\0HTTP_MKACTIVITY\0"
    "HTTP_CHECKOUT\0HTTP_MERGE\0HTTP_MSEARCH\0"
    "HTTP_NOTIFY\0HTTP_SUBSCRIBE\0HTTP_UNSUBSCRIBE\0"
    "HTTP_PATCH\0HTTP_PURGE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHttpRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       7,   36, // properties
       1,   57, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    1,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    5,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00095009,
       8, QMetaType::QString, 0x00095001,
       9, QMetaType::UShort, 0x00095001,
      10, QMetaType::QString, 0x00095001,
      11, QMetaType::QUrl, 0x00095001,
      12, QMetaType::QString, 0x00095001,
      13, QMetaType::QString, 0x00095001,

 // enums: name, alias, flags, count, data
      14,   14, 0x0,   26,   62,

 // enum data: key, value
      15, uint(QHttpRequest::HTTP_DELETE),
      16, uint(QHttpRequest::HTTP_GET),
      17, uint(QHttpRequest::HTTP_HEAD),
      18, uint(QHttpRequest::HTTP_POST),
      19, uint(QHttpRequest::HTTP_PUT),
      20, uint(QHttpRequest::HTTP_CONNECT),
      21, uint(QHttpRequest::HTTP_OPTIONS),
      22, uint(QHttpRequest::HTTP_TRACE),
      23, uint(QHttpRequest::HTTP_COPY),
      24, uint(QHttpRequest::HTTP_LOCK),
      25, uint(QHttpRequest::HTTP_MKCOL),
      26, uint(QHttpRequest::HTTP_MOVE),
      27, uint(QHttpRequest::HTTP_PROPFIND),
      28, uint(QHttpRequest::HTTP_PROPPATCH),
      29, uint(QHttpRequest::HTTP_SEARCH),
      30, uint(QHttpRequest::HTTP_UNLOCK),
      31, uint(QHttpRequest::HTTP_REPORT),
      32, uint(QHttpRequest::HTTP_MKACTIVITY),
      33, uint(QHttpRequest::HTTP_CHECKOUT),
      34, uint(QHttpRequest::HTTP_MERGE),
      35, uint(QHttpRequest::HTTP_MSEARCH),
      36, uint(QHttpRequest::HTTP_NOTIFY),
      37, uint(QHttpRequest::HTTP_SUBSCRIBE),
      38, uint(QHttpRequest::HTTP_UNSUBSCRIBE),
      39, uint(QHttpRequest::HTTP_PATCH),
      40, uint(QHttpRequest::HTTP_PURGE),

       0        // eod
};

void QHttpRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QHttpRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->end(); break;
        case 2: _t->appendBody((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QHttpRequest::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHttpRequest::data)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QHttpRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHttpRequest::end)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QHttpRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< HeaderHash*>(_v) = _t->headers(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->remoteAddress(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->remotePort(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->method(); break;
        case 4: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->httpVersion(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QHttpRequest::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QHttpRequest.data,
    qt_meta_data_QHttpRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QHttpRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttpRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHttpRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QHttpRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QHttpRequest::data(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHttpRequest::end()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
