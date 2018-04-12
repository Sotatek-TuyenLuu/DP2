/********************************************************************************
** Form generated from reading UI file 'QmitkMutualInformationHistogramMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKMUTUALINFORMATIONHISTOGRAMMETRICCONTROLS_H
#define UI_QMITKMUTUALINFORMATIONHISTOGRAMMETRICCONTROLS_H

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

class Ui_QmitkMutualInformationHistogramMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel5_2;
    QLineEdit *m_NumberOfHistogramBinsMutualInformationHistogram;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkMutualInformationHistogramMetricControls)
    {
        if (QmitkMutualInformationHistogramMetricControls->objectName().isEmpty())
            QmitkMutualInformationHistogramMetricControls->setObjectName(QStringLiteral("QmitkMutualInformationHistogramMetricControls"));
        QmitkMutualInformationHistogramMetricControls->resize(201, 66);
        verticalLayout = new QVBoxLayout(QmitkMutualInformationHistogramMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel5_2 = new QLabel(QmitkMutualInformationHistogramMetricControls);
        textLabel5_2->setObjectName(QStringLiteral("textLabel5_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel5_2->setFont(font);
        textLabel5_2->setWordWrap(false);

        horizontalLayout->addWidget(textLabel5_2);

        m_NumberOfHistogramBinsMutualInformationHistogram = new QLineEdit(QmitkMutualInformationHistogramMetricControls);
        m_NumberOfHistogramBinsMutualInformationHistogram->setObjectName(QStringLiteral("m_NumberOfHistogramBinsMutualInformationHistogram"));
        m_NumberOfHistogramBinsMutualInformationHistogram->setMinimumSize(QSize(0, 20));
        m_NumberOfHistogramBinsMutualInformationHistogram->setFont(font);
        m_NumberOfHistogramBinsMutualInformationHistogram->setAlignment(Qt::AlignRight);

        horizontalLayout->addWidget(m_NumberOfHistogramBinsMutualInformationHistogram);


        verticalLayout->addLayout(horizontalLayout);

        m_ComputeGradient = new QCheckBox(QmitkMutualInformationHistogramMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkMutualInformationHistogramMetricControls);

        QMetaObject::connectSlotsByName(QmitkMutualInformationHistogramMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkMutualInformationHistogramMetricControls)
    {
        QmitkMutualInformationHistogramMetricControls->setWindowTitle(QApplication::translate("QmitkMutualInformationHistogramMetricControls", "Form", 0));
        textLabel5_2->setText(QApplication::translate("QmitkMutualInformationHistogramMetricControls", "Number of Histogram Bins:", 0));
        m_NumberOfHistogramBinsMutualInformationHistogram->setText(QApplication::translate("QmitkMutualInformationHistogramMetricControls", "256", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkMutualInformationHistogramMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkMutualInformationHistogramMetricControls: public Ui_QmitkMutualInformationHistogramMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKMUTUALINFORMATIONHISTOGRAMMETRICCONTROLS_H
