/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *background_label;
    QLabel *upload_label;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *prysm_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(939, 483);
        MainWindow->setMaximumSize(QSize(12727194, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        background_label = new QLabel(centralWidget);
        background_label->setObjectName(QStringLiteral("background_label"));
        background_label->setGeometry(QRect(0, 0, 942, 421));
        background_label->setAcceptDrops(false);
        background_label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/beach.png")));
        background_label->setScaledContents(true);
        upload_label = new QLabel(centralWidget);
        upload_label->setObjectName(QStringLiteral("upload_label"));
        upload_label->setGeometry(QRect(350, 10, 241, 191));
        upload_label->setAcceptDrops(true);
        upload_label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/cloud_upload.png")));
        upload_label->setScaledContents(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 160, 321, 91));
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 250, 201, 41));
        pushButton->setMouseTracking(false);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton->setFlat(false);
        prysm_label = new QLabel(centralWidget);
        prysm_label->setObjectName(QStringLiteral("prysm_label"));
        prysm_label->setGeometry(QRect(10, 0, 91, 51));
        prysm_label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/prysm_logo.png")));
        prysm_label->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 939, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        background_label->setText(QString());
        upload_label->setText(QString());
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">Drag &amp; Drop a Folder</span><span style=\" font-size:14pt;\"><br/></span><span style=\" font-size:24pt; vertical-align:sub;\">or</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Select a project", 0));
        prysm_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
