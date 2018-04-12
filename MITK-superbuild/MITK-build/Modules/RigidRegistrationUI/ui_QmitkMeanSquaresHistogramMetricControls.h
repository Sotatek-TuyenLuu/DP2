/********************************************************************************
** Form generated from reading UI file 'QmitkMeanSquaresHistogramMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKMEANSQUARESHISTOGRAMMETRICCONTROLS_H
#define UI_QMITKMEANSQUARESHISTOGRAMMETRICCONTROLS_H

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

class Ui_QmitkMeanSquaresHistogramMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_14;
    QLabel *textLabel4_2;
    QLineEdit *m_NumberOfHistogramBinsMeanSquaresHistogram;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkMeanSquaresHistogramMetricControls)
    {
        if (QmitkMeanSquaresHistogramMetricControls->objectName().isEmpty())
            QmitkMeanSquaresHistogramMetricControls->setObjectName(QStringLiteral("QmitkMeanSquaresHistogramMetricControls"));
        QmitkMeanSquaresHistogramMetricControls->resize(201, 66);
        verticalLayout = new QVBoxLayout(QmitkMeanSquaresHistogramMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _14 = new QHBoxLayout();
        _14->setObjectName(QStringLiteral("_14"));
        textLabel4_2 = new QLabel(QmitkMeanSquaresHistogramMetricControls);
        textLabel4_2->setObjectName(QStringLiteral("textLabel4_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel4_2->setFont(font);
        textLabel4_2->setWordWrap(false);

        _14->addWidget(textLabel4_2);

        m_NumberOfHistogramBinsMeanSquaresHistogram = new QLineEdit(QmitkMeanSquaresHistogramMetricControls);
        m_NumberOfHistogramBinsMeanSquaresHistogram->setObjectName(QStringLiteral("m_NumberOfHistogramBinsMeanSquaresHistogram"));
        m_NumberOfHistogramBinsMeanSquaresHistogram->setMinimumSize(QSize(0, 20));
        m_NumberOfHistogramBinsMeanSquaresHistogram->setFont(font);
        m_NumberOfHistogramBinsMeanSquaresHistogram->setAlignment(Qt::AlignRight);

        _14->addWidget(m_NumberOfHistogramBinsMeanSquaresHistogram);


        verticalLayout->addLayout(_14);

        m_ComputeGradient = new QCheckBox(QmitkMeanSquaresHistogramMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkMeanSquaresHistogramMetricControls);

        QMetaObject::connectSlotsByName(QmitkMeanSquaresHistogramMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkMeanSquaresHistogramMetricControls)
    {
        QmitkMeanSquaresHistogramMetricControls->setWindowTitle(QApplication::translate("QmitkMeanSquaresHistogramMetricControls", "QmitkMeanSquaresHistogramMetricControls", 0));
        textLabel4_2->setText(QApplication::translate("QmitkMeanSquaresHistogramMetricControls", "Number of Histogram Bins:", 0));
        m_NumberOfHistogramBinsMeanSquaresHistogram->setText(QApplication::translate("QmitkMeanSquaresHistogramMetricControls", "256", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkMeanSquaresHistogramMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkMeanSquaresHistogramMetricControls: public Ui_QmitkMeanSquaresHistogramMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKMEANSQUARESHISTOGRAMMETRICCONTROLS_H
