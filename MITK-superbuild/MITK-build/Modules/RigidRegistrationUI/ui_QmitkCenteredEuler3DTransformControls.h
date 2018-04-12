/********************************************************************************
** Form generated from reading UI file 'QmitkCenteredEuler3DTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKCENTEREDEULER3DTRANSFORMCONTROLS_H
#define UI_QMITKCENTEREDEULER3DTRANSFORMCONTROLS_H

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

class Ui_QmitkCenteredEuler3DTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_CenteredEuler3DTransformFrame;
    QVBoxLayout *verticalLayout_72;
    QGroupBox *m_UseOptimizerScalesCenteredEuler3D;
    QVBoxLayout *verticalLayout_71;
    QHBoxLayout *_111;
    QVBoxLayout *_112;
    QLabel *textLabel1_8_2_3_2_2_2_2_2;
    QLabel *textLabel2_6_3_3_2_2_2_2_2;
    QLabel *textLabel3_5_3_3_2_2_2_2_2;
    QLabel *textLabel11_3_2_2_2_2_2;
    QLabel *textLabel12_3_2_2_2_2_2;
    QLabel *textLabel13_2_2_2_2_2_2;
    QVBoxLayout *_113;
    QLineEdit *m_ScalesCenteredEuler3DTransformScale1;
    QLineEdit *m_ScalesCenteredEuler3DTransformScale2;
    QLineEdit *m_ScalesCenteredEuler3DTransformScale3;
    QLineEdit *m_ScalesCenteredEuler3DTransformScaleTranslationX;
    QLineEdit *m_ScalesCenteredEuler3DTransformScaleTranslationY;
    QLineEdit *m_ScalesCenteredEuler3DTransformScaleTranslationZ;
    QGroupBox *m_CenterForInitializerCenteredEuler3D;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *m_GeometryCenteredEuler3D;
    QRadioButton *m_MomentsCenteredEuler3D;

    void setupUi(QWidget *QmitkCenteredEuler3DTransformControls)
    {
        if (QmitkCenteredEuler3DTransformControls->objectName().isEmpty())
            QmitkCenteredEuler3DTransformControls->setObjectName(QStringLiteral("QmitkCenteredEuler3DTransformControls"));
        QmitkCenteredEuler3DTransformControls->resize(173, 222);
        verticalLayout = new QVBoxLayout(QmitkCenteredEuler3DTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_CenteredEuler3DTransformFrame = new QFrame(QmitkCenteredEuler3DTransformControls);
        m_CenteredEuler3DTransformFrame->setObjectName(QStringLiteral("m_CenteredEuler3DTransformFrame"));
        m_CenteredEuler3DTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_CenteredEuler3DTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_72 = new QVBoxLayout(m_CenteredEuler3DTransformFrame);
        verticalLayout_72->setSpacing(0);
        verticalLayout_72->setContentsMargins(0, 0, 0, 0);
        verticalLayout_72->setObjectName(QStringLiteral("verticalLayout_72"));
        m_UseOptimizerScalesCenteredEuler3D = new QGroupBox(m_CenteredEuler3DTransformFrame);
        m_UseOptimizerScalesCenteredEuler3D->setObjectName(QStringLiteral("m_UseOptimizerScalesCenteredEuler3D"));
        m_UseOptimizerScalesCenteredEuler3D->setFlat(true);
        m_UseOptimizerScalesCenteredEuler3D->setCheckable(true);
        verticalLayout_71 = new QVBoxLayout(m_UseOptimizerScalesCenteredEuler3D);
        verticalLayout_71->setSpacing(0);
        verticalLayout_71->setContentsMargins(0, 0, 0, 0);
        verticalLayout_71->setObjectName(QStringLiteral("verticalLayout_71"));
        _111 = new QHBoxLayout();
        _111->setObjectName(QStringLiteral("_111"));
        _112 = new QVBoxLayout();
        _112->setObjectName(QStringLiteral("_112"));
        textLabel1_8_2_3_2_2_2_2_2 = new QLabel(m_UseOptimizerScalesCenteredEuler3D);
        textLabel1_8_2_3_2_2_2_2_2->setObjectName(QStringLiteral("textLabel1_8_2_3_2_2_2_2_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_8_2_3_2_2_2_2_2->setFont(font);
        textLabel1_8_2_3_2_2_2_2_2->setWordWrap(false);

        _112->addWidget(textLabel1_8_2_3_2_2_2_2_2);

        textLabel2_6_3_3_2_2_2_2_2 = new QLabel(m_UseOptimizerScalesCenteredEuler3D);
        textLabel2_6_3_3_2_2_2_2_2->setObjectName(QStringLiteral("textLabel2_6_3_3_2_2_2_2_2"));
        textLabel2_6_3_3_2_2_2_2_2->setFont(font);
        textLabel2_6_3_3_2_2_2_2_2->setWordWrap(false);

        _112->addWidget(textLabel2_6_3_3_2_2_2_2_2);

        textLabel3_5_3_3_2_2_2_2_2 = new QLabel(m_UseOptimizerScalesCenteredEuler3D);
        textLabel3_5_3_3_2_2_2_2_2->setObjectName(QStringLiteral("textLabel3_5_3_3_2_2_2_2_2"));
        textLabel3_5_3_3_2_2_2_2_2->setFont(font);
        textLabel3_5_3_3_2_2_2_2_2->setWordWrap(false);

        _112->addWidget(textLabel3_5_3_3_2_2_2_2_2);

        textLabel11_3_2_2_2_2_2 = new QLabel(m_UseOptimizerScalesCenteredEuler3D);
        textLabel11_3_2_2_2_2_2->setObjectName(QStringLiteral("textLabel11_3_2_2_2_2_2"));
        textLabel11_3_2_2_2_2_2->setFont(font);
        textLabel11_3_2_2_2_2_2->setWordWrap(false);

        _112->addWidget(textLabel11_3_2_2_2_2_2);

        textLabel12_3_2_2_2_2_2 = new QLabel(m_UseOptimizerScalesCenteredEuler3D);
        textLabel12_3_2_2_2_2_2->setObjectName(QStringLiteral("textLabel12_3_2_2_2_2_2"));
        textLabel12_3_2_2_2_2_2->setFont(font);
        textLabel12_3_2_2_2_2_2->setWordWrap(false);

        _112->addWidget(textLabel12_3_2_2_2_2_2);

        textLabel13_2_2_2_2_2_2 = new QLabel(m_UseOptimizerScalesCenteredEuler3D);
        textLabel13_2_2_2_2_2_2->setObjectName(QStringLiteral("textLabel13_2_2_2_2_2_2"));
        textLabel13_2_2_2_2_2_2->setFont(font);
        textLabel13_2_2_2_2_2_2->setWordWrap(false);

        _112->addWidget(textLabel13_2_2_2_2_2_2);


        _111->addLayout(_112);

        _113 = new QVBoxLayout();
        _113->setObjectName(QStringLiteral("_113"));
        m_ScalesCenteredEuler3DTransformScale1 = new QLineEdit(m_UseOptimizerScalesCenteredEuler3D);
        m_ScalesCenteredEuler3DTransformScale1->setObjectName(QStringLiteral("m_ScalesCenteredEuler3DTransformScale1"));
        m_ScalesCenteredEuler3DTransformScale1->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredEuler3DTransformScale1->setFont(font);
        m_ScalesCenteredEuler3DTransformScale1->setAlignment(Qt::AlignRight);

        _113->addWidget(m_ScalesCenteredEuler3DTransformScale1);

        m_ScalesCenteredEuler3DTransformScale2 = new QLineEdit(m_UseOptimizerScalesCenteredEuler3D);
        m_ScalesCenteredEuler3DTransformScale2->setObjectName(QStringLiteral("m_ScalesCenteredEuler3DTransformScale2"));
        m_ScalesCenteredEuler3DTransformScale2->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredEuler3DTransformScale2->setFont(font);
        m_ScalesCenteredEuler3DTransformScale2->setAlignment(Qt::AlignRight);

        _113->addWidget(m_ScalesCenteredEuler3DTransformScale2);

        m_ScalesCenteredEuler3DTransformScale3 = new QLineEdit(m_UseOptimizerScalesCenteredEuler3D);
        m_ScalesCenteredEuler3DTransformScale3->setObjectName(QStringLiteral("m_ScalesCenteredEuler3DTransformScale3"));
        m_ScalesCenteredEuler3DTransformScale3->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredEuler3DTransformScale3->setFont(font);
        m_ScalesCenteredEuler3DTransformScale3->setAlignment(Qt::AlignRight);

        _113->addWidget(m_ScalesCenteredEuler3DTransformScale3);

        m_ScalesCenteredEuler3DTransformScaleTranslationX = new QLineEdit(m_UseOptimizerScalesCenteredEuler3D);
        m_ScalesCenteredEuler3DTransformScaleTranslationX->setObjectName(QStringLiteral("m_ScalesCenteredEuler3DTransformScaleTranslationX"));
        m_ScalesCenteredEuler3DTransformScaleTranslationX->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredEuler3DTransformScaleTranslationX->setFont(font);
        m_ScalesCenteredEuler3DTransformScaleTranslationX->setAlignment(Qt::AlignRight);

        _113->addWidget(m_ScalesCenteredEuler3DTransformScaleTranslationX);

        m_ScalesCenteredEuler3DTransformScaleTranslationY = new QLineEdit(m_UseOptimizerScalesCenteredEuler3D);
        m_ScalesCenteredEuler3DTransformScaleTranslationY->setObjectName(QStringLiteral("m_ScalesCenteredEuler3DTransformScaleTranslationY"));
        m_ScalesCenteredEuler3DTransformScaleTranslationY->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredEuler3DTransformScaleTranslationY->setFont(font);
        m_ScalesCenteredEuler3DTransformScaleTranslationY->setAlignment(Qt::AlignRight);

        _113->addWidget(m_ScalesCenteredEuler3DTransformScaleTranslationY);

        m_ScalesCenteredEuler3DTransformScaleTranslationZ = new QLineEdit(m_UseOptimizerScalesCenteredEuler3D);
        m_ScalesCenteredEuler3DTransformScaleTranslationZ->setObjectName(QStringLiteral("m_ScalesCenteredEuler3DTransformScaleTranslationZ"));
        m_ScalesCenteredEuler3DTransformScaleTranslationZ->setMinimumSize(QSize(0, 20));
        m_ScalesCenteredEuler3DTransformScaleTranslationZ->setFont(font);
        m_ScalesCenteredEuler3DTransformScaleTranslationZ->setAlignment(Qt::AlignRight);

        _113->addWidget(m_ScalesCenteredEuler3DTransformScaleTranslationZ);


        _111->addLayout(_113);


        verticalLayout_71->addLayout(_111);


        verticalLayout_72->addWidget(m_UseOptimizerScalesCenteredEuler3D);

        m_CenterForInitializerCenteredEuler3D = new QGroupBox(m_CenteredEuler3DTransformFrame);
        m_CenterForInitializerCenteredEuler3D->setObjectName(QStringLiteral("m_CenterForInitializerCenteredEuler3D"));
        m_CenterForInitializerCenteredEuler3D->setFlat(true);
        m_CenterForInitializerCenteredEuler3D->setCheckable(true);
        horizontalLayout_5 = new QHBoxLayout(m_CenterForInitializerCenteredEuler3D);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        m_GeometryCenteredEuler3D = new QRadioButton(m_CenterForInitializerCenteredEuler3D);
        m_GeometryCenteredEuler3D->setObjectName(QStringLiteral("m_GeometryCenteredEuler3D"));
        m_GeometryCenteredEuler3D->setEnabled(true);
        m_GeometryCenteredEuler3D->setMinimumSize(QSize(0, 20));
        m_GeometryCenteredEuler3D->setFont(font);

        horizontalLayout_5->addWidget(m_GeometryCenteredEuler3D);

        m_MomentsCenteredEuler3D = new QRadioButton(m_CenterForInitializerCenteredEuler3D);
        m_MomentsCenteredEuler3D->setObjectName(QStringLiteral("m_MomentsCenteredEuler3D"));
        m_MomentsCenteredEuler3D->setEnabled(true);
        m_MomentsCenteredEuler3D->setMinimumSize(QSize(0, 20));
        m_MomentsCenteredEuler3D->setFont(font);
        m_MomentsCenteredEuler3D->setChecked(true);

        horizontalLayout_5->addWidget(m_MomentsCenteredEuler3D);


        verticalLayout_72->addWidget(m_CenterForInitializerCenteredEuler3D);


        verticalLayout->addWidget(m_CenteredEuler3DTransformFrame);


        retranslateUi(QmitkCenteredEuler3DTransformControls);

        QMetaObject::connectSlotsByName(QmitkCenteredEuler3DTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkCenteredEuler3DTransformControls)
    {
        QmitkCenteredEuler3DTransformControls->setWindowTitle(QApplication::translate("QmitkCenteredEuler3DTransformControls", "Form", 0));
        m_UseOptimizerScalesCenteredEuler3D->setTitle(QApplication::translate("QmitkCenteredEuler3DTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8_2_3_2_2_2_2_2->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "Scale Rotation X:", 0));
        textLabel2_6_3_3_2_2_2_2_2->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "Scale Rotation Y:", 0));
        textLabel3_5_3_3_2_2_2_2_2->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "Scale Rotation Z:", 0));
        textLabel11_3_2_2_2_2_2->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "Translation Scale X:", 0));
        textLabel12_3_2_2_2_2_2->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "Translation Scale Y:", 0));
        textLabel13_2_2_2_2_2_2->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "Translation Scale Z:", 0));
        m_ScalesCenteredEuler3DTransformScale1->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "1.0", 0));
        m_ScalesCenteredEuler3DTransformScale2->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "1.0", 0));
        m_ScalesCenteredEuler3DTransformScale3->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "1.0", 0));
        m_ScalesCenteredEuler3DTransformScaleTranslationX->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "0.001", 0));
        m_ScalesCenteredEuler3DTransformScaleTranslationY->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "0.001", 0));
        m_ScalesCenteredEuler3DTransformScaleTranslationZ->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "0.001", 0));
        m_CenterForInitializerCenteredEuler3D->setTitle(QApplication::translate("QmitkCenteredEuler3DTransformControls", "Center for Initializer", 0));
        m_GeometryCenteredEuler3D->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "Geometry", 0));
        m_MomentsCenteredEuler3D->setText(QApplication::translate("QmitkCenteredEuler3DTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkCenteredEuler3DTransformControls: public Ui_QmitkCenteredEuler3DTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKCENTEREDEULER3DTRANSFORMCONTROLS_H
