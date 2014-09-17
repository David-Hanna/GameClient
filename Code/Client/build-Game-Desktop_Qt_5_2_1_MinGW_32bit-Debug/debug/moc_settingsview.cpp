/****************************************************************************
** Meta object code from reading C++ file 'settingsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Version_1.0/settingsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SettingsView_t {
    QByteArrayData data[8];
    char stringdata[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SettingsView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SettingsView_t qt_meta_stringdata_SettingsView = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 23),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 24),
QT_MOC_LITERAL(4, 63, 29),
QT_MOC_LITERAL(5, 93, 21),
QT_MOC_LITERAL(6, 115, 22),
QT_MOC_LITERAL(7, 138, 21)
    },
    "SettingsView\0backButtonPressedSignal\0"
    "\0applyButtonPressedSignal\0"
    "fullScreenSelectorClickedSlot\0"
    "saveButtonPressedSlot\0applyButtonPressedSlot\0"
    "backButtonPressedSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06,
       3,    0,   45,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x08,
       5,    0,   47,    2, 0x08,
       6,    0,   48,    2, 0x08,
       7,    0,   49,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsView *_t = static_cast<SettingsView *>(_o);
        switch (_id) {
        case 0: _t->backButtonPressedSignal(); break;
        case 1: _t->applyButtonPressedSignal(); break;
        case 2: _t->fullScreenSelectorClickedSlot(); break;
        case 3: _t->saveButtonPressedSlot(); break;
        case 4: _t->applyButtonPressedSlot(); break;
        case 5: _t->backButtonPressedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SettingsView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsView::backButtonPressedSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (SettingsView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsView::applyButtonPressedSignal)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SettingsView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SettingsView.data,
      qt_meta_data_SettingsView,  qt_static_metacall, 0, 0}
};


const QMetaObject *SettingsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsView.stringdata))
        return static_cast<void*>(const_cast< SettingsView*>(this));
    return QWidget::qt_metacast(_clname);
}

int SettingsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SettingsView::backButtonPressedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SettingsView::applyButtonPressedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
