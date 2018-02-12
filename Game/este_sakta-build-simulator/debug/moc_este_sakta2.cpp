/****************************************************************************
** Meta object code from reading C++ file 'este_sakta2.h'
**
** Created: Sat 9. Nov 23:10:19 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../este_sakta/este_sakta2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'este_sakta2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_este_sakta2[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      40,   12,   12,   12, 0x08,
      67,   12,   12,   12, 0x08,
      94,   12,   12,   12, 0x08,
     121,   12,   12,   12, 0x08,
     147,   12,   12,   12, 0x08,
     173,   12,   12,   12, 0x08,
     199,   12,   12,   12, 0x08,
     225,   12,   12,   12, 0x08,
     251,   12,   12,   12, 0x08,
     277,   12,   12,   12, 0x08,
     303,   12,   12,   12, 0x08,
     329,   12,   12,   12, 0x08,
     353,   12,   12,   12, 0x08,
     359,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_este_sakta2[] = {
    "este_sakta2\0\0on_pushButton_13_clicked()\0"
    "on_pushButton_11_clicked()\0"
    "on_pushButton_12_clicked()\0"
    "on_pushButton_10_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0set()\0"
    "hideButton()\0"
};

const QMetaObject este_sakta2::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_este_sakta2,
      qt_meta_data_este_sakta2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &este_sakta2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *este_sakta2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *este_sakta2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_este_sakta2))
        return static_cast<void*>(const_cast< este_sakta2*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int este_sakta2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_13_clicked(); break;
        case 1: on_pushButton_11_clicked(); break;
        case 2: on_pushButton_12_clicked(); break;
        case 3: on_pushButton_10_clicked(); break;
        case 4: on_pushButton_7_clicked(); break;
        case 5: on_pushButton_4_clicked(); break;
        case 6: on_pushButton_9_clicked(); break;
        case 7: on_pushButton_6_clicked(); break;
        case 8: on_pushButton_3_clicked(); break;
        case 9: on_pushButton_8_clicked(); break;
        case 10: on_pushButton_5_clicked(); break;
        case 11: on_pushButton_2_clicked(); break;
        case 12: on_pushButton_clicked(); break;
        case 13: set(); break;
        case 14: hideButton(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
