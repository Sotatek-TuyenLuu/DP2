/********************************************************************************
** Form generated from reading UI file 'QmitkConjugateGradientOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKCONJUGATEGRADIENTOPTIMIZERCONTROLS_H
#define UI_QMITKCONJUGATEGRADIENTOPTIMIZERCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkConjugateGradientOptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkConjugateGradientOptimizerControls)
    {
        if (QmitkConjugateGradientOptimizerControls->objectName().isEmpty())
            QmitkConjugateGradientOptimizerControls->setObjectName(QStringLiteral("QmitkConjugateGradientOptimizerControls"));
        QmitkConjugateGradientOptimizerControls->resize(162, 38);
        verticalLayout = new QVBoxLayout(QmitkConjugateGradientOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_Maximize = new QCheckBox(QmitkConjugateGradientOptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkConjugateGradientOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkConjugateGradientOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkConjugateGradientOptimizerControls)
    {
        QmitkConjugateGradientOptimizerControls->setWindowTitle(QApplication::translate("QmitkConjugateGradientOptimizerControls", "Form", 0));
        m_Maximize->setText(QApplication::translate("QmitkConjugateGradientOptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkConjugateGradientOptimizerControls: public Ui_QmitkConjugateGradientOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKCONJUGATEGRADIENTOPTIMIZERCONTROLS_H
