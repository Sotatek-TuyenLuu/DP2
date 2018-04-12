/********************************************************************************
** Form generated from reading UI file 'QmitkMeanReciprocalSquareDifferenceMetricControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKMEANRECIPROCALSQUAREDIFFERENCEMETRICCONTROLS_H
#define UI_QMITKMEANRECIPROCALSQUAREDIFFERENCEMETRICCONTROLS_H

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

class Ui_QmitkMeanReciprocalSquareDifferenceMetricControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel6_2;
    QLineEdit *m_LambdaMeanReciprocalSquareDifference;
    QCheckBox *m_ComputeGradient;

    void setupUi(QWidget *QmitkMeanReciprocalSquareDifferenceMetricControls)
    {
        if (QmitkMeanReciprocalSquareDifferenceMetricControls->objectName().isEmpty())
            QmitkMeanReciprocalSquareDifferenceMetricControls->setObjectName(QStringLiteral("QmitkMeanReciprocalSquareDifferenceMetricControls"));
        QmitkMeanReciprocalSquareDifferenceMetricControls->resize(130, 66);
        verticalLayout = new QVBoxLayout(QmitkMeanReciprocalSquareDifferenceMetricControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel6_2 = new QLabel(QmitkMeanReciprocalSquareDifferenceMetricControls);
        textLabel6_2->setObjectName(QStringLiteral("textLabel6_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel6_2->setFont(font);
        textLabel6_2->setWordWrap(false);

        horizontalLayout->addWidget(textLabel6_2);

        m_LambdaMeanReciprocalSquareDifference = new QLineEdit(QmitkMeanReciprocalSquareDifferenceMetricControls);
        m_LambdaMeanReciprocalSquareDifference->setObjectName(QStringLiteral("m_LambdaMeanReciprocalSquareDifference"));
        m_LambdaMeanReciprocalSquareDifference->setMinimumSize(QSize(0, 20));
        m_LambdaMeanReciprocalSquareDifference->setFont(font);
        m_LambdaMeanReciprocalSquareDifference->setAlignment(Qt::AlignRight);

        horizontalLayout->addWidget(m_LambdaMeanReciprocalSquareDifference);


        verticalLayout->addLayout(horizontalLayout);

        m_ComputeGradient = new QCheckBox(QmitkMeanReciprocalSquareDifferenceMetricControls);
        m_ComputeGradient->setObjectName(QStringLiteral("m_ComputeGradient"));
        m_ComputeGradient->setMinimumSize(QSize(0, 20));
        m_ComputeGradient->setFont(font);
        m_ComputeGradient->setChecked(true);

        verticalLayout->addWidget(m_ComputeGradient);


        retranslateUi(QmitkMeanReciprocalSquareDifferenceMetricControls);

        QMetaObject::connectSlotsByName(QmitkMeanReciprocalSquareDifferenceMetricControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkMeanReciprocalSquareDifferenceMetricControls)
    {
        QmitkMeanReciprocalSquareDifferenceMetricControls->setWindowTitle(QApplication::translate("QmitkMeanReciprocalSquareDifferenceMetricControls", "Form", 0));
        textLabel6_2->setText(QApplication::translate("QmitkMeanReciprocalSquareDifferenceMetricControls", "Lambda:", 0));
        m_LambdaMeanReciprocalSquareDifference->setText(QApplication::translate("QmitkMeanReciprocalSquareDifferenceMetricControls", "10", 0));
        m_ComputeGradient->setText(QApplication::translate("QmitkMeanReciprocalSquareDifferenceMetricControls", "Compute Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkMeanReciprocalSquareDifferenceMetricControls: public Ui_QmitkMeanReciprocalSquareDifferenceMetricControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKMEANRECIPROCALSQUAREDIFFERENCEMETRICCONTROLS_H
