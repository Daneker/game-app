/****************************************************************************
** Meta object code from reading C++ file 'zhyldam3.h'
**
** Created: Sat 9. Nov 21:36:37 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../este_sakta/zhyldam3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zhyldam3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_zhyldam3[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      38,    9,    9,    9, 0x08,
      65,    9,    9,    9, 0x08,
      89,    9,    9,    9, 0x08,
      98,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_zhyldam3[] = {
    "zhyldam3\0\0on_pushButton_jok_clicked()\0"
    "on_pushButton_ia_clicked()\0"
    "on_pushButton_clicked()\0setImg()\0"
    "showButton()\0"
};

const QMetaObject zhyldam3::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_zhyldam3,
      qt_meta_data_zhyldam3, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &zhyldam3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *zhyldam3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *zhyldam3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_zhyldam3))
        return static_cast<void*>(const_cast< zhyldam3*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int zhyldam3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_jok_clicked(); break;
        case 1: on_pushButton_ia_clicked(); break;
        case 2: on_pushButton_clicked(); break;
        case 3: setImg(); break;
        case 4: showButton(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
