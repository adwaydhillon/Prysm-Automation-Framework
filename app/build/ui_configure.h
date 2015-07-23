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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Configure
{
public:
    QWidget *sim_tab;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QWidget *run_tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;

    void setupUi(QTabWidget *Configure)
    {
        if (Configure->objectName().isEmpty())
            Configure->setObjectName(QStringLiteral("Configure"));
        Configure->resize(1101, 746);
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
        formLayoutWidget_2 = new QWidget(sim_tab);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 0, 1011, 691));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        Configure->addTab(sim_tab, QString());
        run_tab = new QWidget();
        run_tab->setObjectName(QStringLiteral("run_tab"));
        formLayoutWidget = new QWidget(run_tab);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 1011, 681));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        Configure->addTab(run_tab, QString());

        retranslateUi(Configure);

        Configure->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Configure);
    } // setupUi

    void retranslateUi(QTabWidget *Configure)
    {
        Configure->setWindowTitle(QApplication::translate("Configure", "TabWidget", 0));
        Configure->setTabText(Configure->indexOf(sim_tab), QApplication::translate("Configure", "Simulation Environment", 0));
        Configure->setTabText(Configure->indexOf(run_tab), QApplication::translate("Configure", "Test Run", 0));
    } // retranslateUi

};

namespace Ui {
    class Configure: public Ui_Configure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_H
