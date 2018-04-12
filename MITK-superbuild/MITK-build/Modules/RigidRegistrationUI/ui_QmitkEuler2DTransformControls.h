/********************************************************************************
** Form generated from reading UI file 'QmitkEuler2DTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKEULER2DTRANSFORMCONTROLS_H
#define UI_QMITKEULER2DTRANSFORMCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkEuler2DTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_Euler2DTransformFrame;
    QVBoxLayout *verticalLayout_88;
    QGroupBox *m_UseOptimizerScalesEuler2D;
    QVBoxLayout *verticalLayout_87;
    QHBoxLayout *_168;
    QVBoxLayout *_169;
    QLabel *textLabel2_6_3_3_2_2_2_3_4_2_2;
    QLabel *textLabel11_3_2_2_2_3_3_3_2;
    QLabel *textLabel12_3_2_2_2_3_3_3_2;
    QVBoxLayout *_170;
    QLineEdit *m_RotationScaleEuler2D;
    QLineEdit *m_TranslationXScaleEuler2D;
    QLineEdit *m_TranslationYScaleEuler2D;
    QGroupBox *m_CenterForInitializerEuler2D;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *m_GeometryEuler2D;
    QRadioButton *m_MomentsEuler2D;

    void setupUi(QWidget *QmitkEuler2DTransformControls)
    {
        if (QmitkEuler2DTransformControls->objectName().isEmpty())
            QmitkEuler2DTransformControls->setObjectName(QStringLiteral("QmitkEuler2DTransformControls"));
        QmitkEuler2DTransformControls->resize(173, 144);
        verticalLayout = new QVBoxLayout(QmitkEuler2DTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_Euler2DTransformFrame = new QFrame(QmitkEuler2DTransformControls);
        m_Euler2DTransformFrame->setObjectName(QStringLiteral("m_Euler2DTransformFrame"));
        m_Euler2DTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_Euler2DTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_88 = new QVBoxLayout(m_Euler2DTransformFrame);
        verticalLayout_88->setSpacing(0);
        verticalLayout_88->setContentsMargins(0, 0, 0, 0);
        verticalLayout_88->setObjectName(QStringLiteral("verticalLayout_88"));
        m_UseOptimizerScalesEuler2D = new QGroupBox(m_Euler2DTransformFrame);
        m_UseOptimizerScalesEuler2D->setObjectName(QStringLiteral("m_UseOptimizerScalesEuler2D"));
        m_UseOptimizerScalesEuler2D->setFlat(true);
        m_UseOptimizerScalesEuler2D->setCheckable(true);
        verticalLayout_87 = new QVBoxLayout(m_UseOptimizerScalesEuler2D);
        verticalLayout_87->setSpacing(0);
        verticalLayout_87->setContentsMargins(0, 0, 0, 0);
        verticalLayout_87->setObjectName(QStringLiteral("verticalLayout_87"));
        _168 = new QHBoxLayout();
        _168->setObjectName(QStringLiteral("_168"));
        _169 = new QVBoxLayout();
        _169->setObjectName(QStringLiteral("_169"));
        textLabel2_6_3_3_2_2_2_3_4_2_2 = new QLabel(m_UseOptimizerScalesEuler2D);
        textLabel2_6_3_3_2_2_2_3_4_2_2->setObjectName(QStringLiteral("textLabel2_6_3_3_2_2_2_3_4_2_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel2_6_3_3_2_2_2_3_4_2_2->setFont(font);
        textLabel2_6_3_3_2_2_2_3_4_2_2->setWordWrap(false);

        _169->addWidget(textLabel2_6_3_3_2_2_2_3_4_2_2);

        textLabel11_3_2_2_2_3_3_3_2 = new QLabel(m_UseOptimizerScalesEuler2D);
        textLabel11_3_2_2_2_3_3_3_2->setObjectName(QStringLiteral("textLabel11_3_2_2_2_3_3_3_2"));
        textLabel11_3_2_2_2_3_3_3_2->setFont(font);
        textLabel11_3_2_2_2_3_3_3_2->setWordWrap(false);

        _169->addWidget(textLabel11_3_2_2_2_3_3_3_2);

        textLabel12_3_2_2_2_3_3_3_2 = new QLabel(m_UseOptimizerScalesEuler2D);
        textLabel12_3_2_2_2_3_3_3_2->setObjectName(QStringLiteral("textLabel12_3_2_2_2_3_3_3_2"));
        textLabel12_3_2_2_2_3_3_3_2->setFont(font);
        textLabel12_3_2_2_2_3_3_3_2->setWordWrap(false);

        _169->addWidget(textLabel12_3_2_2_2_3_3_3_2);


        _168->addLayout(_169);

        _170 = new QVBoxLayout();
        _170->setObjectName(QStringLiteral("_170"));
        m_RotationScaleEuler2D = new QLineEdit(m_UseOptimizerScalesEuler2D);
        m_RotationScaleEuler2D->setObjectName(QStringLiteral("m_RotationScaleEuler2D"));
        m_RotationScaleEuler2D->setMinimumSize(QSize(0, 20));
        m_RotationScaleEuler2D->setFont(font);
        m_RotationScaleEuler2D->setAlignment(Qt::AlignRight);

        _170->addWidget(m_RotationScaleEuler2D);

        m_TranslationXScaleEuler2D = new QLineEdit(m_UseOptimizerScalesEuler2D);
        m_TranslationXScaleEuler2D->setObjectName(QStringLiteral("m_TranslationXScaleEuler2D"));
        m_TranslationXScaleEuler2D->setMinimumSize(QSize(0, 20));
        m_TranslationXScaleEuler2D->setFont(font);
        m_TranslationXScaleEuler2D->setAlignment(Qt::AlignRight);

        _170->addWidget(m_TranslationXScaleEuler2D);

        m_TranslationYScaleEuler2D = new QLineEdit(m_UseOptimizerScalesEuler2D);
        m_TranslationYScaleEuler2D->setObjectName(QStringLiteral("m_TranslationYScaleEuler2D"));
        m_TranslationYScaleEuler2D->setMinimumSize(QSize(0, 20));
        m_TranslationYScaleEuler2D->setFont(font);
        m_TranslationYScaleEuler2D->setAlignment(Qt::AlignRight);

        _170->addWidget(m_TranslationYScaleEuler2D);


        _168->addLayout(_170);


        verticalLayout_87->addLayout(_168);


        verticalLayout_88->addWidget(m_UseOptimizerScalesEuler2D);

        m_CenterForInitializerEuler2D = new QGroupBox(m_Euler2DTransformFrame);
        m_CenterForInitializerEuler2D->setObjectName(QStringLiteral("m_CenterForInitializerEuler2D"));
        m_CenterForInitializerEuler2D->setFlat(true);
        m_CenterForInitializerEuler2D->setCheckable(true);
        horizontalLayout_13 = new QHBoxLayout(m_CenterForInitializerEuler2D);
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        m_GeometryEuler2D = new QRadioButton(m_CenterForInitializerEuler2D);
        m_GeometryEuler2D->setObjectName(QStringLiteral("m_GeometryEuler2D"));
        m_GeometryEuler2D->setEnabled(true);
        m_GeometryEuler2D->setMinimumSize(QSize(0, 20));
        m_GeometryEuler2D->setFont(font);

        horizontalLayout_13->addWidget(m_GeometryEuler2D);

        m_MomentsEuler2D = new QRadioButton(m_CenterForInitializerEuler2D);
        m_MomentsEuler2D->setObjectName(QStringLiteral("m_MomentsEuler2D"));
        m_MomentsEuler2D->setEnabled(true);
        m_MomentsEuler2D->setMinimumSize(QSize(0, 20));
        m_MomentsEuler2D->setFont(font);
        m_MomentsEuler2D->setChecked(true);

        horizontalLayout_13->addWidget(m_MomentsEuler2D);


        verticalLayout_88->addWidget(m_CenterForInitializerEuler2D);


        verticalLayout->addWidget(m_Euler2DTransformFrame);


        retranslateUi(QmitkEuler2DTransformControls);

        QMetaObject::connectSlotsByName(QmitkEuler2DTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkEuler2DTransformControls)
    {
        QmitkEuler2DTransformControls->setWindowTitle(QApplication::translate("QmitkEuler2DTransformControls", "Form", 0));
        m_UseOptimizerScalesEuler2D->setTitle(QApplication::translate("QmitkEuler2DTransformControls", "Use Optimizer Scales", 0));
        textLabel2_6_3_3_2_2_2_3_4_2_2->setText(QApplication::translate("QmitkEuler2DTransformControls", "Scale Rotation:", 0));
        textLabel11_3_2_2_2_3_3_3_2->setText(QApplication::translate("QmitkEuler2DTransformControls", "Translation Scale X:", 0));
        textLabel12_3_2_2_2_3_3_3_2->setText(QApplication::translate("QmitkEuler2DTransformControls", "Translation Scale Y:", 0));
        m_RotationScaleEuler2D->setText(QApplication::translate("QmitkEuler2DTransformControls", "1.0", 0));
        m_TranslationXScaleEuler2D->setText(QApplication::translate("QmitkEuler2DTransformControls", "0.001", 0));
        m_TranslationYScaleEuler2D->setText(QApplication::translate("QmitkEuler2DTransformControls", "0.001", 0));
        m_CenterForInitializerEuler2D->setTitle(QApplication::translate("QmitkEuler2DTransformControls", "Center for Initializer", 0));
        m_GeometryEuler2D->setText(QApplication::translate("QmitkEuler2DTransformControls", "Geometry", 0));
        m_MomentsEuler2D->setText(QApplication::translate("QmitkEuler2DTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkEuler2DTransformControls: public Ui_QmitkEuler2DTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKEULER2DTRANSFORMCONTROLS_H
