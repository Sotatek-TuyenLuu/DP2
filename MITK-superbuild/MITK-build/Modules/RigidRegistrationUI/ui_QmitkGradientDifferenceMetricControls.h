/********************************************************************************
** Form generated from reading UI file 'QmitkGradientDifferenceMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKGRADIENTDIFFERENCEMETRICCONTROLS_H
#define UI_QMITKGRADIENTDIFFERENCEMETRICCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkGradientDifferenceMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkGradientDifferenceMetricControls)
    {
        if (QmitkGradientDifferenceMetricControls->objectName().isEmpty())
            QmitkGradientDifferenceMetricControls->setObjectName(QStringLiteral("QmitkGradientDifferenceMetricControls"));
        QmitkGradientDifferenceMetricControls->resize(130, 38);
        verticalLayout = new QVBoxLayout(QmitkGradientDifferenceMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_ComputeGradient = new QCheckBox(QmitkGradientDifferenceMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkGradientDifferenceMetricControls);

        QMetaObject::connectSlotsByName(QmitkGradientDifferenceMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkGradientDifferenceMetricControls)
    {
        QmitkGradientDifferenceMetricControls->setWindowTitle(QApplication::translate("QmitkGradientDifferenceMetricControls", "Form", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkGradientDifferenceMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkGradientDifferenceMetricControls: public Ui_QmitkGradientDifferenceMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKGRADIENTDIFFERENCEMETRICCONTROLS_H
