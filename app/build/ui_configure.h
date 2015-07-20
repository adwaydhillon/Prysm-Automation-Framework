/********************************************************************************
** Form generated from reading UI file 'configure.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_H
#define UI_CONFIGURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Configure
{
public:
    QWidget *sim_tab;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_23;
    QTextBrowser *textBrowser_5;
    QPushButton *pushButton_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_22;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_12;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_26;
    QTextBrowser *textBrowser_4;
    QPushButton *pushButton_15;
    QWidget *run_tab;

    void setupUi(QTabWidget *Configure)
    {
        if (Configure->objectName().isEmpty())
            Configure->setObjectName(QStringLiteral("Configure"));
        Configure->resize(878, 600);
        Configure->setAutoFillBackground(true);
        Configure->setTabPosition(QTabWidget::North);
        Configure->setTabShape(QTabWidget::Rounded);
        Configure->setUsesScrollButtons(false);
        Configure->setDocumentMode(false);
        Configure->setTabsClosable(false);
        Configure->setMovable(false);
        Configure->setTabBarAutoHide(false);
        sim_tab = new QWidget();
        sim_tab->setObjectName(QStringLiteral("sim_tab"));
        verticalLayoutWidget_2 = new QWidget(sim_tab);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 871, 692));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_13->setContentsMargins(-1, -1, -1, 12);
        label_23 = new QLabel(verticalLayoutWidget_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_13->addWidget(label_23);

        textBrowser_5 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser_5->sizePolicy().hasHeightForWidth());
        textBrowser_5->setSizePolicy(sizePolicy);
        textBrowser_5->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_13->addWidget(textBrowser_5);

        pushButton_13 = new QPushButton(verticalLayoutWidget_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        horizontalLayout_13->addWidget(pushButton_13);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_12->setContentsMargins(-1, -1, -1, 12);
        label_22 = new QLabel(verticalLayoutWidget_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_12->addWidget(label_22);

        textBrowser_2 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        sizePolicy.setHeightForWidth(textBrowser_2->sizePolicy().hasHeightForWidth());
        textBrowser_2->setSizePolicy(sizePolicy);
        textBrowser_2->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_12->addWidget(textBrowser_2);

        pushButton_12 = new QPushButton(verticalLayoutWidget_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_12->addWidget(pushButton_12);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_15->setContentsMargins(-1, -1, -1, 12);
        label_26 = new QLabel(verticalLayoutWidget_2);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_15->addWidget(label_26);

        textBrowser_4 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        sizePolicy.setHeightForWidth(textBrowser_4->sizePolicy().hasHeightForWidth());
        textBrowser_4->setSizePolicy(sizePolicy);
        textBrowser_4->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_15->addWidget(textBrowser_4);

        pushButton_15 = new QPushButton(verticalLayoutWidget_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        horizontalLayout_15->addWidget(pushButton_15);


        verticalLayout_2->addLayout(horizontalLayout_15);

        Configure->addTab(sim_tab, QString());
        run_tab = new QWidget();
        run_tab->setObjectName(QStringLiteral("run_tab"));
        Configure->addTab(run_tab, QString());

        retranslateUi(Configure);

        Configure->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Configure);
    } // setupUi

    void retranslateUi(QTabWidget *Configure)
    {
        Configure->setWindowTitle(QApplication::translate("Configure", "TabWidget", 0));
        label_23->setText(QApplication::translate("Configure", "Simulator Path:", 0));
        textBrowser_5->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_13->setText(QApplication::translate("Configure", "Browse", 0));
        label_22->setText(QApplication::translate("Configure", "Perl Path:", 0));
        textBrowser_2->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_12->setText(QApplication::translate("Configure", "Browse", 0));
        label_26->setText(QApplication::translate("Configure", "Python Path:", 0));
        textBrowser_4->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_15->setText(QApplication::translate("Configure", "Browse", 0));
        Configure->setTabText(Configure->indexOf(sim_tab), QApplication::translate("Configure", "Simulation Environment", 0));
        Configure->setTabText(Configure->indexOf(run_tab), QApplication::translate("Configure", "Test Run", 0));
    } // retranslateUi

};

namespace Ui {
    class Configure: public Ui_Configure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_H
