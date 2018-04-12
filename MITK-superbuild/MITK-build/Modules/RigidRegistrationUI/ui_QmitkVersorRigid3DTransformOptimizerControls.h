/********************************************************************************
** Form generated from reading UI file 'QmitkVersorRigid3DTransformOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKVERSORRIGID3DTRANSFORMOPTIMIZERCONTROLS_H
#define UI_QMITKVERSORRIGID3DTRANSFORMOPTIMIZERCONTROLS_H

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

class Ui_QmitkVersorRigid3DTransformOptimizerControls
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
    QLineEdit *m_GradientMagnitudeToleranceVersorRigid3DTransform;
    QLineEdit *m_MinimumStepLengthVersorRigid3DTransform;
    QLineEdit *m_MaximumStepLengthVersorRigid3DTransform;
    QLineEdit *m_IterationsVersorRigid3DTransform;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkVersorRigid3DTransformOptimizerControls)
    {
        if (QmitkVersorRigid3DTransformOptimizerControls->objectName().isEmpty())
            QmitkVersorRigid3DTransformOptimizerControls->setObjectName(QStringLiteral("QmitkVersorRigid3DTransformOptimizerControls"));
        QmitkVersorRigid3DTransformOptimizerControls->resize(225, 146);
        verticalLayout = new QVBoxLayout(QmitkVersorRigid3DTransformOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _60 = new QHBoxLayout();
        _60->setObjectName(QStringLiteral("_60"));
        _61 = new QVBoxLayout();
        _61->setObjectName(QStringLiteral("_61"));
        textLabel18 = new QLabel(QmitkVersorRigid3DTransformOptimizerControls);
        textLabel18->setObjectName(QStringLiteral("textLabel18"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel18->setFont(font);
        textLabel18->setWordWrap(false);

        _61->addWidget(textLabel18);

        textLabel19 = new QLabel(QmitkVersorRigid3DTransformOptimizerControls);
        textLabel19->setObjectName(QStringLiteral("textLabel19"));
        textLabel19->setFont(font);
        textLabel19->setWordWrap(false);

        _61->addWidget(textLabel19);

        textLabel20 = new QLabel(QmitkVersorRigid3DTransformOptimizerControls);
        textLabel20->setObjectName(QStringLiteral("textLabel20"));
        textLabel20->setFont(font);
        textLabel20->setWordWrap(false);

        _61->addWidget(textLabel20);

        textLabel21 = new QLabel(QmitkVersorRigid3DTransformOptimizerControls);
        textLabel21->setObjectName(QStringLiteral("textLabel21"));
        textLabel21->setFont(font);
        textLabel21->setWordWrap(false);

        _61->addWidget(textLabel21);


        _60->addLayout(_61);

        _62 = new QVBoxLayout();
        _62->setObjectName(QStringLiteral("_62"));
        m_GradientMagnitudeToleranceVersorRigid3DTransform = new QLineEdit(QmitkVersorRigid3DTransformOptimizerControls);
        m_GradientMagnitudeToleranceVersorRigid3DTransform->setObjectName(QStringLiteral("m_GradientMagnitudeToleranceVersorRigid3DTransform"));
        m_GradientMagnitudeToleranceVersorRigid3DTransform->setMinimumSize(QSize(0, 20));
        m_GradientMagnitudeToleranceVersorRigid3DTransform->setFont(font);
        m_GradientMagnitudeToleranceVersorRigid3DTransform->setAlignment(Qt::AlignRight);

        _62->addWidget(m_GradientMagnitudeToleranceVersorRigid3DTransform);

        m_MinimumStepLengthVersorRigid3DTransform = new QLineEdit(QmitkVersorRigid3DTransformOptimizerControls);
        m_MinimumStepLengthVersorRigid3DTransform->setObjectName(QStringLiteral("m_MinimumStepLengthVersorRigid3DTransform"));
        m_MinimumStepLengthVersorRigid3DTransform->setMinimumSize(QSize(0, 20));
        m_MinimumStepLengthVersorRigid3DTransform->setFont(font);
        m_MinimumStepLengthVersorRigid3DTransform->setAlignment(Qt::AlignRight);

        _62->addWidget(m_MinimumStepLengthVersorRigid3DTransform);

        m_MaximumStepLengthVersorRigid3DTransform = new QLineEdit(QmitkVersorRigid3DTransformOptimizerControls);
        m_MaximumStepLengthVersorRigid3DTransform->setObjectName(QStringLiteral("m_MaximumStepLengthVersorRigid3DTransform"));
        m_MaximumStepLengthVersorRigid3DTransform->setMinimumSize(QSize(0, 20));
        m_MaximumStepLengthVersorRigid3DTransform->setFont(font);
        m_MaximumStepLengthVersorRigid3DTransform->setAlignment(Qt::AlignRight);

        _62->addWidget(m_MaximumStepLengthVersorRigid3DTransform);

        m_IterationsVersorRigid3DTransform = new QLineEdit(QmitkVersorRigid3DTransformOptimizerControls);
        m_IterationsVersorRigid3DTransform->setObjectName(QStringLiteral("m_IterationsVersorRigid3DTransform"));
        m_IterationsVersorRigid3DTransform->setMinimumSize(QSize(0, 20));
        m_IterationsVersorRigid3DTransform->setFont(font);
        m_IterationsVersorRigid3DTransform->setAlignment(Qt::AlignRight);

        _62->addWidget(m_IterationsVersorRigid3DTransform);


        _60->addLayout(_62);


        verticalLayout->addLayout(_60);

        m_Maximize = new QCheckBox(QmitkVersorRigid3DTransformOptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkVersorRigid3DTransformOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkVersorRigid3DTransformOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkVersorRigid3DTransformOptimizerControls)
    {
        QmitkVersorRigid3DTransformOptimizerControls->setWindowTitle(QApplication::translate("QmitkVersorRigid3DTransformOptimizerControls", "Form", 0));
        textLabel18->setText(QApplication::translate("QmitkVersorRigid3DTransformOptimizerControls", "Gradient Magnitude Tolerance:", 0));
        textLabel19->setText(QApplication::translate("QmitkVersorRigid3DTransformOptimizerControls", "Minimum Step Length:", 0));
        textLabel20->setText(QApplication::translate("QmitkVersorRigid3DTransformOptimizerControls", "Maximum Step Length:", 0));
        textLabel21->setText(QApplication::translate("QmitkVersorRigid3DTransformOptimizerControls", "Number of Iterations:", 0));
        m_GradientMagnitudeToleranceVersorRigid3DTransform->setText(QApplication::translate("QmitkVersorRigid3DTransformOptimizerControls", "0.0001", 0));
        m_MinimumStepLengthVersorRigid3DTransform->setText(QApplication::translate("QmitkVersorRigid3DTransformOptimizerControls", "0.0001", 0));
        m_MaximumStepLengthVersorRigid3DTransform->setText(QApplication::translate("QmitkVersorRigid3DTransformOptimizerControls", "4.0", 0));
        m_IterationsVersorRigid3DTransform->setText(QApplication::translate("QmitkVersorRigid3DTransformOptimizerControls", "200", 0));
        m_Maximize->setText(QApplication::translate("QmitkVersorRigid3DTransformOptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkVersorRigid3DTransformOptimizerControls: public Ui_QmitkVersorRigid3DTransformOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKVERSORRIGID3DTRANSFORMOPTIMIZERCONTROLS_H
