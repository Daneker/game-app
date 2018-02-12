/****************************************************************************
** Meta object code from reading C++ file 'sheshim2.h'
**
** Created: Sat 9. Nov 19:31:17 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../este_sakta/sheshim2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sheshim2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_sheshim2[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      36,    9,    9,    9, 0x08,
      62,    9,    9,    9, 0x08,
      88,    9,    9,    9, 0x08,
     114,    9,    9,    9, 0x08,
     140,    9,    9,    9, 0x08,
     151,    9,  147,    9, 0x08,
     160,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_sheshim2[] = {
    "sheshim2\0\0on_pushButton_5_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_6_clicked()\0esep()\0int\0"
    "result()\0exit()\0"
};

const QMetaObject sheshim2::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_sheshim2,
      qt_meta_data_sheshim2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &sheshim2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *sheshim2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *sheshim2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_sheshim2))
        return static_cast<void*>(const_cast< sheshim2*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int sheshim2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_5_clicked(); break;
        case 1: on_pushButton_3_clicked(); break;
        case 2: on_pushButton_4_clicked(); break;
        case 3: on_pushButton_2_clicked(); break;
        case 4: on_pushButton_6_clicked(); break;
        case 5: esep(); break;
        case 6: { int _r = result();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: exit(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
