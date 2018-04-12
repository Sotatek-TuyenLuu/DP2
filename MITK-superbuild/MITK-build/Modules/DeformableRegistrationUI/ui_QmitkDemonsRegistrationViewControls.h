/********************************************************************************
** Form generated from reading UI file 'QmitkDemonsRegistrationViewControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKDEMONSREGISTRATIONVIEWCONTROLS_H
#define UI_QMITKDEMONSREGISTRATIONVIEWCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mitkDataNode.h"
#include "mitkDemonsRegistration.h"
#include "mitkHistogramMatching.h"
#include "mitkSymmetricForcesDemonsRegistration.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkDemonsRegistrationViewControls
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QComboBox *m_RegistrationSelection;
    QGroupBox *histogramMatchingBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_2;
    QVBoxLayout *_3;
    QLabel *useHistogramMatching;
    QLabel *numberOfHistogramLevels;
    QLabel *numberOfMatchPoints;
    QLabel *thresholdAtMeanIntensity;
    QVBoxLayout *_4;
    QCheckBox *m_UseHistogramMatching;
    QLineEdit *m_NumberOfHistogramLevels;
    QLineEdit *m_NumberOfMatchPoints;
    QCheckBox *m_ThresholdAtMeanIntensity;
    QGroupBox *demonsRegistrationBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *_5;
    QVBoxLayout *_6;
    QLabel *iterationsLabel;
    QLabel *standardDeviationLabel;
    QVBoxLayout *_7;
    QLineEdit *m_Iterations;
    QLineEdit *m_StandardDeviation;

    void setupUi(QWidget *QmitkDemonsRegistrationViewControls)
    {
        if (QmitkDemonsRegistrationViewControls->objectName().isEmpty())
            QmitkDemonsRegistrationViewControls->setObjectName(QStringLiteral("QmitkDemonsRegistrationViewControls"));
        QmitkDemonsRegistrationViewControls->resize(271, 256);
        QmitkDemonsRegistrationViewControls->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(QmitkDemonsRegistrationViewControls);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 9, 0, 9);
        groupBox = new QGroupBox(QmitkDemonsRegistrationViewControls);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        m_RegistrationSelection = new QComboBox(groupBox);
        m_RegistrationSelection->setObjectName(QStringLiteral("m_RegistrationSelection"));

        verticalLayout_3->addWidget(m_RegistrationSelection);


        verticalLayout_4->addWidget(groupBox);

        histogramMatchingBox_2 = new QGroupBox(QmitkDemonsRegistrationViewControls);
        histogramMatchingBox_2->setObjectName(QStringLiteral("histogramMatchingBox_2"));
        histogramMatchingBox_2->setFont(font);
        histogramMatchingBox_2->setFlat(true);
        verticalLayout = new QVBoxLayout(histogramMatchingBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _3 = new QVBoxLayout();
        _3->setSpacing(6);
        _3->setObjectName(QStringLiteral("_3"));
        useHistogramMatching = new QLabel(histogramMatchingBox_2);
        useHistogramMatching->setObjectName(QStringLiteral("useHistogramMatching"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        useHistogramMatching->setFont(font1);
        useHistogramMatching->setWordWrap(false);

        _3->addWidget(useHistogramMatching);

        numberOfHistogramLevels = new QLabel(histogramMatchingBox_2);
        numberOfHistogramLevels->setObjectName(QStringLiteral("numberOfHistogramLevels"));
        numberOfHistogramLevels->setFont(font1);
        numberOfHistogramLevels->setWordWrap(false);

        _3->addWidget(numberOfHistogramLevels);

        numberOfMatchPoints = new QLabel(histogramMatchingBox_2);
        numberOfMatchPoints->setObjectName(QStringLiteral("numberOfMatchPoints"));
        numberOfMatchPoints->setFont(font1);
        numberOfMatchPoints->setWordWrap(false);

        _3->addWidget(numberOfMatchPoints);

        thresholdAtMeanIntensity = new QLabel(histogramMatchingBox_2);
        thresholdAtMeanIntensity->setObjectName(QStringLiteral("thresholdAtMeanIntensity"));
        thresholdAtMeanIntensity->setFont(font1);
        thresholdAtMeanIntensity->setWordWrap(false);

        _3->addWidget(thresholdAtMeanIntensity);


        _2->addLayout(_3);

        _4 = new QVBoxLayout();
        _4->setSpacing(6);
        _4->setObjectName(QStringLiteral("_4"));
        m_UseHistogramMatching = new QCheckBox(histogramMatchingBox_2);
        m_UseHistogramMatching->setObjectName(QStringLiteral("m_UseHistogramMatching"));
        m_UseHistogramMatching->setFont(font1);
        m_UseHistogramMatching->setChecked(true);

        _4->addWidget(m_UseHistogramMatching);

        m_NumberOfHistogramLevels = new QLineEdit(histogramMatchingBox_2);
        m_NumberOfHistogramLevels->setObjectName(QStringLiteral("m_NumberOfHistogramLevels"));
        m_NumberOfHistogramLevels->setFont(font1);
        m_NumberOfHistogramLevels->setAlignment(Qt::AlignRight);

        _4->addWidget(m_NumberOfHistogramLevels);

        m_NumberOfMatchPoints = new QLineEdit(histogramMatchingBox_2);
        m_NumberOfMatchPoints->setObjectName(QStringLiteral("m_NumberOfMatchPoints"));
        m_NumberOfMatchPoints->setFont(font1);
        m_NumberOfMatchPoints->setAlignment(Qt::AlignRight);

        _4->addWidget(m_NumberOfMatchPoints);

        m_ThresholdAtMeanIntensity = new QCheckBox(histogramMatchingBox_2);
        m_ThresholdAtMeanIntensity->setObjectName(QStringLiteral("m_ThresholdAtMeanIntensity"));
        m_ThresholdAtMeanIntensity->setFont(font1);
        m_ThresholdAtMeanIntensity->setChecked(true);

        _4->addWidget(m_ThresholdAtMeanIntensity);


        _2->addLayout(_4);


        verticalLayout->addLayout(_2);


        verticalLayout_4->addWidget(histogramMatchingBox_2);

        demonsRegistrationBox_2 = new QGroupBox(QmitkDemonsRegistrationViewControls);
        demonsRegistrationBox_2->setObjectName(QStringLiteral("demonsRegistrationBox_2"));
        demonsRegistrationBox_2->setFont(font);
        demonsRegistrationBox_2->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(demonsRegistrationBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        _5 = new QHBoxLayout();
        _5->setSpacing(6);
        _5->setObjectName(QStringLiteral("_5"));
        _6 = new QVBoxLayout();
        _6->setSpacing(6);
        _6->setObjectName(QStringLiteral("_6"));
        iterationsLabel = new QLabel(demonsRegistrationBox_2);
        iterationsLabel->setObjectName(QStringLiteral("iterationsLabel"));
        iterationsLabel->setFont(font1);
        iterationsLabel->setWordWrap(false);

        _6->addWidget(iterationsLabel);

        standardDeviationLabel = new QLabel(demonsRegistrationBox_2);
        standardDeviationLabel->setObjectName(QStringLiteral("standardDeviationLabel"));
        standardDeviationLabel->setFont(font1);
        standardDeviationLabel->setWordWrap(false);

        _6->addWidget(standardDeviationLabel);


        _5->addLayout(_6);

        _7 = new QVBoxLayout();
        _7->setSpacing(6);
        _7->setObjectName(QStringLiteral("_7"));
        m_Iterations = new QLineEdit(demonsRegistrationBox_2);
        m_Iterations->setObjectName(QStringLiteral("m_Iterations"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_Iterations->sizePolicy().hasHeightForWidth());
        m_Iterations->setSizePolicy(sizePolicy);
        m_Iterations->setFont(font1);
        m_Iterations->setAlignment(Qt::AlignRight);

        _7->addWidget(m_Iterations);

        m_StandardDeviation = new QLineEdit(demonsRegistrationBox_2);
        m_StandardDeviation->setObjectName(QStringLiteral("m_StandardDeviation"));
        m_StandardDeviation->setFont(font1);
        m_StandardDeviation->setAlignment(Qt::AlignRight);

        _7->addWidget(m_StandardDeviation);


        _5->addLayout(_7);


        verticalLayout_2->addLayout(_5);


        verticalLayout_4->addWidget(demonsRegistrationBox_2);


        retranslateUi(QmitkDemonsRegistrationViewControls);

        QMetaObject::connectSlotsByName(QmitkDemonsRegistrationViewControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkDemonsRegistrationViewControls)
    {
        QmitkDemonsRegistrationViewControls->setWindowTitle(QApplication::translate("QmitkDemonsRegistrationViewControls", "QmitkDemonsRegistrationViewControls", 0));
        groupBox->setTitle(QApplication::translate("QmitkDemonsRegistrationViewControls", "Transform", 0));
        m_RegistrationSelection->clear();
        m_RegistrationSelection->insertItems(0, QStringList()
         << QApplication::translate("QmitkDemonsRegistrationViewControls", "Demons Registration", 0)
         << QApplication::translate("QmitkDemonsRegistrationViewControls", "Symmetric Forces Demons Registration", 0)
        );
        histogramMatchingBox_2->setTitle(QApplication::translate("QmitkDemonsRegistrationViewControls", "Histogram Matching", 0));
        useHistogramMatching->setText(QApplication::translate("QmitkDemonsRegistrationViewControls", "Use Histogram Matching:", 0));
        numberOfHistogramLevels->setText(QApplication::translate("QmitkDemonsRegistrationViewControls", "Number of Histogram Levels:", 0));
        numberOfMatchPoints->setText(QApplication::translate("QmitkDemonsRegistrationViewControls", "Number of Match Points:", 0));
        thresholdAtMeanIntensity->setText(QApplication::translate("QmitkDemonsRegistrationViewControls", "Threshold at Mean Intensity:", 0));
        m_UseHistogramMatching->setText(QString());
        m_NumberOfHistogramLevels->setText(QApplication::translate("QmitkDemonsRegistrationViewControls", "1024", 0));
        m_NumberOfMatchPoints->setText(QApplication::translate("QmitkDemonsRegistrationViewControls", "7", 0));
        m_ThresholdAtMeanIntensity->setText(QString());
        demonsRegistrationBox_2->setTitle(QApplication::translate("QmitkDemonsRegistrationViewControls", "Demons Registration", 0));
        iterationsLabel->setText(QApplication::translate("QmitkDemonsRegistrationViewControls", "Number of Iterations:", 0));
        standardDeviationLabel->setText(QApplication::translate("QmitkDemonsRegistrationViewControls", "Standard Deviation:", 0));
        m_Iterations->setText(QApplication::translate("QmitkDemonsRegistrationViewControls", "50", 0));
        m_StandardDeviation->setText(QApplication::translate("QmitkDemonsRegistrationViewControls", "1.0", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkDemonsRegistrationViewControls: public Ui_QmitkDemonsRegistrationViewControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKDEMONSREGISTRATIONVIEWCONTROLS_H
