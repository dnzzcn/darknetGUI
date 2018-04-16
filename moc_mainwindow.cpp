/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projects/darknetGUI/darknetGUI_0.1.4/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "setStopTraining"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "stop"
QT_MOC_LITERAL(4, 33, 18), // "weightBrowseHandle"
QT_MOC_LITERAL(5, 52, 17), // "trainButtonHandle"
QT_MOC_LITERAL(6, 70, 21), // "stopTrainButtonHandle"
QT_MOC_LITERAL(7, 92, 10), // "newProject"
QT_MOC_LITERAL(8, 103, 11), // "openProject"
QT_MOC_LITERAL(9, 115, 11), // "setTestText"
QT_MOC_LITERAL(10, 127, 4), // "loss"
QT_MOC_LITERAL(11, 132, 15), // "showCurrentLoss"
QT_MOC_LITERAL(12, 148, 11), // "plotAvgLoss"
QT_MOC_LITERAL(13, 160, 8), // "accuracy"
QT_MOC_LITERAL(14, 169, 8), // "weightID"
QT_MOC_LITERAL(15, 178, 12), // "setupProject"
QT_MOC_LITERAL(16, 191, 16), // "inputProjectName"
QT_MOC_LITERAL(17, 208, 16), // "cfgFileDirectory"
QT_MOC_LITERAL(18, 225, 15), // "labelsPlainName"
QT_MOC_LITERAL(19, 241, 18), // "trainListPlainName"
QT_MOC_LITERAL(20, 260, 17) // "testListPlainName"

    },
    "MainWindow\0setStopTraining\0\0stop\0"
    "weightBrowseHandle\0trainButtonHandle\0"
    "stopTrainButtonHandle\0newProject\0"
    "openProject\0setTestText\0loss\0"
    "showCurrentLoss\0plotAvgLoss\0accuracy\0"
    "weightID\0setupProject\0inputProjectName\0"
    "cfgFileDirectory\0labelsPlainName\0"
    "trainListPlainName\0testListPlainName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,
      12,    3,   78,    2, 0x0a /* Public */,
      15,    5,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Int,   10,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,   17,   18,   19,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setStopTraining((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->weightBrowseHandle(); break;
        case 2: _t->trainButtonHandle(); break;
        case 3: _t->stopTrainButtonHandle(); break;
        case 4: _t->newProject(); break;
        case 5: _t->openProject(); break;
        case 6: _t->setTestText((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->showCurrentLoss((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->plotAvgLoss((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->setupProject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setStopTraining)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::setStopTraining(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
