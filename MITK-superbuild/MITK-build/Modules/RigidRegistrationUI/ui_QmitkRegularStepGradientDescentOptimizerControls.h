/********************************************************************************
** Form generated from reading UI file 'QmitkRegularStepGradientDescentOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKREGULARSTEPGRADIENTDESCENTOPTIMIZERCONTROLS_H
#define UI_QMITKREGULARSTEPGRADIENTDESCENTOPTIMIZERCONTROLS_H

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

class Ui_QmitkRegularStepGradientDescentOptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_55;
    QVBoxLayout *_56;
    QLabel *textLabel14;
    QLabel *textLabel15;
    QLabel *textLabel16;
    QLabel *textLabel1_6;
    QLabel *textLabel17;
    QVBoxLayout *_57;
    QLineEdit *m_GradientMagnitudeToleranceRegularStepGradientDescent;
    QLineEdit *m_MinimumStepLengthRegularStepGradientDescent;
    QLineEdit *m_MaximumStepLengthRegularStepGradientDescent;
    QLineEdit *m_RelaxationFactorRegularStepGradientDescent;
    QLineEdit *m_IterationsRegularStepGradientDescent;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkRegularStepGradientDescentOptimizerControls)
    {
        if (QmitkRegularStepGradientDescentOptimizerControls->objectName().isEmpty())
            QmitkRegularStepGradientDescentOptimizerControls->setObjectName(QStringLiteral("QmitkRegularStepGradientDescentOptimizerControls"));
        QmitkRegularStepGradientDescentOptimizerControls->resize(225, 172);
        verticalLayout = new QVBoxLayout(QmitkRegularStepGradientDescentOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _55 = new QHBoxLayout();
        _55->setObjectName(QStringLiteral("_55"));
        _56 = new QVBoxLayout();
        _56->setObjectName(QStringLiteral("_56"));
        textLabel14 = new QLabel(QmitkRegularStepGradientDescentOptimizerControls);
        textLabel14->setObjectName(QStringLiteral("textLabel14"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel14->setFont(font);
        textLabel14->setWordWrap(false);

        _56->addWidget(textLabel14);

        textLabel15 = new QLabel(QmitkRegularStepGradientDescentOptimizerControls);
        textLabel15->setObjectName(QStringLiteral("textLabel15"));
        textLabel15->setFont(font);
        textLabel15->setWordWrap(false);

        _56->addWidget(textLabel15);

        textLabel16 = new QLabel(QmitkRegularStepGradientDescentOptimizerControls);
        textLabel16->setObjectName(QStringLiteral("textLabel16"));
        textLabel16->setFont(font);
        textLabel16->setWordWrap(false);

        _56->addWidget(textLabel16);

        textLabel1_6 = new QLabel(QmitkRegularStepGradientDescentOptimizerControls);
        textLabel1_6->setObjectName(QStringLiteral("textLabel1_6"));
        textLabel1_6->setFont(font);
        textLabel1_6->setWordWrap(false);

        _56->addWidget(textLabel1_6);

        textLabel17 = new QLabel(QmitkRegularStepGradientDescentOptimizerControls);
        textLabel17->setObjectName(QStringLiteral("textLabel17"));
        textLabel17->setFont(font);
        textLabel17->setWordWrap(false);

        _56->addWidget(textLabel17);


        _55->addLayout(_56);

        _57 = new QVBoxLayout();
        _57->setObjectName(QStringLiteral("_57"));
        m_GradientMagnitudeToleranceRegularStepGradientDescent = new QLineEdit(QmitkRegularStepGradientDescentOptimizerControls);
        m_GradientMagnitudeToleranceRegularStepGradientDescent->setObjectName(QStringLiteral("m_GradientMagnitudeToleranceRegularStepGradientDescent"));
        m_GradientMagnitudeToleranceRegularStepGradientDescent->setMinimumSize(QSize(0, 20));
        m_GradientMagnitudeToleranceRegularStepGradientDescent->setFont(font);
        m_GradientMagnitudeToleranceRegularStepGradientDescent->setAlignment(Qt::AlignRight);

        _57->addWidget(m_GradientMagnitudeToleranceRegularStepGradientDescent);

        m_MinimumStepLengthRegularStepGradientDescent = new QLineEdit(QmitkRegularStepGradientDescentOptimizerControls);
        m_MinimumStepLengthRegularStepGradientDescent->setObjectName(QStringLiteral("m_MinimumStepLengthRegularStepGradientDescent"));
        m_MinimumStepLengthRegularStepGradientDescent->setMinimumSize(QSize(0, 20));
        m_MinimumStepLengthRegularStepGradientDescent->setFont(font);
        m_MinimumStepLengthRegularStepGradientDescent->setAlignment(Qt::AlignRight);

        _57->addWidget(m_MinimumStepLengthRegularStepGradientDescent);

        m_MaximumStepLengthRegularStepGradientDescent = new QLineEdit(QmitkRegularStepGradientDescentOptimizerControls);
        m_MaximumStepLengthRegularStepGradientDescent->setObjectName(QStringLiteral("m_MaximumStepLengthRegularStepGradientDescent"));
        m_MaximumStepLengthRegularStepGradientDescent->setMinimumSize(QSize(0, 20));
        m_MaximumStepLengthRegularStepGradientDescent->setFont(font);
        m_MaximumStepLengthRegularStepGradientDescent->setAlignment(Qt::AlignRight);

        _57->addWidget(m_MaximumStepLengthRegularStepGradientDescent);

        m_RelaxationFactorRegularStepGradientDescent = new QLineEdit(QmitkRegularStepGradientDescentOptimizerControls);
        m_RelaxationFactorRegularStepGradientDescent->setObjectName(QStringLiteral("m_RelaxationFactorRegularStepGradientDescent"));
        m_RelaxationFactorRegularStepGradientDescent->setMinimumSize(QSize(0, 20));
        m_RelaxationFactorRegularStepGradientDescent->setFont(font);
        m_RelaxationFactorRegularStepGradientDescent->setAlignment(Qt::AlignRight);

        _57->addWidget(m_RelaxationFactorRegularStepGradientDescent);

        m_IterationsRegularStepGradientDescent = new QLineEdit(QmitkRegularStepGradientDescentOptimizerControls);
        m_IterationsRegularStepGradientDescent->setObjectName(QStringLiteral("m_IterationsRegularStepGradientDescent"));
        m_IterationsRegularStepGradientDescent->setMinimumSize(QSize(0, 20));
        m_IterationsRegularStepGradientDescent->setFont(font);
        m_IterationsRegularStepGradientDescent->setAlignment(Qt::AlignRight);

        _57->addWidget(m_IterationsRegularStepGradientDescent);


        _55->addLayout(_57);


        verticalLayout->addLayout(_55);

        m_Maximize = new QCheckBox(QmitkRegularStepGradientDescentOptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkRegularStepGradientDescentOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkRegularStepGradientDescentOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkRegularStepGradientDescentOptimizerControls)
    {
        QmitkRegularStepGradientDescentOptimizerControls->setWindowTitle(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "Form", 0));
        textLabel14->setText(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "Gradient Magnitude Tolerance:", 0));
        textLabel15->setText(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "Minimum Step Length:", 0));
        textLabel16->setText(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "Maximum Step Length:", 0));
        textLabel1_6->setText(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "Relaxation Factor:", 0));
        textLabel17->setText(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "Number of Iterations:", 0));
        m_GradientMagnitudeToleranceRegularStepGradientDescent->setText(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "0.0001", 0));
        m_MinimumStepLengthRegularStepGradientDescent->setText(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "0.001", 0));
        m_MaximumStepLengthRegularStepGradientDescent->setText(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "1.0", 0));
        m_RelaxationFactorRegularStepGradientDescent->setText(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "0.5", 0));
        m_IterationsRegularStepGradientDescent->setText(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "100", 0));
        m_Maximize->setText(QApplication::translate("QmitkRegularStepGradientDescentOptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkRegularStepGradientDescentOptimizerControls: public Ui_QmitkRegularStepGradientDescentOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKREGULARSTEPGRADIENTDESCENTOPTIMIZERCONTROLS_H
