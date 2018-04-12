/********************************************************************************
** Form generated from reading UI file 'QmitkMutualInformationMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKMUTUALINFORMATIONMETRICCONTROLS_H
#define UI_QMITKMUTUALINFORMATIONMETRICCONTROLS_H

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

class Ui_QmitkMutualInformationMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_31;
    QVBoxLayout *_32;
    QLabel *textLabel7_2;
    QLabel *textLabel8_2;
    QLabel *textLabel9_2;
    QVBoxLayout *_33;
    QLineEdit *m_NumberOfSpatialSamplesMutualInformation;
    QLineEdit *m_FixedImageStandardDeviationMutualInformation;
    QLineEdit *m_MovingImageStandardDeviationMutualInformation;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkMutualInformationMetricControls)
    {
        if (QmitkMutualInformationMetricControls->objectName().isEmpty())
            QmitkMutualInformationMetricControls->setObjectName(QStringLiteral("QmitkMutualInformationMetricControls"));
        QmitkMutualInformationMetricControls->resize(244, 120);
        verticalLayout = new QVBoxLayout(QmitkMutualInformationMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _31 = new QHBoxLayout();
        _31->setObjectName(QStringLiteral("_31"));
        _32 = new QVBoxLayout();
        _32->setObjectName(QStringLiteral("_32"));
        textLabel7_2 = new QLabel(QmitkMutualInformationMetricControls);
        textLabel7_2->setObjectName(QStringLiteral("textLabel7_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel7_2->setFont(font);
        textLabel7_2->setWordWrap(false);

        _32->addWidget(textLabel7_2);

        textLabel8_2 = new QLabel(QmitkMutualInformationMetricControls);
        textLabel8_2->setObjectName(QStringLiteral("textLabel8_2"));
        textLabel8_2->setFont(font);
        textLabel8_2->setWordWrap(false);

        _32->addWidget(textLabel8_2);

        textLabel9_2 = new QLabel(QmitkMutualInformationMetricControls);
        textLabel9_2->setObjectName(QStringLiteral("textLabel9_2"));
        textLabel9_2->setFont(font);
        textLabel9_2->setWordWrap(false);

        _32->addWidget(textLabel9_2);


        _31->addLayout(_32);

        _33 = new QVBoxLayout();
        _33->setObjectName(QStringLiteral("_33"));
        m_NumberOfSpatialSamplesMutualInformation = new QLineEdit(QmitkMutualInformationMetricControls);
        m_NumberOfSpatialSamplesMutualInformation->setObjectName(QStringLiteral("m_NumberOfSpatialSamplesMutualInformation"));
        m_NumberOfSpatialSamplesMutualInformation->setMinimumSize(QSize(0, 20));
        m_NumberOfSpatialSamplesMutualInformation->setFont(font);
        m_NumberOfSpatialSamplesMutualInformation->setAlignment(Qt::AlignRight);

        _33->addWidget(m_NumberOfSpatialSamplesMutualInformation);

        m_FixedImageStandardDeviationMutualInformation = new QLineEdit(QmitkMutualInformationMetricControls);
        m_FixedImageStandardDeviationMutualInformation->setObjectName(QStringLiteral("m_FixedImageStandardDeviationMutualInformation"));
        m_FixedImageStandardDeviationMutualInformation->setMinimumSize(QSize(0, 20));
        m_FixedImageStandardDeviationMutualInformation->setFont(font);
        m_FixedImageStandardDeviationMutualInformation->setAlignment(Qt::AlignRight);

        _33->addWidget(m_FixedImageStandardDeviationMutualInformation);

        m_MovingImageStandardDeviationMutualInformation = new QLineEdit(QmitkMutualInformationMetricControls);
        m_MovingImageStandardDeviationMutualInformation->setObjectName(QStringLiteral("m_MovingImageStandardDeviationMutualInformation"));
        m_MovingImageStandardDeviationMutualInformation->setMinimumSize(QSize(0, 20));
        m_MovingImageStandardDeviationMutualInformation->setFont(font);
        m_MovingImageStandardDeviationMutualInformation->setAlignment(Qt::AlignRight);

        _33->addWidget(m_MovingImageStandardDeviationMutualInformation);


        _31->addLayout(_33);


        verticalLayout->addLayout(_31);

        m_ComputeGradient = new QCheckBox(QmitkMutualInformationMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkMutualInformationMetricControls);

        QMetaObject::connectSlotsByName(QmitkMutualInformationMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkMutualInformationMetricControls)
    {
        QmitkMutualInformationMetricControls->setWindowTitle(QApplication::translate("QmitkMutualInformationMetricControls", "Form", 0));
        textLabel7_2->setText(QApplication::translate("QmitkMutualInformationMetricControls", "Number of Spatial Samples in %:", 0));
        textLabel8_2->setText(QApplication::translate("QmitkMutualInformationMetricControls", "Moving Image Standard Deviation:", 0));
        textLabel9_2->setText(QApplication::translate("QmitkMutualInformationMetricControls", "Fixed Image Standard Deviation:", 0));
        m_NumberOfSpatialSamplesMutualInformation->setText(QApplication::translate("QmitkMutualInformationMetricControls", "1", 0));
        m_FixedImageStandardDeviationMutualInformation->setText(QApplication::translate("QmitkMutualInformationMetricControls", "0.4", 0));
        m_MovingImageStandardDeviationMutualInformation->setText(QApplication::translate("QmitkMutualInformationMetricControls", "0.4", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkMutualInformationMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkMutualInformationMetricControls: public Ui_QmitkMutualInformationMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKMUTUALINFORMATIONMETRICCONTROLS_H
