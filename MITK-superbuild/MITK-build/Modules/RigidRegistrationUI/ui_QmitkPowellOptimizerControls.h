/********************************************************************************
** Form generated from reading UI file 'QmitkPowellOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKPOWELLOPTIMIZERCONTROLS_H
#define UI_QMITKPOWELLOPTIMIZERCONTROLS_H

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

class Ui_QmitkPowellOptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_42;
    QVBoxLayout *_43;
    QLabel *textLabel8;
    QLabel *textLabel9;
    QLabel *textLabel10;
    QLabel *textLabel11;
    QVBoxLayout *_44;
    QLineEdit *m_StepLengthPowell;
    QLineEdit *m_StepTolerancePowell;
    QLineEdit *m_ValueTolerancePowell;
    QLineEdit *m_IterationsPowell;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkPowellOptimizerControls)
    {
        if (QmitkPowellOptimizerControls->objectName().isEmpty())
            QmitkPowellOptimizerControls->setObjectName(QStringLiteral("QmitkPowellOptimizerControls"));
        QmitkPowellOptimizerControls->resize(182, 146);
        verticalLayout = new QVBoxLayout(QmitkPowellOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _42 = new QHBoxLayout();
        _42->setObjectName(QStringLiteral("_42"));
        _43 = new QVBoxLayout();
        _43->setObjectName(QStringLiteral("_43"));
        textLabel8 = new QLabel(QmitkPowellOptimizerControls);
        textLabel8->setObjectName(QStringLiteral("textLabel8"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel8->setFont(font);
        textLabel8->setWordWrap(false);

        _43->addWidget(textLabel8);

        textLabel9 = new QLabel(QmitkPowellOptimizerControls);
        textLabel9->setObjectName(QStringLiteral("textLabel9"));
        textLabel9->setFont(font);
        textLabel9->setWordWrap(false);

        _43->addWidget(textLabel9);

        textLabel10 = new QLabel(QmitkPowellOptimizerControls);
        textLabel10->setObjectName(QStringLiteral("textLabel10"));
        textLabel10->setFont(font);
        textLabel10->setWordWrap(false);

        _43->addWidget(textLabel10);

        textLabel11 = new QLabel(QmitkPowellOptimizerControls);
        textLabel11->setObjectName(QStringLiteral("textLabel11"));
        textLabel11->setFont(font);
        textLabel11->setWordWrap(false);

        _43->addWidget(textLabel11);


        _42->addLayout(_43);

        _44 = new QVBoxLayout();
        _44->setObjectName(QStringLiteral("_44"));
        m_StepLengthPowell = new QLineEdit(QmitkPowellOptimizerControls);
        m_StepLengthPowell->setObjectName(QStringLiteral("m_StepLengthPowell"));
        m_StepLengthPowell->setMinimumSize(QSize(0, 20));
        m_StepLengthPowell->setFont(font);
        m_StepLengthPowell->setAlignment(Qt::AlignRight);

        _44->addWidget(m_StepLengthPowell);

        m_StepTolerancePowell = new QLineEdit(QmitkPowellOptimizerControls);
        m_StepTolerancePowell->setObjectName(QStringLiteral("m_StepTolerancePowell"));
        m_StepTolerancePowell->setMinimumSize(QSize(0, 20));
        m_StepTolerancePowell->setFont(font);
        m_StepTolerancePowell->setAlignment(Qt::AlignRight);

        _44->addWidget(m_StepTolerancePowell);

        m_ValueTolerancePowell = new QLineEdit(QmitkPowellOptimizerControls);
        m_ValueTolerancePowell->setObjectName(QStringLiteral("m_ValueTolerancePowell"));
        m_ValueTolerancePowell->setMinimumSize(QSize(0, 20));
        m_ValueTolerancePowell->setFont(font);
        m_ValueTolerancePowell->setAlignment(Qt::AlignRight);

        _44->addWidget(m_ValueTolerancePowell);

        m_IterationsPowell = new QLineEdit(QmitkPowellOptimizerControls);
        m_IterationsPowell->setObjectName(QStringLiteral("m_IterationsPowell"));
        m_IterationsPowell->setMinimumSize(QSize(0, 20));
        m_IterationsPowell->setFont(font);
        m_IterationsPowell->setAlignment(Qt::AlignRight);

        _44->addWidget(m_IterationsPowell);


        _42->addLayout(_44);


        verticalLayout->addLayout(_42);

        m_Maximize = new QCheckBox(QmitkPowellOptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkPowellOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkPowellOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkPowellOptimizerControls)
    {
        QmitkPowellOptimizerControls->setWindowTitle(QApplication::translate("QmitkPowellOptimizerControls", "Form", 0));
        textLabel8->setText(QApplication::translate("QmitkPowellOptimizerControls", "Step Length:", 0));
        textLabel9->setText(QApplication::translate("QmitkPowellOptimizerControls", "Step Tolerance:", 0));
        textLabel10->setText(QApplication::translate("QmitkPowellOptimizerControls", "Value Tolerance:", 0));
        textLabel11->setText(QApplication::translate("QmitkPowellOptimizerControls", "Number of Iterations:", 0));
        m_StepLengthPowell->setText(QApplication::translate("QmitkPowellOptimizerControls", "0.01", 0));
        m_StepTolerancePowell->setText(QApplication::translate("QmitkPowellOptimizerControls", "0.001", 0));
        m_ValueTolerancePowell->setText(QApplication::translate("QmitkPowellOptimizerControls", "0.001", 0));
        m_IterationsPowell->setText(QApplication::translate("QmitkPowellOptimizerControls", "200", 0));
        m_Maximize->setText(QApplication::translate("QmitkPowellOptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkPowellOptimizerControls: public Ui_QmitkPowellOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKPOWELLOPTIMIZERCONTROLS_H
