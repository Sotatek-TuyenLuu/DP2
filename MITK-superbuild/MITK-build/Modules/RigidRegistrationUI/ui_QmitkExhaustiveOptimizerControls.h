/********************************************************************************
** Form generated from reading UI file 'QmitkExhaustiveOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKEXHAUSTIVEOPTIMIZERCONTROLS_H
#define UI_QMITKEXHAUSTIVEOPTIMIZERCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkExhaustiveOptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_5;
    QVBoxLayout *_6;
    QLabel *textLabel1_4;
    QLabel *textLabel2_2;
    QVBoxLayout *_7;
    QLineEdit *m_StepLengthExhaustive;
    QLineEdit *m_NumberOfStepsExhaustive;

    void setupUi(QWidget *QmitkExhaustiveOptimizerControls)
    {
        if (QmitkExhaustiveOptimizerControls->objectName().isEmpty())
            QmitkExhaustiveOptimizerControls->setObjectName(QStringLiteral("QmitkExhaustiveOptimizerControls"));
        QmitkExhaustiveOptimizerControls->resize(162, 68);
        verticalLayout = new QVBoxLayout(QmitkExhaustiveOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _5 = new QHBoxLayout();
        _5->setObjectName(QStringLiteral("_5"));
        _6 = new QVBoxLayout();
        _6->setObjectName(QStringLiteral("_6"));
        textLabel1_4 = new QLabel(QmitkExhaustiveOptimizerControls);
        textLabel1_4->setObjectName(QStringLiteral("textLabel1_4"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_4->setFont(font);
        textLabel1_4->setWordWrap(false);

        _6->addWidget(textLabel1_4);

        textLabel2_2 = new QLabel(QmitkExhaustiveOptimizerControls);
        textLabel2_2->setObjectName(QStringLiteral("textLabel2_2"));
        textLabel2_2->setFont(font);
        textLabel2_2->setWordWrap(false);

        _6->addWidget(textLabel2_2);


        _5->addLayout(_6);

        _7 = new QVBoxLayout();
        _7->setSpacing(6);
        _7->setObjectName(QStringLiteral("_7"));
        m_StepLengthExhaustive = new QLineEdit(QmitkExhaustiveOptimizerControls);
        m_StepLengthExhaustive->setObjectName(QStringLiteral("m_StepLengthExhaustive"));
        m_StepLengthExhaustive->setMinimumSize(QSize(0, 20));
        m_StepLengthExhaustive->setFont(font);
        m_StepLengthExhaustive->setAlignment(Qt::AlignRight);

        _7->addWidget(m_StepLengthExhaustive);

        m_NumberOfStepsExhaustive = new QLineEdit(QmitkExhaustiveOptimizerControls);
        m_NumberOfStepsExhaustive->setObjectName(QStringLiteral("m_NumberOfStepsExhaustive"));
        m_NumberOfStepsExhaustive->setMinimumSize(QSize(0, 20));
        m_NumberOfStepsExhaustive->setFont(font);
        m_NumberOfStepsExhaustive->setAlignment(Qt::AlignRight);

        _7->addWidget(m_NumberOfStepsExhaustive);


        _5->addLayout(_7);


        verticalLayout->addLayout(_5);


        retranslateUi(QmitkExhaustiveOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkExhaustiveOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkExhaustiveOptimizerControls)
    {
        QmitkExhaustiveOptimizerControls->setWindowTitle(QApplication::translate("QmitkExhaustiveOptimizerControls", "Form", 0));
        textLabel1_4->setText(QApplication::translate("QmitkExhaustiveOptimizerControls", "Step Length:", 0));
        textLabel2_2->setText(QApplication::translate("QmitkExhaustiveOptimizerControls", "Number of Steps:", 0));
        m_StepLengthExhaustive->setText(QApplication::translate("QmitkExhaustiveOptimizerControls", "1.0", 0));
        m_NumberOfStepsExhaustive->setText(QApplication::translate("QmitkExhaustiveOptimizerControls", "10", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkExhaustiveOptimizerControls: public Ui_QmitkExhaustiveOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKEXHAUSTIVEOPTIMIZERCONTROLS_H
