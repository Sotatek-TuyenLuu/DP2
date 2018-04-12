/********************************************************************************
** Form generated from reading UI file 'QmitkQuaternionRigidTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKQUATERNIONRIGIDTRANSFORMCONTROLS_H
#define UI_QMITKQUATERNIONRIGIDTRANSFORMCONTROLS_H

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

class Ui_QmitkQuaternionRigidTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_QuaternionRigidTransformFrame;
    QVBoxLayout *verticalLayout_74;
    QGroupBox *m_UseOptimizerScalesQuaternionRigid;
    QVBoxLayout *verticalLayout_73;
    QHBoxLayout *_118;
    QVBoxLayout *_119;
    QLabel *textLabel1_8_2_3_2_2_2_3;
    QLabel *textLabel2_6_3_3_2_2_2_3;
    QLabel *textLabel3_5_3_3_2_2_2_3;
    QLabel *textLabel1_9_2_2_2_2;
    QLabel *textLabel11_3_2_2_2_3;
    QLabel *textLabel12_3_2_2_2_3;
    QLabel *textLabel13_2_2_2_2_3;
    QVBoxLayout *_120;
    QLineEdit *m_ScalesQuaternionRigidTransformScale1;
    QLineEdit *m_ScalesQuaternionRigidTransformScale2;
    QLineEdit *m_ScalesQuaternionRigidTransformScale3;
    QLineEdit *m_ScalesQuaternionRigidTransformScale4;
    QLineEdit *m_ScalesQuaternionRigidTransformScaleTranslationX;
    QLineEdit *m_ScalesQuaternionRigidTransformScaleTranslationY;
    QLineEdit *m_ScalesQuaternionRigidTransformScaleTranslationZ;
    QGroupBox *m_CenterForInitializerQuaternionRigid;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *m_GeometryQuaternionRigid;
    QRadioButton *m_MomentsQuaternionRigid;

    void setupUi(QWidget *QmitkQuaternionRigidTransformControls)
    {
        if (QmitkQuaternionRigidTransformControls->objectName().isEmpty())
            QmitkQuaternionRigidTransformControls->setObjectName(QStringLiteral("QmitkQuaternionRigidTransformControls"));
        QmitkQuaternionRigidTransformControls->resize(175, 248);
        verticalLayout = new QVBoxLayout(QmitkQuaternionRigidTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_QuaternionRigidTransformFrame = new QFrame(QmitkQuaternionRigidTransformControls);
        m_QuaternionRigidTransformFrame->setObjectName(QStringLiteral("m_QuaternionRigidTransformFrame"));
        m_QuaternionRigidTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_QuaternionRigidTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_74 = new QVBoxLayout(m_QuaternionRigidTransformFrame);
        verticalLayout_74->setSpacing(0);
        verticalLayout_74->setContentsMargins(0, 0, 0, 0);
        verticalLayout_74->setObjectName(QStringLiteral("verticalLayout_74"));
        m_UseOptimizerScalesQuaternionRigid = new QGroupBox(m_QuaternionRigidTransformFrame);
        m_UseOptimizerScalesQuaternionRigid->setObjectName(QStringLiteral("m_UseOptimizerScalesQuaternionRigid"));
        m_UseOptimizerScalesQuaternionRigid->setFlat(true);
        m_UseOptimizerScalesQuaternionRigid->setCheckable(true);
        verticalLayout_73 = new QVBoxLayout(m_UseOptimizerScalesQuaternionRigid);
        verticalLayout_73->setSpacing(0);
        verticalLayout_73->setContentsMargins(0, 0, 0, 0);
        verticalLayout_73->setObjectName(QStringLiteral("verticalLayout_73"));
        _118 = new QHBoxLayout();
        _118->setObjectName(QStringLiteral("_118"));
        _119 = new QVBoxLayout();
        _119->setObjectName(QStringLiteral("_119"));
        textLabel1_8_2_3_2_2_2_3 = new QLabel(m_UseOptimizerScalesQuaternionRigid);
        textLabel1_8_2_3_2_2_2_3->setObjectName(QStringLiteral("textLabel1_8_2_3_2_2_2_3"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_8_2_3_2_2_2_3->setFont(font);
        textLabel1_8_2_3_2_2_2_3->setWordWrap(false);

        _119->addWidget(textLabel1_8_2_3_2_2_2_3);

        textLabel2_6_3_3_2_2_2_3 = new QLabel(m_UseOptimizerScalesQuaternionRigid);
        textLabel2_6_3_3_2_2_2_3->setObjectName(QStringLiteral("textLabel2_6_3_3_2_2_2_3"));
        textLabel2_6_3_3_2_2_2_3->setFont(font);
        textLabel2_6_3_3_2_2_2_3->setWordWrap(false);

        _119->addWidget(textLabel2_6_3_3_2_2_2_3);

        textLabel3_5_3_3_2_2_2_3 = new QLabel(m_UseOptimizerScalesQuaternionRigid);
        textLabel3_5_3_3_2_2_2_3->setObjectName(QStringLiteral("textLabel3_5_3_3_2_2_2_3"));
        textLabel3_5_3_3_2_2_2_3->setFont(font);
        textLabel3_5_3_3_2_2_2_3->setWordWrap(false);

        _119->addWidget(textLabel3_5_3_3_2_2_2_3);

        textLabel1_9_2_2_2_2 = new QLabel(m_UseOptimizerScalesQuaternionRigid);
        textLabel1_9_2_2_2_2->setObjectName(QStringLiteral("textLabel1_9_2_2_2_2"));
        textLabel1_9_2_2_2_2->setFont(font);
        textLabel1_9_2_2_2_2->setWordWrap(false);

        _119->addWidget(textLabel1_9_2_2_2_2);

        textLabel11_3_2_2_2_3 = new QLabel(m_UseOptimizerScalesQuaternionRigid);
        textLabel11_3_2_2_2_3->setObjectName(QStringLiteral("textLabel11_3_2_2_2_3"));
        textLabel11_3_2_2_2_3->setFont(font);
        textLabel11_3_2_2_2_3->setWordWrap(false);

        _119->addWidget(textLabel11_3_2_2_2_3);

        textLabel12_3_2_2_2_3 = new QLabel(m_UseOptimizerScalesQuaternionRigid);
        textLabel12_3_2_2_2_3->setObjectName(QStringLiteral("textLabel12_3_2_2_2_3"));
        textLabel12_3_2_2_2_3->setFont(font);
        textLabel12_3_2_2_2_3->setWordWrap(false);

        _119->addWidget(textLabel12_3_2_2_2_3);

        textLabel13_2_2_2_2_3 = new QLabel(m_UseOptimizerScalesQuaternionRigid);
        textLabel13_2_2_2_2_3->setObjectName(QStringLiteral("textLabel13_2_2_2_2_3"));
        textLabel13_2_2_2_2_3->setFont(font);
        textLabel13_2_2_2_2_3->setWordWrap(false);

        _119->addWidget(textLabel13_2_2_2_2_3);


        _118->addLayout(_119);

        _120 = new QVBoxLayout();
        _120->setObjectName(QStringLiteral("_120"));
        m_ScalesQuaternionRigidTransformScale1 = new QLineEdit(m_UseOptimizerScalesQuaternionRigid);
        m_ScalesQuaternionRigidTransformScale1->setObjectName(QStringLiteral("m_ScalesQuaternionRigidTransformScale1"));
        m_ScalesQuaternionRigidTransformScale1->setMinimumSize(QSize(0, 20));
        m_ScalesQuaternionRigidTransformScale1->setFont(font);
        m_ScalesQuaternionRigidTransformScale1->setAlignment(Qt::AlignRight);

        _120->addWidget(m_ScalesQuaternionRigidTransformScale1);

        m_ScalesQuaternionRigidTransformScale2 = new QLineEdit(m_UseOptimizerScalesQuaternionRigid);
        m_ScalesQuaternionRigidTransformScale2->setObjectName(QStringLiteral("m_ScalesQuaternionRigidTransformScale2"));
        m_ScalesQuaternionRigidTransformScale2->setMinimumSize(QSize(0, 20));
        m_ScalesQuaternionRigidTransformScale2->setFont(font);
        m_ScalesQuaternionRigidTransformScale2->setAlignment(Qt::AlignRight);

        _120->addWidget(m_ScalesQuaternionRigidTransformScale2);

        m_ScalesQuaternionRigidTransformScale3 = new QLineEdit(m_UseOptimizerScalesQuaternionRigid);
        m_ScalesQuaternionRigidTransformScale3->setObjectName(QStringLiteral("m_ScalesQuaternionRigidTransformScale3"));
        m_ScalesQuaternionRigidTransformScale3->setMinimumSize(QSize(0, 20));
        m_ScalesQuaternionRigidTransformScale3->setFont(font);
        m_ScalesQuaternionRigidTransformScale3->setAlignment(Qt::AlignRight);

        _120->addWidget(m_ScalesQuaternionRigidTransformScale3);

        m_ScalesQuaternionRigidTransformScale4 = new QLineEdit(m_UseOptimizerScalesQuaternionRigid);
        m_ScalesQuaternionRigidTransformScale4->setObjectName(QStringLiteral("m_ScalesQuaternionRigidTransformScale4"));
        m_ScalesQuaternionRigidTransformScale4->setMinimumSize(QSize(0, 20));
        m_ScalesQuaternionRigidTransformScale4->setFont(font);
        m_ScalesQuaternionRigidTransformScale4->setAlignment(Qt::AlignRight);

        _120->addWidget(m_ScalesQuaternionRigidTransformScale4);

        m_ScalesQuaternionRigidTransformScaleTranslationX = new QLineEdit(m_UseOptimizerScalesQuaternionRigid);
        m_ScalesQuaternionRigidTransformScaleTranslationX->setObjectName(QStringLiteral("m_ScalesQuaternionRigidTransformScaleTranslationX"));
        m_ScalesQuaternionRigidTransformScaleTranslationX->setMinimumSize(QSize(0, 20));
        m_ScalesQuaternionRigidTransformScaleTranslationX->setFont(font);
        m_ScalesQuaternionRigidTransformScaleTranslationX->setAlignment(Qt::AlignRight);

        _120->addWidget(m_ScalesQuaternionRigidTransformScaleTranslationX);

        m_ScalesQuaternionRigidTransformScaleTranslationY = new QLineEdit(m_UseOptimizerScalesQuaternionRigid);
        m_ScalesQuaternionRigidTransformScaleTranslationY->setObjectName(QStringLiteral("m_ScalesQuaternionRigidTransformScaleTranslationY"));
        m_ScalesQuaternionRigidTransformScaleTranslationY->setMinimumSize(QSize(0, 20));
        m_ScalesQuaternionRigidTransformScaleTranslationY->setFont(font);
        m_ScalesQuaternionRigidTransformScaleTranslationY->setAlignment(Qt::AlignRight);

        _120->addWidget(m_ScalesQuaternionRigidTransformScaleTranslationY);

        m_ScalesQuaternionRigidTransformScaleTranslationZ = new QLineEdit(m_UseOptimizerScalesQuaternionRigid);
        m_ScalesQuaternionRigidTransformScaleTranslationZ->setObjectName(QStringLiteral("m_ScalesQuaternionRigidTransformScaleTranslationZ"));
        m_ScalesQuaternionRigidTransformScaleTranslationZ->setMinimumSize(QSize(0, 20));
        m_ScalesQuaternionRigidTransformScaleTranslationZ->setFont(font);
        m_ScalesQuaternionRigidTransformScaleTranslationZ->setAlignment(Qt::AlignRight);

        _120->addWidget(m_ScalesQuaternionRigidTransformScaleTranslationZ);


        _118->addLayout(_120);


        verticalLayout_73->addLayout(_118);


        verticalLayout_74->addWidget(m_UseOptimizerScalesQuaternionRigid);

        m_CenterForInitializerQuaternionRigid = new QGroupBox(m_QuaternionRigidTransformFrame);
        m_CenterForInitializerQuaternionRigid->setObjectName(QStringLiteral("m_CenterForInitializerQuaternionRigid"));
        m_CenterForInitializerQuaternionRigid->setFlat(true);
        m_CenterForInitializerQuaternionRigid->setCheckable(true);
        horizontalLayout_6 = new QHBoxLayout(m_CenterForInitializerQuaternionRigid);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        m_GeometryQuaternionRigid = new QRadioButton(m_CenterForInitializerQuaternionRigid);
        m_GeometryQuaternionRigid->setObjectName(QStringLiteral("m_GeometryQuaternionRigid"));
        m_GeometryQuaternionRigid->setEnabled(true);
        m_GeometryQuaternionRigid->setMinimumSize(QSize(0, 20));
        m_GeometryQuaternionRigid->setFont(font);

        horizontalLayout_6->addWidget(m_GeometryQuaternionRigid);

        m_MomentsQuaternionRigid = new QRadioButton(m_CenterForInitializerQuaternionRigid);
        m_MomentsQuaternionRigid->setObjectName(QStringLiteral("m_MomentsQuaternionRigid"));
        m_MomentsQuaternionRigid->setEnabled(true);
        m_MomentsQuaternionRigid->setMinimumSize(QSize(0, 20));
        m_MomentsQuaternionRigid->setFont(font);
        m_MomentsQuaternionRigid->setChecked(true);

        horizontalLayout_6->addWidget(m_MomentsQuaternionRigid);


        verticalLayout_74->addWidget(m_CenterForInitializerQuaternionRigid);


        verticalLayout->addWidget(m_QuaternionRigidTransformFrame);


        retranslateUi(QmitkQuaternionRigidTransformControls);

        QMetaObject::connectSlotsByName(QmitkQuaternionRigidTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkQuaternionRigidTransformControls)
    {
        QmitkQuaternionRigidTransformControls->setWindowTitle(QApplication::translate("QmitkQuaternionRigidTransformControls", "Form", 0));
        m_UseOptimizerScalesQuaternionRigid->setTitle(QApplication::translate("QmitkQuaternionRigidTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8_2_3_2_2_2_3->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "Scale Quaternion 1:", 0));
        textLabel2_6_3_3_2_2_2_3->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "Scale Quaternion 2:", 0));
        textLabel3_5_3_3_2_2_2_3->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "Scale Quaternion 3:", 0));
        textLabel1_9_2_2_2_2->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "Scale Quaternion 4:", 0));
        textLabel11_3_2_2_2_3->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "Translation Scale X:", 0));
        textLabel12_3_2_2_2_3->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "Translation Scale Y:", 0));
        textLabel13_2_2_2_2_3->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "Translation Scale Z:", 0));
        m_ScalesQuaternionRigidTransformScale1->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "1.0", 0));
        m_ScalesQuaternionRigidTransformScale2->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "1.0", 0));
        m_ScalesQuaternionRigidTransformScale3->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "1.0", 0));
        m_ScalesQuaternionRigidTransformScale4->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "1.0", 0));
        m_ScalesQuaternionRigidTransformScaleTranslationX->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "0.001", 0));
        m_ScalesQuaternionRigidTransformScaleTranslationY->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "0.001", 0));
        m_ScalesQuaternionRigidTransformScaleTranslationZ->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "0.001", 0));
        m_CenterForInitializerQuaternionRigid->setTitle(QApplication::translate("QmitkQuaternionRigidTransformControls", "Center for Initializer", 0));
        m_GeometryQuaternionRigid->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "Geometry", 0));
        m_MomentsQuaternionRigid->setText(QApplication::translate("QmitkQuaternionRigidTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkQuaternionRigidTransformControls: public Ui_QmitkQuaternionRigidTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKQUATERNIONRIGIDTRANSFORMCONTROLS_H
