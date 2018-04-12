/********************************************************************************
** Form generated from reading UI file 'QmitkGradientDescentOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKGRADIENTDESCENTOPTIMIZERCONTROLS_H
#define UI_QMITKGRADIENTDESCENTOPTIMIZERCONTROLS_H

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

class Ui_QmitkGradientDescentOptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_43;
    QLabel *textLabel1_2;
    QLabel *textLabel3_2;
    QVBoxLayout *verticalLayout_44;
    QLineEdit *m_LearningRateGradientDescent;
    QLineEdit *m_IterationsGradientDescent;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkGradientDescentOptimizerControls)
    {
        if (QmitkGradientDescentOptimizerControls->objectName().isEmpty())
            QmitkGradientDescentOptimizerControls->setObjectName(QStringLiteral("QmitkGradientDescentOptimizerControls"));
        QmitkGradientDescentOptimizerControls->resize(544, 325);
        verticalLayout = new QVBoxLayout(QmitkGradientDescentOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        verticalLayout_43 = new QVBoxLayout();
        verticalLayout_43->setObjectName(QStringLiteral("verticalLayout_43"));
        textLabel1_2 = new QLabel(QmitkGradientDescentOptimizerControls);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_2->setFont(font);
        textLabel1_2->setWordWrap(false);

        verticalLayout_43->addWidget(textLabel1_2);

        textLabel3_2 = new QLabel(QmitkGradientDescentOptimizerControls);
        textLabel3_2->setObjectName(QStringLiteral("textLabel3_2"));
        textLabel3_2->setFont(font);
        textLabel3_2->setWordWrap(false);

        verticalLayout_43->addWidget(textLabel3_2);


        horizontalLayout_17->addLayout(verticalLayout_43);

        verticalLayout_44 = new QVBoxLayout();
        verticalLayout_44->setObjectName(QStringLiteral("verticalLayout_44"));
        m_LearningRateGradientDescent = new QLineEdit(QmitkGradientDescentOptimizerControls);
        m_LearningRateGradientDescent->setObjectName(QStringLiteral("m_LearningRateGradientDescent"));
        m_LearningRateGradientDescent->setMinimumSize(QSize(0, 20));
        m_LearningRateGradientDescent->setFont(font);
        m_LearningRateGradientDescent->setAlignment(Qt::AlignRight);

        verticalLayout_44->addWidget(m_LearningRateGradientDescent);

        m_IterationsGradientDescent = new QLineEdit(QmitkGradientDescentOptimizerControls);
        m_IterationsGradientDescent->setObjectName(QStringLiteral("m_IterationsGradientDescent"));
        m_IterationsGradientDescent->setMinimumSize(QSize(0, 20));
        m_IterationsGradientDescent->setFont(font);
        m_IterationsGradientDescent->setAlignment(Qt::AlignRight);

        verticalLayout_44->addWidget(m_IterationsGradientDescent);


        horizontalLayout_17->addLayout(verticalLayout_44);


        verticalLayout->addLayout(horizontalLayout_17);

        m_Maximize = new QCheckBox(QmitkGradientDescentOptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkGradientDescentOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkGradientDescentOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkGradientDescentOptimizerControls)
    {
        QmitkGradientDescentOptimizerControls->setWindowTitle(QApplication::translate("QmitkGradientDescentOptimizerControls", "Form", 0));
        textLabel1_2->setText(QApplication::translate("QmitkGradientDescentOptimizerControls", "Learning Rate:", 0));
        textLabel3_2->setText(QApplication::translate("QmitkGradientDescentOptimizerControls", "Number of Iterations:", 0));
        m_LearningRateGradientDescent->setText(QApplication::translate("QmitkGradientDescentOptimizerControls", "0.01", 0));
        m_IterationsGradientDescent->setText(QApplication::translate("QmitkGradientDescentOptimizerControls", "200", 0));
        m_Maximize->setText(QApplication::translate("QmitkGradientDescentOptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkGradientDescentOptimizerControls: public Ui_QmitkGradientDescentOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKGRADIENTDESCENTOPTIMIZERCONTROLS_H
