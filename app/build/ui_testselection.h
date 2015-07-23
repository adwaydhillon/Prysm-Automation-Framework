/********************************************************************************
** Form generated from reading UI file 'testselection.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSELECTION_H
#define UI_TESTSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestSelection
{
public:

    void setupUi(QWidget *TestSelection)
    {
        if (TestSelection->objectName().isEmpty())
            TestSelection->setObjectName(QStringLiteral("TestSelection"));
        TestSelection->resize(788, 452);

        retranslateUi(TestSelection);

        QMetaObject::connectSlotsByName(TestSelection);
    } // setupUi

    void retranslateUi(QWidget *TestSelection)
    {
        TestSelection->setWindowTitle(QApplication::translate("TestSelection", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class TestSelection: public Ui_TestSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSELECTION_H
