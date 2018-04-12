/********************************************************************************
** Form generated from reading UI file 'QmitkNormalizedCorrelationMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKNORMALIZEDCORRELATIONMETRICCONTROLS_H
#define UI_QMITKNORMALIZEDCORRELATIONMETRICCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkNormalizedCorrelationMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkNormalizedCorrelationMetricControls)
    {
        if (QmitkNormalizedCorrelationMetricControls->objectName().isEmpty())
            QmitkNormalizedCorrelationMetricControls->setObjectName(QStringLiteral("QmitkNormalizedCorrelationMetricControls"));
        QmitkNormalizedCorrelationMetricControls->resize(130, 38);
        verticalLayout = new QVBoxLayout(QmitkNormalizedCorrelationMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_ComputeGradient = new QCheckBox(QmitkNormalizedCorrelationMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkNormalizedCorrelationMetricControls);

        QMetaObject::connectSlotsByName(QmitkNormalizedCorrelationMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkNormalizedCorrelationMetricControls)
    {
        QmitkNormalizedCorrelationMetricControls->setWindowTitle(QApplication::translate("QmitkNormalizedCorrelationMetricControls", "Form", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkNormalizedCorrelationMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkNormalizedCorrelationMetricControls: public Ui_QmitkNormalizedCorrelationMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKNORMALIZEDCORRELATIONMETRICCONTROLS_H
