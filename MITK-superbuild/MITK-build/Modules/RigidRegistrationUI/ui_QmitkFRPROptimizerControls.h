/********************************************************************************
** Form generated from reading UI file 'QmitkFRPROptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKFRPROPTIMIZERCONTROLS_H
#define UI_QMITKFRPROPTIMIZERCONTROLS_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkFRPROptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_40;
    QGroupBox *buttonGroup2;
    QVBoxLayout *verticalLayout_31;
    QHBoxLayout *_49;
    QRadioButton *m_FletchReevesFRPR;
    QRadioButton *m_PolakRibiereFRPR;
    QHBoxLayout *_50;
    QVBoxLayout *_51;
    QLabel *textLabel12;
    QLabel *textLabel13;
    QVBoxLayout *_52;
    QLineEdit *m_StepLengthFRPR;
    QLineEdit *m_IterationsFRPR;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkFRPROptimizerControls)
    {
        if (QmitkFRPROptimizerControls->objectName().isEmpty())
            QmitkFRPROptimizerControls->setObjectName(QStringLiteral("QmitkFRPROptimizerControls"));
        QmitkFRPROptimizerControls->resize(219, 148);
        verticalLayout = new QVBoxLayout(QmitkFRPROptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_40 = new QVBoxLayout();
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        buttonGroup2 = new QGroupBox(QmitkFRPROptimizerControls);
        buttonGroup2->setObjectName(QStringLiteral("buttonGroup2"));
        verticalLayout_31 = new QVBoxLayout(buttonGroup2);
        verticalLayout_31->setSpacing(0);
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        _49 = new QHBoxLayout();
        _49->setSpacing(0);
        _49->setObjectName(QStringLiteral("_49"));
        _49->setContentsMargins(9, -1, 9, 9);
        m_FletchReevesFRPR = new QRadioButton(buttonGroup2);
        m_FletchReevesFRPR->setObjectName(QStringLiteral("m_FletchReevesFRPR"));
        m_FletchReevesFRPR->setEnabled(true);
        m_FletchReevesFRPR->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        m_FletchReevesFRPR->setFont(font);
        m_FletchReevesFRPR->setChecked(true);

        _49->addWidget(m_FletchReevesFRPR);

        m_PolakRibiereFRPR = new QRadioButton(buttonGroup2);
        m_PolakRibiereFRPR->setObjectName(QStringLiteral("m_PolakRibiereFRPR"));
        m_PolakRibiereFRPR->setEnabled(true);
        m_PolakRibiereFRPR->setMinimumSize(QSize(0, 20));
        m_PolakRibiereFRPR->setFont(font);

        _49->addWidget(m_PolakRibiereFRPR);


        verticalLayout_31->addLayout(_49);


        verticalLayout_40->addWidget(buttonGroup2);

        _50 = new QHBoxLayout();
        _50->setObjectName(QStringLiteral("_50"));
        _51 = new QVBoxLayout();
        _51->setObjectName(QStringLiteral("_51"));
        textLabel12 = new QLabel(QmitkFRPROptimizerControls);
        textLabel12->setObjectName(QStringLiteral("textLabel12"));
        textLabel12->setFont(font);
        textLabel12->setWordWrap(false);

        _51->addWidget(textLabel12);

        textLabel13 = new QLabel(QmitkFRPROptimizerControls);
        textLabel13->setObjectName(QStringLiteral("textLabel13"));
        textLabel13->setFont(font);
        textLabel13->setWordWrap(false);

        _51->addWidget(textLabel13);


        _50->addLayout(_51);

        _52 = new QVBoxLayout();
        _52->setObjectName(QStringLiteral("_52"));
        m_StepLengthFRPR = new QLineEdit(QmitkFRPROptimizerControls);
        m_StepLengthFRPR->setObjectName(QStringLiteral("m_StepLengthFRPR"));
        m_StepLengthFRPR->setMinimumSize(QSize(0, 20));
        m_StepLengthFRPR->setFont(font);
        m_StepLengthFRPR->setAlignment(Qt::AlignRight);

        _52->addWidget(m_StepLengthFRPR);

        m_IterationsFRPR = new QLineEdit(QmitkFRPROptimizerControls);
        m_IterationsFRPR->setObjectName(QStringLiteral("m_IterationsFRPR"));
        m_IterationsFRPR->setMinimumSize(QSize(0, 20));
        m_IterationsFRPR->setFont(font);
        m_IterationsFRPR->setAlignment(Qt::AlignRight);

        _52->addWidget(m_IterationsFRPR);


        _50->addLayout(_52);


        verticalLayout_40->addLayout(_50);


        verticalLayout->addLayout(verticalLayout_40);

        m_Maximize = new QCheckBox(QmitkFRPROptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkFRPROptimizerControls);

        QMetaObject::connectSlotsByName(QmitkFRPROptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkFRPROptimizerControls)
    {
        QmitkFRPROptimizerControls->setWindowTitle(QApplication::translate("QmitkFRPROptimizerControls", "Form", 0));
        buttonGroup2->setTitle(QApplication::translate("QmitkFRPROptimizerControls", "Type", 0));
        m_FletchReevesFRPR->setText(QApplication::translate("QmitkFRPROptimizerControls", "Fletch Reeves", 0));
        m_PolakRibiereFRPR->setText(QApplication::translate("QmitkFRPROptimizerControls", "Polak Ribiere", 0));
        textLabel12->setText(QApplication::translate("QmitkFRPROptimizerControls", "Step Length:", 0));
        textLabel13->setText(QApplication::translate("QmitkFRPROptimizerControls", "Number of Iterations:", 0));
        m_StepLengthFRPR->setText(QApplication::translate("QmitkFRPROptimizerControls", "0.01", 0));
        m_IterationsFRPR->setText(QApplication::translate("QmitkFRPROptimizerControls", "200", 0));
        m_Maximize->setText(QApplication::translate("QmitkFRPROptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkFRPROptimizerControls: public Ui_QmitkFRPROptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKFRPROPTIMIZERCONTROLS_H
