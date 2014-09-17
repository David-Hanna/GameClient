/****************************************************************************
** Meta object code from reading C++ file 'mainmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Version_1.0/mainmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainMenu_t {
    QByteArrayData data[10];
    char stringdata[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainMenu_t qt_meta_stringdata_MainMenu = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 28),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 27),
QT_MOC_LITERAL(4, 67, 25),
QT_MOC_LITERAL(5, 93, 26),
QT_MOC_LITERAL(6, 120, 29),
QT_MOC_LITERAL(7, 150, 25),
QT_MOC_LITERAL(8, 176, 21),
QT_MOC_LITERAL(9, 198, 31)
    },
    "MainMenu\0startGameButtonPressedSignal\0"
    "\0settingsButtonPressedSignal\0"
    "logInOutButtonClickedSlot\0"
    "startGameButtonPressedSlot\0"
    "seeMyProfileButtonClickedSlot\0"
    "settingsButtonPressedSlot\0"
    "exitButtonPressedSlot\0"
    "connectionTestButtonClickedSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06,
       3,    0,   55,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x0a,
       5,    0,   57,    2, 0x0a,
       6,    0,   58,    2, 0x0a,
       7,    0,   59,    2, 0x0a,
       8,    0,   60,    2, 0x0a,
       9,    0,   61,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainMenu *_t = static_cast<MainMenu *>(_o);
        switch (_id) {
        case 0: _t->startGameButtonPressedSignal(); break;
        case 1: _t->settingsButtonPressedSignal(); break;
        case 2: _t->logInOutButtonClickedSlot(); break;
        case 3: _t->startGameButtonPressedSlot(); break;
        case 4: _t->seeMyProfileButtonClickedSlot(); break;
        case 5: _t->settingsButtonPressedSlot(); break;
        case 6: _t->exitButtonPressedSlot(); break;
        case 7: _t->connectionTestButtonClickedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainMenu::startGameButtonPressedSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (MainMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainMenu::settingsButtonPressedSignal)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainMenu.data,
      qt_meta_data_MainMenu,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainMenu.stringdata))
        return static_cast<void*>(const_cast< MainMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MainMenu::startGameButtonPressedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MainMenu::settingsButtonPressedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
