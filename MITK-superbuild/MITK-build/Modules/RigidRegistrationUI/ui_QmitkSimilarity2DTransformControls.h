/********************************************************************************
** Form generated from reading UI file 'QmitkSimilarity2DTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSIMILARITY2DTRANSFORMCONTROLS_H
#define UI_QMITKSIMILARITY2DTRANSFORMCONTROLS_H

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

class Ui_QmitkSimilarity2DTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_Similarity2DTransformFrame;
    QVBoxLayout *verticalLayout_90;
    QHBoxLayout *_174;
    QVBoxLayout *_175;
    QLabel *textLabel1_7;
    QLabel *textLabel2_5;
    QVBoxLayout *_176;
    QLineEdit *m_InitialScaleSimilarity2D;
    QLineEdit *m_AngleSimilarity2D;
    QGroupBox *m_UseOptimizerScalesSimilarity2D;
    QVBoxLayout *verticalLayout_89;
    QHBoxLayout *_178;
    QVBoxLayout *_179;
    QLabel *textLabel2_6_3_3_2_2_2_3_4_2_3;
    QLabel *textLabel3_5_3_3_2_2_2_3_4_2_2;
    QLabel *textLabel11_3_2_2_2_3_3_3_3;
    QLabel *textLabel12_3_2_2_2_3_3_3_3;
    QVBoxLayout *_180;
    QLineEdit *m_ScalingScaleSimilarity2D;
    QLineEdit *m_RotationScaleSimilarity2D;
    QLineEdit *m_TranslationXScaleSimilarity2D;
    QLineEdit *m_TranslationYScaleSimilarity2D;
    QGroupBox *m_CenterForInitializerSimilarity2D;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *m_GeometrySimilarity2D;
    QRadioButton *m_MomentsSimilarity2D;

    void setupUi(QWidget *QmitkSimilarity2DTransformControls)
    {
        if (QmitkSimilarity2DTransformControls->objectName().isEmpty())
            QmitkSimilarity2DTransformControls->setObjectName(QStringLiteral("QmitkSimilarity2DTransformControls"));
        QmitkSimilarity2DTransformControls->resize(173, 220);
        verticalLayout = new QVBoxLayout(QmitkSimilarity2DTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_Similarity2DTransformFrame = new QFrame(QmitkSimilarity2DTransformControls);
        m_Similarity2DTransformFrame->setObjectName(QStringLiteral("m_Similarity2DTransformFrame"));
        m_Similarity2DTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_Similarity2DTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_90 = new QVBoxLayout(m_Similarity2DTransformFrame);
        verticalLayout_90->setSpacing(0);
        verticalLayout_90->setContentsMargins(0, 0, 0, 0);
        verticalLayout_90->setObjectName(QStringLiteral("verticalLayout_90"));
        _174 = new QHBoxLayout();
        _174->setObjectName(QStringLiteral("_174"));
        _175 = new QVBoxLayout();
        _175->setObjectName(QStringLiteral("_175"));
        textLabel1_7 = new QLabel(m_Similarity2DTransformFrame);
        textLabel1_7->setObjectName(QStringLiteral("textLabel1_7"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_7->setFont(font);
        textLabel1_7->setWordWrap(false);

        _175->addWidget(textLabel1_7);

        textLabel2_5 = new QLabel(m_Similarity2DTransformFrame);
        textLabel2_5->setObjectName(QStringLiteral("textLabel2_5"));
        textLabel2_5->setFont(font);
        textLabel2_5->setWordWrap(false);

        _175->addWidget(textLabel2_5);


        _174->addLayout(_175);

        _176 = new QVBoxLayout();
        _176->setObjectName(QStringLiteral("_176"));
        m_InitialScaleSimilarity2D = new QLineEdit(m_Similarity2DTransformFrame);
        m_InitialScaleSimilarity2D->setObjectName(QStringLiteral("m_InitialScaleSimilarity2D"));
        m_InitialScaleSimilarity2D->setMinimumSize(QSize(0, 20));
        m_InitialScaleSimilarity2D->setFont(font);
        m_InitialScaleSimilarity2D->setAlignment(Qt::AlignRight);

        _176->addWidget(m_InitialScaleSimilarity2D);

        m_AngleSimilarity2D = new QLineEdit(m_Similarity2DTransformFrame);
        m_AngleSimilarity2D->setObjectName(QStringLiteral("m_AngleSimilarity2D"));
        m_AngleSimilarity2D->setMinimumSize(QSize(0, 20));
        m_AngleSimilarity2D->setFont(font);
        m_AngleSimilarity2D->setAlignment(Qt::AlignRight);

        _176->addWidget(m_AngleSimilarity2D);


        _174->addLayout(_176);


        verticalLayout_90->addLayout(_174);

        m_UseOptimizerScalesSimilarity2D = new QGroupBox(m_Similarity2DTransformFrame);
        m_UseOptimizerScalesSimilarity2D->setObjectName(QStringLiteral("m_UseOptimizerScalesSimilarity2D"));
        m_UseOptimizerScalesSimilarity2D->setFlat(true);
        m_UseOptimizerScalesSimilarity2D->setCheckable(true);
        verticalLayout_89 = new QVBoxLayout(m_UseOptimizerScalesSimilarity2D);
        verticalLayout_89->setSpacing(0);
        verticalLayout_89->setContentsMargins(0, 0, 0, 0);
        verticalLayout_89->setObjectName(QStringLiteral("verticalLayout_89"));
        _178 = new QHBoxLayout();
        _178->setObjectName(QStringLiteral("_178"));
        _179 = new QVBoxLayout();
        _179->setObjectName(QStringLiteral("_179"));
        textLabel2_6_3_3_2_2_2_3_4_2_3 = new QLabel(m_UseOptimizerScalesSimilarity2D);
        textLabel2_6_3_3_2_2_2_3_4_2_3->setObjectName(QStringLiteral("textLabel2_6_3_3_2_2_2_3_4_2_3"));
        textLabel2_6_3_3_2_2_2_3_4_2_3->setFont(font);
        textLabel2_6_3_3_2_2_2_3_4_2_3->setWordWrap(false);

        _179->addWidget(textLabel2_6_3_3_2_2_2_3_4_2_3);

        textLabel3_5_3_3_2_2_2_3_4_2_2 = new QLabel(m_UseOptimizerScalesSimilarity2D);
        textLabel3_5_3_3_2_2_2_3_4_2_2->setObjectName(QStringLiteral("textLabel3_5_3_3_2_2_2_3_4_2_2"));
        textLabel3_5_3_3_2_2_2_3_4_2_2->setFont(font);
        textLabel3_5_3_3_2_2_2_3_4_2_2->setWordWrap(false);

        _179->addWidget(textLabel3_5_3_3_2_2_2_3_4_2_2);

        textLabel11_3_2_2_2_3_3_3_3 = new QLabel(m_UseOptimizerScalesSimilarity2D);
        textLabel11_3_2_2_2_3_3_3_3->setObjectName(QStringLiteral("textLabel11_3_2_2_2_3_3_3_3"));
        textLabel11_3_2_2_2_3_3_3_3->setFont(font);
        textLabel11_3_2_2_2_3_3_3_3->setWordWrap(false);

        _179->addWidget(textLabel11_3_2_2_2_3_3_3_3);

        textLabel12_3_2_2_2_3_3_3_3 = new QLabel(m_UseOptimizerScalesSimilarity2D);
        textLabel12_3_2_2_2_3_3_3_3->setObjectName(QStringLiteral("textLabel12_3_2_2_2_3_3_3_3"));
        textLabel12_3_2_2_2_3_3_3_3->setFont(font);
        textLabel12_3_2_2_2_3_3_3_3->setWordWrap(false);

        _179->addWidget(textLabel12_3_2_2_2_3_3_3_3);


        _178->addLayout(_179);

        _180 = new QVBoxLayout();
        _180->setObjectName(QStringLiteral("_180"));
        m_ScalingScaleSimilarity2D = new QLineEdit(m_UseOptimizerScalesSimilarity2D);
        m_ScalingScaleSimilarity2D->setObjectName(QStringLiteral("m_ScalingScaleSimilarity2D"));
        m_ScalingScaleSimilarity2D->setMinimumSize(QSize(0, 20));
        m_ScalingScaleSimilarity2D->setFont(font);
        m_ScalingScaleSimilarity2D->setAlignment(Qt::AlignRight);

        _180->addWidget(m_ScalingScaleSimilarity2D);

        m_RotationScaleSimilarity2D = new QLineEdit(m_UseOptimizerScalesSimilarity2D);
        m_RotationScaleSimilarity2D->setObjectName(QStringLiteral("m_RotationScaleSimilarity2D"));
        m_RotationScaleSimilarity2D->setMinimumSize(QSize(0, 20));
        m_RotationScaleSimilarity2D->setFont(font);
        m_RotationScaleSimilarity2D->setAlignment(Qt::AlignRight);

        _180->addWidget(m_RotationScaleSimilarity2D);

        m_TranslationXScaleSimilarity2D = new QLineEdit(m_UseOptimizerScalesSimilarity2D);
        m_TranslationXScaleSimilarity2D->setObjectName(QStringLiteral("m_TranslationXScaleSimilarity2D"));
        m_TranslationXScaleSimilarity2D->setMinimumSize(QSize(0, 20));
        m_TranslationXScaleSimilarity2D->setFont(font);
        m_TranslationXScaleSimilarity2D->setAlignment(Qt::AlignRight);

        _180->addWidget(m_TranslationXScaleSimilarity2D);

        m_TranslationYScaleSimilarity2D = new QLineEdit(m_UseOptimizerScalesSimilarity2D);
        m_TranslationYScaleSimilarity2D->setObjectName(QStringLiteral("m_TranslationYScaleSimilarity2D"));
        m_TranslationYScaleSimilarity2D->setMinimumSize(QSize(0, 20));
        m_TranslationYScaleSimilarity2D->setFont(font);
        m_TranslationYScaleSimilarity2D->setAlignment(Qt::AlignRight);

        _180->addWidget(m_TranslationYScaleSimilarity2D);


        _178->addLayout(_180);


        verticalLayout_89->addLayout(_178);


        verticalLayout_90->addWidget(m_UseOptimizerScalesSimilarity2D);

        m_CenterForInitializerSimilarity2D = new QGroupBox(m_Similarity2DTransformFrame);
        m_CenterForInitializerSimilarity2D->setObjectName(QStringLiteral("m_CenterForInitializerSimilarity2D"));
        m_CenterForInitializerSimilarity2D->setFlat(true);
        m_CenterForInitializerSimilarity2D->setCheckable(true);
        horizontalLayout_14 = new QHBoxLayout(m_CenterForInitializerSimilarity2D);
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        m_GeometrySimilarity2D = new QRadioButton(m_CenterForInitializerSimilarity2D);
        m_GeometrySimilarity2D->setObjectName(QStringLiteral("m_GeometrySimilarity2D"));
        m_GeometrySimilarity2D->setEnabled(true);
        m_GeometrySimilarity2D->setMinimumSize(QSize(0, 20));
        m_GeometrySimilarity2D->setFont(font);

        horizontalLayout_14->addWidget(m_GeometrySimilarity2D);

        m_MomentsSimilarity2D = new QRadioButton(m_CenterForInitializerSimilarity2D);
        m_MomentsSimilarity2D->setObjectName(QStringLiteral("m_MomentsSimilarity2D"));
        m_MomentsSimilarity2D->setEnabled(true);
        m_MomentsSimilarity2D->setMinimumSize(QSize(0, 20));
        m_MomentsSimilarity2D->setFont(font);
        m_MomentsSimilarity2D->setChecked(true);

        horizontalLayout_14->addWidget(m_MomentsSimilarity2D);


        verticalLayout_90->addWidget(m_CenterForInitializerSimilarity2D);


        verticalLayout->addWidget(m_Similarity2DTransformFrame);


        retranslateUi(QmitkSimilarity2DTransformControls);

        QMetaObject::connectSlotsByName(QmitkSimilarity2DTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkSimilarity2DTransformControls)
    {
        QmitkSimilarity2DTransformControls->setWindowTitle(QApplication::translate("QmitkSimilarity2DTransformControls", "Form", 0));
        textLabel1_7->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "Initial Scale:", 0));
        textLabel2_5->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "Initial Angle:", 0));
        m_InitialScaleSimilarity2D->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "1.0", 0));
        m_AngleSimilarity2D->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "0.0", 0));
        m_UseOptimizerScalesSimilarity2D->setTitle(QApplication::translate("QmitkSimilarity2DTransformControls", "Use Optimizer Scales", 0));
        textLabel2_6_3_3_2_2_2_3_4_2_3->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "Scale Scaling:", 0));
        textLabel3_5_3_3_2_2_2_3_4_2_2->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "Scale Rotation:", 0));
        textLabel11_3_2_2_2_3_3_3_3->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "Translation Scale X:", 0));
        textLabel12_3_2_2_2_3_3_3_3->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "Translation Scale Y:", 0));
        m_ScalingScaleSimilarity2D->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "10.0", 0));
        m_RotationScaleSimilarity2D->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "1.0", 0));
        m_TranslationXScaleSimilarity2D->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "0.001", 0));
        m_TranslationYScaleSimilarity2D->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "0.001", 0));
        m_CenterForInitializerSimilarity2D->setTitle(QApplication::translate("QmitkSimilarity2DTransformControls", "Center for Initializer", 0));
        m_GeometrySimilarity2D->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "Geometry", 0));
        m_MomentsSimilarity2D->setText(QApplication::translate("QmitkSimilarity2DTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkSimilarity2DTransformControls: public Ui_QmitkSimilarity2DTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSIMILARITY2DTRANSFORMCONTROLS_H
