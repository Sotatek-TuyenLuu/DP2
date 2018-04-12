/********************************************************************************
** Form generated from reading UI file 'QmitkKullbackLeiblerCompareHistogramMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKKULLBACKLEIBLERCOMPAREHISTOGRAMMETRICCONTROLS_H
#define UI_QMITKKULLBACKLEIBLERCOMPAREHISTOGRAMMETRICCONTROLS_H

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

class Ui_QmitkKullbackLeiblerCompareHistogramMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel2_4;
    QLineEdit *m_NumberOfHistogramBinsKullbackLeiblerCompareHistogram;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkKullbackLeiblerCompareHistogramMetricControls)
    {
        if (QmitkKullbackLeiblerCompareHistogramMetricControls->objectName().isEmpty())
            QmitkKullbackLeiblerCompareHistogramMetricControls->setObjectName(QStringLiteral("QmitkKullbackLeiblerCompareHistogramMetricControls"));
        QmitkKullbackLeiblerCompareHistogramMetricControls->resize(201, 66);
        verticalLayout = new QVBoxLayout(QmitkKullbackLeiblerCompareHistogramMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel2_4 = new QLabel(QmitkKullbackLeiblerCompareHistogramMetricControls);
        textLabel2_4->setObjectName(QStringLiteral("textLabel2_4"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel2_4->setFont(font);
        textLabel2_4->setWordWrap(false);

        horizontalLayout->addWidget(textLabel2_4);

        m_NumberOfHistogramBinsKullbackLeiblerCompareHistogram = new QLineEdit(QmitkKullbackLeiblerCompareHistogramMetricControls);
        m_NumberOfHistogramBinsKullbackLeiblerCompareHistogram->setObjectName(QStringLiteral("m_NumberOfHistogramBinsKullbackLeiblerCompareHistogram"));
        m_NumberOfHistogramBinsKullbackLeiblerCompareHistogram->setMinimumSize(QSize(0, 20));
        m_NumberOfHistogramBinsKullbackLeiblerCompareHistogram->setFont(font);
        m_NumberOfHistogramBinsKullbackLeiblerCompareHistogram->setAlignment(Qt::AlignRight);

        horizontalLayout->addWidget(m_NumberOfHistogramBinsKullbackLeiblerCompareHistogram);


        verticalLayout->addLayout(horizontalLayout);

        m_ComputeGradient = new QCheckBox(QmitkKullbackLeiblerCompareHistogramMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkKullbackLeiblerCompareHistogramMetricControls);

        QMetaObject::connectSlotsByName(QmitkKullbackLeiblerCompareHistogramMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkKullbackLeiblerCompareHistogramMetricControls)
    {
        QmitkKullbackLeiblerCompareHistogramMetricControls->setWindowTitle(QApplication::translate("QmitkKullbackLeiblerCompareHistogramMetricControls", "Form", 0));
        textLabel2_4->setText(QApplication::translate("QmitkKullbackLeiblerCompareHistogramMetricControls", "Number of Histogram Bins:", 0));
        m_NumberOfHistogramBinsKullbackLeiblerCompareHistogram->setText(QApplication::translate("QmitkKullbackLeiblerCompareHistogramMetricControls", "256", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkKullbackLeiblerCompareHistogramMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkKullbackLeiblerCompareHistogramMetricControls: public Ui_QmitkKullbackLeiblerCompareHistogramMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKKULLBACKLEIBLERCOMPAREHISTOGRAMMETRICCONTROLS_H
