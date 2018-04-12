/********************************************************************************
** Form generated from reading UI file 'QmitkLBFGSOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKLBFGSOPTIMIZERCONTROLS_H
#define UI_QMITKLBFGSOPTIMIZERCONTROLS_H

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

class Ui_QmitkLBFGSOptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_82;
    QVBoxLayout *_83;
    QLabel *textLabel18_2;
    QLabel *textLabel19_2;
    QLabel *textLabel20_2;
    QLabel *textLabel21_2;
    QVBoxLayout *_84;
    QLineEdit *m_GradientMagnitudeToleranceLBFGS;
    QLineEdit *m_LineSearchAccuracyLBFGS;
    QLineEdit *m_DefaultStepLengthLBFGS;
    QLineEdit *m_MaximumEvaluationsLBFGS;
    QCheckBox *m_TraceOnLBFGS;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkLBFGSOptimizerControls)
    {
        if (QmitkLBFGSOptimizerControls->objectName().isEmpty())
            QmitkLBFGSOptimizerControls->setObjectName(QStringLiteral("QmitkLBFGSOptimizerControls"));
        QmitkLBFGSOptimizerControls->resize(225, 152);
        verticalLayout = new QVBoxLayout(QmitkLBFGSOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _82 = new QHBoxLayout();
        _82->setObjectName(QStringLiteral("_82"));
        _83 = new QVBoxLayout();
        _83->setObjectName(QStringLiteral("_83"));
        textLabel18_2 = new QLabel(QmitkLBFGSOptimizerControls);
        textLabel18_2->setObjectName(QStringLiteral("textLabel18_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel18_2->setFont(font);
        textLabel18_2->setWordWrap(false);

        _83->addWidget(textLabel18_2);

        textLabel19_2 = new QLabel(QmitkLBFGSOptimizerControls);
        textLabel19_2->setObjectName(QStringLiteral("textLabel19_2"));
        textLabel19_2->setFont(font);
        textLabel19_2->setWordWrap(false);

        _83->addWidget(textLabel19_2);

        textLabel20_2 = new QLabel(QmitkLBFGSOptimizerControls);
        textLabel20_2->setObjectName(QStringLiteral("textLabel20_2"));
        textLabel20_2->setFont(font);
        textLabel20_2->setWordWrap(false);

        _83->addWidget(textLabel20_2);

        textLabel21_2 = new QLabel(QmitkLBFGSOptimizerControls);
        textLabel21_2->setObjectName(QStringLiteral("textLabel21_2"));
        textLabel21_2->setFont(font);
        textLabel21_2->setWordWrap(false);

        _83->addWidget(textLabel21_2);


        _82->addLayout(_83);

        _84 = new QVBoxLayout();
        _84->setSpacing(0);
        _84->setObjectName(QStringLiteral("_84"));
        m_GradientMagnitudeToleranceLBFGS = new QLineEdit(QmitkLBFGSOptimizerControls);
        m_GradientMagnitudeToleranceLBFGS->setObjectName(QStringLiteral("m_GradientMagnitudeToleranceLBFGS"));
        m_GradientMagnitudeToleranceLBFGS->setMinimumSize(QSize(0, 20));
        m_GradientMagnitudeToleranceLBFGS->setFont(font);
        m_GradientMagnitudeToleranceLBFGS->setAlignment(Qt::AlignRight);

        _84->addWidget(m_GradientMagnitudeToleranceLBFGS);

        m_LineSearchAccuracyLBFGS = new QLineEdit(QmitkLBFGSOptimizerControls);
        m_LineSearchAccuracyLBFGS->setObjectName(QStringLiteral("m_LineSearchAccuracyLBFGS"));
        m_LineSearchAccuracyLBFGS->setMinimumSize(QSize(0, 20));
        m_LineSearchAccuracyLBFGS->setFont(font);
        m_LineSearchAccuracyLBFGS->setAlignment(Qt::AlignRight);

        _84->addWidget(m_LineSearchAccuracyLBFGS);

        m_DefaultStepLengthLBFGS = new QLineEdit(QmitkLBFGSOptimizerControls);
        m_DefaultStepLengthLBFGS->setObjectName(QStringLiteral("m_DefaultStepLengthLBFGS"));
        m_DefaultStepLengthLBFGS->setMinimumSize(QSize(0, 20));
        m_DefaultStepLengthLBFGS->setFont(font);
        m_DefaultStepLengthLBFGS->setAlignment(Qt::AlignRight);

        _84->addWidget(m_DefaultStepLengthLBFGS);

        m_MaximumEvaluationsLBFGS = new QLineEdit(QmitkLBFGSOptimizerControls);
        m_MaximumEvaluationsLBFGS->setObjectName(QStringLiteral("m_MaximumEvaluationsLBFGS"));
        m_MaximumEvaluationsLBFGS->setMinimumSize(QSize(0, 20));
        m_MaximumEvaluationsLBFGS->setFont(font);
        m_MaximumEvaluationsLBFGS->setAlignment(Qt::AlignRight);

        _84->addWidget(m_MaximumEvaluationsLBFGS);


        _82->addLayout(_84);


        verticalLayout->addLayout(_82);

        m_TraceOnLBFGS = new QCheckBox(QmitkLBFGSOptimizerControls);
        m_TraceOnLBFGS->setObjectName(QStringLiteral("m_TraceOnLBFGS"));
        m_TraceOnLBFGS->setFont(font);
        m_TraceOnLBFGS->setChecked(true);

        verticalLayout->addWidget(m_TraceOnLBFGS);

        m_Maximize = new QCheckBox(QmitkLBFGSOptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkLBFGSOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkLBFGSOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkLBFGSOptimizerControls)
    {
        QmitkLBFGSOptimizerControls->setWindowTitle(QApplication::translate("QmitkLBFGSOptimizerControls", "Form", 0));
        textLabel18_2->setText(QApplication::translate("QmitkLBFGSOptimizerControls", "Gradient Magnitude Tolerance:", 0));
        textLabel19_2->setText(QApplication::translate("QmitkLBFGSOptimizerControls", "Line Search Accuracy", 0));
        textLabel20_2->setText(QApplication::translate("QmitkLBFGSOptimizerControls", "Default Step Length", 0));
        textLabel21_2->setText(QApplication::translate("QmitkLBFGSOptimizerControls", "Max # Function Evaluations", 0));
        m_GradientMagnitudeToleranceLBFGS->setText(QApplication::translate("QmitkLBFGSOptimizerControls", "0.0001", 0));
        m_LineSearchAccuracyLBFGS->setText(QApplication::translate("QmitkLBFGSOptimizerControls", "0.1", 0));
        m_DefaultStepLengthLBFGS->setText(QApplication::translate("QmitkLBFGSOptimizerControls", "1.0", 0));
        m_MaximumEvaluationsLBFGS->setText(QApplication::translate("QmitkLBFGSOptimizerControls", "200", 0));
        m_TraceOnLBFGS->setText(QApplication::translate("QmitkLBFGSOptimizerControls", "Trace", 0));
        m_Maximize->setText(QApplication::translate("QmitkLBFGSOptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkLBFGSOptimizerControls: public Ui_QmitkLBFGSOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKLBFGSOPTIMIZERCONTROLS_H
