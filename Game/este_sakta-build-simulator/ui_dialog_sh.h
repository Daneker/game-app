/********************************************************************************
** Form generated from reading UI file 'dialog_sh.ui'
**
** Created: Sat 9. Nov 21:42:35 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SH_H
#define UI_DIALOG_SH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_sh
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_sh)
    {
        if (Dialog_sh->objectName().isEmpty())
            Dialog_sh->setObjectName(QString::fromUtf8("Dialog_sh"));
        Dialog_sh->resize(400, 300);
        Dialog_sh->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(Dialog_sh);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(Dialog_sh);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/about and points/warty/ab2.png);"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(Dialog_sh);

        QMetaObject::connectSlotsByName(Dialog_sh);
    } // setupUi

    void retranslateUi(QDialog *Dialog_sh)
    {
        Dialog_sh->setWindowTitle(QApplication::translate("Dialog_sh", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_sh: public Ui_Dialog_sh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SH_H
