/****************************************************************************
** Meta object code from reading C++ file 'dialog_es.h'
**
** Created: Sat 9. Nov 21:42:55 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../este_sakta/dialog_es.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_es.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog_es[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog_es[] = {
    "Dialog_es\0\0on_pushButton_clicked()\0"
};

const QMetaObject Dialog_es::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_es,
      qt_meta_data_Dialog_es, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog_es::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog_es::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog_es::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_es))
        return static_cast<void*>(const_cast< Dialog_es*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_es::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
