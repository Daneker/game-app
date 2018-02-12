/********************************************************************************
** Form generated from reading UI file 'dialog_zh.ui'
**
** Created: Sat 9. Nov 21:23:11 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ZH_H
#define UI_DIALOG_ZH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_zh
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_zh)
    {
        if (Dialog_zh->objectName().isEmpty())
            Dialog_zh->setObjectName(QString::fromUtf8("Dialog_zh"));
        Dialog_zh->resize(341, 300);
        Dialog_zh->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(Dialog_zh);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(Dialog_zh);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/about and points/warty/ab2.png);"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(Dialog_zh);

        QMetaObject::connectSlotsByName(Dialog_zh);
    } // setupUi

    void retranslateUi(QDialog *Dialog_zh)
    {
        Dialog_zh->setWindowTitle(QApplication::translate("Dialog_zh", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_zh: public Ui_Dialog_zh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ZH_H
