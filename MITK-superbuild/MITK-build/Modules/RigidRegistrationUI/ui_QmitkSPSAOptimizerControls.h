/********************************************************************************
** Form generated from reading UI file 'QmitkSPSAOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSPSAOPTIMIZERCONTROLS_H
#define UI_QMITKSPSAOPTIMIZERCONTROLS_H

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

class Ui_QmitkSPSAOptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_118;
    QLabel *textLabel29;
    QLabel *textLabel30;
    QLabel *textLabel31;
    QLabel *textLabel33;
    QLabel *textLabel32;
    QLabel *textLabel34;
    QLabel *textLabel35;
    QLabel *textLabel36;
    QLabel *textLabel37;
    QLabel *textLabel38;
    QVBoxLayout *verticalLayout_36;
    QLineEdit *m_aSPSA;
    QLineEdit *m_ASPSA;
    QLineEdit *m_AlphaSPSA;
    QLineEdit *m_cSPSA;
    QLineEdit *m_GammaSPSA;
    QLineEdit *m_ToleranceSPSA;
    QLineEdit *m_StateOfConvergenceDecayRateSPSA;
    QLineEdit *m_MinimumNumberOfIterationsSPSA;
    QLineEdit *m_NumberOfPerturbationsSPSA;
    QLineEdit *m_IterationsSPSA;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkSPSAOptimizerControls)
    {
        if (QmitkSPSAOptimizerControls->objectName().isEmpty())
            QmitkSPSAOptimizerControls->setObjectName(QStringLiteral("QmitkSPSAOptimizerControls"));
        QmitkSPSAOptimizerControls->resize(249, 302);
        verticalLayout = new QVBoxLayout(QmitkSPSAOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(-1, -1, -1, 0);
        verticalLayout_118 = new QVBoxLayout();
        verticalLayout_118->setObjectName(QStringLiteral("verticalLayout_118"));
        textLabel29 = new QLabel(QmitkSPSAOptimizerControls);
        textLabel29->setObjectName(QStringLiteral("textLabel29"));
        textLabel29->setEnabled(true);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel29->setFont(font);
        textLabel29->setWordWrap(false);

        verticalLayout_118->addWidget(textLabel29);

        textLabel30 = new QLabel(QmitkSPSAOptimizerControls);
        textLabel30->setObjectName(QStringLiteral("textLabel30"));
        textLabel30->setEnabled(true);
        textLabel30->setFont(font);
        textLabel30->setWordWrap(false);

        verticalLayout_118->addWidget(textLabel30);

        textLabel31 = new QLabel(QmitkSPSAOptimizerControls);
        textLabel31->setObjectName(QStringLiteral("textLabel31"));
        textLabel31->setEnabled(true);
        textLabel31->setFont(font);
        textLabel31->setWordWrap(false);

        verticalLayout_118->addWidget(textLabel31);

        textLabel33 = new QLabel(QmitkSPSAOptimizerControls);
        textLabel33->setObjectName(QStringLiteral("textLabel33"));
        textLabel33->setEnabled(true);
        textLabel33->setFont(font);
        textLabel33->setWordWrap(false);

        verticalLayout_118->addWidget(textLabel33);

        textLabel32 = new QLabel(QmitkSPSAOptimizerControls);
        textLabel32->setObjectName(QStringLiteral("textLabel32"));
        textLabel32->setEnabled(true);
        textLabel32->setFont(font);
        textLabel32->setWordWrap(false);

        verticalLayout_118->addWidget(textLabel32);

        textLabel34 = new QLabel(QmitkSPSAOptimizerControls);
        textLabel34->setObjectName(QStringLiteral("textLabel34"));
        textLabel34->setEnabled(true);
        textLabel34->setFont(font);
        textLabel34->setWordWrap(false);

        verticalLayout_118->addWidget(textLabel34);

        textLabel35 = new QLabel(QmitkSPSAOptimizerControls);
        textLabel35->setObjectName(QStringLiteral("textLabel35"));
        textLabel35->setEnabled(true);
        textLabel35->setFont(font);
        textLabel35->setWordWrap(false);

        verticalLayout_118->addWidget(textLabel35);

        textLabel36 = new QLabel(QmitkSPSAOptimizerControls);
        textLabel36->setObjectName(QStringLiteral("textLabel36"));
        textLabel36->setEnabled(true);
        textLabel36->setFont(font);
        textLabel36->setWordWrap(false);

        verticalLayout_118->addWidget(textLabel36);

        textLabel37 = new QLabel(QmitkSPSAOptimizerControls);
        textLabel37->setObjectName(QStringLiteral("textLabel37"));
        textLabel37->setEnabled(true);
        textLabel37->setFont(font);
        textLabel37->setWordWrap(false);

        verticalLayout_118->addWidget(textLabel37);

        textLabel38 = new QLabel(QmitkSPSAOptimizerControls);
        textLabel38->setObjectName(QStringLiteral("textLabel38"));
        textLabel38->setEnabled(true);
        textLabel38->setFont(font);
        textLabel38->setWordWrap(false);

        verticalLayout_118->addWidget(textLabel38);


        horizontalLayout_18->addLayout(verticalLayout_118);

        verticalLayout_36 = new QVBoxLayout();
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        m_aSPSA = new QLineEdit(QmitkSPSAOptimizerControls);
        m_aSPSA->setObjectName(QStringLiteral("m_aSPSA"));
        m_aSPSA->setEnabled(true);
        m_aSPSA->setMinimumSize(QSize(0, 20));
        m_aSPSA->setFont(font);
        m_aSPSA->setAlignment(Qt::AlignRight);

        verticalLayout_36->addWidget(m_aSPSA);

        m_ASPSA = new QLineEdit(QmitkSPSAOptimizerControls);
        m_ASPSA->setObjectName(QStringLiteral("m_ASPSA"));
        m_ASPSA->setEnabled(true);
        m_ASPSA->setMinimumSize(QSize(0, 20));
        m_ASPSA->setFont(font);
        m_ASPSA->setAlignment(Qt::AlignRight);

        verticalLayout_36->addWidget(m_ASPSA);

        m_AlphaSPSA = new QLineEdit(QmitkSPSAOptimizerControls);
        m_AlphaSPSA->setObjectName(QStringLiteral("m_AlphaSPSA"));
        m_AlphaSPSA->setEnabled(true);
        m_AlphaSPSA->setMinimumSize(QSize(0, 20));
        m_AlphaSPSA->setFont(font);
        m_AlphaSPSA->setAlignment(Qt::AlignRight);

        verticalLayout_36->addWidget(m_AlphaSPSA);

        m_cSPSA = new QLineEdit(QmitkSPSAOptimizerControls);
        m_cSPSA->setObjectName(QStringLiteral("m_cSPSA"));
        m_cSPSA->setEnabled(true);
        m_cSPSA->setMinimumSize(QSize(0, 20));
        m_cSPSA->setFont(font);
        m_cSPSA->setAlignment(Qt::AlignRight);

        verticalLayout_36->addWidget(m_cSPSA);

        m_GammaSPSA = new QLineEdit(QmitkSPSAOptimizerControls);
        m_GammaSPSA->setObjectName(QStringLiteral("m_GammaSPSA"));
        m_GammaSPSA->setEnabled(true);
        m_GammaSPSA->setMinimumSize(QSize(0, 20));
        m_GammaSPSA->setFont(font);
        m_GammaSPSA->setAlignment(Qt::AlignRight);

        verticalLayout_36->addWidget(m_GammaSPSA);

        m_ToleranceSPSA = new QLineEdit(QmitkSPSAOptimizerControls);
        m_ToleranceSPSA->setObjectName(QStringLiteral("m_ToleranceSPSA"));
        m_ToleranceSPSA->setEnabled(true);
        m_ToleranceSPSA->setMinimumSize(QSize(0, 20));
        m_ToleranceSPSA->setFont(font);
        m_ToleranceSPSA->setAlignment(Qt::AlignRight);

        verticalLayout_36->addWidget(m_ToleranceSPSA);

        m_StateOfConvergenceDecayRateSPSA = new QLineEdit(QmitkSPSAOptimizerControls);
        m_StateOfConvergenceDecayRateSPSA->setObjectName(QStringLiteral("m_StateOfConvergenceDecayRateSPSA"));
        m_StateOfConvergenceDecayRateSPSA->setEnabled(true);
        m_StateOfConvergenceDecayRateSPSA->setMinimumSize(QSize(0, 20));
        m_StateOfConvergenceDecayRateSPSA->setFont(font);
        m_StateOfConvergenceDecayRateSPSA->setAlignment(Qt::AlignRight);

        verticalLayout_36->addWidget(m_StateOfConvergenceDecayRateSPSA);

        m_MinimumNumberOfIterationsSPSA = new QLineEdit(QmitkSPSAOptimizerControls);
        m_MinimumNumberOfIterationsSPSA->setObjectName(QStringLiteral("m_MinimumNumberOfIterationsSPSA"));
        m_MinimumNumberOfIterationsSPSA->setEnabled(true);
        m_MinimumNumberOfIterationsSPSA->setMinimumSize(QSize(0, 20));
        m_MinimumNumberOfIterationsSPSA->setFont(font);
        m_MinimumNumberOfIterationsSPSA->setAlignment(Qt::AlignRight);

        verticalLayout_36->addWidget(m_MinimumNumberOfIterationsSPSA);

        m_NumberOfPerturbationsSPSA = new QLineEdit(QmitkSPSAOptimizerControls);
        m_NumberOfPerturbationsSPSA->setObjectName(QStringLiteral("m_NumberOfPerturbationsSPSA"));
        m_NumberOfPerturbationsSPSA->setEnabled(true);
        m_NumberOfPerturbationsSPSA->setMinimumSize(QSize(0, 20));
        m_NumberOfPerturbationsSPSA->setFont(font);
        m_NumberOfPerturbationsSPSA->setAlignment(Qt::AlignRight);

        verticalLayout_36->addWidget(m_NumberOfPerturbationsSPSA);

        m_IterationsSPSA = new QLineEdit(QmitkSPSAOptimizerControls);
        m_IterationsSPSA->setObjectName(QStringLiteral("m_IterationsSPSA"));
        m_IterationsSPSA->setEnabled(true);
        m_IterationsSPSA->setMinimumSize(QSize(0, 20));
        m_IterationsSPSA->setFont(font);
        m_IterationsSPSA->setAlignment(Qt::AlignRight);

        verticalLayout_36->addWidget(m_IterationsSPSA);


        horizontalLayout_18->addLayout(verticalLayout_36);


        verticalLayout->addLayout(horizontalLayout_18);

        m_Maximize = new QCheckBox(QmitkSPSAOptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkSPSAOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkSPSAOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkSPSAOptimizerControls)
    {
        QmitkSPSAOptimizerControls->setWindowTitle(QApplication::translate("QmitkSPSAOptimizerControls", "Form", 0));
        textLabel29->setText(QApplication::translate("QmitkSPSAOptimizerControls", "a:", 0));
        textLabel30->setText(QApplication::translate("QmitkSPSAOptimizerControls", "A:", 0));
        textLabel31->setText(QApplication::translate("QmitkSPSAOptimizerControls", "Alpha:", 0));
        textLabel33->setText(QApplication::translate("QmitkSPSAOptimizerControls", "Gamma:", 0));
        textLabel32->setText(QApplication::translate("QmitkSPSAOptimizerControls", "c:", 0));
        textLabel34->setText(QApplication::translate("QmitkSPSAOptimizerControls", "Tolerance:", 0));
        textLabel35->setText(QApplication::translate("QmitkSPSAOptimizerControls", "State Of Convergence Decay Rate:", 0));
        textLabel36->setText(QApplication::translate("QmitkSPSAOptimizerControls", "Minimum Number of Iterations:", 0));
        textLabel37->setText(QApplication::translate("QmitkSPSAOptimizerControls", "Number Of Perturbations:", 0));
        textLabel38->setText(QApplication::translate("QmitkSPSAOptimizerControls", "Number of Iterations:", 0));
        m_aSPSA->setText(QApplication::translate("QmitkSPSAOptimizerControls", "1.0", 0));
        m_ASPSA->setText(QApplication::translate("QmitkSPSAOptimizerControls", "10.0", 0));
        m_AlphaSPSA->setText(QApplication::translate("QmitkSPSAOptimizerControls", "0.602", 0));
        m_cSPSA->setText(QApplication::translate("QmitkSPSAOptimizerControls", "0.0001", 0));
        m_GammaSPSA->setText(QApplication::translate("QmitkSPSAOptimizerControls", "0.101", 0));
        m_ToleranceSPSA->setText(QApplication::translate("QmitkSPSAOptimizerControls", "1e-5", 0));
        m_StateOfConvergenceDecayRateSPSA->setText(QApplication::translate("QmitkSPSAOptimizerControls", "0.5", 0));
        m_MinimumNumberOfIterationsSPSA->setText(QApplication::translate("QmitkSPSAOptimizerControls", "10", 0));
        m_NumberOfPerturbationsSPSA->setText(QApplication::translate("QmitkSPSAOptimizerControls", "1", 0));
        m_IterationsSPSA->setText(QApplication::translate("QmitkSPSAOptimizerControls", "200", 0));
        m_Maximize->setText(QApplication::translate("QmitkSPSAOptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkSPSAOptimizerControls: public Ui_QmitkSPSAOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSPSAOPTIMIZERCONTROLS_H
