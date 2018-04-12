/********************************************************************************
** Form generated from reading UI file 'QmitkRigid2DTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKRIGID2DTRANSFORMCONTROLS_H
#define UI_QMITKRIGID2DTRANSFORMCONTROLS_H

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

class Ui_QmitkRigid2DTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_Rigid2DTransformFrame;
    QVBoxLayout *verticalLayout_84;
    QGroupBox *m_UseOptimizerScalesRigid2D;
    QVBoxLayout *verticalLayout_83;
    QHBoxLayout *_153;
    QVBoxLayout *_154;
    QLabel *textLabel1_8_2_3_2_2_2_3_4_2;
    QLabel *textLabel11_3_2_2_2_3_3_2;
    QLabel *textLabel12_3_2_2_2_3_3_2;
    QVBoxLayout *_155;
    QLineEdit *m_ScalesRigid2DTransformScale1;
    QLineEdit *m_ScalesRigid2DTransformScaleTranslationX;
    QLineEdit *m_ScalesRigid2DTransformScaleTranslationY;
    QGroupBox *m_CenterForInitializerRigid2D;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *m_GeometryRigid2D;
    QRadioButton *m_MomentsRigid2D;

    void setupUi(QWidget *QmitkRigid2DTransformControls)
    {
        if (QmitkRigid2DTransformControls->objectName().isEmpty())
            QmitkRigid2DTransformControls->setObjectName(QStringLiteral("QmitkRigid2DTransformControls"));
        QmitkRigid2DTransformControls->resize(173, 144);
        verticalLayout = new QVBoxLayout(QmitkRigid2DTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_Rigid2DTransformFrame = new QFrame(QmitkRigid2DTransformControls);
        m_Rigid2DTransformFrame->setObjectName(QStringLiteral("m_Rigid2DTransformFrame"));
        m_Rigid2DTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_Rigid2DTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_84 = new QVBoxLayout(m_Rigid2DTransformFrame);
        verticalLayout_84->setSpacing(0);
        verticalLayout_84->setContentsMargins(0, 0, 0, 0);
        verticalLayout_84->setObjectName(QStringLiteral("verticalLayout_84"));
        m_UseOptimizerScalesRigid2D = new QGroupBox(m_Rigid2DTransformFrame);
        m_UseOptimizerScalesRigid2D->setObjectName(QStringLiteral("m_UseOptimizerScalesRigid2D"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        m_UseOptimizerScalesRigid2D->setFont(font);
        m_UseOptimizerScalesRigid2D->setFlat(true);
        m_UseOptimizerScalesRigid2D->setCheckable(true);
        verticalLayout_83 = new QVBoxLayout(m_UseOptimizerScalesRigid2D);
        verticalLayout_83->setSpacing(0);
        verticalLayout_83->setContentsMargins(0, 0, 0, 0);
        verticalLayout_83->setObjectName(QStringLiteral("verticalLayout_83"));
        _153 = new QHBoxLayout();
        _153->setObjectName(QStringLiteral("_153"));
        _154 = new QVBoxLayout();
        _154->setObjectName(QStringLiteral("_154"));
        textLabel1_8_2_3_2_2_2_3_4_2 = new QLabel(m_UseOptimizerScalesRigid2D);
        textLabel1_8_2_3_2_2_2_3_4_2->setObjectName(QStringLiteral("textLabel1_8_2_3_2_2_2_3_4_2"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        textLabel1_8_2_3_2_2_2_3_4_2->setFont(font1);
        textLabel1_8_2_3_2_2_2_3_4_2->setWordWrap(false);

        _154->addWidget(textLabel1_8_2_3_2_2_2_3_4_2);

        textLabel11_3_2_2_2_3_3_2 = new QLabel(m_UseOptimizerScalesRigid2D);
        textLabel11_3_2_2_2_3_3_2->setObjectName(QStringLiteral("textLabel11_3_2_2_2_3_3_2"));
        textLabel11_3_2_2_2_3_3_2->setFont(font1);
        textLabel11_3_2_2_2_3_3_2->setWordWrap(false);

        _154->addWidget(textLabel11_3_2_2_2_3_3_2);

        textLabel12_3_2_2_2_3_3_2 = new QLabel(m_UseOptimizerScalesRigid2D);
        textLabel12_3_2_2_2_3_3_2->setObjectName(QStringLiteral("textLabel12_3_2_2_2_3_3_2"));
        textLabel12_3_2_2_2_3_3_2->setFont(font1);
        textLabel12_3_2_2_2_3_3_2->setWordWrap(false);

        _154->addWidget(textLabel12_3_2_2_2_3_3_2);


        _153->addLayout(_154);

        _155 = new QVBoxLayout();
        _155->setObjectName(QStringLiteral("_155"));
        m_ScalesRigid2DTransformScale1 = new QLineEdit(m_UseOptimizerScalesRigid2D);
        m_ScalesRigid2DTransformScale1->setObjectName(QStringLiteral("m_ScalesRigid2DTransformScale1"));
        m_ScalesRigid2DTransformScale1->setMinimumSize(QSize(0, 20));
        m_ScalesRigid2DTransformScale1->setFont(font1);
        m_ScalesRigid2DTransformScale1->setAlignment(Qt::AlignRight);

        _155->addWidget(m_ScalesRigid2DTransformScale1);

        m_ScalesRigid2DTransformScaleTranslationX = new QLineEdit(m_UseOptimizerScalesRigid2D);
        m_ScalesRigid2DTransformScaleTranslationX->setObjectName(QStringLiteral("m_ScalesRigid2DTransformScaleTranslationX"));
        m_ScalesRigid2DTransformScaleTranslationX->setMinimumSize(QSize(0, 20));
        m_ScalesRigid2DTransformScaleTranslationX->setFont(font1);
        m_ScalesRigid2DTransformScaleTranslationX->setAlignment(Qt::AlignRight);

        _155->addWidget(m_ScalesRigid2DTransformScaleTranslationX);

        m_ScalesRigid2DTransformScaleTranslationY = new QLineEdit(m_UseOptimizerScalesRigid2D);
        m_ScalesRigid2DTransformScaleTranslationY->setObjectName(QStringLiteral("m_ScalesRigid2DTransformScaleTranslationY"));
        m_ScalesRigid2DTransformScaleTranslationY->setMinimumSize(QSize(0, 20));
        m_ScalesRigid2DTransformScaleTranslationY->setFont(font1);
        m_ScalesRigid2DTransformScaleTranslationY->setAlignment(Qt::AlignRight);

        _155->addWidget(m_ScalesRigid2DTransformScaleTranslationY);


        _153->addLayout(_155);


        verticalLayout_83->addLayout(_153);


        verticalLayout_84->addWidget(m_UseOptimizerScalesRigid2D);

        m_CenterForInitializerRigid2D = new QGroupBox(m_Rigid2DTransformFrame);
        m_CenterForInitializerRigid2D->setObjectName(QStringLiteral("m_CenterForInitializerRigid2D"));
        m_CenterForInitializerRigid2D->setFont(font);
        m_CenterForInitializerRigid2D->setFlat(true);
        m_CenterForInitializerRigid2D->setCheckable(true);
        horizontalLayout_11 = new QHBoxLayout(m_CenterForInitializerRigid2D);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        m_GeometryRigid2D = new QRadioButton(m_CenterForInitializerRigid2D);
        m_GeometryRigid2D->setObjectName(QStringLiteral("m_GeometryRigid2D"));
        m_GeometryRigid2D->setEnabled(true);
        m_GeometryRigid2D->setMinimumSize(QSize(0, 20));
        m_GeometryRigid2D->setFont(font1);

        horizontalLayout_11->addWidget(m_GeometryRigid2D);

        m_MomentsRigid2D = new QRadioButton(m_CenterForInitializerRigid2D);
        m_MomentsRigid2D->setObjectName(QStringLiteral("m_MomentsRigid2D"));
        m_MomentsRigid2D->setEnabled(true);
        m_MomentsRigid2D->setMinimumSize(QSize(0, 20));
        m_MomentsRigid2D->setFont(font1);
        m_MomentsRigid2D->setChecked(true);

        horizontalLayout_11->addWidget(m_MomentsRigid2D);


        verticalLayout_84->addWidget(m_CenterForInitializerRigid2D);


        verticalLayout->addWidget(m_Rigid2DTransformFrame);


        retranslateUi(QmitkRigid2DTransformControls);

        QMetaObject::connectSlotsByName(QmitkRigid2DTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkRigid2DTransformControls)
    {
        QmitkRigid2DTransformControls->setWindowTitle(QApplication::translate("QmitkRigid2DTransformControls", "Form", 0));
        m_UseOptimizerScalesRigid2D->setTitle(QApplication::translate("QmitkRigid2DTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8_2_3_2_2_2_3_4_2->setText(QApplication::translate("QmitkRigid2DTransformControls", "Scale Rotation:", 0));
        textLabel11_3_2_2_2_3_3_2->setText(QApplication::translate("QmitkRigid2DTransformControls", "Translation Scale X:", 0));
        textLabel12_3_2_2_2_3_3_2->setText(QApplication::translate("QmitkRigid2DTransformControls", "Translation Scale Y:", 0));
        m_ScalesRigid2DTransformScale1->setText(QApplication::translate("QmitkRigid2DTransformControls", "1.0", 0));
        m_ScalesRigid2DTransformScaleTranslationX->setText(QApplication::translate("QmitkRigid2DTransformControls", "0.001", 0));
        m_ScalesRigid2DTransformScaleTranslationY->setText(QApplication::translate("QmitkRigid2DTransformControls", "0.001", 0));
        m_CenterForInitializerRigid2D->setTitle(QApplication::translate("QmitkRigid2DTransformControls", "Center for Initializer", 0));
        m_GeometryRigid2D->setText(QApplication::translate("QmitkRigid2DTransformControls", "Geometry", 0));
        m_MomentsRigid2D->setText(QApplication::translate("QmitkRigid2DTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkRigid2DTransformControls: public Ui_QmitkRigid2DTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKRIGID2DTRANSFORMCONTROLS_H
