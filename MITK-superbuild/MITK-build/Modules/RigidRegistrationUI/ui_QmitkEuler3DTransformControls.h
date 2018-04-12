/********************************************************************************
** Form generated from reading UI file 'QmitkEuler3DTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKEULER3DTRANSFORMCONTROLS_H
#define UI_QMITKEULER3DTRANSFORMCONTROLS_H

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

class Ui_QmitkEuler3DTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_Euler3DTransformFrame;
    QVBoxLayout *verticalLayout_70;
    QGroupBox *m_UseOptimizerScalesEuler3D;
    QVBoxLayout *verticalLayout_69;
    QHBoxLayout *_104;
    QVBoxLayout *_105;
    QLabel *textLabel1_8_2_3_2_2_2_2;
    QLabel *textLabel2_6_3_3_2_2_2_2;
    QLabel *textLabel3_5_3_3_2_2_2_2;
    QLabel *textLabel11_3_2_2_2_2;
    QLabel *textLabel12_3_2_2_2_2;
    QLabel *textLabel13_2_2_2_2_2;
    QVBoxLayout *_106;
    QLineEdit *m_ScalesEuler3DTransformScale1;
    QLineEdit *m_ScalesEuler3DTransformScale2;
    QLineEdit *m_ScalesEuler3DTransformScale3;
    QLineEdit *m_ScalesEuler3DTransformScaleTranslationX;
    QLineEdit *m_ScalesEuler3DTransformScaleTranslationY;
    QLineEdit *m_ScalesEuler3DTransformScaleTranslationZ;
    QGroupBox *m_CenterForInitializerEuler3D;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *m_GeometryEuler3D;
    QRadioButton *m_MomentsEuler3D;

    void setupUi(QWidget *QmitkEuler3DTransformControls)
    {
        if (QmitkEuler3DTransformControls->objectName().isEmpty())
            QmitkEuler3DTransformControls->setObjectName(QStringLiteral("QmitkEuler3DTransformControls"));
        QmitkEuler3DTransformControls->resize(173, 222);
        verticalLayout = new QVBoxLayout(QmitkEuler3DTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_Euler3DTransformFrame = new QFrame(QmitkEuler3DTransformControls);
        m_Euler3DTransformFrame->setObjectName(QStringLiteral("m_Euler3DTransformFrame"));
        m_Euler3DTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_Euler3DTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_70 = new QVBoxLayout(m_Euler3DTransformFrame);
        verticalLayout_70->setSpacing(0);
        verticalLayout_70->setContentsMargins(0, 0, 0, 0);
        verticalLayout_70->setObjectName(QStringLiteral("verticalLayout_70"));
        m_UseOptimizerScalesEuler3D = new QGroupBox(m_Euler3DTransformFrame);
        m_UseOptimizerScalesEuler3D->setObjectName(QStringLiteral("m_UseOptimizerScalesEuler3D"));
        m_UseOptimizerScalesEuler3D->setFlat(true);
        m_UseOptimizerScalesEuler3D->setCheckable(true);
        verticalLayout_69 = new QVBoxLayout(m_UseOptimizerScalesEuler3D);
        verticalLayout_69->setSpacing(0);
        verticalLayout_69->setContentsMargins(0, 0, 0, 0);
        verticalLayout_69->setObjectName(QStringLiteral("verticalLayout_69"));
        _104 = new QHBoxLayout();
        _104->setObjectName(QStringLiteral("_104"));
        _105 = new QVBoxLayout();
        _105->setObjectName(QStringLiteral("_105"));
        textLabel1_8_2_3_2_2_2_2 = new QLabel(m_UseOptimizerScalesEuler3D);
        textLabel1_8_2_3_2_2_2_2->setObjectName(QStringLiteral("textLabel1_8_2_3_2_2_2_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_8_2_3_2_2_2_2->setFont(font);
        textLabel1_8_2_3_2_2_2_2->setWordWrap(false);

        _105->addWidget(textLabel1_8_2_3_2_2_2_2);

        textLabel2_6_3_3_2_2_2_2 = new QLabel(m_UseOptimizerScalesEuler3D);
        textLabel2_6_3_3_2_2_2_2->setObjectName(QStringLiteral("textLabel2_6_3_3_2_2_2_2"));
        textLabel2_6_3_3_2_2_2_2->setFont(font);
        textLabel2_6_3_3_2_2_2_2->setWordWrap(false);

        _105->addWidget(textLabel2_6_3_3_2_2_2_2);

        textLabel3_5_3_3_2_2_2_2 = new QLabel(m_UseOptimizerScalesEuler3D);
        textLabel3_5_3_3_2_2_2_2->setObjectName(QStringLiteral("textLabel3_5_3_3_2_2_2_2"));
        textLabel3_5_3_3_2_2_2_2->setFont(font);
        textLabel3_5_3_3_2_2_2_2->setWordWrap(false);

        _105->addWidget(textLabel3_5_3_3_2_2_2_2);

        textLabel11_3_2_2_2_2 = new QLabel(m_UseOptimizerScalesEuler3D);
        textLabel11_3_2_2_2_2->setObjectName(QStringLiteral("textLabel11_3_2_2_2_2"));
        textLabel11_3_2_2_2_2->setFont(font);
        textLabel11_3_2_2_2_2->setWordWrap(false);

        _105->addWidget(textLabel11_3_2_2_2_2);

        textLabel12_3_2_2_2_2 = new QLabel(m_UseOptimizerScalesEuler3D);
        textLabel12_3_2_2_2_2->setObjectName(QStringLiteral("textLabel12_3_2_2_2_2"));
        textLabel12_3_2_2_2_2->setFont(font);
        textLabel12_3_2_2_2_2->setWordWrap(false);

        _105->addWidget(textLabel12_3_2_2_2_2);

        textLabel13_2_2_2_2_2 = new QLabel(m_UseOptimizerScalesEuler3D);
        textLabel13_2_2_2_2_2->setObjectName(QStringLiteral("textLabel13_2_2_2_2_2"));
        textLabel13_2_2_2_2_2->setFont(font);
        textLabel13_2_2_2_2_2->setWordWrap(false);

        _105->addWidget(textLabel13_2_2_2_2_2);


        _104->addLayout(_105);

        _106 = new QVBoxLayout();
        _106->setObjectName(QStringLiteral("_106"));
        m_ScalesEuler3DTransformScale1 = new QLineEdit(m_UseOptimizerScalesEuler3D);
        m_ScalesEuler3DTransformScale1->setObjectName(QStringLiteral("m_ScalesEuler3DTransformScale1"));
        m_ScalesEuler3DTransformScale1->setMinimumSize(QSize(0, 20));
        m_ScalesEuler3DTransformScale1->setFont(font);
        m_ScalesEuler3DTransformScale1->setAlignment(Qt::AlignRight);

        _106->addWidget(m_ScalesEuler3DTransformScale1);

        m_ScalesEuler3DTransformScale2 = new QLineEdit(m_UseOptimizerScalesEuler3D);
        m_ScalesEuler3DTransformScale2->setObjectName(QStringLiteral("m_ScalesEuler3DTransformScale2"));
        m_ScalesEuler3DTransformScale2->setMinimumSize(QSize(0, 20));
        m_ScalesEuler3DTransformScale2->setFont(font);
        m_ScalesEuler3DTransformScale2->setAlignment(Qt::AlignRight);

        _106->addWidget(m_ScalesEuler3DTransformScale2);

        m_ScalesEuler3DTransformScale3 = new QLineEdit(m_UseOptimizerScalesEuler3D);
        m_ScalesEuler3DTransformScale3->setObjectName(QStringLiteral("m_ScalesEuler3DTransformScale3"));
        m_ScalesEuler3DTransformScale3->setMinimumSize(QSize(0, 20));
        m_ScalesEuler3DTransformScale3->setFont(font);
        m_ScalesEuler3DTransformScale3->setAlignment(Qt::AlignRight);

        _106->addWidget(m_ScalesEuler3DTransformScale3);

        m_ScalesEuler3DTransformScaleTranslationX = new QLineEdit(m_UseOptimizerScalesEuler3D);
        m_ScalesEuler3DTransformScaleTranslationX->setObjectName(QStringLiteral("m_ScalesEuler3DTransformScaleTranslationX"));
        m_ScalesEuler3DTransformScaleTranslationX->setMinimumSize(QSize(0, 20));
        m_ScalesEuler3DTransformScaleTranslationX->setFont(font);
        m_ScalesEuler3DTransformScaleTranslationX->setAlignment(Qt::AlignRight);

        _106->addWidget(m_ScalesEuler3DTransformScaleTranslationX);

        m_ScalesEuler3DTransformScaleTranslationY = new QLineEdit(m_UseOptimizerScalesEuler3D);
        m_ScalesEuler3DTransformScaleTranslationY->setObjectName(QStringLiteral("m_ScalesEuler3DTransformScaleTranslationY"));
        m_ScalesEuler3DTransformScaleTranslationY->setMinimumSize(QSize(0, 20));
        m_ScalesEuler3DTransformScaleTranslationY->setFont(font);
        m_ScalesEuler3DTransformScaleTranslationY->setAlignment(Qt::AlignRight);

        _106->addWidget(m_ScalesEuler3DTransformScaleTranslationY);

        m_ScalesEuler3DTransformScaleTranslationZ = new QLineEdit(m_UseOptimizerScalesEuler3D);
        m_ScalesEuler3DTransformScaleTranslationZ->setObjectName(QStringLiteral("m_ScalesEuler3DTransformScaleTranslationZ"));
        m_ScalesEuler3DTransformScaleTranslationZ->setMinimumSize(QSize(0, 20));
        m_ScalesEuler3DTransformScaleTranslationZ->setFont(font);
        m_ScalesEuler3DTransformScaleTranslationZ->setAlignment(Qt::AlignRight);

        _106->addWidget(m_ScalesEuler3DTransformScaleTranslationZ);


        _104->addLayout(_106);


        verticalLayout_69->addLayout(_104);


        verticalLayout_70->addWidget(m_UseOptimizerScalesEuler3D);

        m_CenterForInitializerEuler3D = new QGroupBox(m_Euler3DTransformFrame);
        m_CenterForInitializerEuler3D->setObjectName(QStringLiteral("m_CenterForInitializerEuler3D"));
        m_CenterForInitializerEuler3D->setFlat(true);
        m_CenterForInitializerEuler3D->setCheckable(true);
        horizontalLayout_4 = new QHBoxLayout(m_CenterForInitializerEuler3D);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        m_GeometryEuler3D = new QRadioButton(m_CenterForInitializerEuler3D);
        m_GeometryEuler3D->setObjectName(QStringLiteral("m_GeometryEuler3D"));
        m_GeometryEuler3D->setEnabled(true);
        m_GeometryEuler3D->setMinimumSize(QSize(0, 20));
        m_GeometryEuler3D->setFont(font);

        horizontalLayout_4->addWidget(m_GeometryEuler3D);

        m_MomentsEuler3D = new QRadioButton(m_CenterForInitializerEuler3D);
        m_MomentsEuler3D->setObjectName(QStringLiteral("m_MomentsEuler3D"));
        m_MomentsEuler3D->setEnabled(true);
        m_MomentsEuler3D->setMinimumSize(QSize(0, 20));
        m_MomentsEuler3D->setFont(font);
        m_MomentsEuler3D->setChecked(true);

        horizontalLayout_4->addWidget(m_MomentsEuler3D);


        verticalLayout_70->addWidget(m_CenterForInitializerEuler3D);


        verticalLayout->addWidget(m_Euler3DTransformFrame);


        retranslateUi(QmitkEuler3DTransformControls);

        QMetaObject::connectSlotsByName(QmitkEuler3DTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkEuler3DTransformControls)
    {
        QmitkEuler3DTransformControls->setWindowTitle(QApplication::translate("QmitkEuler3DTransformControls", "Form", 0));
        m_UseOptimizerScalesEuler3D->setTitle(QApplication::translate("QmitkEuler3DTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8_2_3_2_2_2_2->setText(QApplication::translate("QmitkEuler3DTransformControls", "Scale Rotation X:", 0));
        textLabel2_6_3_3_2_2_2_2->setText(QApplication::translate("QmitkEuler3DTransformControls", "Scale Rotation Y:", 0));
        textLabel3_5_3_3_2_2_2_2->setText(QApplication::translate("QmitkEuler3DTransformControls", "Scale Rotation Z:", 0));
        textLabel11_3_2_2_2_2->setText(QApplication::translate("QmitkEuler3DTransformControls", "Translation Scale X:", 0));
        textLabel12_3_2_2_2_2->setText(QApplication::translate("QmitkEuler3DTransformControls", "Translation Scale Y:", 0));
        textLabel13_2_2_2_2_2->setText(QApplication::translate("QmitkEuler3DTransformControls", "Translation Scale Z:", 0));
        m_ScalesEuler3DTransformScale1->setText(QApplication::translate("QmitkEuler3DTransformControls", "1.0", 0));
        m_ScalesEuler3DTransformScale2->setText(QApplication::translate("QmitkEuler3DTransformControls", "1.0", 0));
        m_ScalesEuler3DTransformScale3->setText(QApplication::translate("QmitkEuler3DTransformControls", "1.0", 0));
        m_ScalesEuler3DTransformScaleTranslationX->setText(QApplication::translate("QmitkEuler3DTransformControls", "0.001", 0));
        m_ScalesEuler3DTransformScaleTranslationY->setText(QApplication::translate("QmitkEuler3DTransformControls", "0.001", 0));
        m_ScalesEuler3DTransformScaleTranslationZ->setText(QApplication::translate("QmitkEuler3DTransformControls", "0.001", 0));
        m_CenterForInitializerEuler3D->setTitle(QApplication::translate("QmitkEuler3DTransformControls", "Center for Initializer", 0));
        m_GeometryEuler3D->setText(QApplication::translate("QmitkEuler3DTransformControls", "Geometry", 0));
        m_MomentsEuler3D->setText(QApplication::translate("QmitkEuler3DTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkEuler3DTransformControls: public Ui_QmitkEuler3DTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKEULER3DTRANSFORMCONTROLS_H
