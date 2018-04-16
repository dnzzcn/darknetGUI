/****************************************************************************
** Meta object code from reading C++ file 'newproject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projects/darknetGUI/darknetGUI_0.1.4/newproject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewProject_t {
    QByteArrayData data[17];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewProject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewProject_t qt_meta_stringdata_NewProject = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NewProject"
QT_MOC_LITERAL(1, 11, 14), // "projectCreated"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "inputProjectName"
QT_MOC_LITERAL(4, 44, 16), // "cfgFileDirectory"
QT_MOC_LITERAL(5, 61, 15), // "labelsPlainName"
QT_MOC_LITERAL(6, 77, 18), // "trainListPlainName"
QT_MOC_LITERAL(7, 96, 17), // "testListPlainName"
QT_MOC_LITERAL(8, 114, 15), // "cfgBrowseHandle"
QT_MOC_LITERAL(9, 130, 18), // "labelsBrowseHandle"
QT_MOC_LITERAL(10, 149, 25), // "trainDataListBrowseHandle"
QT_MOC_LITERAL(11, 175, 24), // "testDataListBrowseHandle"
QT_MOC_LITERAL(12, 200, 20), // "lockDatabaseElements"
QT_MOC_LITERAL(13, 221, 19), // "useExistingDatabase"
QT_MOC_LITERAL(14, 241, 7), // "checked"
QT_MOC_LITERAL(15, 249, 19), // "createProjectHandle"
QT_MOC_LITERAL(16, 269, 12) // "cancelHandle"

    },
    "NewProject\0projectCreated\0\0inputProjectName\0"
    "cfgFileDirectory\0labelsPlainName\0"
    "trainListPlainName\0testListPlainName\0"
    "cfgBrowseHandle\0labelsBrowseHandle\0"
    "trainDataListBrowseHandle\0"
    "testDataListBrowseHandle\0lockDatabaseElements\0"
    "useExistingDatabase\0checked\0"
    "createProjectHandle\0cancelHandle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewProject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    1,   75,    2, 0x08 /* Private */,
      15,    0,   78,    2, 0x08 /* Private */,
      16,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NewProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewProject *_t = static_cast<NewProject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->projectCreated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 1: _t->cfgBrowseHandle(); break;
        case 2: _t->labelsBrowseHandle(); break;
        case 3: _t->trainDataListBrowseHandle(); break;
        case 4: _t->testDataListBrowseHandle(); break;
        case 5: _t->lockDatabaseElements(); break;
        case 6: _t->useExistingDatabase((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->createProjectHandle(); break;
        case 8: _t->cancelHandle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NewProject::*_t)(QString , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewProject::projectCreated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject NewProject::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewProject.data,
      qt_meta_data_NewProject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NewProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewProject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewProject.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int NewProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void NewProject::projectCreated(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
