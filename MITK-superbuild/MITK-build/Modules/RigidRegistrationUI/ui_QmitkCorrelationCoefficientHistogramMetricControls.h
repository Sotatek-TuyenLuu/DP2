/********************************************************************************
** Form generated from reading UI file 'QmitkCorrelationCoefficientHistogramMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKCORRELATIONCOEFFICIENTHISTOGRAMMETRICCONTROLS_H
#define UI_QMITKCORRELATIONCOEFFICIENTHISTOGRAMMETRICCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkCorrelationCoefficientHistogramMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel3_3;
    QLineEdit *m_NumberOfHistogramBinsCorrelationCoefficientHistogram;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkCorrelationCoefficientHistogramMetricControls)
    {
        if (QmitkCorrelationCoefficientHistogramMetricControls->objectName().isEmpty())
            QmitkCorrelationCoefficientHistogramMetricControls->setObjectName(QStringLiteral("QmitkCorrelationCoefficientHistogramMetricControls"));
        QmitkCorrelationCoefficientHistogramMetricControls->resize(201, 66);
        verticalLayout = new QVBoxLayout(QmitkCorrelationCoefficientHistogramMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel3_3 = new QLabel(QmitkCorrelationCoefficientHistogramMetricControls);
        textLabel3_3->setObjectName(QStringLiteral("textLabel3_3"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel3_3->setFont(font);
        textLabel3_3->setWordWrap(false);

        horizontalLayout->addWidget(textLabel3_3);

        m_NumberOfHistogramBinsCorrelationCoefficientHistogram = new QLineEdit(QmitkCorrelationCoefficientHistogramMetricControls);
        m_NumberOfHistogramBinsCorrelationCoefficientHistogram->setObjectName(QStringLiteral("m_NumberOfHistogramBinsCorrelationCoefficientHistogram"));
        m_NumberOfHistogramBinsCorrelationCoefficientHistogram->setMinimumSize(QSize(0, 20));
        m_NumberOfHistogramBinsCorrelationCoefficientHistogram->setFont(font);
        m_NumberOfHistogramBinsCorrelationCoefficientHistogram->setAlignment(Qt::AlignRight);

        horizontalLayout->addWidget(m_NumberOfHistogramBinsCorrelationCoefficientHistogram);


        verticalLayout->addLayout(horizontalLayout);

        m_ComputeGradient = new QCheckBox(QmitkCorrelationCoefficientHistogramMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkCorrelationCoefficientHistogramMetricControls);

        QMetaObject::connectSlotsByName(QmitkCorrelationCoefficientHistogramMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkCorrelationCoefficientHistogramMetricControls)
    {
        QmitkCorrelationCoefficientHistogramMetricControls->setWindowTitle(QApplication::translate("QmitkCorrelationCoefficientHistogramMetricControls", "Form", 0));
        textLabel3_3->setText(QApplication::translate("QmitkCorrelationCoefficientHistogramMetricControls", "Number of Histogram Bins:", 0));
        m_NumberOfHistogramBinsCorrelationCoefficientHistogram->setText(QApplication::translate("QmitkCorrelationCoefficientHistogramMetricControls", "256", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkCorrelationCoefficientHistogramMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkCorrelationCoefficientHistogramMetricControls: public Ui_QmitkCorrelationCoefficientHistogramMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKCORRELATIONCOEFFICIENTHISTOGRAMMETRICCONTROLS_H
