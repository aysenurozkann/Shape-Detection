/****************************************************************************
** Meta object code from reading C++ file 'shapedetection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ShapeDetection/shapedetection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shapedetection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShapeDetection_t {
    QByteArrayData data[11];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShapeDetection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShapeDetection_t qt_meta_stringdata_ShapeDetection = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ShapeDetection"
QT_MOC_LITERAL(1, 15, 21), // "processFrameAndUpdate"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "getContours"
QT_MOC_LITERAL(4, 50, 3), // "Mat"
QT_MOC_LITERAL(5, 54, 7), // "img_dil"
QT_MOC_LITERAL(6, 62, 3), // "img"
QT_MOC_LITERAL(7, 66, 19), // "on_pausebtn_clicked"
QT_MOC_LITERAL(8, 86, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 108, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 132, 23) // "on_pushButton_3_clicked"

    },
    "ShapeDetection\0processFrameAndUpdate\0"
    "\0getContours\0Mat\0img_dil\0img\0"
    "on_pausebtn_clicked\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShapeDetection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    2,   45,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ShapeDetection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShapeDetection *_t = static_cast<ShapeDetection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processFrameAndUpdate(); break;
        case 1: _t->getContours((*reinterpret_cast< Mat(*)>(_a[1])),(*reinterpret_cast< Mat(*)>(_a[2]))); break;
        case 2: _t->on_pausebtn_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ShapeDetection::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ShapeDetection.data,
      qt_meta_data_ShapeDetection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ShapeDetection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShapeDetection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ShapeDetection.stringdata0))
        return static_cast<void*>(const_cast< ShapeDetection*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ShapeDetection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
