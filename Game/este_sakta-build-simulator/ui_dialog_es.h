/********************************************************************************
** Form generated from reading UI file 'dialog_es.ui'
**
** Created: Sat 9. Nov 21:42:35 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ES_H
#define UI_DIALOG_ES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_es
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_es)
    {
        if (Dialog_es->objectName().isEmpty())
            Dialog_es->setObjectName(QString::fromUtf8("Dialog_es"));
        Dialog_es->resize(400, 300);
        gridLayout = new QGridLayout(Dialog_es);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(Dialog_es);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/about and points/warty/ab1.png);"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(Dialog_es);

        QMetaObject::connectSlotsByName(Dialog_es);
    } // setupUi

    void retranslateUi(QDialog *Dialog_es)
    {
        Dialog_es->setWindowTitle(QApplication::translate("Dialog_es", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_es: public Ui_Dialog_es {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ES_H
