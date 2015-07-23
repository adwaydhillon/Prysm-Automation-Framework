/********************************************************************************
** Form generated from reading UI file 'validated.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIDATED_H
#define UI_VALIDATED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Validated
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *configureButton;
    QLabel *label_3;
    QPushButton *runButton;
    QPushButton *viewReportsButton;
    QPushButton *testSelectionButton;

    void setupUi(QWidget *Validated)
    {
        if (Validated->objectName().isEmpty())
            Validated->setObjectName(QStringLiteral("Validated"));
        Validated->resize(907, 594);
        Validated->setAutoFillBackground(true);
        label = new QLabel(Validated);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 911, 591));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/prysm_bg_3.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(Validated);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 0, 131, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/res/prysm_logo.png")));
        label_2->setScaledContents(true);
        label_4 = new QLabel(Validated);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 170, 791, 131));
        configureButton = new QPushButton(Validated);
        configureButton->setObjectName(QStringLiteral("configureButton"));
        configureButton->setGeometry(QRect(80, 320, 201, 41));
        configureButton->setMouseTracking(false);
        configureButton->setAutoFillBackground(false);
        configureButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        configureButton->setFlat(false);
        label_3 = new QLabel(Validated);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 0, 251, 201));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/res/res/cloud_done.png")));
        label_3->setScaledContents(true);
        runButton = new QPushButton(Validated);
        runButton->setObjectName(QStringLiteral("runButton"));
        runButton->setGeometry(QRect(360, 420, 221, 91));
        runButton->setMouseTracking(false);
        runButton->setAutoFillBackground(false);
        runButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   	font: 75 22pt \\\"Arial\\\";\n"
"    font-weight: normal;\n"
"    color: \"black\";\n"
"	background-color: #ebeef0;\n"
"	border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"	padding: 6px;\n"
"}"));
        runButton->setFlat(false);
        viewReportsButton = new QPushButton(Validated);
        viewReportsButton->setObjectName(QStringLiteral("viewReportsButton"));
        viewReportsButton->setGeometry(QRect(630, 320, 201, 41));
        viewReportsButton->setMouseTracking(false);
        viewReportsButton->setAutoFillBackground(false);
        viewReportsButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        viewReportsButton->setFlat(false);
        testSelectionButton = new QPushButton(Validated);
        testSelectionButton->setObjectName(QStringLiteral("testSelectionButton"));
        testSelectionButton->setGeometry(QRect(370, 320, 201, 41));
        testSelectionButton->setMouseTracking(false);
        testSelectionButton->setAutoFillBackground(false);
        testSelectionButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        testSelectionButton->setFlat(false);

        retranslateUi(Validated);

        QMetaObject::connectSlotsByName(Validated);
    } // setupUi

    void retranslateUi(QWidget *Validated)
    {
        Validated->setWindowTitle(QApplication::translate("Validated", "Form", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_4->setText(QApplication::translate("Validated", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#ffffff;\">Project path validated!</span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#ffffff;\">Choose an option:</span></p></body></html>", 0));
        configureButton->setText(QApplication::translate("Validated", "Configure", 0));
        label_3->setText(QString());
        runButton->setText(QApplication::translate("Validated", "Create Script", 0));
        viewReportsButton->setText(QApplication::translate("Validated", "View Reports", 0));
        testSelectionButton->setText(QApplication::translate("Validated", "Suite/Test Selection", 0));
    } // retranslateUi

};

namespace Ui {
    class Validated: public Ui_Validated {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIDATED_H
