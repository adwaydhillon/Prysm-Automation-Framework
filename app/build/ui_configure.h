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
    QLineEdit *simPathLineEdit;
    QLabel *perlPathLabel_2;
    QLineEdit *perlPathLineEdit_2;
    QLabel *pythonPathLabel_2;
    QLineEdit *pythonPathLineEdit;
    QLabel *lM_LICENSE_FILELabel_2;
    QLineEdit *lM_LICENSE_FILELineEdit;
    QLabel *lD_PRELOADLabel_2;
    QLineEdit *lD_PRELOADLineEdit;
    QLabel *unisims_verLabel_2;
    QLineEdit *unisims_verLineEdit;
    QLabel *secureipLabel_2;
    QLineEdit *secureipLineEdit;
    QLabel *simprims_verLabel_2;
    QLineEdit *simprims_verLineEdit;
    QLabel *xilinxcorelib_verLabel_2;
    QLineEdit *xilinxcorelib_verLineEdit;
    QLabel *glblPathLabel_2;
    QLineEdit *glblPathLineEdit;
    QLabel *runDirPathLabel_2;
    QLineEdit *runDirPathLineEdit;
    QLabel *logDirPathLabel_2;
    QLineEdit *logDirPathLineEdit;
    QWidget *run_tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *simPathLabel;
    QLineEdit *RTL_pathLineEdit;
    QLabel *RTL_memLoadPathLabel;
    QLineEdit *perlPathLineEdit;
    QLabel *pythonPathLabel;
    QLineEdit *DV_PathLineEdit;
    QLabel *lM_LICENSE_FILELabel;
    QLineEdit *modelsPathLineEdit;
    QLabel *lD_PRELOADLabel;
    QLineEdit *TB_scriptsPathLineEdit;
    QLabel *unisims_verLabel;
    QLineEdit *toolScriptsPathLineEdit;
    QLabel *secureipLabel;
    QLineEdit *suitePathLineEdit;
    QLabel *simprims_verLabel;
    QLineEdit *prepFileLineEdit;
    QLabel *xilinxcorelib_verLabel;
    QLineEdit *postProcFileLineEdit;
    QLabel *glblPathLabel;
    QLineEdit *topModuleLineEdit;
    QLabel *runDirPathLabel;
    QLineEdit *coverEnLineEdit;
    QLabel *logDirPathLabel;
    QLineEdit *optEnLineEdit;
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
        formLayoutWidget_2->setGeometry(QRect(0, 0, 1011, 391));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        simPathLabel_2 = new QLabel(formLayoutWidget_2);
        simPathLabel_2->setObjectName(QStringLiteral("simPathLabel_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, simPathLabel_2);

        simPathLineEdit = new QLineEdit(formLayoutWidget_2);
        simPathLineEdit->setObjectName(QStringLiteral("simPathLineEdit"));
        simPathLineEdit->setMinimumSize(QSize(500, 0));
        simPathLineEdit->setMaximumSize(QSize(350, 16777215));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, simPathLineEdit);

        perlPathLabel_2 = new QLabel(formLayoutWidget_2);
        perlPathLabel_2->setObjectName(QStringLiteral("perlPathLabel_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, perlPathLabel_2);

        perlPathLineEdit_2 = new QLineEdit(formLayoutWidget_2);
        perlPathLineEdit_2->setObjectName(QStringLiteral("perlPathLineEdit_2"));
        perlPathLineEdit_2->setMinimumSize(QSize(500, 0));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, perlPathLineEdit_2);

        pythonPathLabel_2 = new QLabel(formLayoutWidget_2);
        pythonPathLabel_2->setObjectName(QStringLiteral("pythonPathLabel_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pythonPathLabel_2);

        pythonPathLineEdit = new QLineEdit(formLayoutWidget_2);
        pythonPathLineEdit->setObjectName(QStringLiteral("pythonPathLineEdit"));
        pythonPathLineEdit->setMinimumSize(QSize(500, 0));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pythonPathLineEdit);

        lM_LICENSE_FILELabel_2 = new QLabel(formLayoutWidget_2);
        lM_LICENSE_FILELabel_2->setObjectName(QStringLiteral("lM_LICENSE_FILELabel_2"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, lM_LICENSE_FILELabel_2);

        lM_LICENSE_FILELineEdit = new QLineEdit(formLayoutWidget_2);
        lM_LICENSE_FILELineEdit->setObjectName(QStringLiteral("lM_LICENSE_FILELineEdit"));
        lM_LICENSE_FILELineEdit->setMinimumSize(QSize(500, 0));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lM_LICENSE_FILELineEdit);

        lD_PRELOADLabel_2 = new QLabel(formLayoutWidget_2);
        lD_PRELOADLabel_2->setObjectName(QStringLiteral("lD_PRELOADLabel_2"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, lD_PRELOADLabel_2);

        lD_PRELOADLineEdit = new QLineEdit(formLayoutWidget_2);
        lD_PRELOADLineEdit->setObjectName(QStringLiteral("lD_PRELOADLineEdit"));
        lD_PRELOADLineEdit->setMinimumSize(QSize(500, 0));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lD_PRELOADLineEdit);

        unisims_verLabel_2 = new QLabel(formLayoutWidget_2);
        unisims_verLabel_2->setObjectName(QStringLiteral("unisims_verLabel_2"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, unisims_verLabel_2);

        unisims_verLineEdit = new QLineEdit(formLayoutWidget_2);
        unisims_verLineEdit->setObjectName(QStringLiteral("unisims_verLineEdit"));
        unisims_verLineEdit->setMinimumSize(QSize(500, 0));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, unisims_verLineEdit);

        secureipLabel_2 = new QLabel(formLayoutWidget_2);
        secureipLabel_2->setObjectName(QStringLiteral("secureipLabel_2"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, secureipLabel_2);

        secureipLineEdit = new QLineEdit(formLayoutWidget_2);
        secureipLineEdit->setObjectName(QStringLiteral("secureipLineEdit"));
        secureipLineEdit->setMinimumSize(QSize(500, 0));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, secureipLineEdit);

        simprims_verLabel_2 = new QLabel(formLayoutWidget_2);
        simprims_verLabel_2->setObjectName(QStringLiteral("simprims_verLabel_2"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, simprims_verLabel_2);

        simprims_verLineEdit = new QLineEdit(formLayoutWidget_2);
        simprims_verLineEdit->setObjectName(QStringLiteral("simprims_verLineEdit"));
        simprims_verLineEdit->setMinimumSize(QSize(500, 0));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, simprims_verLineEdit);

        xilinxcorelib_verLabel_2 = new QLabel(formLayoutWidget_2);
        xilinxcorelib_verLabel_2->setObjectName(QStringLiteral("xilinxcorelib_verLabel_2"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, xilinxcorelib_verLabel_2);

        xilinxcorelib_verLineEdit = new QLineEdit(formLayoutWidget_2);
        xilinxcorelib_verLineEdit->setObjectName(QStringLiteral("xilinxcorelib_verLineEdit"));
        xilinxcorelib_verLineEdit->setMinimumSize(QSize(500, 0));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, xilinxcorelib_verLineEdit);

        glblPathLabel_2 = new QLabel(formLayoutWidget_2);
        glblPathLabel_2->setObjectName(QStringLiteral("glblPathLabel_2"));

        formLayout_2->setWidget(10, QFormLayout::LabelRole, glblPathLabel_2);

        glblPathLineEdit = new QLineEdit(formLayoutWidget_2);
        glblPathLineEdit->setObjectName(QStringLiteral("glblPathLineEdit"));
        glblPathLineEdit->setMinimumSize(QSize(500, 0));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, glblPathLineEdit);

        runDirPathLabel_2 = new QLabel(formLayoutWidget_2);
        runDirPathLabel_2->setObjectName(QStringLiteral("runDirPathLabel_2"));

        formLayout_2->setWidget(11, QFormLayout::LabelRole, runDirPathLabel_2);

        runDirPathLineEdit = new QLineEdit(formLayoutWidget_2);
        runDirPathLineEdit->setObjectName(QStringLiteral("runDirPathLineEdit"));
        runDirPathLineEdit->setMinimumSize(QSize(500, 0));

        formLayout_2->setWidget(11, QFormLayout::FieldRole, runDirPathLineEdit);

        logDirPathLabel_2 = new QLabel(formLayoutWidget_2);
        logDirPathLabel_2->setObjectName(QStringLiteral("logDirPathLabel_2"));

        formLayout_2->setWidget(12, QFormLayout::LabelRole, logDirPathLabel_2);

        logDirPathLineEdit = new QLineEdit(formLayoutWidget_2);
        logDirPathLineEdit->setObjectName(QStringLiteral("logDirPathLineEdit"));
        logDirPathLineEdit->setMinimumSize(QSize(500, 0));

        formLayout_2->setWidget(12, QFormLayout::FieldRole, logDirPathLineEdit);

        Configure->addTab(sim_tab, QString());
        run_tab = new QWidget();
        run_tab->setObjectName(QStringLiteral("run_tab"));
        formLayoutWidget = new QWidget(run_tab);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 1011, 721));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        simPathLabel = new QLabel(formLayoutWidget);
        simPathLabel->setObjectName(QStringLiteral("simPathLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, simPathLabel);

        RTL_pathLineEdit = new QLineEdit(formLayoutWidget);
        RTL_pathLineEdit->setObjectName(QStringLiteral("RTL_pathLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, RTL_pathLineEdit);

        RTL_memLoadPathLabel = new QLabel(formLayoutWidget);
        RTL_memLoadPathLabel->setObjectName(QStringLiteral("RTL_memLoadPathLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, RTL_memLoadPathLabel);

        perlPathLineEdit = new QLineEdit(formLayoutWidget);
        perlPathLineEdit->setObjectName(QStringLiteral("perlPathLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, perlPathLineEdit);

        pythonPathLabel = new QLabel(formLayoutWidget);
        pythonPathLabel->setObjectName(QStringLiteral("pythonPathLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pythonPathLabel);

        DV_PathLineEdit = new QLineEdit(formLayoutWidget);
        DV_PathLineEdit->setObjectName(QStringLiteral("DV_PathLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, DV_PathLineEdit);

        lM_LICENSE_FILELabel = new QLabel(formLayoutWidget);
        lM_LICENSE_FILELabel->setObjectName(QStringLiteral("lM_LICENSE_FILELabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lM_LICENSE_FILELabel);

        modelsPathLineEdit = new QLineEdit(formLayoutWidget);
        modelsPathLineEdit->setObjectName(QStringLiteral("modelsPathLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, modelsPathLineEdit);

        lD_PRELOADLabel = new QLabel(formLayoutWidget);
        lD_PRELOADLabel->setObjectName(QStringLiteral("lD_PRELOADLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lD_PRELOADLabel);

        TB_scriptsPathLineEdit = new QLineEdit(formLayoutWidget);
        TB_scriptsPathLineEdit->setObjectName(QStringLiteral("TB_scriptsPathLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, TB_scriptsPathLineEdit);

        unisims_verLabel = new QLabel(formLayoutWidget);
        unisims_verLabel->setObjectName(QStringLiteral("unisims_verLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, unisims_verLabel);

        toolScriptsPathLineEdit = new QLineEdit(formLayoutWidget);
        toolScriptsPathLineEdit->setObjectName(QStringLiteral("toolScriptsPathLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, toolScriptsPathLineEdit);

        secureipLabel = new QLabel(formLayoutWidget);
        secureipLabel->setObjectName(QStringLiteral("secureipLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, secureipLabel);

        suitePathLineEdit = new QLineEdit(formLayoutWidget);
        suitePathLineEdit->setObjectName(QStringLiteral("suitePathLineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, suitePathLineEdit);

        simprims_verLabel = new QLabel(formLayoutWidget);
        simprims_verLabel->setObjectName(QStringLiteral("simprims_verLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, simprims_verLabel);

        prepFileLineEdit = new QLineEdit(formLayoutWidget);
        prepFileLineEdit->setObjectName(QStringLiteral("prepFileLineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, prepFileLineEdit);

        xilinxcorelib_verLabel = new QLabel(formLayoutWidget);
        xilinxcorelib_verLabel->setObjectName(QStringLiteral("xilinxcorelib_verLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, xilinxcorelib_verLabel);

        postProcFileLineEdit = new QLineEdit(formLayoutWidget);
        postProcFileLineEdit->setObjectName(QStringLiteral("postProcFileLineEdit"));

        formLayout->setWidget(8, QFormLayout::FieldRole, postProcFileLineEdit);

        glblPathLabel = new QLabel(formLayoutWidget);
        glblPathLabel->setObjectName(QStringLiteral("glblPathLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, glblPathLabel);

        topModuleLineEdit = new QLineEdit(formLayoutWidget);
        topModuleLineEdit->setObjectName(QStringLiteral("topModuleLineEdit"));

        formLayout->setWidget(9, QFormLayout::FieldRole, topModuleLineEdit);

        runDirPathLabel = new QLabel(formLayoutWidget);
        runDirPathLabel->setObjectName(QStringLiteral("runDirPathLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, runDirPathLabel);

        coverEnLineEdit = new QLineEdit(formLayoutWidget);
        coverEnLineEdit->setObjectName(QStringLiteral("coverEnLineEdit"));

        formLayout->setWidget(10, QFormLayout::FieldRole, coverEnLineEdit);

        logDirPathLabel = new QLabel(formLayoutWidget);
        logDirPathLabel->setObjectName(QStringLiteral("logDirPathLabel"));

        formLayout->setWidget(11, QFormLayout::LabelRole, logDirPathLabel);

        optEnLineEdit = new QLineEdit(formLayoutWidget);
        optEnLineEdit->setObjectName(QStringLiteral("optEnLineEdit"));

        formLayout->setWidget(11, QFormLayout::FieldRole, optEnLineEdit);

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
        simPathLineEdit->setText(QString());
        simPathLineEdit->setPlaceholderText(QString());
        perlPathLabel_2->setText(QApplication::translate("Configure", "perlPath:", 0));
        perlPathLineEdit_2->setText(QString());
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
        RTL_memLoadPathLabel->setText(QApplication::translate("Configure", "RTL_memLoadPath:", 0));
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
