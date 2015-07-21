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
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_24;
    QTextBrowser *textBrowser_7;
    QPushButton *pushButton_14;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_39;
    QTextBrowser *textBrowser_18;
    QPushButton *pushButton_28;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_40;
    QTextBrowser *textBrowser_19;
    QPushButton *pushButton_29;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_41;
    QTextBrowser *textBrowser_20;
    QPushButton *pushButton_30;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_42;
    QTextBrowser *textBrowser_21;
    QPushButton *pushButton_31;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_43;
    QTextBrowser *textBrowser_22;
    QPushButton *pushButton_32;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_44;
    QTextBrowser *textBrowser_23;
    QPushButton *pushButton_33;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_45;
    QTextBrowser *textBrowser_24;
    QPushButton *pushButton_34;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_25;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton_17;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_46;
    QTextBrowser *textBrowser_25;
    QPushButton *pushButton_35;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_47;
    QTextBrowser *textBrowser_26;
    QPushButton *pushButton_36;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_28;
    QTextBrowser *textBrowser_8;
    QPushButton *pushButton_18;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_29;
    QTextBrowser *textBrowser_27;
    QPushButton *pushButton_37;
    QWidget *run_tab;

    void setupUi(QTabWidget *Configure)
    {
        if (Configure->objectName().isEmpty())
            Configure->setObjectName(QStringLiteral("Configure"));
        Configure->resize(1015, 746);
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
        verticalLayoutWidget_2->setGeometry(QRect(-10, 20, 1001, 2901));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_14->setContentsMargins(-1, -1, -1, 12);
        label_24 = new QLabel(verticalLayoutWidget_2);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_14->addWidget(label_24);

        textBrowser_7 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser_7->sizePolicy().hasHeightForWidth());
        textBrowser_7->setSizePolicy(sizePolicy);
        textBrowser_7->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_14->addWidget(textBrowser_7);

        pushButton_14 = new QPushButton(verticalLayoutWidget_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        horizontalLayout_14->addWidget(pushButton_14);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        horizontalLayout_28->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_28->setContentsMargins(-1, -1, -1, 12);
        label_39 = new QLabel(verticalLayoutWidget_2);
        label_39->setObjectName(QStringLiteral("label_39"));

        horizontalLayout_28->addWidget(label_39);

        textBrowser_18 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_18->setObjectName(QStringLiteral("textBrowser_18"));
        sizePolicy.setHeightForWidth(textBrowser_18->sizePolicy().hasHeightForWidth());
        textBrowser_18->setSizePolicy(sizePolicy);
        textBrowser_18->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_28->addWidget(textBrowser_18);

        pushButton_28 = new QPushButton(verticalLayoutWidget_2);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));

        horizontalLayout_28->addWidget(pushButton_28);


        verticalLayout_3->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        horizontalLayout_29->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_29->setContentsMargins(-1, -1, -1, 12);
        label_40 = new QLabel(verticalLayoutWidget_2);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_29->addWidget(label_40);

        textBrowser_19 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_19->setObjectName(QStringLiteral("textBrowser_19"));
        sizePolicy.setHeightForWidth(textBrowser_19->sizePolicy().hasHeightForWidth());
        textBrowser_19->setSizePolicy(sizePolicy);
        textBrowser_19->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_29->addWidget(textBrowser_19);

        pushButton_29 = new QPushButton(verticalLayoutWidget_2);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));

        horizontalLayout_29->addWidget(pushButton_29);


        verticalLayout_3->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        horizontalLayout_30->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_30->setContentsMargins(-1, -1, -1, 12);
        label_41 = new QLabel(verticalLayoutWidget_2);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_30->addWidget(label_41);

        textBrowser_20 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_20->setObjectName(QStringLiteral("textBrowser_20"));
        sizePolicy.setHeightForWidth(textBrowser_20->sizePolicy().hasHeightForWidth());
        textBrowser_20->setSizePolicy(sizePolicy);
        textBrowser_20->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_30->addWidget(textBrowser_20);

        pushButton_30 = new QPushButton(verticalLayoutWidget_2);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));

        horizontalLayout_30->addWidget(pushButton_30);


        verticalLayout_3->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        horizontalLayout_31->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_31->setContentsMargins(-1, -1, -1, 12);
        label_42 = new QLabel(verticalLayoutWidget_2);
        label_42->setObjectName(QStringLiteral("label_42"));

        horizontalLayout_31->addWidget(label_42);

        textBrowser_21 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_21->setObjectName(QStringLiteral("textBrowser_21"));
        sizePolicy.setHeightForWidth(textBrowser_21->sizePolicy().hasHeightForWidth());
        textBrowser_21->setSizePolicy(sizePolicy);
        textBrowser_21->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_31->addWidget(textBrowser_21);

        pushButton_31 = new QPushButton(verticalLayoutWidget_2);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));

        horizontalLayout_31->addWidget(pushButton_31);


        verticalLayout_3->addLayout(horizontalLayout_31);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        horizontalLayout_32->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_32->setContentsMargins(-1, -1, -1, 12);
        label_43 = new QLabel(verticalLayoutWidget_2);
        label_43->setObjectName(QStringLiteral("label_43"));

        horizontalLayout_32->addWidget(label_43);

        textBrowser_22 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_22->setObjectName(QStringLiteral("textBrowser_22"));
        sizePolicy.setHeightForWidth(textBrowser_22->sizePolicy().hasHeightForWidth());
        textBrowser_22->setSizePolicy(sizePolicy);
        textBrowser_22->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_32->addWidget(textBrowser_22);

        pushButton_32 = new QPushButton(verticalLayoutWidget_2);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));

        horizontalLayout_32->addWidget(pushButton_32);


        verticalLayout_3->addLayout(horizontalLayout_32);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        horizontalLayout_33->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_33->setContentsMargins(-1, -1, -1, 12);
        label_44 = new QLabel(verticalLayoutWidget_2);
        label_44->setObjectName(QStringLiteral("label_44"));

        horizontalLayout_33->addWidget(label_44);

        textBrowser_23 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_23->setObjectName(QStringLiteral("textBrowser_23"));
        sizePolicy.setHeightForWidth(textBrowser_23->sizePolicy().hasHeightForWidth());
        textBrowser_23->setSizePolicy(sizePolicy);
        textBrowser_23->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_33->addWidget(textBrowser_23);

        pushButton_33 = new QPushButton(verticalLayoutWidget_2);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));

        horizontalLayout_33->addWidget(pushButton_33);


        verticalLayout_3->addLayout(horizontalLayout_33);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        horizontalLayout_34->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_34->setContentsMargins(-1, -1, -1, 12);
        label_45 = new QLabel(verticalLayoutWidget_2);
        label_45->setObjectName(QStringLiteral("label_45"));

        horizontalLayout_34->addWidget(label_45);

        textBrowser_24 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_24->setObjectName(QStringLiteral("textBrowser_24"));
        sizePolicy.setHeightForWidth(textBrowser_24->sizePolicy().hasHeightForWidth());
        textBrowser_24->setSizePolicy(sizePolicy);
        textBrowser_24->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_34->addWidget(textBrowser_24);

        pushButton_34 = new QPushButton(verticalLayoutWidget_2);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));

        horizontalLayout_34->addWidget(pushButton_34);


        verticalLayout_3->addLayout(horizontalLayout_34);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_17->setContentsMargins(-1, -1, -1, 12);
        label_25 = new QLabel(verticalLayoutWidget_2);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_17->addWidget(label_25);

        textBrowser_3 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        sizePolicy.setHeightForWidth(textBrowser_3->sizePolicy().hasHeightForWidth());
        textBrowser_3->setSizePolicy(sizePolicy);
        textBrowser_3->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_17->addWidget(textBrowser_3);

        pushButton_17 = new QPushButton(verticalLayoutWidget_2);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));

        horizontalLayout_17->addWidget(pushButton_17);


        verticalLayout_3->addLayout(horizontalLayout_17);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        horizontalLayout_35->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_35->setContentsMargins(-1, -1, -1, 12);
        label_46 = new QLabel(verticalLayoutWidget_2);
        label_46->setObjectName(QStringLiteral("label_46"));

        horizontalLayout_35->addWidget(label_46);

        textBrowser_25 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_25->setObjectName(QStringLiteral("textBrowser_25"));
        sizePolicy.setHeightForWidth(textBrowser_25->sizePolicy().hasHeightForWidth());
        textBrowser_25->setSizePolicy(sizePolicy);
        textBrowser_25->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_35->addWidget(textBrowser_25);

        pushButton_35 = new QPushButton(verticalLayoutWidget_2);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));

        horizontalLayout_35->addWidget(pushButton_35);


        verticalLayout_3->addLayout(horizontalLayout_35);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        horizontalLayout_36->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_36->setContentsMargins(-1, -1, -1, 12);
        label_47 = new QLabel(verticalLayoutWidget_2);
        label_47->setObjectName(QStringLiteral("label_47"));

        horizontalLayout_36->addWidget(label_47);

        textBrowser_26 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_26->setObjectName(QStringLiteral("textBrowser_26"));
        sizePolicy.setHeightForWidth(textBrowser_26->sizePolicy().hasHeightForWidth());
        textBrowser_26->setSizePolicy(sizePolicy);
        textBrowser_26->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_36->addWidget(textBrowser_26);

        pushButton_36 = new QPushButton(verticalLayoutWidget_2);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));

        horizontalLayout_36->addWidget(pushButton_36);


        verticalLayout_3->addLayout(horizontalLayout_36);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_18->setContentsMargins(-1, -1, -1, 12);
        label_28 = new QLabel(verticalLayoutWidget_2);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_18->addWidget(label_28);

        textBrowser_8 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        sizePolicy.setHeightForWidth(textBrowser_8->sizePolicy().hasHeightForWidth());
        textBrowser_8->setSizePolicy(sizePolicy);
        textBrowser_8->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_18->addWidget(textBrowser_8);

        pushButton_18 = new QPushButton(verticalLayoutWidget_2);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));

        horizontalLayout_18->addWidget(pushButton_18);


        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        horizontalLayout_37->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_37->setContentsMargins(-1, -1, -1, 12);
        label_29 = new QLabel(verticalLayoutWidget_2);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_37->addWidget(label_29);

        textBrowser_27 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_27->setObjectName(QStringLiteral("textBrowser_27"));
        sizePolicy.setHeightForWidth(textBrowser_27->sizePolicy().hasHeightForWidth());
        textBrowser_27->setSizePolicy(sizePolicy);
        textBrowser_27->setMaximumSize(QSize(16777215, 16777195));

        horizontalLayout_37->addWidget(textBrowser_27);

        pushButton_37 = new QPushButton(verticalLayoutWidget_2);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));

        horizontalLayout_37->addWidget(pushButton_37);


        verticalLayout_3->addLayout(horizontalLayout_37);

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
        label_24->setText(QApplication::translate("Configure", "Simulator Path:", 0));
        textBrowser_7->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_14->setText(QApplication::translate("Configure", "Browse", 0));
        label_39->setText(QApplication::translate("Configure", "Perl Path:", 0));
        textBrowser_18->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_28->setText(QApplication::translate("Configure", "Browse", 0));
        label_40->setText(QApplication::translate("Configure", "Python Path:", 0));
        textBrowser_19->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_29->setText(QApplication::translate("Configure", "Browse", 0));
        label_41->setText(QApplication::translate("Configure", "LD_Preload:", 0));
        textBrowser_20->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_30->setText(QApplication::translate("Configure", "Browse", 0));
        label_42->setText(QApplication::translate("Configure", "Unisims_ver:", 0));
        textBrowser_21->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_31->setText(QApplication::translate("Configure", "Browse", 0));
        label_43->setText(QApplication::translate("Configure", "SecureIp:", 0));
        textBrowser_22->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_32->setText(QApplication::translate("Configure", "Browse", 0));
        label_44->setText(QApplication::translate("Configure", "Simprims_ver:", 0));
        textBrowser_23->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_33->setText(QApplication::translate("Configure", "Browse", 0));
        label_45->setText(QApplication::translate("Configure", "xilinxcorelib_ver:", 0));
        textBrowser_24->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_34->setText(QApplication::translate("Configure", "Browse", 0));
        label_25->setText(QApplication::translate("Configure", "glbl Path:", 0));
        textBrowser_3->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_17->setText(QApplication::translate("Configure", "Browse", 0));
        label_46->setText(QApplication::translate("Configure", "runDir Path:", 0));
        textBrowser_25->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_35->setText(QApplication::translate("Configure", "Browse", 0));
        label_47->setText(QApplication::translate("Configure", "LogDir Path:", 0));
        textBrowser_26->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_36->setText(QApplication::translate("Configure", "Browse", 0));
        label_28->setText(QApplication::translate("Configure", "LM_LICENSE_FILE:", 0));
        textBrowser_8->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_18->setText(QApplication::translate("Configure", "Browse", 0));
        label_29->setText(QApplication::translate("Configure", "LD_PRELOAD:", 0));
        textBrowser_27->setHtml(QApplication::translate("Configure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Text</p></body></html>", 0));
        pushButton_37->setText(QApplication::translate("Configure", "Browse", 0));
        Configure->setTabText(Configure->indexOf(sim_tab), QApplication::translate("Configure", "Simulation Environment", 0));
        Configure->setTabText(Configure->indexOf(run_tab), QApplication::translate("Configure", "Test Run", 0));
    } // retranslateUi

};

namespace Ui {
    class Configure: public Ui_Configure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_H
