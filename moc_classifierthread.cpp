/****************************************************************************
** Meta object code from reading C++ file 'classifierthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projects/darknetGUI/darknetGUI_0.1.4/classifierthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'classifierthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClassifierThread_t {
    QByteArrayData data[9];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClassifierThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClassifierThread_t qt_meta_stringdata_ClassifierThread = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ClassifierThread"
QT_MOC_LITERAL(1, 17, 23), // "avgLossAndAccuracyReady"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "loss"
QT_MOC_LITERAL(4, 47, 8), // "accuracy"
QT_MOC_LITERAL(5, 56, 8), // "weightID"
QT_MOC_LITERAL(6, 65, 16), // "currentLossReady"
QT_MOC_LITERAL(7, 82, 15), // "getStopTraining"
QT_MOC_LITERAL(8, 98, 4) // "stop"

    },
    "ClassifierThread\0avgLossAndAccuracyReady\0"
    "\0loss\0accuracy\0weightID\0currentLossReady\0"
    "getStopTraining\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClassifierThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       6,    1,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void ClassifierThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClassifierThread *_t = static_cast<ClassifierThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->avgLossAndAccuracyReady((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->currentLossReady((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->getStopTraining((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ClassifierThread::*_t)(float , float , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClassifierThread::avgLossAndAccuracyReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ClassifierThread::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClassifierThread::currentLossReady)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ClassifierThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ClassifierThread.data,
      qt_meta_data_ClassifierThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ClassifierThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClassifierThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClassifierThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ClassifierThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ClassifierThread::avgLossAndAccuracyReady(float _t1, float _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClassifierThread::currentLossReady(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
