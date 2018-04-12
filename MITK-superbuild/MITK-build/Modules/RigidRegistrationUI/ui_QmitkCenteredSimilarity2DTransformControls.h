/********************************************************************************
** Form generated from reading UI file 'QmitkCenteredSimilarity2DTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKCENTEREDSIMILARITY2DTRANSFORMCONTROLS_H
#define UI_QMITKCENTEREDSIMILARITY2DTRANSFORMCONTROLS_H

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

class Ui_QmitkCenteredSimilarity2DTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_CenteredSimilarity2DTransformFrame;
    QVBoxLayout *verticalLayout_92;
    QHBoxLayout *_184;
    QVBoxLayout *_185;
    QLabel *textLabel1_7_2;
    QLabel *textLabel2_5_2;
    QVBoxLayout *_186;
    QLineEdit *m_InitialScaleCenteredSimilarity2D;
    QLineEdit *m_AngleCenteredSimilarity2D;
    QGroupBox *m_UseOptimizerScalesCenteredSimilarity2D;
    QVBoxLayout *verticalLayout_91;
    QHBoxLayout *_188;
    QVBoxLayout *_189;
    QLabel *textLabel1_8_2_3_2_2_2_3_4_4;
    QLabel *textLabel2_6_3_3_2_2_2_3_4_3;
    QLabel *textLabel3_5_3_3_2_2_2_3_4_3;
    QLabel *textLabel1_9_2_2_2_2_2_3;
    QLabel *textLabel11_3_2_2_2_3_3_4;
    QLabel *textLabel12_3_2_2_2_3_3_4;
    QVBoxLayout *_190;
    QLineEdit *m_ScalesCenteredSimilarity2DTransformScale1;
    QLineEdit *m_ScalesCenteredSimilarity2DTransformScale2;
    QLineEdit *m_ScalesCenteredSimilarity2DTransformScale3;
    QLineEdit *m_ScalesCenteredSimilarity2DTransformScale4;
    QLineEdit *m_ScalesCenteredSimilarity2DTransformScaleTranslationX;
    QLineEdit *m_ScalesCenteredSimilarity2DTransformScaleTranslationY;
    QGroupBox *m_CenterForInitializerCenteredSimilarity2D;
    QHBoxLayout *horizontalLayout_15;
    QRadioButton *m_GeometryCenteredSimilarity2D;
    QRadioButton *m_MomentsCenteredSimilarity2D;

    void setupUi(QWidget *QmitkCenteredSimilarity2DTransformControls)
    {
        if (QmitkCenteredSimilarity2DTransformControls->objectName().isEmpty())
            QmitkCenteredSimilarity2DTransformControls->setObjectName(QStringLiteral("QmitkCenteredSimilarity2DTransformControls"));
        QmitkCenteredSimilarity2DTransformControls->resize(173, 272);
        verticalLayout = new QVBoxLayout(QmitkCenteredSimilarity2DTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_CenteredSimilarity2DTransformFrame = new QFrame(QmitkCenteredSimilarity2DTransformControls);
        m_CenteredSimilarity2DTransformFrame->setObjectName(QStringLiteral("m_CenteredSimilarity2DTransformFrame"));
        m_CenteredSimilarity2DTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_CenteredSimilarity2DTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_92 = new QVBoxLayout(m_CenteredSimilarity2DTransformFrame);
        verticalLayout_92->setSpacing(0);
        verticalLayout_92->setContentsMargins(0, 0, 0, 0);
        verticalLayout_92->setObjectName(QStringLiteral("verticalLayout_92"));
        _184 = new QHBoxLayout();
        _184->setObjectName(QStringLiteral("_184"));
        _185 = new QVBoxLayout();
        _185->setObjectName(QStringLiteral("_185"));
        textLabel1_7_2 = new QLabel(m_CenteredSimilarity2DTransformFrame);
        textLabel1_7_2->setObjectName(QStringLiteral("textLabel1_7_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_7_2->setFont(font);
        textLabel1_7_2->setWordWrap(false);

        _185->addWidget(textLabel1_7_2);

        textLabel2_5_2 = new QLabel(m_CenteredSimilarity2DTransformFrame);
        textLabel2_5_2->setObjectName(QStringLiteral("textLabel2_5_2"));
        textLabel2_5_2->setFont(font);
        textLabel2_5_2->setWordWrap(false);

        _185->addWidget(textLabel2_5_2);


        _184->addLayout(_185);

        _186 = new QVBoxLayout();
        _186->setObjectName(QStringLiteral("_186"));
        m_InitialScaleCenteredSimilarity2D = new QLineEdit(m_CenteredSimilarity2DTransformFrame);
        m_InitialScaleCenteredSimilarity2D->setObjectName(QStringLiteral("m_InitialScaleCenteredSimilarity2D"));
        m_InitialScaleCenteredSimilarity2D->setMinimumSize(QSize(0, 20));
        m_InitialScaleCenteredSimilarity2D->setFont(font);
        m_InitialScaleCenteredSimilarity2D->setAlignment(Qt::AlignRight);

        _186->addWidget(m_InitialScaleCenteredSimilarity2D);

        m_AngleCenteredSimilarity2D = new QLineEdit(m_CenteredSimilarity2DTransformFrame);
        m_AngleCenteredSimilarity2D->setObjectName(QStringLiteral("m_AngleCenteredSimilarity2D"));
        m_AngleCenteredSimilarity2D->setMinimumSize(QSize(0, 20));
        m_AngleCenteredSimilarity2D->setFont(font);
        m_AngleCenteredSimilarity2D->setAlignment(Qt::AlignRight);

        _186->addWidget(m_AngleCenteredSimilarity2D);


        _184->addLayout(_186);


        verticalLayout_92->addLayout(_184);

        m_UseOptimizerScalesCenteredSimilarity2D = new QGroupBox(m_CenteredSimilarity2DTransformFrame);
        m_UseOptimizerScalesCenteredSimilarity2D->setObjectName(QStringLiteral("m_UseOptimizerScalesCenteredSimilarity2D"));
        m_UseOptimizerScalesCenteredSimilarity2D->setFlat(true);
        m_UseOptimizerScalesCenteredSimilarity2D->setCheckable(true);
        verticalLayout_91 = new QVBoxLayout(m_UseOptimizerScalesCenteredSimilarity2D);
        verticalLayout_91->setSpacing(0);
        verticalLayout_91->setContentsMargins(0, 0, 0, 0);
        verticalLayout_91->setObjectName(QStringLiteral("verticalLayout_91"));
        _188 = new QHBoxLayout();
        _188->setObjectName(QStringLiteral("_188"));
        _189 = new QVBoxLayout();
        _189->setObjectName(QStringLiteral("_189"));
        textLabel1_8_2_3_2_2_2_3_4_4 = new QLabel(m_UseOptimizerScalesCenteredSimilarity2D);
        textLabel1_8_2_3_2_2_2_3_4_4->setObjectName(QStringLiteral("textLabel1_8_2_3_2_2_2_3_4_4"));
        textLabel1_8_2_3_2_2_2_3_4_4->setFont(font);
        textLabel1_8_2_3_2_2_2_3_4_4->setWordWrap(false);

        _189->addWidget(textLabel1_8_2_3_2_2_2_3_4_4);

        textLabel2_6_3_3_2_2_2_3_4_3 = new QLabel(m_UseOptimizerScalesCenteredSimilarity2D);
        textLabel2_6_3_3_2_2_2_3_4_3->setObjectName(QStringLiteral("textLabel2_6_3_3_2_2_2_3_4_3"));
        textLabel2_6_3_3_2_2_2_3_4_3->setFont(font);
        textLabel2_6_3_3_2_2_2_3_4_3->setWordWrap(false);

        _189->addWidget(textLabel2_6_3_3_2_2_2_3_4_3);

        textLabel3_5_3_3_2_2_2_3_4_3 = new QLabel(m_UseOptimizerScalesCenteredSimilarity2D);
        textLabel3_5_3_3_2_2_2_3_4_3->setObjectName(QStringLiteral("textLabel3_5_3_3_2_2_2_3_4_3"));
        textLabel3_5_3_3_2_2_2_3_4_3->setFont(font);
        textLabel3_5_3_3_2_2_2_3_4_3->setWordWrap(false);

        _189->addWidget(textLabel3_5_3_3_2_2_2_3_4_3);

        textLabel1_9_2_2_2_2_2_3 = new QLabel(m_UseOptimizerScalesCenteredSimilarity2D);
        textLabel1_9_2_2_2_2_2_3->setObjectName(QStringLiteral("textLabel1_9_2_2_2_2_2_3"));
        textLabel1_9_2_2_2_2_2_3->setFont(font);
        textLabel1_9_2_2_2_2_2_3->setWordWrap(false);

        _189->addWidget(textLabel1_9_2_2_2_2_2_3);

        textLabel11_3_2_2_2_3_3_4 = new QLabel(m_UseOptimizerScalesCenteredSimilarity2D);
        textLabel11_3_2_2_2_3_3_4->setObjectName(QStringLiteral("textLabel11_3_2_2_2_3_3_4"));
        textLabel11_3_2_2_2_3_3_4->setFont(font);
        textLabel11_3_2_2_2_3_3_4->setWordWrap(false);

        _189->addWidget(textLabel11_3_2_2_2_3_3_4);

        textLabel12_3_2_2_2_3_3_4 = new QLabel(m_UseOptimizerScalesCenteredSimilarity2D);
        textLabel12_3_2_2_2_3_3_4->setObjectName(QStringLiteral("textLabel12_3_2_2_2_3_3_4"));
        textLabel12_3_2_2_2_3_3_4->setFont(font);
        textLabel12_3_2_2_2_3_3_4->setWordWrap(false);

        _189->addWidget(textLabel12_3_2_2_2_3_3_4);


        _188->addLayout(_189);

        _190 = new QVBoxLayout();
        _190->setObjectName(QStringLiteral("_190"));
        m_ScalesCenteredSimilarity2DTransformScale1 = new QLineEdit(m_UseOptimizerScalesCenteredSimilarity2D);
        m_ScalesCenteredSimilarity2DTransformScale1->setObjectName(QStringLiteral("m_ScalesCenteredSimilarity2DTransformScale1"));
        m_ScalesCenteredSimilarity2DTransformScale1->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredSimilarity2DTransformScale1->setFont(font);
        m_ScalesCenteredSimilarity2DTransformScale1->setAlignment(Qt::AlignRight);

        _190->addWidget(m_ScalesCenteredSimilarity2DTransformScale1);

        m_ScalesCenteredSimilarity2DTransformScale2 = new QLineEdit(m_UseOptimizerScalesCenteredSimilarity2D);
        m_ScalesCenteredSimilarity2DTransformScale2->setObjectName(QStringLiteral("m_ScalesCenteredSimilarity2DTransformScale2"));
        m_ScalesCenteredSimilarity2DTransformScale2->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredSimilarity2DTransformScale2->setFont(font);
        m_ScalesCenteredSimilarity2DTransformScale2->setAlignment(Qt::AlignRight);

        _190->addWidget(m_ScalesCenteredSimilarity2DTransformScale2);

        m_ScalesCenteredSimilarity2DTransformScale3 = new QLineEdit(m_UseOptimizerScalesCenteredSimilarity2D);
        m_ScalesCenteredSimilarity2DTransformScale3->setObjectName(QStringLiteral("m_ScalesCenteredSimilarity2DTransformScale3"));
        m_ScalesCenteredSimilarity2DTransformScale3->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredSimilarity2DTransformScale3->setFont(font);
        m_ScalesCenteredSimilarity2DTransformScale3->setAlignment(Qt::AlignRight);

        _190->addWidget(m_ScalesCenteredSimilarity2DTransformScale3);

        m_ScalesCenteredSimilarity2DTransformScale4 = new QLineEdit(m_UseOptimizerScalesCenteredSimilarity2D);
        m_ScalesCenteredSimilarity2DTransformScale4->setObjectName(QStringLiteral("m_ScalesCenteredSimilarity2DTransformScale4"));
        m_ScalesCenteredSimilarity2DTransformScale4->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredSimilarity2DTransformScale4->setFont(font);
        m_ScalesCenteredSimilarity2DTransformScale4->setAlignment(Qt::AlignRight);

        _190->addWidget(m_ScalesCenteredSimilarity2DTransformScale4);

        m_ScalesCenteredSimilarity2DTransformScaleTranslationX = new QLineEdit(m_UseOptimizerScalesCenteredSimilarity2D);
        m_ScalesCenteredSimilarity2DTransformScaleTranslationX->setObjectName(QStringLiteral("m_ScalesCenteredSimilarity2DTransformScaleTranslationX"));
        m_ScalesCenteredSimilarity2DTransformScaleTranslationX->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredSimilarity2DTransformScaleTranslationX->setFont(font);
        m_ScalesCenteredSimilarity2DTransformScaleTranslationX->setAlignment(Qt::AlignRight);

        _190->addWidget(m_ScalesCenteredSimilarity2DTransformScaleTranslationX);

        m_ScalesCenteredSimilarity2DTransformScaleTranslationY = new QLineEdit(m_UseOptimizerScalesCenteredSimilarity2D);
        m_ScalesCenteredSimilarity2DTransformScaleTranslationY->setObjectName(QStringLiteral("m_ScalesCenteredSimilarity2DTransformScaleTranslationY"));
        m_ScalesCenteredSimilarity2DTransformScaleTranslationY->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredSimilarity2DTransformScaleTranslationY->setFont(font);
        m_ScalesCenteredSimilarity2DTransformScaleTranslationY->setAlignment(Qt::AlignRight);

        _190->addWidget(m_ScalesCenteredSimilarity2DTransformScaleTranslationY);


        _188->addLayout(_190);


        verticalLayout_91->addLayout(_188);


        verticalLayout_92->addWidget(m_UseOptimizerScalesCenteredSimilarity2D);

        m_CenterForInitializerCenteredSimilarity2D = new QGroupBox(m_CenteredSimilarity2DTransformFrame);
        m_CenterForInitializerCenteredSimilarity2D->setObjectName(QStringLiteral("m_CenterForInitializerCenteredSimilarity2D"));
        m_CenterForInitializerCenteredSimilarity2D->setFlat(true);
        m_CenterForInitializerCenteredSimilarity2D->setCheckable(true);
        horizontalLayout_15 = new QHBoxLayout(m_CenterForInitializerCenteredSimilarity2D);
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        m_GeometryCenteredSimilarity2D = new QRadioButton(m_CenterForInitializerCenteredSimilarity2D);
        m_GeometryCenteredSimilarity2D->setObjectName(QStringLiteral("m_GeometryCenteredSimilarity2D"));
        m_GeometryCenteredSimilarity2D->setEnabled(true);
        m_GeometryCenteredSimilarity2D->setMinimumSize(QSize(0, 20));
        m_GeometryCenteredSimilarity2D->setFont(font);

        horizontalLayout_15->addWidget(m_GeometryCenteredSimilarity2D);

        m_MomentsCenteredSimilarity2D = new QRadioButton(m_CenterForInitializerCenteredSimilarity2D);
        m_MomentsCenteredSimilarity2D->setObjectName(QStringLiteral("m_MomentsCenteredSimilarity2D"));
        m_MomentsCenteredSimilarity2D->setEnabled(true);
        m_MomentsCenteredSimilarity2D->setMinimumSize(QSize(0, 20));
        m_MomentsCenteredSimilarity2D->setFont(font);
        m_MomentsCenteredSimilarity2D->setChecked(true);

        horizontalLayout_15->addWidget(m_MomentsCenteredSimilarity2D);


        verticalLayout_92->addWidget(m_CenterForInitializerCenteredSimilarity2D);


        verticalLayout->addWidget(m_CenteredSimilarity2DTransformFrame);


        retranslateUi(QmitkCenteredSimilarity2DTransformControls);

        QMetaObject::connectSlotsByName(QmitkCenteredSimilarity2DTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkCenteredSimilarity2DTransformControls)
    {
        QmitkCenteredSimilarity2DTransformControls->setWindowTitle(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Form", 0));
        textLabel1_7_2->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Initial Scale:", 0));
        textLabel2_5_2->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Initial Angle:", 0));
        m_InitialScaleCenteredSimilarity2D->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "1.0", 0));
        m_AngleCenteredSimilarity2D->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "0.0", 0));
        m_UseOptimizerScalesCenteredSimilarity2D->setTitle(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8_2_3_2_2_2_3_4_4->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Scale Scaling:", 0));
        textLabel2_6_3_3_2_2_2_3_4_3->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Scale Rotation:", 0));
        textLabel3_5_3_3_2_2_2_3_4_3->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Scale Center X:", 0));
        textLabel1_9_2_2_2_2_2_3->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Scale Center Y:", 0));
        textLabel11_3_2_2_2_3_3_4->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Translation Scale X:", 0));
        textLabel12_3_2_2_2_3_3_4->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Translation Scale Y:", 0));
        m_ScalesCenteredSimilarity2DTransformScale1->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "10.0", 0));
        m_ScalesCenteredSimilarity2DTransformScale2->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "1.0", 0));
        m_ScalesCenteredSimilarity2DTransformScale3->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "0.001", 0));
        m_ScalesCenteredSimilarity2DTransformScale4->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "0.001", 0));
        m_ScalesCenteredSimilarity2DTransformScaleTranslationX->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "0.001", 0));
        m_ScalesCenteredSimilarity2DTransformScaleTranslationY->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "0.001", 0));
        m_CenterForInitializerCenteredSimilarity2D->setTitle(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Center for Initializer", 0));
        m_GeometryCenteredSimilarity2D->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Geometry", 0));
        m_MomentsCenteredSimilarity2D->setText(QApplication::translate("QmitkCenteredSimilarity2DTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkCenteredSimilarity2DTransformControls: public Ui_QmitkCenteredSimilarity2DTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKCENTEREDSIMILARITY2DTRANSFORMCONTROLS_H
