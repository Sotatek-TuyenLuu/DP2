/********************************************************************************
** Form generated from reading UI file 'QmitkMeanSquaresMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKMEANSQUARESMETRICCONTROLS_H
#define UI_QMITKMEANSQUARESMETRICCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkMeanSquaresMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkMeanSquaresMetricControls)
    {
        if (QmitkMeanSquaresMetricControls->objectName().isEmpty())
            QmitkMeanSquaresMetricControls->setObjectName(QStringLiteral("QmitkMeanSquaresMetricControls"));
        QmitkMeanSquaresMetricControls->resize(130, 38);
        verticalLayout = new QVBoxLayout(QmitkMeanSquaresMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_ComputeGradient = new QCheckBox(QmitkMeanSquaresMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkMeanSquaresMetricControls);

        QMetaObject::connectSlotsByName(QmitkMeanSquaresMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkMeanSquaresMetricControls)
    {
        QmitkMeanSquaresMetricControls->setWindowTitle(QApplication::translate("QmitkMeanSquaresMetricControls", "QmitkMeanSquaresMetricControls", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkMeanSquaresMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkMeanSquaresMetricControls: public Ui_QmitkMeanSquaresMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKMEANSQUARESMETRICCONTROLS_H
