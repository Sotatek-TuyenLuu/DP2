/********************************************************************************
** Form generated from reading UI file 'QmitkCenteredRigid2DTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKCENTEREDRIGID2DTRANSFORMCONTROLS_H
#define UI_QMITKCENTEREDRIGID2DTRANSFORMCONTROLS_H

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

class Ui_QmitkCenteredRigid2DTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_CenteredRigid2DTransformFrame;
    QVBoxLayout *verticalLayout_86;
    QHBoxLayout *_159;
    QLabel *textLabel1_8_2_3_2_2_2_3_4_3;
    QLineEdit *m_AngleCenteredRigid2D;
    QGroupBox *m_UseOptimizerScalesCenteredRigid2D;
    QVBoxLayout *verticalLayout_85;
    QHBoxLayout *_161;
    QVBoxLayout *_162;
    QLabel *textLabel2_6_3_3_2_2_2_3_4_2;
    QLabel *textLabel3_5_3_3_2_2_2_3_4_2;
    QLabel *textLabel1_9_2_2_2_2_2_2;
    QLabel *textLabel11_3_2_2_2_3_3_3;
    QLabel *textLabel12_3_2_2_2_3_3_3;
    QVBoxLayout *_163;
    QLineEdit *m_RotationScaleCenteredRigid2D;
    QLineEdit *m_CenterXScaleCenteredRigid2D;
    QLineEdit *m_CenterYScaleCenteredRigid2D;
    QLineEdit *m_TranslationXScaleCenteredRigid2D;
    QLineEdit *m_TranslationYScaleCenteredRigid2D;
    QGroupBox *m_CenterForInitializerCenteredRigid2D;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *m_GeometryCenteredRigid2D;
    QRadioButton *m_MomentsCenteredRigid2D;

    void setupUi(QWidget *QmitkCenteredRigid2DTransformControls)
    {
        if (QmitkCenteredRigid2DTransformControls->objectName().isEmpty())
            QmitkCenteredRigid2DTransformControls->setObjectName(QStringLiteral("QmitkCenteredRigid2DTransformControls"));
        QmitkCenteredRigid2DTransformControls->resize(173, 218);
        verticalLayout = new QVBoxLayout(QmitkCenteredRigid2DTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_CenteredRigid2DTransformFrame = new QFrame(QmitkCenteredRigid2DTransformControls);
        m_CenteredRigid2DTransformFrame->setObjectName(QStringLiteral("m_CenteredRigid2DTransformFrame"));
        m_CenteredRigid2DTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_CenteredRigid2DTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_86 = new QVBoxLayout(m_CenteredRigid2DTransformFrame);
        verticalLayout_86->setSpacing(0);
        verticalLayout_86->setContentsMargins(0, 0, 0, 0);
        verticalLayout_86->setObjectName(QStringLiteral("verticalLayout_86"));
        _159 = new QHBoxLayout();
        _159->setObjectName(QStringLiteral("_159"));
        textLabel1_8_2_3_2_2_2_3_4_3 = new QLabel(m_CenteredRigid2DTransformFrame);
        textLabel1_8_2_3_2_2_2_3_4_3->setObjectName(QStringLiteral("textLabel1_8_2_3_2_2_2_3_4_3"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_8_2_3_2_2_2_3_4_3->setFont(font);
        textLabel1_8_2_3_2_2_2_3_4_3->setWordWrap(false);

        _159->addWidget(textLabel1_8_2_3_2_2_2_3_4_3);

        m_AngleCenteredRigid2D = new QLineEdit(m_CenteredRigid2DTransformFrame);
        m_AngleCenteredRigid2D->setObjectName(QStringLiteral("m_AngleCenteredRigid2D"));
        m_AngleCenteredRigid2D->setMinimumSize(QSize(0, 20));
        m_AngleCenteredRigid2D->setFont(font);
        m_AngleCenteredRigid2D->setAlignment(Qt::AlignRight);

        _159->addWidget(m_AngleCenteredRigid2D);


        verticalLayout_86->addLayout(_159);

        m_UseOptimizerScalesCenteredRigid2D = new QGroupBox(m_CenteredRigid2DTransformFrame);
        m_UseOptimizerScalesCenteredRigid2D->setObjectName(QStringLiteral("m_UseOptimizerScalesCenteredRigid2D"));
        m_UseOptimizerScalesCenteredRigid2D->setFlat(true);
        m_UseOptimizerScalesCenteredRigid2D->setCheckable(true);
        verticalLayout_85 = new QVBoxLayout(m_UseOptimizerScalesCenteredRigid2D);
        verticalLayout_85->setSpacing(0);
        verticalLayout_85->setContentsMargins(0, 0, 0, 0);
        verticalLayout_85->setObjectName(QStringLiteral("verticalLayout_85"));
        _161 = new QHBoxLayout();
        _161->setObjectName(QStringLiteral("_161"));
        _162 = new QVBoxLayout();
        _162->setObjectName(QStringLiteral("_162"));
        textLabel2_6_3_3_2_2_2_3_4_2 = new QLabel(m_UseOptimizerScalesCenteredRigid2D);
        textLabel2_6_3_3_2_2_2_3_4_2->setObjectName(QStringLiteral("textLabel2_6_3_3_2_2_2_3_4_2"));
        textLabel2_6_3_3_2_2_2_3_4_2->setFont(font);
        textLabel2_6_3_3_2_2_2_3_4_2->setWordWrap(false);

        _162->addWidget(textLabel2_6_3_3_2_2_2_3_4_2);

        textLabel3_5_3_3_2_2_2_3_4_2 = new QLabel(m_UseOptimizerScalesCenteredRigid2D);
        textLabel3_5_3_3_2_2_2_3_4_2->setObjectName(QStringLiteral("textLabel3_5_3_3_2_2_2_3_4_2"));
        textLabel3_5_3_3_2_2_2_3_4_2->setFont(font);
        textLabel3_5_3_3_2_2_2_3_4_2->setWordWrap(false);

        _162->addWidget(textLabel3_5_3_3_2_2_2_3_4_2);

        textLabel1_9_2_2_2_2_2_2 = new QLabel(m_UseOptimizerScalesCenteredRigid2D);
        textLabel1_9_2_2_2_2_2_2->setObjectName(QStringLiteral("textLabel1_9_2_2_2_2_2_2"));
        textLabel1_9_2_2_2_2_2_2->setFont(font);
        textLabel1_9_2_2_2_2_2_2->setWordWrap(false);

        _162->addWidget(textLabel1_9_2_2_2_2_2_2);

        textLabel11_3_2_2_2_3_3_3 = new QLabel(m_UseOptimizerScalesCenteredRigid2D);
        textLabel11_3_2_2_2_3_3_3->setObjectName(QStringLiteral("textLabel11_3_2_2_2_3_3_3"));
        textLabel11_3_2_2_2_3_3_3->setFont(font);
        textLabel11_3_2_2_2_3_3_3->setWordWrap(false);

        _162->addWidget(textLabel11_3_2_2_2_3_3_3);

        textLabel12_3_2_2_2_3_3_3 = new QLabel(m_UseOptimizerScalesCenteredRigid2D);
        textLabel12_3_2_2_2_3_3_3->setObjectName(QStringLiteral("textLabel12_3_2_2_2_3_3_3"));
        textLabel12_3_2_2_2_3_3_3->setFont(font);
        textLabel12_3_2_2_2_3_3_3->setWordWrap(false);

        _162->addWidget(textLabel12_3_2_2_2_3_3_3);


        _161->addLayout(_162);

        _163 = new QVBoxLayout();
        _163->setObjectName(QStringLiteral("_163"));
        m_RotationScaleCenteredRigid2D = new QLineEdit(m_UseOptimizerScalesCenteredRigid2D);
        m_RotationScaleCenteredRigid2D->setObjectName(QStringLiteral("m_RotationScaleCenteredRigid2D"));
        m_RotationScaleCenteredRigid2D->setMinimumSize(QSize(0, 20));
        m_RotationScaleCenteredRigid2D->setFont(font);
        m_RotationScaleCenteredRigid2D->setAlignment(Qt::AlignRight);

        _163->addWidget(m_RotationScaleCenteredRigid2D);

        m_CenterXScaleCenteredRigid2D = new QLineEdit(m_UseOptimizerScalesCenteredRigid2D);
        m_CenterXScaleCenteredRigid2D->setObjectName(QStringLiteral("m_CenterXScaleCenteredRigid2D"));
        m_CenterXScaleCenteredRigid2D->setMinimumSize(QSize(0, 20));
        m_CenterXScaleCenteredRigid2D->setFont(font);
        m_CenterXScaleCenteredRigid2D->setAlignment(Qt::AlignRight);

        _163->addWidget(m_CenterXScaleCenteredRigid2D);

        m_CenterYScaleCenteredRigid2D = new QLineEdit(m_UseOptimizerScalesCenteredRigid2D);
        m_CenterYScaleCenteredRigid2D->setObjectName(QStringLiteral("m_CenterYScaleCenteredRigid2D"));
        m_CenterYScaleCenteredRigid2D->setMinimumSize(QSize(0, 20));
        m_CenterYScaleCenteredRigid2D->setFont(font);
        m_CenterYScaleCenteredRigid2D->setAlignment(Qt::AlignRight);

        _163->addWidget(m_CenterYScaleCenteredRigid2D);

        m_TranslationXScaleCenteredRigid2D = new QLineEdit(m_UseOptimizerScalesCenteredRigid2D);
        m_TranslationXScaleCenteredRigid2D->setObjectName(QStringLiteral("m_TranslationXScaleCenteredRigid2D"));
        m_TranslationXScaleCenteredRigid2D->setMinimumSize(QSize(0, 20));
        m_TranslationXScaleCenteredRigid2D->setFont(font);
        m_TranslationXScaleCenteredRigid2D->setAlignment(Qt::AlignRight);

        _163->addWidget(m_TranslationXScaleCenteredRigid2D);

        m_TranslationYScaleCenteredRigid2D = new QLineEdit(m_UseOptimizerScalesCenteredRigid2D);
        m_TranslationYScaleCenteredRigid2D->setObjectName(QStringLiteral("m_TranslationYScaleCenteredRigid2D"));
        m_TranslationYScaleCenteredRigid2D->setMinimumSize(QSize(0, 20));
        m_TranslationYScaleCenteredRigid2D->setFont(font);
        m_TranslationYScaleCenteredRigid2D->setAlignment(Qt::AlignRight);

        _163->addWidget(m_TranslationYScaleCenteredRigid2D);


        _161->addLayout(_163);


        verticalLayout_85->addLayout(_161);


        verticalLayout_86->addWidget(m_UseOptimizerScalesCenteredRigid2D);

        m_CenterForInitializerCenteredRigid2D = new QGroupBox(m_CenteredRigid2DTransformFrame);
        m_CenterForInitializerCenteredRigid2D->setObjectName(QStringLiteral("m_CenterForInitializerCenteredRigid2D"));
        m_CenterForInitializerCenteredRigid2D->setFlat(true);
        m_CenterForInitializerCenteredRigid2D->setCheckable(true);
        horizontalLayout_12 = new QHBoxLayout(m_CenterForInitializerCenteredRigid2D);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        m_GeometryCenteredRigid2D = new QRadioButton(m_CenterForInitializerCenteredRigid2D);
        m_GeometryCenteredRigid2D->setObjectName(QStringLiteral("m_GeometryCenteredRigid2D"));
        m_GeometryCenteredRigid2D->setEnabled(true);
        m_GeometryCenteredRigid2D->setMinimumSize(QSize(0, 20));
        m_GeometryCenteredRigid2D->setFont(font);

        horizontalLayout_12->addWidget(m_GeometryCenteredRigid2D);

        m_MomentsCenteredRigid2D = new QRadioButton(m_CenterForInitializerCenteredRigid2D);
        m_MomentsCenteredRigid2D->setObjectName(QStringLiteral("m_MomentsCenteredRigid2D"));
        m_MomentsCenteredRigid2D->setEnabled(true);
        m_MomentsCenteredRigid2D->setMinimumSize(QSize(0, 20));
        m_MomentsCenteredRigid2D->setFont(font);
        m_MomentsCenteredRigid2D->setChecked(true);

        horizontalLayout_12->addWidget(m_MomentsCenteredRigid2D);


        verticalLayout_86->addWidget(m_CenterForInitializerCenteredRigid2D);


        verticalLayout->addWidget(m_CenteredRigid2DTransformFrame);


        retranslateUi(QmitkCenteredRigid2DTransformControls);

        QMetaObject::connectSlotsByName(QmitkCenteredRigid2DTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkCenteredRigid2DTransformControls)
    {
        QmitkCenteredRigid2DTransformControls->setWindowTitle(QApplication::translate("QmitkCenteredRigid2DTransformControls", "Form", 0));
        textLabel1_8_2_3_2_2_2_3_4_3->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "Angle:", 0));
        m_AngleCenteredRigid2D->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "0.0", 0));
        m_UseOptimizerScalesCenteredRigid2D->setTitle(QApplication::translate("QmitkCenteredRigid2DTransformControls", "Use Optimizer Scales", 0));
        textLabel2_6_3_3_2_2_2_3_4_2->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "Scale Rotation:", 0));
        textLabel3_5_3_3_2_2_2_3_4_2->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "Scale Center X:", 0));
        textLabel1_9_2_2_2_2_2_2->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "Scale Center Y:", 0));
        textLabel11_3_2_2_2_3_3_3->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "Translation Scale X:", 0));
        textLabel12_3_2_2_2_3_3_3->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "Translation Scale Y:", 0));
        m_RotationScaleCenteredRigid2D->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "1.0", 0));
        m_CenterXScaleCenteredRigid2D->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "0.001", 0));
        m_CenterYScaleCenteredRigid2D->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "0.001", 0));
        m_TranslationXScaleCenteredRigid2D->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "0.001", 0));
        m_TranslationYScaleCenteredRigid2D->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "0.001", 0));
        m_CenterForInitializerCenteredRigid2D->setTitle(QApplication::translate("QmitkCenteredRigid2DTransformControls", "Center for Initializer", 0));
        m_GeometryCenteredRigid2D->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "Geometry", 0));
        m_MomentsCenteredRigid2D->setText(QApplication::translate("QmitkCenteredRigid2DTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkCenteredRigid2DTransformControls: public Ui_QmitkCenteredRigid2DTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKCENTEREDRIGID2DTRANSFORMCONTROLS_H
