/********************************************************************************
** Form generated from reading UI file 'QmitkVersorTransformOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKVERSORTRANSFORMOPTIMIZERCONTROLS_H
#define UI_QMITKVERSORTRANSFORMOPTIMIZERCONTROLS_H

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

class Ui_QmitkVersorTransformOptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_60;
    QVBoxLayout *_61;
    QLabel *textLabel18;
    QLabel *textLabel19;
    QLabel *textLabel20;
    QLabel *textLabel21;
    QVBoxLayout *_62;
    QLineEdit *m_GradientMagnitudeToleranceVersorTransform;
    QLineEdit *m_MinimumStepLengthVersorTransform;
    QLineEdit *m_MaximumStepLengthVersorTransform;
    QLineEdit *m_IterationsVersorTransform;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkVersorTransformOptimizerControls)
    {
        if (QmitkVersorTransformOptimizerControls->objectName().isEmpty())
            QmitkVersorTransformOptimizerControls->setObjectName(QStringLiteral("QmitkVersorTransformOptimizerControls"));
        QmitkVersorTransformOptimizerControls->resize(225, 146);
        verticalLayout = new QVBoxLayout(QmitkVersorTransformOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _60 = new QHBoxLayout();
        _60->setObjectName(QStringLiteral("_60"));
        _61 = new QVBoxLayout();
        _61->setObjectName(QStringLiteral("_61"));
        textLabel18 = new QLabel(QmitkVersorTransformOptimizerControls);
        textLabel18->setObjectName(QStringLiteral("textLabel18"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel18->setFont(font);
        textLabel18->setWordWrap(false);

        _61->addWidget(textLabel18);

        textLabel19 = new QLabel(QmitkVersorTransformOptimizerControls);
        textLabel19->setObjectName(QStringLiteral("textLabel19"));
        textLabel19->setFont(font);
        textLabel19->setWordWrap(false);

        _61->addWidget(textLabel19);

        textLabel20 = new QLabel(QmitkVersorTransformOptimizerControls);
        textLabel20->setObjectName(QStringLiteral("textLabel20"));
        textLabel20->setFont(font);
        textLabel20->setWordWrap(false);

        _61->addWidget(textLabel20);

        textLabel21 = new QLabel(QmitkVersorTransformOptimizerControls);
        textLabel21->setObjectName(QStringLiteral("textLabel21"));
        textLabel21->setFont(font);
        textLabel21->setWordWrap(false);

        _61->addWidget(textLabel21);


        _60->addLayout(_61);

        _62 = new QVBoxLayout();
        _62->setObjectName(QStringLiteral("_62"));
        m_GradientMagnitudeToleranceVersorTransform = new QLineEdit(QmitkVersorTransformOptimizerControls);
        m_GradientMagnitudeToleranceVersorTransform->setObjectName(QStringLiteral("m_GradientMagnitudeToleranceVersorTransform"));
        m_GradientMagnitudeToleranceVersorTransform->setMinimumSize(QSize(0, 20));
        m_GradientMagnitudeToleranceVersorTransform->setFont(font);
        m_GradientMagnitudeToleranceVersorTransform->setAlignment(Qt::AlignRight);

        _62->addWidget(m_GradientMagnitudeToleranceVersorTransform);

        m_MinimumStepLengthVersorTransform = new QLineEdit(QmitkVersorTransformOptimizerControls);
        m_MinimumStepLengthVersorTransform->setObjectName(QStringLiteral("m_MinimumStepLengthVersorTransform"));
        m_MinimumStepLengthVersorTransform->setMinimumSize(QSize(0, 20));
        m_MinimumStepLengthVersorTransform->setFont(font);
        m_MinimumStepLengthVersorTransform->setAlignment(Qt::AlignRight);

        _62->addWidget(m_MinimumStepLengthVersorTransform);

        m_MaximumStepLengthVersorTransform = new QLineEdit(QmitkVersorTransformOptimizerControls);
        m_MaximumStepLengthVersorTransform->setObjectName(QStringLiteral("m_MaximumStepLengthVersorTransform"));
        m_MaximumStepLengthVersorTransform->setMinimumSize(QSize(0, 20));
        m_MaximumStepLengthVersorTransform->setFont(font);
        m_MaximumStepLengthVersorTransform->setAlignment(Qt::AlignRight);

        _62->addWidget(m_MaximumStepLengthVersorTransform);

        m_IterationsVersorTransform = new QLineEdit(QmitkVersorTransformOptimizerControls);
        m_IterationsVersorTransform->setObjectName(QStringLiteral("m_IterationsVersorTransform"));
        m_IterationsVersorTransform->setMinimumSize(QSize(0, 20));
        m_IterationsVersorTransform->setFont(font);
        m_IterationsVersorTransform->setAlignment(Qt::AlignRight);

        _62->addWidget(m_IterationsVersorTransform);


        _60->addLayout(_62);


        verticalLayout->addLayout(_60);

        m_Maximize = new QCheckBox(QmitkVersorTransformOptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkVersorTransformOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkVersorTransformOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkVersorTransformOptimizerControls)
    {
        QmitkVersorTransformOptimizerControls->setWindowTitle(QApplication::translate("QmitkVersorTransformOptimizerControls", "Form", 0));
        textLabel18->setText(QApplication::translate("QmitkVersorTransformOptimizerControls", "Gradient Magnitude Tolerance:", 0));
        textLabel19->setText(QApplication::translate("QmitkVersorTransformOptimizerControls", "Minimum Step Length:", 0));
        textLabel20->setText(QApplication::translate("QmitkVersorTransformOptimizerControls", "Maximum Step Length:", 0));
        textLabel21->setText(QApplication::translate("QmitkVersorTransformOptimizerControls", "Number of Iterations:", 0));
        m_GradientMagnitudeToleranceVersorTransform->setText(QApplication::translate("QmitkVersorTransformOptimizerControls", "0.0001", 0));
        m_MinimumStepLengthVersorTransform->setText(QApplication::translate("QmitkVersorTransformOptimizerControls", "0.0001", 0));
        m_MaximumStepLengthVersorTransform->setText(QApplication::translate("QmitkVersorTransformOptimizerControls", "4.0", 0));
        m_IterationsVersorTransform->setText(QApplication::translate("QmitkVersorTransformOptimizerControls", "200", 0));
        m_Maximize->setText(QApplication::translate("QmitkVersorTransformOptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkVersorTransformOptimizerControls: public Ui_QmitkVersorTransformOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKVERSORTRANSFORMOPTIMIZERCONTROLS_H
