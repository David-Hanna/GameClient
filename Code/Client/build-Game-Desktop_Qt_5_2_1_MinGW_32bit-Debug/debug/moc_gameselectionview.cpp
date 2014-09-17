/****************************************************************************
** Meta object code from reading C++ file 'gameselectionview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Version_1.0/gameselectionview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameselectionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameSelectionView_t {
    QByteArrayData data[7];
    char stringdata[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GameSelectionView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GameSelectionView_t qt_meta_stringdata_GameSelectionView = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 39),
QT_MOC_LITERAL(2, 58, 0),
QT_MOC_LITERAL(3, 59, 35),
QT_MOC_LITERAL(4, 95, 37),
QT_MOC_LITERAL(5, 133, 36),
QT_MOC_LITERAL(6, 170, 33)
    },
    "GameSelectionView\0"
    "playSinglePlayerGameButtonClickedSignal\0"
    "\0returnToMainMenuButtonClickedSignal\0"
    "playSinglePlayerGameButtonClickedSlot\0"
    "playMultiPlayerGameButtonClickedSlot\0"
    "returnToMainMenuButtonClickedSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameSelectionView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06,
       3,    0,   40,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x08,
       5,    0,   42,    2, 0x08,
       6,    0,   43,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameSelectionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameSelectionView *_t = static_cast<GameSelectionView *>(_o);
        switch (_id) {
        case 0: _t->playSinglePlayerGameButtonClickedSignal(); break;
        case 1: _t->returnToMainMenuButtonClickedSignal(); break;
        case 2: _t->playSinglePlayerGameButtonClickedSlot(); break;
        case 3: _t->playMultiPlayerGameButtonClickedSlot(); break;
        case 4: _t->returnToMainMenuButtonClickedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameSelectionView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameSelectionView::playSinglePlayerGameButtonClickedSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (GameSelectionView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameSelectionView::returnToMainMenuButtonClickedSignal)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GameSelectionView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GameSelectionView.data,
      qt_meta_data_GameSelectionView,  qt_static_metacall, 0, 0}
};


const QMetaObject *GameSelectionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameSelectionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GameSelectionView.stringdata))
        return static_cast<void*>(const_cast< GameSelectionView*>(this));
    return QWidget::qt_metacast(_clname);
}

int GameSelectionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GameSelectionView::playSinglePlayerGameButtonClickedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GameSelectionView::returnToMainMenuButtonClickedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
