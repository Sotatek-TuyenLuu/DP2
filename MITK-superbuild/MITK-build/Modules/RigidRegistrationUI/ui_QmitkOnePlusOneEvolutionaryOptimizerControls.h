/********************************************************************************
** Form generated from reading UI file 'QmitkOnePlusOneEvolutionaryOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKONEPLUSONEEVOLUTIONARYOPTIMIZERCONTROLS_H
#define UI_QMITKONEPLUSONEEVOLUTIONARYOPTIMIZERCONTROLS_H

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

class Ui_QmitkOnePlusOneEvolutionaryOptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_29;
    QVBoxLayout *_38;
    QLabel *textLabel4;
    QLabel *textLabel3;
    QLabel *textLabel5;
    QLabel *textLabel6;
    QLabel *textLabel7;
    QVBoxLayout *_39;
    QLineEdit *m_ShrinkFactorOnePlusOneEvolutionary;
    QLineEdit *m_GrowthFactorOnePlusOneEvolutionary;
    QLineEdit *m_EpsilonOnePlusOneEvolutionary;
    QLineEdit *m_InitialRadiusOnePlusOneEvolutionary;
    QLineEdit *m_IterationsOnePlusOneEvolutionary;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkOnePlusOneEvolutionaryOptimizerControls)
    {
        if (QmitkOnePlusOneEvolutionaryOptimizerControls->objectName().isEmpty())
            QmitkOnePlusOneEvolutionaryOptimizerControls->setObjectName(QStringLiteral("QmitkOnePlusOneEvolutionaryOptimizerControls"));
        QmitkOnePlusOneEvolutionaryOptimizerControls->resize(184, 266);
        verticalLayout = new QVBoxLayout(QmitkOnePlusOneEvolutionaryOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _29 = new QHBoxLayout();
        _29->setObjectName(QStringLiteral("_29"));
        _38 = new QVBoxLayout();
        _38->setObjectName(QStringLiteral("_38"));
        textLabel4 = new QLabel(QmitkOnePlusOneEvolutionaryOptimizerControls);
        textLabel4->setObjectName(QStringLiteral("textLabel4"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel4->setFont(font);
        textLabel4->setWordWrap(false);

        _38->addWidget(textLabel4);

        textLabel3 = new QLabel(QmitkOnePlusOneEvolutionaryOptimizerControls);
        textLabel3->setObjectName(QStringLiteral("textLabel3"));
        textLabel3->setFont(font);
        textLabel3->setWordWrap(false);

        _38->addWidget(textLabel3);

        textLabel5 = new QLabel(QmitkOnePlusOneEvolutionaryOptimizerControls);
        textLabel5->setObjectName(QStringLiteral("textLabel5"));
        textLabel5->setFont(font);
        textLabel5->setWordWrap(false);

        _38->addWidget(textLabel5);

        textLabel6 = new QLabel(QmitkOnePlusOneEvolutionaryOptimizerControls);
        textLabel6->setObjectName(QStringLiteral("textLabel6"));
        textLabel6->setFont(font);
        textLabel6->setWordWrap(false);

        _38->addWidget(textLabel6);

        textLabel7 = new QLabel(QmitkOnePlusOneEvolutionaryOptimizerControls);
        textLabel7->setObjectName(QStringLiteral("textLabel7"));
        textLabel7->setFont(font);
        textLabel7->setWordWrap(false);

        _38->addWidget(textLabel7);


        _29->addLayout(_38);

        _39 = new QVBoxLayout();
        _39->setObjectName(QStringLiteral("_39"));
        m_ShrinkFactorOnePlusOneEvolutionary = new QLineEdit(QmitkOnePlusOneEvolutionaryOptimizerControls);
        m_ShrinkFactorOnePlusOneEvolutionary->setObjectName(QStringLiteral("m_ShrinkFactorOnePlusOneEvolutionary"));
        m_ShrinkFactorOnePlusOneEvolutionary->setMinimumSize(QSize(0, 20));
        m_ShrinkFactorOnePlusOneEvolutionary->setFont(font);
        m_ShrinkFactorOnePlusOneEvolutionary->setAlignment(Qt::AlignRight);

        _39->addWidget(m_ShrinkFactorOnePlusOneEvolutionary);

        m_GrowthFactorOnePlusOneEvolutionary = new QLineEdit(QmitkOnePlusOneEvolutionaryOptimizerControls);
        m_GrowthFactorOnePlusOneEvolutionary->setObjectName(QStringLiteral("m_GrowthFactorOnePlusOneEvolutionary"));
        m_GrowthFactorOnePlusOneEvolutionary->setMinimumSize(QSize(0, 20));
        m_GrowthFactorOnePlusOneEvolutionary->setFont(font);
        m_GrowthFactorOnePlusOneEvolutionary->setAlignment(Qt::AlignRight);

        _39->addWidget(m_GrowthFactorOnePlusOneEvolutionary);

        m_EpsilonOnePlusOneEvolutionary = new QLineEdit(QmitkOnePlusOneEvolutionaryOptimizerControls);
        m_EpsilonOnePlusOneEvolutionary->setObjectName(QStringLiteral("m_EpsilonOnePlusOneEvolutionary"));
        m_EpsilonOnePlusOneEvolutionary->setMinimumSize(QSize(0, 20));
        m_EpsilonOnePlusOneEvolutionary->setFont(font);
        m_EpsilonOnePlusOneEvolutionary->setAlignment(Qt::AlignRight);

        _39->addWidget(m_EpsilonOnePlusOneEvolutionary);

        m_InitialRadiusOnePlusOneEvolutionary = new QLineEdit(QmitkOnePlusOneEvolutionaryOptimizerControls);
        m_InitialRadiusOnePlusOneEvolutionary->setObjectName(QStringLiteral("m_InitialRadiusOnePlusOneEvolutionary"));
        m_InitialRadiusOnePlusOneEvolutionary->setMinimumSize(QSize(0, 20));
        m_InitialRadiusOnePlusOneEvolutionary->setFont(font);
        m_InitialRadiusOnePlusOneEvolutionary->setAlignment(Qt::AlignRight);

        _39->addWidget(m_InitialRadiusOnePlusOneEvolutionary);

        m_IterationsOnePlusOneEvolutionary = new QLineEdit(QmitkOnePlusOneEvolutionaryOptimizerControls);
        m_IterationsOnePlusOneEvolutionary->setObjectName(QStringLiteral("m_IterationsOnePlusOneEvolutionary"));
        m_IterationsOnePlusOneEvolutionary->setMinimumSize(QSize(0, 20));
        m_IterationsOnePlusOneEvolutionary->setFont(font);
        m_IterationsOnePlusOneEvolutionary->setAlignment(Qt::AlignRight);

        _39->addWidget(m_IterationsOnePlusOneEvolutionary);


        _29->addLayout(_39);


        verticalLayout->addLayout(_29);

        m_Maximize = new QCheckBox(QmitkOnePlusOneEvolutionaryOptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkOnePlusOneEvolutionaryOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkOnePlusOneEvolutionaryOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkOnePlusOneEvolutionaryOptimizerControls)
    {
        QmitkOnePlusOneEvolutionaryOptimizerControls->setWindowTitle(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "Form", 0));
        textLabel4->setText(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "Shrink Factor:", 0));
        textLabel3->setText(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "Growth Factor:", 0));
        textLabel5->setText(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "Epsilon:", 0));
        textLabel6->setText(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "Initial Radius:", 0));
        textLabel7->setText(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "Number of Iterations:", 0));
        m_ShrinkFactorOnePlusOneEvolutionary->setText(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "0.98787654742307407", 0));
        m_GrowthFactorOnePlusOneEvolutionary->setText(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "1.05", 0));
        m_EpsilonOnePlusOneEvolutionary->setText(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "1.0", 0));
        m_InitialRadiusOnePlusOneEvolutionary->setText(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "10", 0));
        m_IterationsOnePlusOneEvolutionary->setText(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "200", 0));
        m_Maximize->setText(QApplication::translate("QmitkOnePlusOneEvolutionaryOptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkOnePlusOneEvolutionaryOptimizerControls: public Ui_QmitkOnePlusOneEvolutionaryOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKONEPLUSONEEVOLUTIONARYOPTIMIZERCONTROLS_H
