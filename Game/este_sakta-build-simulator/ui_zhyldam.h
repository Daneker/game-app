/********************************************************************************
** Form generated from reading UI file 'zhyldam.ui'
**
** Created: Tue 12. Nov 16:57:22 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHYLDAM_H
#define UI_ZHYLDAM_H

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

class Ui_zhyldam
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_ia;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_jok;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QMainWindow *zhyldam)
    {
        if (zhyldam->objectName().isEmpty())
            zhyldam->setObjectName(QString::fromUtf8("zhyldam"));
        zhyldam->resize(302, 409);
        zhyldam->setStyleSheet(QString::fromUtf8("border-image: url(:/images/jyldamdyk/bala.png);"));
        centralwidget = new QWidget(zhyldam);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/images/about and points/text_score.png);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(label, 1, 0, 1, 3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("font: 75 20pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 170, 0);\n"
"border-image: url(:/images/about and points/blank.png);"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 3, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/jyldamdyk/1/b1.png);"));

        gridLayout->addWidget(label_3, 4, 2, 1, 2);

        pushButton_ia = new QPushButton(centralwidget);
        pushButton_ia->setObjectName(QString::fromUtf8("pushButton_ia"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_ia->sizePolicy().hasHeightForWidth());
        pushButton_ia->setSizePolicy(sizePolicy2);
        pushButton_ia->setStyleSheet(QString::fromUtf8("border-image: url(:/images/about and points/ia.png);"));

        gridLayout->addWidget(pushButton_ia, 5, 2, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/e_b);\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(pushButton, 6, 3, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 0, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_3, 6, 2, 1, 1);

        pushButton_jok = new QPushButton(centralwidget);
        pushButton_jok->setObjectName(QString::fromUtf8("pushButton_jok"));
        sizePolicy2.setHeightForWidth(pushButton_jok->sizePolicy().hasHeightForWidth());
        pushButton_jok->setSizePolicy(sizePolicy2);
        pushButton_jok->setStyleSheet(QString::fromUtf8("border-image: url(:/images/about and points/jok.png);"));

        gridLayout->addWidget(pushButton_jok, 5, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_4, 5, 0, 1, 1);

        zhyldam->setCentralWidget(centralwidget);

        retranslateUi(zhyldam);

        QMetaObject::connectSlotsByName(zhyldam);
    } // setupUi

    void retranslateUi(QMainWindow *zhyldam)
    {
        zhyldam->setWindowTitle(QApplication::translate("zhyldam", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("zhyldam", "2", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        pushButton_ia->setText(QString());
        pushButton->setText(QString());
        pushButton_jok->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zhyldam: public Ui_zhyldam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHYLDAM_H
