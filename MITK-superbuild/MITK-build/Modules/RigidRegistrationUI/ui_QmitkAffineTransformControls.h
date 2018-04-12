/********************************************************************************
** Form generated from reading UI file 'QmitkAffineTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKAFFINETRANSFORMCONTROLS_H
#define UI_QMITKAFFINETRANSFORMCONTROLS_H

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

class Ui_QmitkAffineTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_AffineTransformFrame;
    QVBoxLayout *verticalLayout_64;
    QGroupBox *m_UseOptimizerScalesAffine;
    QVBoxLayout *verticalLayout_63;
    QHBoxLayout *_63;
    QVBoxLayout *_64;
    QLabel *textLabel1_8_2_3;
    QLabel *textLabel2_6_3_3;
    QLabel *textLabel3_5_3_3;
    QLabel *textLabel1_9;
    QLabel *textLabel2_7;
    QLabel *textLabel3_6;
    QLabel *textLabel4_4;
    QLabel *textLabel5_4;
    QLabel *textLabel6_4;
    QLabel *textLabel11_3;
    QLabel *textLabel12_3;
    QLabel *textLabel13_2;
    QVBoxLayout *_68;
    QLineEdit *m_ScalesAffineTransformScale1;
    QLineEdit *m_ScalesAffineTransformScale2;
    QLineEdit *m_ScalesAffineTransformScale3;
    QLineEdit *m_ScalesAffineTransformScale4;
    QLineEdit *m_ScalesAffineTransformScale5;
    QLineEdit *m_ScalesAffineTransformScale6;
    QLineEdit *m_ScalesAffineTransformScale7;
    QLineEdit *m_ScalesAffineTransformScale8;
    QLineEdit *m_ScalesAffineTransformScale9;
    QLineEdit *m_ScalesAffineTransformScaleTranslationX;
    QLineEdit *m_ScalesAffineTransformScaleTranslationY;
    QLineEdit *m_ScalesAffineTransformScaleTranslationZ;
    QGroupBox *m_CenterForInitializerAffine;
    QHBoxLayout *horizontalLayout;
    QRadioButton *m_GeometryAffine;
    QRadioButton *m_MomentsAffine;

    void setupUi(QWidget *QmitkAffineTransformControls)
    {
        if (QmitkAffineTransformControls->objectName().isEmpty())
            QmitkAffineTransformControls->setObjectName(QStringLiteral("QmitkAffineTransformControls"));
        QmitkAffineTransformControls->resize(173, 378);
        verticalLayout = new QVBoxLayout(QmitkAffineTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_AffineTransformFrame = new QFrame(QmitkAffineTransformControls);
        m_AffineTransformFrame->setObjectName(QStringLiteral("m_AffineTransformFrame"));
        m_AffineTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_AffineTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_64 = new QVBoxLayout(m_AffineTransformFrame);
        verticalLayout_64->setSpacing(0);
        verticalLayout_64->setContentsMargins(0, 0, 0, 0);
        verticalLayout_64->setObjectName(QStringLiteral("verticalLayout_64"));
        m_UseOptimizerScalesAffine = new QGroupBox(m_AffineTransformFrame);
        m_UseOptimizerScalesAffine->setObjectName(QStringLiteral("m_UseOptimizerScalesAffine"));
        m_UseOptimizerScalesAffine->setFlat(true);
        m_UseOptimizerScalesAffine->setCheckable(true);
        verticalLayout_63 = new QVBoxLayout(m_UseOptimizerScalesAffine);
        verticalLayout_63->setSpacing(0);
        verticalLayout_63->setContentsMargins(0, 0, 0, 0);
        verticalLayout_63->setObjectName(QStringLiteral("verticalLayout_63"));
        _63 = new QHBoxLayout();
        _63->setObjectName(QStringLiteral("_63"));
        _64 = new QVBoxLayout();
        _64->setObjectName(QStringLiteral("_64"));
        textLabel1_8_2_3 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel1_8_2_3->setObjectName(QStringLiteral("textLabel1_8_2_3"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_8_2_3->setFont(font);
        textLabel1_8_2_3->setWordWrap(false);

        _64->addWidget(textLabel1_8_2_3);

        textLabel2_6_3_3 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel2_6_3_3->setObjectName(QStringLiteral("textLabel2_6_3_3"));
        textLabel2_6_3_3->setFont(font);
        textLabel2_6_3_3->setWordWrap(false);

        _64->addWidget(textLabel2_6_3_3);

        textLabel3_5_3_3 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel3_5_3_3->setObjectName(QStringLiteral("textLabel3_5_3_3"));
        textLabel3_5_3_3->setFont(font);
        textLabel3_5_3_3->setWordWrap(false);

        _64->addWidget(textLabel3_5_3_3);

        textLabel1_9 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel1_9->setObjectName(QStringLiteral("textLabel1_9"));
        textLabel1_9->setFont(font);
        textLabel1_9->setWordWrap(false);

        _64->addWidget(textLabel1_9);

        textLabel2_7 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel2_7->setObjectName(QStringLiteral("textLabel2_7"));
        textLabel2_7->setFont(font);
        textLabel2_7->setWordWrap(false);

        _64->addWidget(textLabel2_7);

        textLabel3_6 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel3_6->setObjectName(QStringLiteral("textLabel3_6"));
        textLabel3_6->setFont(font);
        textLabel3_6->setWordWrap(false);

        _64->addWidget(textLabel3_6);

        textLabel4_4 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel4_4->setObjectName(QStringLiteral("textLabel4_4"));
        textLabel4_4->setFont(font);
        textLabel4_4->setWordWrap(false);

        _64->addWidget(textLabel4_4);

        textLabel5_4 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel5_4->setObjectName(QStringLiteral("textLabel5_4"));
        textLabel5_4->setFont(font);
        textLabel5_4->setWordWrap(false);

        _64->addWidget(textLabel5_4);

        textLabel6_4 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel6_4->setObjectName(QStringLiteral("textLabel6_4"));
        textLabel6_4->setFont(font);
        textLabel6_4->setWordWrap(false);

        _64->addWidget(textLabel6_4);

        textLabel11_3 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel11_3->setObjectName(QStringLiteral("textLabel11_3"));
        textLabel11_3->setFont(font);
        textLabel11_3->setWordWrap(false);

        _64->addWidget(textLabel11_3);

        textLabel12_3 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel12_3->setObjectName(QStringLiteral("textLabel12_3"));
        textLabel12_3->setFont(font);
        textLabel12_3->setWordWrap(false);

        _64->addWidget(textLabel12_3);

        textLabel13_2 = new QLabel(m_UseOptimizerScalesAffine);
        textLabel13_2->setObjectName(QStringLiteral("textLabel13_2"));
        textLabel13_2->setFont(font);
        textLabel13_2->setWordWrap(false);

        _64->addWidget(textLabel13_2);


        _63->addLayout(_64);

        _68 = new QVBoxLayout();
        _68->setObjectName(QStringLiteral("_68"));
        m_ScalesAffineTransformScale1 = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScale1->setObjectName(QStringLiteral("m_ScalesAffineTransformScale1"));
        m_ScalesAffineTransformScale1->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScale1->setFont(font);
        m_ScalesAffineTransformScale1->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScale1);

        m_ScalesAffineTransformScale2 = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScale2->setObjectName(QStringLiteral("m_ScalesAffineTransformScale2"));
        m_ScalesAffineTransformScale2->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScale2->setFont(font);
        m_ScalesAffineTransformScale2->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScale2);

        m_ScalesAffineTransformScale3 = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScale3->setObjectName(QStringLiteral("m_ScalesAffineTransformScale3"));
        m_ScalesAffineTransformScale3->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScale3->setFont(font);
        m_ScalesAffineTransformScale3->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScale3);

        m_ScalesAffineTransformScale4 = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScale4->setObjectName(QStringLiteral("m_ScalesAffineTransformScale4"));
        m_ScalesAffineTransformScale4->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScale4->setFont(font);
        m_ScalesAffineTransformScale4->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScale4);

        m_ScalesAffineTransformScale5 = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScale5->setObjectName(QStringLiteral("m_ScalesAffineTransformScale5"));
        m_ScalesAffineTransformScale5->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScale5->setFont(font);
        m_ScalesAffineTransformScale5->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScale5);

        m_ScalesAffineTransformScale6 = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScale6->setObjectName(QStringLiteral("m_ScalesAffineTransformScale6"));
        m_ScalesAffineTransformScale6->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScale6->setFont(font);
        m_ScalesAffineTransformScale6->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScale6);

        m_ScalesAffineTransformScale7 = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScale7->setObjectName(QStringLiteral("m_ScalesAffineTransformScale7"));
        m_ScalesAffineTransformScale7->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScale7->setFont(font);
        m_ScalesAffineTransformScale7->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScale7);

        m_ScalesAffineTransformScale8 = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScale8->setObjectName(QStringLiteral("m_ScalesAffineTransformScale8"));
        m_ScalesAffineTransformScale8->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScale8->setFont(font);
        m_ScalesAffineTransformScale8->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScale8);

        m_ScalesAffineTransformScale9 = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScale9->setObjectName(QStringLiteral("m_ScalesAffineTransformScale9"));
        m_ScalesAffineTransformScale9->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScale9->setFont(font);
        m_ScalesAffineTransformScale9->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScale9);

        m_ScalesAffineTransformScaleTranslationX = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScaleTranslationX->setObjectName(QStringLiteral("m_ScalesAffineTransformScaleTranslationX"));
        m_ScalesAffineTransformScaleTranslationX->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScaleTranslationX->setFont(font);
        m_ScalesAffineTransformScaleTranslationX->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScaleTranslationX);

        m_ScalesAffineTransformScaleTranslationY = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScaleTranslationY->setObjectName(QStringLiteral("m_ScalesAffineTransformScaleTranslationY"));
        m_ScalesAffineTransformScaleTranslationY->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScaleTranslationY->setFont(font);
        m_ScalesAffineTransformScaleTranslationY->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScaleTranslationY);

        m_ScalesAffineTransformScaleTranslationZ = new QLineEdit(m_UseOptimizerScalesAffine);
        m_ScalesAffineTransformScaleTranslationZ->setObjectName(QStringLiteral("m_ScalesAffineTransformScaleTranslationZ"));
        m_ScalesAffineTransformScaleTranslationZ->setMinimumSize(QSize(0, 20));
        m_ScalesAffineTransformScaleTranslationZ->setFont(font);
        m_ScalesAffineTransformScaleTranslationZ->setAlignment(Qt::AlignRight);

        _68->addWidget(m_ScalesAffineTransformScaleTranslationZ);


        _63->addLayout(_68);


        verticalLayout_63->addLayout(_63);


        verticalLayout_64->addWidget(m_UseOptimizerScalesAffine);

        m_CenterForInitializerAffine = new QGroupBox(m_AffineTransformFrame);
        m_CenterForInitializerAffine->setObjectName(QStringLiteral("m_CenterForInitializerAffine"));
        m_CenterForInitializerAffine->setFlat(true);
        m_CenterForInitializerAffine->setCheckable(true);
        horizontalLayout = new QHBoxLayout(m_CenterForInitializerAffine);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_GeometryAffine = new QRadioButton(m_CenterForInitializerAffine);
        m_GeometryAffine->setObjectName(QStringLiteral("m_GeometryAffine"));
        m_GeometryAffine->setEnabled(true);
        m_GeometryAffine->setMinimumSize(QSize(0, 20));
        m_GeometryAffine->setFont(font);

        horizontalLayout->addWidget(m_GeometryAffine);

        m_MomentsAffine = new QRadioButton(m_CenterForInitializerAffine);
        m_MomentsAffine->setObjectName(QStringLiteral("m_MomentsAffine"));
        m_MomentsAffine->setEnabled(true);
        m_MomentsAffine->setMinimumSize(QSize(0, 20));
        m_MomentsAffine->setFont(font);
        m_MomentsAffine->setChecked(true);

        horizontalLayout->addWidget(m_MomentsAffine);


        verticalLayout_64->addWidget(m_CenterForInitializerAffine);


        verticalLayout->addWidget(m_AffineTransformFrame);


        retranslateUi(QmitkAffineTransformControls);

        QMetaObject::connectSlotsByName(QmitkAffineTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkAffineTransformControls)
    {
        QmitkAffineTransformControls->setWindowTitle(QApplication::translate("QmitkAffineTransformControls", "Form", 0));
        m_UseOptimizerScalesAffine->setTitle(QApplication::translate("QmitkAffineTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8_2_3->setText(QApplication::translate("QmitkAffineTransformControls", "Scale 1:", 0));
        textLabel2_6_3_3->setText(QApplication::translate("QmitkAffineTransformControls", "Scale 2:", 0));
        textLabel3_5_3_3->setText(QApplication::translate("QmitkAffineTransformControls", "Scale 3:", 0));
        textLabel1_9->setText(QApplication::translate("QmitkAffineTransformControls", "Scale 4:", 0));
        textLabel2_7->setText(QApplication::translate("QmitkAffineTransformControls", "Scale 5:", 0));
        textLabel3_6->setText(QApplication::translate("QmitkAffineTransformControls", "Scale 6:", 0));
        textLabel4_4->setText(QApplication::translate("QmitkAffineTransformControls", "Scale 7:", 0));
        textLabel5_4->setText(QApplication::translate("QmitkAffineTransformControls", "Scale 8:", 0));
        textLabel6_4->setText(QApplication::translate("QmitkAffineTransformControls", "Scale 9:", 0));
        textLabel11_3->setText(QApplication::translate("QmitkAffineTransformControls", "Translation Scale X:", 0));
        textLabel12_3->setText(QApplication::translate("QmitkAffineTransformControls", "Translation Scale Y:", 0));
        textLabel13_2->setText(QApplication::translate("QmitkAffineTransformControls", "Translation Scale Z:", 0));
        m_ScalesAffineTransformScale1->setText(QApplication::translate("QmitkAffineTransformControls", "1.0", 0));
        m_ScalesAffineTransformScale2->setText(QApplication::translate("QmitkAffineTransformControls", "1.0", 0));
        m_ScalesAffineTransformScale3->setText(QApplication::translate("QmitkAffineTransformControls", "1.0", 0));
        m_ScalesAffineTransformScale4->setText(QApplication::translate("QmitkAffineTransformControls", "1.0", 0));
        m_ScalesAffineTransformScale5->setText(QApplication::translate("QmitkAffineTransformControls", "1.0", 0));
        m_ScalesAffineTransformScale6->setText(QApplication::translate("QmitkAffineTransformControls", "1.0", 0));
        m_ScalesAffineTransformScale7->setText(QApplication::translate("QmitkAffineTransformControls", "1.0", 0));
        m_ScalesAffineTransformScale8->setText(QApplication::translate("QmitkAffineTransformControls", "1.0", 0));
        m_ScalesAffineTransformScale9->setText(QApplication::translate("QmitkAffineTransformControls", "1.0", 0));
        m_ScalesAffineTransformScaleTranslationX->setText(QApplication::translate("QmitkAffineTransformControls", "0.001", 0));
        m_ScalesAffineTransformScaleTranslationY->setText(QApplication::translate("QmitkAffineTransformControls", "0.001", 0));
        m_ScalesAffineTransformScaleTranslationZ->setText(QApplication::translate("QmitkAffineTransformControls", "0.001", 0));
        m_CenterForInitializerAffine->setTitle(QApplication::translate("QmitkAffineTransformControls", "Center for Initializer", 0));
        m_GeometryAffine->setText(QApplication::translate("QmitkAffineTransformControls", "Geometry", 0));
        m_MomentsAffine->setText(QApplication::translate("QmitkAffineTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkAffineTransformControls: public Ui_QmitkAffineTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKAFFINETRANSFORMCONTROLS_H
