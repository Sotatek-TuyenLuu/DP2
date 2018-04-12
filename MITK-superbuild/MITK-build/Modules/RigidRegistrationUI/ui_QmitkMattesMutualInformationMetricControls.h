/********************************************************************************
** Form generated from reading UI file 'QmitkMattesMutualInformationMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKMATTESMUTUALINFORMATIONMETRICCONTROLS_H
#define UI_QMITKMATTESMUTUALINFORMATIONMETRICCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkMattesMutualInformationMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *m_UseSamplingMattesMutualInformation;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QLineEdit *m_NumberOfSpatialSamplesMattesMutualInformation;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel2;
    QLineEdit *m_NumberOfHistogramBinsMattesMutualInformation;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkMattesMutualInformationMetricControls)
    {
        if (QmitkMattesMutualInformationMetricControls->objectName().isEmpty())
            QmitkMattesMutualInformationMetricControls->setObjectName(QStringLiteral("QmitkMattesMutualInformationMetricControls"));
        QmitkMattesMutualInformationMetricControls->resize(205, 108);
        verticalLayout = new QVBoxLayout(QmitkMattesMutualInformationMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_UseSamplingMattesMutualInformation = new QGroupBox(QmitkMattesMutualInformationMetricControls);
        m_UseSamplingMattesMutualInformation->setObjectName(QStringLiteral("m_UseSamplingMattesMutualInformation"));
        m_UseSamplingMattesMutualInformation->setFlat(true);
        m_UseSamplingMattesMutualInformation->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(m_UseSamplingMattesMutualInformation);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1 = new QLabel(m_UseSamplingMattesMutualInformation);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1->setFont(font);
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        m_NumberOfSpatialSamplesMattesMutualInformation = new QLineEdit(m_UseSamplingMattesMutualInformation);
        m_NumberOfSpatialSamplesMattesMutualInformation->setObjectName(QStringLiteral("m_NumberOfSpatialSamplesMattesMutualInformation"));
        m_NumberOfSpatialSamplesMattesMutualInformation->setMinimumSize(QSize(0, 20));
        m_NumberOfSpatialSamplesMattesMutualInformation->setFont(font);
        m_NumberOfSpatialSamplesMattesMutualInformation->setAlignment(Qt::AlignRight);

        horizontalLayout->addWidget(m_NumberOfSpatialSamplesMattesMutualInformation);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(m_UseSamplingMattesMutualInformation);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textLabel2 = new QLabel(QmitkMattesMutualInformationMetricControls);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));
        textLabel2->setFont(font);
        textLabel2->setWordWrap(false);

        horizontalLayout_2->addWidget(textLabel2);

        m_NumberOfHistogramBinsMattesMutualInformation = new QLineEdit(QmitkMattesMutualInformationMetricControls);
        m_NumberOfHistogramBinsMattesMutualInformation->setObjectName(QStringLiteral("m_NumberOfHistogramBinsMattesMutualInformation"));
        m_NumberOfHistogramBinsMattesMutualInformation->setMinimumSize(QSize(0, 20));
        m_NumberOfHistogramBinsMattesMutualInformation->setFont(font);
        m_NumberOfHistogramBinsMattesMutualInformation->setAlignment(Qt::AlignRight);

        horizontalLayout_2->addWidget(m_NumberOfHistogramBinsMattesMutualInformation);


        verticalLayout->addLayout(horizontalLayout_2);

        m_ComputeGradient = new QCheckBox(QmitkMattesMutualInformationMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkMattesMutualInformationMetricControls);

        QMetaObject::connectSlotsByName(QmitkMattesMutualInformationMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkMattesMutualInformationMetricControls)
    {
        QmitkMattesMutualInformationMetricControls->setWindowTitle(QApplication::translate("QmitkMattesMutualInformationMetricControls", "Form", 0));
        m_UseSamplingMattesMutualInformation->setTitle(QApplication::translate("QmitkMattesMutualInformationMetricControls", "Use Spatial Samples", 0));
        textLabel1->setText(QApplication::translate("QmitkMattesMutualInformationMetricControls", "Number of Spatial Samples:", 0));
        m_NumberOfSpatialSamplesMattesMutualInformation->setText(QApplication::translate("QmitkMattesMutualInformationMetricControls", "10000", 0));
        textLabel2->setText(QApplication::translate("QmitkMattesMutualInformationMetricControls", "Number of Histogram Bins:", 0));
        m_NumberOfHistogramBinsMattesMutualInformation->setText(QApplication::translate("QmitkMattesMutualInformationMetricControls", "24", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkMattesMutualInformationMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkMattesMutualInformationMetricControls: public Ui_QmitkMattesMutualInformationMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKMATTESMUTUALINFORMATIONMETRICCONTROLS_H
