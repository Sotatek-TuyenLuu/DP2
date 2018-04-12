/********************************************************************************
** Form generated from reading UI file 'QmitkNormalizedMutualInformationHistogramMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKNORMALIZEDMUTUALINFORMATIONHISTOGRAMMETRICCONTROLS_H
#define UI_QMITKNORMALIZEDMUTUALINFORMATIONHISTOGRAMMETRICCONTROLS_H

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

class Ui_QmitkNormalizedMutualInformationHistogramMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1_5;
    QLineEdit *m_NumberOfHistogramBinsNormalizedMutualInformationHistogram;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkNormalizedMutualInformationHistogramMetricControls)
    {
        if (QmitkNormalizedMutualInformationHistogramMetricControls->objectName().isEmpty())
            QmitkNormalizedMutualInformationHistogramMetricControls->setObjectName(QStringLiteral("QmitkNormalizedMutualInformationHistogramMetricControls"));
        QmitkNormalizedMutualInformationHistogramMetricControls->resize(201, 66);
        verticalLayout = new QVBoxLayout(QmitkNormalizedMutualInformationHistogramMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1_5 = new QLabel(QmitkNormalizedMutualInformationHistogramMetricControls);
        textLabel1_5->setObjectName(QStringLiteral("textLabel1_5"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_5->setFont(font);
        textLabel1_5->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1_5);

        m_NumberOfHistogramBinsNormalizedMutualInformationHistogram = new QLineEdit(QmitkNormalizedMutualInformationHistogramMetricControls);
        m_NumberOfHistogramBinsNormalizedMutualInformationHistogram->setObjectName(QStringLiteral("m_NumberOfHistogramBinsNormalizedMutualInformationHistogram"));
        m_NumberOfHistogramBinsNormalizedMutualInformationHistogram->setMinimumSize(QSize(0, 20));
        m_NumberOfHistogramBinsNormalizedMutualInformationHistogram->setFont(font);
        m_NumberOfHistogramBinsNormalizedMutualInformationHistogram->setAlignment(Qt::AlignRight);

        horizontalLayout->addWidget(m_NumberOfHistogramBinsNormalizedMutualInformationHistogram);


        verticalLayout->addLayout(horizontalLayout);

        m_ComputeGradient = new QCheckBox(QmitkNormalizedMutualInformationHistogramMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkNormalizedMutualInformationHistogramMetricControls);

        QMetaObject::connectSlotsByName(QmitkNormalizedMutualInformationHistogramMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkNormalizedMutualInformationHistogramMetricControls)
    {
        QmitkNormalizedMutualInformationHistogramMetricControls->setWindowTitle(QApplication::translate("QmitkNormalizedMutualInformationHistogramMetricControls", "Form", 0));
        textLabel1_5->setText(QApplication::translate("QmitkNormalizedMutualInformationHistogramMetricControls", "Number of Histogram Bins:", 0));
        m_NumberOfHistogramBinsNormalizedMutualInformationHistogram->setText(QApplication::translate("QmitkNormalizedMutualInformationHistogramMetricControls", "256", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkNormalizedMutualInformationHistogramMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkNormalizedMutualInformationHistogramMetricControls: public Ui_QmitkNormalizedMutualInformationHistogramMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKNORMALIZEDMUTUALINFORMATIONHISTOGRAMMETRICCONTROLS_H
