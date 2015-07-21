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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Configure
{
public:
    QWidget *sim_tab;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *simPathLabel_2;
    QLineEdit *simPathLineEdit_2;
    QLabel *perlPathLabel_2;
    QLineEdit *perlPathLineEdit_2;
    QLabel *pythonPathLabel_2;
    QLineEdit *pythonPathLineEdit_2;
    QLabel *lM_LICENSE_FILELabel_2;
    QLineEdit *lM_LICENSE_FILELineEdit_2;
    QLabel *lD_PRELOADLabel_2;
    QLineEdit *lD_PRELOADLineEdit_2;
    QLabel *unisims_verLabel_2;
    QLineEdit *unisims_verLineEdit_2;
    QLabel *secureipLabel_2;
    QLineEdit *secureipLineEdit_2;
    QLabel *simprims_verLabel_2;
    QLineEdit *simprims_verLineEdit_2;
    QLabel *xilinxcorelib_verLabel_2;
    QLineEdit *xilinxcorelib_verLineEdit_2;
    QLabel *glblPathLabel_2;
    QLineEdit *glblPathLineEdit_2;
    QLabel *runDirPathLabel_2;
    QLineEdit *runDirPathLineEdit_2;
    QLabel *logDirPathLabel_2;
    QLineEdit *logDirPathLineEdit_2;
    QWidget *run_tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *simPathLabel;
    QLineEdit *simPathLineEdit;
    QLabel *perlPathLabel;
    QLineEdit *perlPathLineEdit;
    QLabel *pythonPathLabel;
    QLineEdit *pythonPathLineEdit;
    QLabel *lM_LICENSE_FILELabel;
    QLineEdit *lM_LICENSE_FILELineEdit;
    QLabel *lD_PRELOADLabel;
    QLineEdit *lD_PRELOADLineEdit;
    QLabel *unisims_verLabel;
    QLineEdit *unisims_verLineEdit;
    QLabel *secureipLabel;
    QLineEdit *secureipLineEdit;
    QLabel *simprims_verLabel;
    QLineEdit *simprims_verLineEdit;
    QLabel *xilinxcorelib_verLabel;
    QLineEdit *xilinxcorelib_verLineEdit;
    QLabel *glblPathLabel;
    QLineEdit *glblPathLineEdit;
    QLabel *runDirPathLabel;
    QLineEdit *runDirPathLineEdit;
    QLabel *logDirPathLabel;
    QLineEdit *logDirPathLineEdit;
    QLabel *waveDumpLabel;
    QLineEdit *waveDumpLineEdit;
    QLabel *modeLabel;
    QLineEdit *modeLineEdit;
    QLabel *simResFileLabel;
    QLineEdit *simResFileLineEdit;

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
        formLayoutWidget_2 = new QWidget(sim_tab);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 0, 851, 561));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        simPathLabel_2 = new QLabel(formLayoutWidget_2);
        simPathLabel_2->setObjectName(QStringLiteral("simPathLabel_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, simPathLabel_2);

        simPathLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        simPathLineEdit_2->setObjectName(QStringLiteral("simPathLineEdit_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, simPathLineEdit_2);

        perlPathLabel_2 = new QLabel(formLayoutWidget_2);
        perlPathLabel_2->setObjectName(QStringLiteral("perlPathLabel_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, perlPathLabel_2);

        perlPathLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        perlPathLineEdit_2->setObjectName(QStringLiteral("perlPathLineEdit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, perlPathLineEdit_2);

        pythonPathLabel_2 = new QLabel(formLayoutWidget_2);
        pythonPathLabel_2->setObjectName(QStringLiteral("pythonPathLabel_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pythonPathLabel_2);

        pythonPathLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        pythonPathLineEdit_2->setObjectName(QStringLiteral("pythonPathLineEdit_2"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pythonPathLineEdit_2);

        lM_LICENSE_FILELabel_2 = new QLabel(formLayoutWidget_2);
        lM_LICENSE_FILELabel_2->setObjectName(QStringLiteral("lM_LICENSE_FILELabel_2"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, lM_LICENSE_FILELabel_2);

        lM_LICENSE_FILELineEdit_2 = new QLineEdit(formLayoutWidget_2);
        lM_LICENSE_FILELineEdit_2->setObjectName(QStringLiteral("lM_LICENSE_FILELineEdit_2"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lM_LICENSE_FILELineEdit_2);

        lD_PRELOADLabel_2 = new QLabel(formLayoutWidget_2);
        lD_PRELOADLabel_2->setObjectName(QStringLiteral("lD_PRELOADLabel_2"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, lD_PRELOADLabel_2);

        lD_PRELOADLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        lD_PRELOADLineEdit_2->setObjectName(QStringLiteral("lD_PRELOADLineEdit_2"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lD_PRELOADLineEdit_2);

        unisims_verLabel_2 = new QLabel(formLayoutWidget_2);
        unisims_verLabel_2->setObjectName(QStringLiteral("unisims_verLabel_2"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, unisims_verLabel_2);

        unisims_verLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        unisims_verLineEdit_2->setObjectName(QStringLiteral("unisims_verLineEdit_2"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, unisims_verLineEdit_2);

        secureipLabel_2 = new QLabel(formLayoutWidget_2);
        secureipLabel_2->setObjectName(QStringLiteral("secureipLabel_2"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, secureipLabel_2);

        secureipLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        secureipLineEdit_2->setObjectName(QStringLiteral("secureipLineEdit_2"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, secureipLineEdit_2);

        simprims_verLabel_2 = new QLabel(formLayoutWidget_2);
        simprims_verLabel_2->setObjectName(QStringLiteral("simprims_verLabel_2"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, simprims_verLabel_2);

        simprims_verLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        simprims_verLineEdit_2->setObjectName(QStringLiteral("simprims_verLineEdit_2"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, simprims_verLineEdit_2);

        xilinxcorelib_verLabel_2 = new QLabel(formLayoutWidget_2);
        xilinxcorelib_verLabel_2->setObjectName(QStringLiteral("xilinxcorelib_verLabel_2"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, xilinxcorelib_verLabel_2);

        xilinxcorelib_verLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        xilinxcorelib_verLineEdit_2->setObjectName(QStringLiteral("xilinxcorelib_verLineEdit_2"));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, xilinxcorelib_verLineEdit_2);

        glblPathLabel_2 = new QLabel(formLayoutWidget_2);
        glblPathLabel_2->setObjectName(QStringLiteral("glblPathLabel_2"));

        formLayout_2->setWidget(10, QFormLayout::LabelRole, glblPathLabel_2);

        glblPathLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        glblPathLineEdit_2->setObjectName(QStringLiteral("glblPathLineEdit_2"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, glblPathLineEdit_2);

        runDirPathLabel_2 = new QLabel(formLayoutWidget_2);
        runDirPathLabel_2->setObjectName(QStringLiteral("runDirPathLabel_2"));

        formLayout_2->setWidget(11, QFormLayout::LabelRole, runDirPathLabel_2);

        runDirPathLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        runDirPathLineEdit_2->setObjectName(QStringLiteral("runDirPathLineEdit_2"));

        formLayout_2->setWidget(11, QFormLayout::FieldRole, runDirPathLineEdit_2);

        logDirPathLabel_2 = new QLabel(formLayoutWidget_2);
        logDirPathLabel_2->setObjectName(QStringLiteral("logDirPathLabel_2"));

        formLayout_2->setWidget(12, QFormLayout::LabelRole, logDirPathLabel_2);

        logDirPathLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        logDirPathLineEdit_2->setObjectName(QStringLiteral("logDirPathLineEdit_2"));

        formLayout_2->setWidget(12, QFormLayout::FieldRole, logDirPathLineEdit_2);

        Configure->addTab(sim_tab, QString());
        run_tab = new QWidget();
        run_tab->setObjectName(QStringLiteral("run_tab"));
        formLayoutWidget = new QWidget(run_tab);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 851, 561));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        simPathLabel = new QLabel(formLayoutWidget);
        simPathLabel->setObjectName(QStringLiteral("simPathLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, simPathLabel);

        simPathLineEdit = new QLineEdit(formLayoutWidget);
        simPathLineEdit->setObjectName(QStringLiteral("simPathLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, simPathLineEdit);

        perlPathLabel = new QLabel(formLayoutWidget);
        perlPathLabel->setObjectName(QStringLiteral("perlPathLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, perlPathLabel);

        perlPathLineEdit = new QLineEdit(formLayoutWidget);
        perlPathLineEdit->setObjectName(QStringLiteral("perlPathLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, perlPathLineEdit);

        pythonPathLabel = new QLabel(formLayoutWidget);
        pythonPathLabel->setObjectName(QStringLiteral("pythonPathLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pythonPathLabel);

        pythonPathLineEdit = new QLineEdit(formLayoutWidget);
        pythonPathLineEdit->setObjectName(QStringLiteral("pythonPathLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pythonPathLineEdit);

        lM_LICENSE_FILELabel = new QLabel(formLayoutWidget);
        lM_LICENSE_FILELabel->setObjectName(QStringLiteral("lM_LICENSE_FILELabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lM_LICENSE_FILELabel);

        lM_LICENSE_FILELineEdit = new QLineEdit(formLayoutWidget);
        lM_LICENSE_FILELineEdit->setObjectName(QStringLiteral("lM_LICENSE_FILELineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lM_LICENSE_FILELineEdit);

        lD_PRELOADLabel = new QLabel(formLayoutWidget);
        lD_PRELOADLabel->setObjectName(QStringLiteral("lD_PRELOADLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lD_PRELOADLabel);

        lD_PRELOADLineEdit = new QLineEdit(formLayoutWidget);
        lD_PRELOADLineEdit->setObjectName(QStringLiteral("lD_PRELOADLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lD_PRELOADLineEdit);

        unisims_verLabel = new QLabel(formLayoutWidget);
        unisims_verLabel->setObjectName(QStringLiteral("unisims_verLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, unisims_verLabel);

        unisims_verLineEdit = new QLineEdit(formLayoutWidget);
        unisims_verLineEdit->setObjectName(QStringLiteral("unisims_verLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, unisims_verLineEdit);

        secureipLabel = new QLabel(formLayoutWidget);
        secureipLabel->setObjectName(QStringLiteral("secureipLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, secureipLabel);

        secureipLineEdit = new QLineEdit(formLayoutWidget);
        secureipLineEdit->setObjectName(QStringLiteral("secureipLineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, secureipLineEdit);

        simprims_verLabel = new QLabel(formLayoutWidget);
        simprims_verLabel->setObjectName(QStringLiteral("simprims_verLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, simprims_verLabel);

        simprims_verLineEdit = new QLineEdit(formLayoutWidget);
        simprims_verLineEdit->setObjectName(QStringLiteral("simprims_verLineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, simprims_verLineEdit);

        xilinxcorelib_verLabel = new QLabel(formLayoutWidget);
        xilinxcorelib_verLabel->setObjectName(QStringLiteral("xilinxcorelib_verLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, xilinxcorelib_verLabel);

        xilinxcorelib_verLineEdit = new QLineEdit(formLayoutWidget);
        xilinxcorelib_verLineEdit->setObjectName(QStringLiteral("xilinxcorelib_verLineEdit"));

        formLayout->setWidget(8, QFormLayout::FieldRole, xilinxcorelib_verLineEdit);

        glblPathLabel = new QLabel(formLayoutWidget);
        glblPathLabel->setObjectName(QStringLiteral("glblPathLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, glblPathLabel);

        glblPathLineEdit = new QLineEdit(formLayoutWidget);
        glblPathLineEdit->setObjectName(QStringLiteral("glblPathLineEdit"));

        formLayout->setWidget(9, QFormLayout::FieldRole, glblPathLineEdit);

        runDirPathLabel = new QLabel(formLayoutWidget);
        runDirPathLabel->setObjectName(QStringLiteral("runDirPathLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, runDirPathLabel);

        runDirPathLineEdit = new QLineEdit(formLayoutWidget);
        runDirPathLineEdit->setObjectName(QStringLiteral("runDirPathLineEdit"));

        formLayout->setWidget(10, QFormLayout::FieldRole, runDirPathLineEdit);

        logDirPathLabel = new QLabel(formLayoutWidget);
        logDirPathLabel->setObjectName(QStringLiteral("logDirPathLabel"));

        formLayout->setWidget(11, QFormLayout::LabelRole, logDirPathLabel);

        logDirPathLineEdit = new QLineEdit(formLayoutWidget);
        logDirPathLineEdit->setObjectName(QStringLiteral("logDirPathLineEdit"));

        formLayout->setWidget(11, QFormLayout::FieldRole, logDirPathLineEdit);

        waveDumpLabel = new QLabel(formLayoutWidget);
        waveDumpLabel->setObjectName(QStringLiteral("waveDumpLabel"));

        formLayout->setWidget(12, QFormLayout::LabelRole, waveDumpLabel);

        waveDumpLineEdit = new QLineEdit(formLayoutWidget);
        waveDumpLineEdit->setObjectName(QStringLiteral("waveDumpLineEdit"));

        formLayout->setWidget(12, QFormLayout::FieldRole, waveDumpLineEdit);

        modeLabel = new QLabel(formLayoutWidget);
        modeLabel->setObjectName(QStringLiteral("modeLabel"));

        formLayout->setWidget(13, QFormLayout::LabelRole, modeLabel);

        modeLineEdit = new QLineEdit(formLayoutWidget);
        modeLineEdit->setObjectName(QStringLiteral("modeLineEdit"));

        formLayout->setWidget(13, QFormLayout::FieldRole, modeLineEdit);

        simResFileLabel = new QLabel(formLayoutWidget);
        simResFileLabel->setObjectName(QStringLiteral("simResFileLabel"));

        formLayout->setWidget(14, QFormLayout::LabelRole, simResFileLabel);

        simResFileLineEdit = new QLineEdit(formLayoutWidget);
        simResFileLineEdit->setObjectName(QStringLiteral("simResFileLineEdit"));

        formLayout->setWidget(14, QFormLayout::FieldRole, simResFileLineEdit);

        Configure->addTab(run_tab, QString());

        retranslateUi(Configure);

        Configure->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Configure);
    } // setupUi

    void retranslateUi(QTabWidget *Configure)
    {
        Configure->setWindowTitle(QApplication::translate("Configure", "TabWidget", 0));
        simPathLabel_2->setText(QApplication::translate("Configure", "simPath:", 0));
        perlPathLabel_2->setText(QApplication::translate("Configure", "perlPath:", 0));
        pythonPathLabel_2->setText(QApplication::translate("Configure", "pythonPath:", 0));
        lM_LICENSE_FILELabel_2->setText(QApplication::translate("Configure", "LM_LICENSE_FILE:", 0));
        lD_PRELOADLabel_2->setText(QApplication::translate("Configure", "LD_PRELOAD:", 0));
        unisims_verLabel_2->setText(QApplication::translate("Configure", "unisims_ver:", 0));
        secureipLabel_2->setText(QApplication::translate("Configure", "secureip:", 0));
        simprims_verLabel_2->setText(QApplication::translate("Configure", "simprims_ver:", 0));
        xilinxcorelib_verLabel_2->setText(QApplication::translate("Configure", "xilinxcorelib_ver:", 0));
        glblPathLabel_2->setText(QApplication::translate("Configure", "glblPath:", 0));
        runDirPathLabel_2->setText(QApplication::translate("Configure", "runDirPath:", 0));
        logDirPathLabel_2->setText(QApplication::translate("Configure", "logDirPath:", 0));
        Configure->setTabText(Configure->indexOf(sim_tab), QApplication::translate("Configure", "Simulation Environment", 0));
        simPathLabel->setText(QApplication::translate("Configure", "RTL_path:", 0));
        perlPathLabel->setText(QApplication::translate("Configure", "RTL_memLoadPath:", 0));
        pythonPathLabel->setText(QApplication::translate("Configure", "DV_path:", 0));
        lM_LICENSE_FILELabel->setText(QApplication::translate("Configure", "modelsPath:", 0));
        lD_PRELOADLabel->setText(QApplication::translate("Configure", "TB_scriptsPath:", 0));
        unisims_verLabel->setText(QApplication::translate("Configure", "toolScriptsPath:", 0));
        secureipLabel->setText(QApplication::translate("Configure", "suitePath:", 0));
        simprims_verLabel->setText(QApplication::translate("Configure", "prepFile:", 0));
        xilinxcorelib_verLabel->setText(QApplication::translate("Configure", "postProcFile:", 0));
        glblPathLabel->setText(QApplication::translate("Configure", "topModule:", 0));
        runDirPathLabel->setText(QApplication::translate("Configure", "coverEn:", 0));
        logDirPathLabel->setText(QApplication::translate("Configure", "optEn:", 0));
        waveDumpLabel->setText(QApplication::translate("Configure", "waveDump:", 0));
        modeLabel->setText(QApplication::translate("Configure", "mode:", 0));
        simResFileLabel->setText(QApplication::translate("Configure", "simResFile:", 0));
        Configure->setTabText(Configure->indexOf(run_tab), QApplication::translate("Configure", "Test Run", 0));
    } // retranslateUi

};

namespace Ui {
    class Configure: public Ui_Configure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_H
