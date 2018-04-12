/********************************************************************************
** Form generated from reading UI file 'QmitkVersorRigid3DTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKVERSORRIGID3DTRANSFORMCONTROLS_H
#define UI_QMITKVERSORRIGID3DTRANSFORMCONTROLS_H

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

class Ui_QmitkVersorRigid3DTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_VersorRigid3DTransformFrame;
    QVBoxLayout *verticalLayout_78;
    QGroupBox *m_UseOptimizerScalesVersorRigid3D;
    QVBoxLayout *verticalLayout_77;
    QHBoxLayout *_132;
    QVBoxLayout *_133;
    QLabel *textLabel1_8_2_3_2_2_2_3_3;
    QLabel *textLabel2_6_3_3_2_2_2_3_3;
    QLabel *textLabel3_5_3_3_2_2_2_3_3;
    QLabel *textLabel11_3_2_2_2_3_2;
    QLabel *textLabel12_3_2_2_2_3_2;
    QLabel *textLabel13_2_2_2_2_3_2;
    QVBoxLayout *_134;
    QLineEdit *m_ScalesVersorRigid3DTransformScale1;
    QLineEdit *m_ScalesVersorRigid3DTransformScale2;
    QLineEdit *m_ScalesVersorRigid3DTransformScale3;
    QLineEdit *m_ScalesVersorRigid3DTransformScaleTranslationX;
    QLineEdit *m_ScalesVersorRigid3DTransformScaleTranslationY;
    QLineEdit *m_ScalesVersorRigid3DTransformScaleTranslationZ;
    QGroupBox *m_CenterForInitializerVersorRigid3D;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *m_GeometryVersorRigid3D;
    QRadioButton *m_MomentsVersorRigid3D;

    void setupUi(QWidget *QmitkVersorRigid3DTransformControls)
    {
        if (QmitkVersorRigid3DTransformControls->objectName().isEmpty())
            QmitkVersorRigid3DTransformControls->setObjectName(QStringLiteral("QmitkVersorRigid3DTransformControls"));
        QmitkVersorRigid3DTransformControls->resize(173, 222);
        verticalLayout = new QVBoxLayout(QmitkVersorRigid3DTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_VersorRigid3DTransformFrame = new QFrame(QmitkVersorRigid3DTransformControls);
        m_VersorRigid3DTransformFrame->setObjectName(QStringLiteral("m_VersorRigid3DTransformFrame"));
        m_VersorRigid3DTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_VersorRigid3DTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_78 = new QVBoxLayout(m_VersorRigid3DTransformFrame);
        verticalLayout_78->setSpacing(0);
        verticalLayout_78->setContentsMargins(0, 0, 0, 0);
        verticalLayout_78->setObjectName(QStringLiteral("verticalLayout_78"));
        m_UseOptimizerScalesVersorRigid3D = new QGroupBox(m_VersorRigid3DTransformFrame);
        m_UseOptimizerScalesVersorRigid3D->setObjectName(QStringLiteral("m_UseOptimizerScalesVersorRigid3D"));
        m_UseOptimizerScalesVersorRigid3D->setFlat(true);
        m_UseOptimizerScalesVersorRigid3D->setCheckable(true);
        verticalLayout_77 = new QVBoxLayout(m_UseOptimizerScalesVersorRigid3D);
        verticalLayout_77->setSpacing(0);
        verticalLayout_77->setContentsMargins(0, 0, 0, 0);
        verticalLayout_77->setObjectName(QStringLiteral("verticalLayout_77"));
        _132 = new QHBoxLayout();
        _132->setObjectName(QStringLiteral("_132"));
        _133 = new QVBoxLayout();
        _133->setObjectName(QStringLiteral("_133"));
        textLabel1_8_2_3_2_2_2_3_3 = new QLabel(m_UseOptimizerScalesVersorRigid3D);
        textLabel1_8_2_3_2_2_2_3_3->setObjectName(QStringLiteral("textLabel1_8_2_3_2_2_2_3_3"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_8_2_3_2_2_2_3_3->setFont(font);
        textLabel1_8_2_3_2_2_2_3_3->setWordWrap(false);

        _133->addWidget(textLabel1_8_2_3_2_2_2_3_3);

        textLabel2_6_3_3_2_2_2_3_3 = new QLabel(m_UseOptimizerScalesVersorRigid3D);
        textLabel2_6_3_3_2_2_2_3_3->setObjectName(QStringLiteral("textLabel2_6_3_3_2_2_2_3_3"));
        textLabel2_6_3_3_2_2_2_3_3->setFont(font);
        textLabel2_6_3_3_2_2_2_3_3->setWordWrap(false);

        _133->addWidget(textLabel2_6_3_3_2_2_2_3_3);

        textLabel3_5_3_3_2_2_2_3_3 = new QLabel(m_UseOptimizerScalesVersorRigid3D);
        textLabel3_5_3_3_2_2_2_3_3->setObjectName(QStringLiteral("textLabel3_5_3_3_2_2_2_3_3"));
        textLabel3_5_3_3_2_2_2_3_3->setFont(font);
        textLabel3_5_3_3_2_2_2_3_3->setWordWrap(false);

        _133->addWidget(textLabel3_5_3_3_2_2_2_3_3);

        textLabel11_3_2_2_2_3_2 = new QLabel(m_UseOptimizerScalesVersorRigid3D);
        textLabel11_3_2_2_2_3_2->setObjectName(QStringLiteral("textLabel11_3_2_2_2_3_2"));
        textLabel11_3_2_2_2_3_2->setFont(font);
        textLabel11_3_2_2_2_3_2->setWordWrap(false);

        _133->addWidget(textLabel11_3_2_2_2_3_2);

        textLabel12_3_2_2_2_3_2 = new QLabel(m_UseOptimizerScalesVersorRigid3D);
        textLabel12_3_2_2_2_3_2->setObjectName(QStringLiteral("textLabel12_3_2_2_2_3_2"));
        textLabel12_3_2_2_2_3_2->setFont(font);
        textLabel12_3_2_2_2_3_2->setWordWrap(false);

        _133->addWidget(textLabel12_3_2_2_2_3_2);

        textLabel13_2_2_2_2_3_2 = new QLabel(m_UseOptimizerScalesVersorRigid3D);
        textLabel13_2_2_2_2_3_2->setObjectName(QStringLiteral("textLabel13_2_2_2_2_3_2"));
        textLabel13_2_2_2_2_3_2->setFont(font);
        textLabel13_2_2_2_2_3_2->setWordWrap(false);

        _133->addWidget(textLabel13_2_2_2_2_3_2);


        _132->addLayout(_133);

        _134 = new QVBoxLayout();
        _134->setObjectName(QStringLiteral("_134"));
        m_ScalesVersorRigid3DTransformScale1 = new QLineEdit(m_UseOptimizerScalesVersorRigid3D);
        m_ScalesVersorRigid3DTransformScale1->setObjectName(QStringLiteral("m_ScalesVersorRigid3DTransformScale1"));
        m_ScalesVersorRigid3DTransformScale1->setMinimumSize(QSize(0, 20));
        m_ScalesVersorRigid3DTransformScale1->setFont(font);
        m_ScalesVersorRigid3DTransformScale1->setAlignment(Qt::AlignRight);

        _134->addWidget(m_ScalesVersorRigid3DTransformScale1);

        m_ScalesVersorRigid3DTransformScale2 = new QLineEdit(m_UseOptimizerScalesVersorRigid3D);
        m_ScalesVersorRigid3DTransformScale2->setObjectName(QStringLiteral("m_ScalesVersorRigid3DTransformScale2"));
        m_ScalesVersorRigid3DTransformScale2->setMinimumSize(QSize(0, 20));
        m_ScalesVersorRigid3DTransformScale2->setFont(font);
        m_ScalesVersorRigid3DTransformScale2->setAlignment(Qt::AlignRight);

        _134->addWidget(m_ScalesVersorRigid3DTransformScale2);

        m_ScalesVersorRigid3DTransformScale3 = new QLineEdit(m_UseOptimizerScalesVersorRigid3D);
        m_ScalesVersorRigid3DTransformScale3->setObjectName(QStringLiteral("m_ScalesVersorRigid3DTransformScale3"));
        m_ScalesVersorRigid3DTransformScale3->setMinimumSize(QSize(0, 20));
        m_ScalesVersorRigid3DTransformScale3->setFont(font);
        m_ScalesVersorRigid3DTransformScale3->setAlignment(Qt::AlignRight);

        _134->addWidget(m_ScalesVersorRigid3DTransformScale3);

        m_ScalesVersorRigid3DTransformScaleTranslationX = new QLineEdit(m_UseOptimizerScalesVersorRigid3D);
        m_ScalesVersorRigid3DTransformScaleTranslationX->setObjectName(QStringLiteral("m_ScalesVersorRigid3DTransformScaleTranslationX"));
        m_ScalesVersorRigid3DTransformScaleTranslationX->setMinimumSize(QSize(0, 20));
        m_ScalesVersorRigid3DTransformScaleTranslationX->setFont(font);
        m_ScalesVersorRigid3DTransformScaleTranslationX->setAlignment(Qt::AlignRight);

        _134->addWidget(m_ScalesVersorRigid3DTransformScaleTranslationX);

        m_ScalesVersorRigid3DTransformScaleTranslationY = new QLineEdit(m_UseOptimizerScalesVersorRigid3D);
        m_ScalesVersorRigid3DTransformScaleTranslationY->setObjectName(QStringLiteral("m_ScalesVersorRigid3DTransformScaleTranslationY"));
        m_ScalesVersorRigid3DTransformScaleTranslationY->setMinimumSize(QSize(0, 20));
        m_ScalesVersorRigid3DTransformScaleTranslationY->setFont(font);
        m_ScalesVersorRigid3DTransformScaleTranslationY->setAlignment(Qt::AlignRight);

        _134->addWidget(m_ScalesVersorRigid3DTransformScaleTranslationY);

        m_ScalesVersorRigid3DTransformScaleTranslationZ = new QLineEdit(m_UseOptimizerScalesVersorRigid3D);
        m_ScalesVersorRigid3DTransformScaleTranslationZ->setObjectName(QStringLiteral("m_ScalesVersorRigid3DTransformScaleTranslationZ"));
        m_ScalesVersorRigid3DTransformScaleTranslationZ->setMinimumSize(QSize(0, 20));
        m_ScalesVersorRigid3DTransformScaleTranslationZ->setFont(font);
        m_ScalesVersorRigid3DTransformScaleTranslationZ->setAlignment(Qt::AlignRight);

        _134->addWidget(m_ScalesVersorRigid3DTransformScaleTranslationZ);


        _132->addLayout(_134);


        verticalLayout_77->addLayout(_132);


        verticalLayout_78->addWidget(m_UseOptimizerScalesVersorRigid3D);

        m_CenterForInitializerVersorRigid3D = new QGroupBox(m_VersorRigid3DTransformFrame);
        m_CenterForInitializerVersorRigid3D->setObjectName(QStringLiteral("m_CenterForInitializerVersorRigid3D"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        m_CenterForInitializerVersorRigid3D->setFont(font1);
        m_CenterForInitializerVersorRigid3D->setFlat(true);
        m_CenterForInitializerVersorRigid3D->setCheckable(true);
        horizontalLayout_8 = new QHBoxLayout(m_CenterForInitializerVersorRigid3D);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        m_GeometryVersorRigid3D = new QRadioButton(m_CenterForInitializerVersorRigid3D);
        m_GeometryVersorRigid3D->setObjectName(QStringLiteral("m_GeometryVersorRigid3D"));
        m_GeometryVersorRigid3D->setEnabled(true);
        m_GeometryVersorRigid3D->setMinimumSize(QSize(0, 20));
        m_GeometryVersorRigid3D->setFont(font);

        horizontalLayout_8->addWidget(m_GeometryVersorRigid3D);

        m_MomentsVersorRigid3D = new QRadioButton(m_CenterForInitializerVersorRigid3D);
        m_MomentsVersorRigid3D->setObjectName(QStringLiteral("m_MomentsVersorRigid3D"));
        m_MomentsVersorRigid3D->setEnabled(true);
        m_MomentsVersorRigid3D->setMinimumSize(QSize(0, 20));
        m_MomentsVersorRigid3D->setFont(font);
        m_MomentsVersorRigid3D->setChecked(true);

        horizontalLayout_8->addWidget(m_MomentsVersorRigid3D);


        verticalLayout_78->addWidget(m_CenterForInitializerVersorRigid3D);


        verticalLayout->addWidget(m_VersorRigid3DTransformFrame);


        retranslateUi(QmitkVersorRigid3DTransformControls);

        QMetaObject::connectSlotsByName(QmitkVersorRigid3DTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkVersorRigid3DTransformControls)
    {
        QmitkVersorRigid3DTransformControls->setWindowTitle(QApplication::translate("QmitkVersorRigid3DTransformControls", "Form", 0));
        m_UseOptimizerScalesVersorRigid3D->setTitle(QApplication::translate("QmitkVersorRigid3DTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8_2_3_2_2_2_3_3->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "Scale Versor 1:", 0));
        textLabel2_6_3_3_2_2_2_3_3->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "Scale Versor 2:", 0));
        textLabel3_5_3_3_2_2_2_3_3->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "Scale Versor 3:", 0));
        textLabel11_3_2_2_2_3_2->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "Translation Scale X:", 0));
        textLabel12_3_2_2_2_3_2->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "Translation Scale Y:", 0));
        textLabel13_2_2_2_2_3_2->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "Translation Scale Z:", 0));
        m_ScalesVersorRigid3DTransformScale1->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "1.0", 0));
        m_ScalesVersorRigid3DTransformScale2->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "1.0", 0));
        m_ScalesVersorRigid3DTransformScale3->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "1.0", 0));
        m_ScalesVersorRigid3DTransformScaleTranslationX->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "0.001", 0));
        m_ScalesVersorRigid3DTransformScaleTranslationY->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "0.001", 0));
        m_ScalesVersorRigid3DTransformScaleTranslationZ->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "0.001", 0));
        m_CenterForInitializerVersorRigid3D->setTitle(QApplication::translate("QmitkVersorRigid3DTransformControls", "Center for Initializer", 0));
        m_GeometryVersorRigid3D->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "Geometry", 0));
        m_MomentsVersorRigid3D->setText(QApplication::translate("QmitkVersorRigid3DTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkVersorRigid3DTransformControls: public Ui_QmitkVersorRigid3DTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKVERSORRIGID3DTRANSFORMCONTROLS_H
