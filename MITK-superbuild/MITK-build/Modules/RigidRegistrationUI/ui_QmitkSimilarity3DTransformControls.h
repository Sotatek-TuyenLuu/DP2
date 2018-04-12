/********************************************************************************
** Form generated from reading UI file 'QmitkSimilarity3DTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSIMILARITY3DTRANSFORMCONTROLS_H
#define UI_QMITKSIMILARITY3DTRANSFORMCONTROLS_H

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

class Ui_QmitkSimilarity3DTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_Similarity3DTransformFrame;
    QVBoxLayout *verticalLayout_82;
    QGroupBox *m_UseOptimizerScalesSimilarity3D;
    QVBoxLayout *verticalLayout_81;
    QHBoxLayout *_146;
    QVBoxLayout *_147;
    QLabel *textLabel1_8_2_3_2_2_2_3_4;
    QLabel *textLabel2_6_3_3_2_2_2_3_4;
    QLabel *textLabel3_5_3_3_2_2_2_3_4;
    QLabel *textLabel1_9_2_2_2_2_2;
    QLabel *textLabel11_3_2_2_2_3_3;
    QLabel *textLabel12_3_2_2_2_3_3;
    QLabel *textLabel13_2_2_2_2_3_3;
    QVBoxLayout *_148;
    QLineEdit *m_ScalesSimilarity3DTransformScale1;
    QLineEdit *m_ScalesSimilarity3DTransformScale2;
    QLineEdit *m_ScalesSimilarity3DTransformScale3;
    QLineEdit *m_ScalesSimilarity3DTransformScale4;
    QLineEdit *m_ScalesSimilarity3DTransformScaleTranslationX;
    QLineEdit *m_ScalesSimilarity3DTransformScaleTranslationY;
    QLineEdit *m_ScalesSimilarity3DTransformScaleTranslationZ;
    QGroupBox *m_CenterForInitializerSimilarity3D;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *m_GeometrySimilarity3D;
    QRadioButton *m_MomentsSimilarity3D;

    void setupUi(QWidget *QmitkSimilarity3DTransformControls)
    {
        if (QmitkSimilarity3DTransformControls->objectName().isEmpty())
            QmitkSimilarity3DTransformControls->setObjectName(QStringLiteral("QmitkSimilarity3DTransformControls"));
        QmitkSimilarity3DTransformControls->resize(173, 248);
        verticalLayout = new QVBoxLayout(QmitkSimilarity3DTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_Similarity3DTransformFrame = new QFrame(QmitkSimilarity3DTransformControls);
        m_Similarity3DTransformFrame->setObjectName(QStringLiteral("m_Similarity3DTransformFrame"));
        m_Similarity3DTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_Similarity3DTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_82 = new QVBoxLayout(m_Similarity3DTransformFrame);
        verticalLayout_82->setSpacing(0);
        verticalLayout_82->setContentsMargins(0, 0, 0, 0);
        verticalLayout_82->setObjectName(QStringLiteral("verticalLayout_82"));
        m_UseOptimizerScalesSimilarity3D = new QGroupBox(m_Similarity3DTransformFrame);
        m_UseOptimizerScalesSimilarity3D->setObjectName(QStringLiteral("m_UseOptimizerScalesSimilarity3D"));
        m_UseOptimizerScalesSimilarity3D->setFlat(true);
        m_UseOptimizerScalesSimilarity3D->setCheckable(true);
        verticalLayout_81 = new QVBoxLayout(m_UseOptimizerScalesSimilarity3D);
        verticalLayout_81->setSpacing(0);
        verticalLayout_81->setContentsMargins(0, 0, 0, 0);
        verticalLayout_81->setObjectName(QStringLiteral("verticalLayout_81"));
        _146 = new QHBoxLayout();
        _146->setObjectName(QStringLiteral("_146"));
        _147 = new QVBoxLayout();
        _147->setObjectName(QStringLiteral("_147"));
        textLabel1_8_2_3_2_2_2_3_4 = new QLabel(m_UseOptimizerScalesSimilarity3D);
        textLabel1_8_2_3_2_2_2_3_4->setObjectName(QStringLiteral("textLabel1_8_2_3_2_2_2_3_4"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_8_2_3_2_2_2_3_4->setFont(font);
        textLabel1_8_2_3_2_2_2_3_4->setWordWrap(false);

        _147->addWidget(textLabel1_8_2_3_2_2_2_3_4);

        textLabel2_6_3_3_2_2_2_3_4 = new QLabel(m_UseOptimizerScalesSimilarity3D);
        textLabel2_6_3_3_2_2_2_3_4->setObjectName(QStringLiteral("textLabel2_6_3_3_2_2_2_3_4"));
        textLabel2_6_3_3_2_2_2_3_4->setFont(font);
        textLabel2_6_3_3_2_2_2_3_4->setWordWrap(false);

        _147->addWidget(textLabel2_6_3_3_2_2_2_3_4);

        textLabel3_5_3_3_2_2_2_3_4 = new QLabel(m_UseOptimizerScalesSimilarity3D);
        textLabel3_5_3_3_2_2_2_3_4->setObjectName(QStringLiteral("textLabel3_5_3_3_2_2_2_3_4"));
        textLabel3_5_3_3_2_2_2_3_4->setFont(font);
        textLabel3_5_3_3_2_2_2_3_4->setWordWrap(false);

        _147->addWidget(textLabel3_5_3_3_2_2_2_3_4);

        textLabel1_9_2_2_2_2_2 = new QLabel(m_UseOptimizerScalesSimilarity3D);
        textLabel1_9_2_2_2_2_2->setObjectName(QStringLiteral("textLabel1_9_2_2_2_2_2"));
        textLabel1_9_2_2_2_2_2->setFont(font);
        textLabel1_9_2_2_2_2_2->setWordWrap(false);

        _147->addWidget(textLabel1_9_2_2_2_2_2);

        textLabel11_3_2_2_2_3_3 = new QLabel(m_UseOptimizerScalesSimilarity3D);
        textLabel11_3_2_2_2_3_3->setObjectName(QStringLiteral("textLabel11_3_2_2_2_3_3"));
        textLabel11_3_2_2_2_3_3->setFont(font);
        textLabel11_3_2_2_2_3_3->setWordWrap(false);

        _147->addWidget(textLabel11_3_2_2_2_3_3);

        textLabel12_3_2_2_2_3_3 = new QLabel(m_UseOptimizerScalesSimilarity3D);
        textLabel12_3_2_2_2_3_3->setObjectName(QStringLiteral("textLabel12_3_2_2_2_3_3"));
        textLabel12_3_2_2_2_3_3->setFont(font);
        textLabel12_3_2_2_2_3_3->setWordWrap(false);

        _147->addWidget(textLabel12_3_2_2_2_3_3);

        textLabel13_2_2_2_2_3_3 = new QLabel(m_UseOptimizerScalesSimilarity3D);
        textLabel13_2_2_2_2_3_3->setObjectName(QStringLiteral("textLabel13_2_2_2_2_3_3"));
        textLabel13_2_2_2_2_3_3->setFont(font);
        textLabel13_2_2_2_2_3_3->setWordWrap(false);

        _147->addWidget(textLabel13_2_2_2_2_3_3);


        _146->addLayout(_147);

        _148 = new QVBoxLayout();
        _148->setObjectName(QStringLiteral("_148"));
        m_ScalesSimilarity3DTransformScale1 = new QLineEdit(m_UseOptimizerScalesSimilarity3D);
        m_ScalesSimilarity3DTransformScale1->setObjectName(QStringLiteral("m_ScalesSimilarity3DTransformScale1"));
        m_ScalesSimilarity3DTransformScale1->setMinimumSize(QSize(0, 20));
        m_ScalesSimilarity3DTransformScale1->setFont(font);
        m_ScalesSimilarity3DTransformScale1->setAlignment(Qt::AlignRight);

        _148->addWidget(m_ScalesSimilarity3DTransformScale1);

        m_ScalesSimilarity3DTransformScale2 = new QLineEdit(m_UseOptimizerScalesSimilarity3D);
        m_ScalesSimilarity3DTransformScale2->setObjectName(QStringLiteral("m_ScalesSimilarity3DTransformScale2"));
        m_ScalesSimilarity3DTransformScale2->setMinimumSize(QSize(0, 20));
        m_ScalesSimilarity3DTransformScale2->setFont(font);
        m_ScalesSimilarity3DTransformScale2->setAlignment(Qt::AlignRight);

        _148->addWidget(m_ScalesSimilarity3DTransformScale2);

        m_ScalesSimilarity3DTransformScale3 = new QLineEdit(m_UseOptimizerScalesSimilarity3D);
        m_ScalesSimilarity3DTransformScale3->setObjectName(QStringLiteral("m_ScalesSimilarity3DTransformScale3"));
        m_ScalesSimilarity3DTransformScale3->setMinimumSize(QSize(0, 20));
        m_ScalesSimilarity3DTransformScale3->setFont(font);
        m_ScalesSimilarity3DTransformScale3->setAlignment(Qt::AlignRight);

        _148->addWidget(m_ScalesSimilarity3DTransformScale3);

        m_ScalesSimilarity3DTransformScale4 = new QLineEdit(m_UseOptimizerScalesSimilarity3D);
        m_ScalesSimilarity3DTransformScale4->setObjectName(QStringLiteral("m_ScalesSimilarity3DTransformScale4"));
        m_ScalesSimilarity3DTransformScale4->setMinimumSize(QSize(0, 20));
        m_ScalesSimilarity3DTransformScale4->setFont(font);
        m_ScalesSimilarity3DTransformScale4->setAlignment(Qt::AlignRight);

        _148->addWidget(m_ScalesSimilarity3DTransformScale4);

        m_ScalesSimilarity3DTransformScaleTranslationX = new QLineEdit(m_UseOptimizerScalesSimilarity3D);
        m_ScalesSimilarity3DTransformScaleTranslationX->setObjectName(QStringLiteral("m_ScalesSimilarity3DTransformScaleTranslationX"));
        m_ScalesSimilarity3DTransformScaleTranslationX->setMinimumSize(QSize(0, 20));
        m_ScalesSimilarity3DTransformScaleTranslationX->setFont(font);
        m_ScalesSimilarity3DTransformScaleTranslationX->setAlignment(Qt::AlignRight);

        _148->addWidget(m_ScalesSimilarity3DTransformScaleTranslationX);

        m_ScalesSimilarity3DTransformScaleTranslationY = new QLineEdit(m_UseOptimizerScalesSimilarity3D);
        m_ScalesSimilarity3DTransformScaleTranslationY->setObjectName(QStringLiteral("m_ScalesSimilarity3DTransformScaleTranslationY"));
        m_ScalesSimilarity3DTransformScaleTranslationY->setMinimumSize(QSize(0, 20));
        m_ScalesSimilarity3DTransformScaleTranslationY->setFont(font);
        m_ScalesSimilarity3DTransformScaleTranslationY->setAlignment(Qt::AlignRight);

        _148->addWidget(m_ScalesSimilarity3DTransformScaleTranslationY);

        m_ScalesSimilarity3DTransformScaleTranslationZ = new QLineEdit(m_UseOptimizerScalesSimilarity3D);
        m_ScalesSimilarity3DTransformScaleTranslationZ->setObjectName(QStringLiteral("m_ScalesSimilarity3DTransformScaleTranslationZ"));
        m_ScalesSimilarity3DTransformScaleTranslationZ->setMinimumSize(QSize(0, 20));
        m_ScalesSimilarity3DTransformScaleTranslationZ->setFont(font);
        m_ScalesSimilarity3DTransformScaleTranslationZ->setAlignment(Qt::AlignRight);

        _148->addWidget(m_ScalesSimilarity3DTransformScaleTranslationZ);


        _146->addLayout(_148);


        verticalLayout_81->addLayout(_146);


        verticalLayout_82->addWidget(m_UseOptimizerScalesSimilarity3D);

        m_CenterForInitializerSimilarity3D = new QGroupBox(m_Similarity3DTransformFrame);
        m_CenterForInitializerSimilarity3D->setObjectName(QStringLiteral("m_CenterForInitializerSimilarity3D"));
        m_CenterForInitializerSimilarity3D->setFlat(true);
        m_CenterForInitializerSimilarity3D->setCheckable(true);
        horizontalLayout_10 = new QHBoxLayout(m_CenterForInitializerSimilarity3D);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        m_GeometrySimilarity3D = new QRadioButton(m_CenterForInitializerSimilarity3D);
        m_GeometrySimilarity3D->setObjectName(QStringLiteral("m_GeometrySimilarity3D"));
        m_GeometrySimilarity3D->setEnabled(true);
        m_GeometrySimilarity3D->setMinimumSize(QSize(0, 20));
        m_GeometrySimilarity3D->setFont(font);

        horizontalLayout_10->addWidget(m_GeometrySimilarity3D);

        m_MomentsSimilarity3D = new QRadioButton(m_CenterForInitializerSimilarity3D);
        m_MomentsSimilarity3D->setObjectName(QStringLiteral("m_MomentsSimilarity3D"));
        m_MomentsSimilarity3D->setEnabled(true);
        m_MomentsSimilarity3D->setMinimumSize(QSize(0, 20));
        m_MomentsSimilarity3D->setFont(font);
        m_MomentsSimilarity3D->setChecked(true);

        horizontalLayout_10->addWidget(m_MomentsSimilarity3D);


        verticalLayout_82->addWidget(m_CenterForInitializerSimilarity3D);


        verticalLayout->addWidget(m_Similarity3DTransformFrame);


        retranslateUi(QmitkSimilarity3DTransformControls);

        QMetaObject::connectSlotsByName(QmitkSimilarity3DTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkSimilarity3DTransformControls)
    {
        QmitkSimilarity3DTransformControls->setWindowTitle(QApplication::translate("QmitkSimilarity3DTransformControls", "Form", 0));
        m_UseOptimizerScalesSimilarity3D->setTitle(QApplication::translate("QmitkSimilarity3DTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8_2_3_2_2_2_3_4->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "Scale Scaling:", 0));
        textLabel2_6_3_3_2_2_2_3_4->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "Scale Versor 1:", 0));
        textLabel3_5_3_3_2_2_2_3_4->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "Scale Versor 2:", 0));
        textLabel1_9_2_2_2_2_2->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "Scale Versor 3:", 0));
        textLabel11_3_2_2_2_3_3->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "Translation Scale X:", 0));
        textLabel12_3_2_2_2_3_3->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "Translation Scale Y:", 0));
        textLabel13_2_2_2_2_3_3->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "Translation Scale Z:", 0));
        m_ScalesSimilarity3DTransformScale1->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "1.0", 0));
        m_ScalesSimilarity3DTransformScale2->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "1.0", 0));
        m_ScalesSimilarity3DTransformScale3->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "1.0", 0));
        m_ScalesSimilarity3DTransformScale4->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "1.0", 0));
        m_ScalesSimilarity3DTransformScaleTranslationX->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "0.001", 0));
        m_ScalesSimilarity3DTransformScaleTranslationY->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "0.001", 0));
        m_ScalesSimilarity3DTransformScaleTranslationZ->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "0.001", 0));
        m_CenterForInitializerSimilarity3D->setTitle(QApplication::translate("QmitkSimilarity3DTransformControls", "Center for Initializer", 0));
        m_GeometrySimilarity3D->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "Geometry", 0));
        m_MomentsSimilarity3D->setText(QApplication::translate("QmitkSimilarity3DTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkSimilarity3DTransformControls: public Ui_QmitkSimilarity3DTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSIMILARITY3DTRANSFORMCONTROLS_H
