/********************************************************************************
** Form generated from reading UI file 'QmitkMatchCardinalityMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKMATCHCARDINALITYMETRICCONTROLS_H
#define UI_QMITKMATCHCARDINALITYMETRICCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkMatchCardinalityMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkMatchCardinalityMetricControls)
    {
        if (QmitkMatchCardinalityMetricControls->objectName().isEmpty())
            QmitkMatchCardinalityMetricControls->setObjectName(QStringLiteral("QmitkMatchCardinalityMetricControls"));
        QmitkMatchCardinalityMetricControls->resize(130, 38);
        verticalLayout = new QVBoxLayout(QmitkMatchCardinalityMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_ComputeGradient = new QCheckBox(QmitkMatchCardinalityMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkMatchCardinalityMetricControls);

        QMetaObject::connectSlotsByName(QmitkMatchCardinalityMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkMatchCardinalityMetricControls)
    {
        QmitkMatchCardinalityMetricControls->setWindowTitle(QApplication::translate("QmitkMatchCardinalityMetricControls", "Form", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkMatchCardinalityMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkMatchCardinalityMetricControls: public Ui_QmitkMatchCardinalityMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKMATCHCARDINALITYMETRICCONTROLS_H
