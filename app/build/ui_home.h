/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *validateButton;

    void setupUi(QWidget *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QStringLiteral("Home"));
        Home->resize(1021, 598);
        Home->setWindowOpacity(2);
        Home->setAutoFillBackground(true);
        label = new QLabel(Home);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1021, 591));
        label->setMinimumSize(QSize(0, 591));
        label->setAutoFillBackground(true);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/prysm_bg_3.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(Home);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 0, 131, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/res/prysm_logo.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(Home);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(410, 0, 251, 201));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/res/res/cloud_upload.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(Home);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 150, 761, 131));
        validateButton = new QPushButton(Home);
        validateButton->setObjectName(QStringLiteral("validateButton"));
        validateButton->setGeometry(QRect(450, 270, 201, 41));
        validateButton->setMouseTracking(false);
        validateButton->setAutoFillBackground(false);
        validateButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   	font: 75 18pt \\\"Arial\\\";\n"
"    font-weight: normal;\n"
"    color: \"black\";\n"
"	background-color: #ebeef0;\n"
"	border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"	padding: 6px;\n"
"}"));
        validateButton->setFlat(false);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QWidget *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Form", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("Home", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#ffffff;\">Drag &amp; Drop a Folder </span></p><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#ffffff;\">or</span></p></body></html>", 0));
        validateButton->setText(QApplication::translate("Home", "Select a project", 0));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
