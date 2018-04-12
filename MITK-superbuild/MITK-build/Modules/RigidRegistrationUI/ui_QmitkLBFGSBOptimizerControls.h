/********************************************************************************
** Form generated from reading UI file 'QmitkLBFGSBOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKLBFGSBOPTIMIZERCONTROLS_H
#define UI_QMITKLBFGSBOPTIMIZERCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkLBFGSBOptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkLBFGSBOptimizerControls)
    {
        if (QmitkLBFGSBOptimizerControls->objectName().isEmpty())
            QmitkLBFGSBOptimizerControls->setObjectName(QStringLiteral("QmitkLBFGSBOptimizerControls"));
        QmitkLBFGSBOptimizerControls->resize(162, 38);
        verticalLayout = new QVBoxLayout(QmitkLBFGSBOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_Maximize = new QCheckBox(QmitkLBFGSBOptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkLBFGSBOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkLBFGSBOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkLBFGSBOptimizerControls)
    {
        QmitkLBFGSBOptimizerControls->setWindowTitle(QApplication::translate("QmitkLBFGSBOptimizerControls", "Form", 0));
        m_Maximize->setText(QApplication::translate("QmitkLBFGSBOptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkLBFGSBOptimizerControls: public Ui_QmitkLBFGSBOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKLBFGSBOPTIMIZERCONTROLS_H
