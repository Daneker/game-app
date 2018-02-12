/********************************************************************************
** Form generated from reading UI file 'seshim.ui'
**
** Created: Sat 9. Nov 20:30:43 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESHIM_H
#define UI_SESHIM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seshim
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_esep;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QMainWindow *seshim)
    {
        if (seshim->objectName().isEmpty())
            seshim->setObjectName(QString::fromUtf8("seshim"));
        seshim->resize(291, 408);
        seshim->setStyleSheet(QString::fromUtf8("border-image: url(:/bg_wewim);"));
        centralwidget = new QWidget(seshim);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_esep = new QPushButton(centralwidget);
        pushButton_esep->setObjectName(QString::fromUtf8("pushButton_esep"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_esep->sizePolicy().hasHeightForWidth());
        pushButton_esep->setSizePolicy(sizePolicy);
        pushButton_esep->setStyleSheet(QString::fromUtf8("border-image: url(:/b3);\n"
"font: 75 28pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(pushButton_esep, 2, 1, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 20pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/e_b);\n"
""));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 75 20pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/e_b);\n"
""));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 75 20pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/e_b);"));

        gridLayout->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 75 20pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/e_b);"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 4, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 6, 1, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/e_b);\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(pushButton_6, 6, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_3, 0, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/images/about and points/text_score.png);"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/about and points/blank.png);\n"
"color: rgb(85, 170, 0);\n"
"font: 75 30pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(label_2, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 5, 1, 1, 1);

        seshim->setCentralWidget(centralwidget);

        retranslateUi(seshim);

        QMetaObject::connectSlotsByName(seshim);
    } // setupUi

    void retranslateUi(QMainWindow *seshim)
    {
        seshim->setWindowTitle(QApplication::translate("seshim", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton_esep->setText(QString());
        pushButton_2->setText(QApplication::translate("seshim", "5", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("seshim", "5", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("seshim", "5", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("seshim", "5", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("seshim", "2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class seshim: public Ui_seshim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESHIM_H
