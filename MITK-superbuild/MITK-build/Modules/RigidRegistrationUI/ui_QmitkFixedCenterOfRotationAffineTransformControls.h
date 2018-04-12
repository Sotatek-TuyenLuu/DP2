/********************************************************************************
** Form generated from reading UI file 'QmitkFixedCenterOfRotationAffineTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKFIXEDCENTEROFROTATIONAFFINETRANSFORMCONTROLS_H
#define UI_QMITKFIXEDCENTEROFROTATIONAFFINETRANSFORMCONTROLS_H

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

class Ui_QmitkFixedCenterOfRotationAffineTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_FixedCenterOfRotationAffineTransformFrame;
    QVBoxLayout *verticalLayout_66;
    QGroupBox *m_UseOptimizerScalesFixedCenterOfRotationAffine;
    QVBoxLayout *verticalLayout_65;
    QHBoxLayout *_80;
    QVBoxLayout *_81;
    QLabel *textLabel1_8_2_3_2_2;
    QLabel *textLabel2_6_3_3_2_2;
    QLabel *textLabel3_5_3_3_2_2;
    QLabel *textLabel1_9_2_2;
    QLabel *textLabel2_7_2_2;
    QLabel *textLabel3_6_2_2;
    QLabel *textLabel4_4_3_2;
    QLabel *textLabel5_4_2_2;
    QLabel *textLabel6_4_2_2;
    QLabel *textLabel11_3_2_2;
    QLabel *textLabel12_3_2_2;
    QLabel *textLabel13_2_2_2;
    QVBoxLayout *_91;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScale1;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScale2;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScale3;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScale4;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScale5;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScale6;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScale7;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScale8;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScale9;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationX;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationY;
    QLineEdit *m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationZ;
    QGroupBox *m_CenterForInitializerFixedCenterOfRotationAffine;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *m_GeometryFixedCenterOfRotationAffine;
    QRadioButton *m_MomentsFixedCenterOfRotationAffine;

    void setupUi(QWidget *QmitkFixedCenterOfRotationAffineTransformControls)
    {
        if (QmitkFixedCenterOfRotationAffineTransformControls->objectName().isEmpty())
            QmitkFixedCenterOfRotationAffineTransformControls->setObjectName(QStringLiteral("QmitkFixedCenterOfRotationAffineTransformControls"));
        QmitkFixedCenterOfRotationAffineTransformControls->resize(173, 378);
        verticalLayout = new QVBoxLayout(QmitkFixedCenterOfRotationAffineTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_FixedCenterOfRotationAffineTransformFrame = new QFrame(QmitkFixedCenterOfRotationAffineTransformControls);
        m_FixedCenterOfRotationAffineTransformFrame->setObjectName(QStringLiteral("m_FixedCenterOfRotationAffineTransformFrame"));
        m_FixedCenterOfRotationAffineTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_FixedCenterOfRotationAffineTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_66 = new QVBoxLayout(m_FixedCenterOfRotationAffineTransformFrame);
        verticalLayout_66->setSpacing(0);
        verticalLayout_66->setContentsMargins(0, 0, 0, 0);
        verticalLayout_66->setObjectName(QStringLiteral("verticalLayout_66"));
        m_UseOptimizerScalesFixedCenterOfRotationAffine = new QGroupBox(m_FixedCenterOfRotationAffineTransformFrame);
        m_UseOptimizerScalesFixedCenterOfRotationAffine->setObjectName(QStringLiteral("m_UseOptimizerScalesFixedCenterOfRotationAffine"));
        m_UseOptimizerScalesFixedCenterOfRotationAffine->setFlat(true);
        m_UseOptimizerScalesFixedCenterOfRotationAffine->setCheckable(true);
        verticalLayout_65 = new QVBoxLayout(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        verticalLayout_65->setSpacing(0);
        verticalLayout_65->setContentsMargins(0, 0, 0, 0);
        verticalLayout_65->setObjectName(QStringLiteral("verticalLayout_65"));
        _80 = new QHBoxLayout();
        _80->setObjectName(QStringLiteral("_80"));
        _81 = new QVBoxLayout();
        _81->setObjectName(QStringLiteral("_81"));
        textLabel1_8_2_3_2_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel1_8_2_3_2_2->setObjectName(QStringLiteral("textLabel1_8_2_3_2_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_8_2_3_2_2->setFont(font);
        textLabel1_8_2_3_2_2->setWordWrap(false);

        _81->addWidget(textLabel1_8_2_3_2_2);

        textLabel2_6_3_3_2_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel2_6_3_3_2_2->setObjectName(QStringLiteral("textLabel2_6_3_3_2_2"));
        textLabel2_6_3_3_2_2->setFont(font);
        textLabel2_6_3_3_2_2->setWordWrap(false);

        _81->addWidget(textLabel2_6_3_3_2_2);

        textLabel3_5_3_3_2_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel3_5_3_3_2_2->setObjectName(QStringLiteral("textLabel3_5_3_3_2_2"));
        textLabel3_5_3_3_2_2->setFont(font);
        textLabel3_5_3_3_2_2->setWordWrap(false);

        _81->addWidget(textLabel3_5_3_3_2_2);

        textLabel1_9_2_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel1_9_2_2->setObjectName(QStringLiteral("textLabel1_9_2_2"));
        textLabel1_9_2_2->setFont(font);
        textLabel1_9_2_2->setWordWrap(false);

        _81->addWidget(textLabel1_9_2_2);

        textLabel2_7_2_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel2_7_2_2->setObjectName(QStringLiteral("textLabel2_7_2_2"));
        textLabel2_7_2_2->setFont(font);
        textLabel2_7_2_2->setWordWrap(false);

        _81->addWidget(textLabel2_7_2_2);

        textLabel3_6_2_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel3_6_2_2->setObjectName(QStringLiteral("textLabel3_6_2_2"));
        textLabel3_6_2_2->setFont(font);
        textLabel3_6_2_2->setWordWrap(false);

        _81->addWidget(textLabel3_6_2_2);

        textLabel4_4_3_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel4_4_3_2->setObjectName(QStringLiteral("textLabel4_4_3_2"));
        textLabel4_4_3_2->setFont(font);
        textLabel4_4_3_2->setWordWrap(false);

        _81->addWidget(textLabel4_4_3_2);

        textLabel5_4_2_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel5_4_2_2->setObjectName(QStringLiteral("textLabel5_4_2_2"));
        textLabel5_4_2_2->setFont(font);
        textLabel5_4_2_2->setWordWrap(false);

        _81->addWidget(textLabel5_4_2_2);

        textLabel6_4_2_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel6_4_2_2->setObjectName(QStringLiteral("textLabel6_4_2_2"));
        textLabel6_4_2_2->setFont(font);
        textLabel6_4_2_2->setWordWrap(false);

        _81->addWidget(textLabel6_4_2_2);

        textLabel11_3_2_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel11_3_2_2->setObjectName(QStringLiteral("textLabel11_3_2_2"));
        textLabel11_3_2_2->setFont(font);
        textLabel11_3_2_2->setWordWrap(false);

        _81->addWidget(textLabel11_3_2_2);

        textLabel12_3_2_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel12_3_2_2->setObjectName(QStringLiteral("textLabel12_3_2_2"));
        textLabel12_3_2_2->setFont(font);
        textLabel12_3_2_2->setWordWrap(false);

        _81->addWidget(textLabel12_3_2_2);

        textLabel13_2_2_2 = new QLabel(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        textLabel13_2_2_2->setObjectName(QStringLiteral("textLabel13_2_2_2"));
        textLabel13_2_2_2->setFont(font);
        textLabel13_2_2_2->setWordWrap(false);

        _81->addWidget(textLabel13_2_2_2);


        _80->addLayout(_81);

        _91 = new QVBoxLayout();
        _91->setObjectName(QStringLiteral("_91"));
        m_ScalesFixedCenterOfRotationAffineTransformScale1 = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScale1->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScale1"));
        m_ScalesFixedCenterOfRotationAffineTransformScale1->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScale1->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScale1->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScale1);

        m_ScalesFixedCenterOfRotationAffineTransformScale2 = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScale2->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScale2"));
        m_ScalesFixedCenterOfRotationAffineTransformScale2->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScale2->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScale2->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScale2);

        m_ScalesFixedCenterOfRotationAffineTransformScale3 = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScale3->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScale3"));
        m_ScalesFixedCenterOfRotationAffineTransformScale3->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScale3->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScale3->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScale3);

        m_ScalesFixedCenterOfRotationAffineTransformScale4 = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScale4->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScale4"));
        m_ScalesFixedCenterOfRotationAffineTransformScale4->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScale4->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScale4->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScale4);

        m_ScalesFixedCenterOfRotationAffineTransformScale5 = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScale5->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScale5"));
        m_ScalesFixedCenterOfRotationAffineTransformScale5->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScale5->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScale5->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScale5);

        m_ScalesFixedCenterOfRotationAffineTransformScale6 = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScale6->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScale6"));
        m_ScalesFixedCenterOfRotationAffineTransformScale6->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScale6->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScale6->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScale6);

        m_ScalesFixedCenterOfRotationAffineTransformScale7 = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScale7->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScale7"));
        m_ScalesFixedCenterOfRotationAffineTransformScale7->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScale7->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScale7->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScale7);

        m_ScalesFixedCenterOfRotationAffineTransformScale8 = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScale8->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScale8"));
        m_ScalesFixedCenterOfRotationAffineTransformScale8->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScale8->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScale8->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScale8);

        m_ScalesFixedCenterOfRotationAffineTransformScale9 = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScale9->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScale9"));
        m_ScalesFixedCenterOfRotationAffineTransformScale9->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScale9->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScale9->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScale9);

        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationX = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationX->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationX"));
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationX->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationX->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationX->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationX);

        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationY = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationY->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationY"));
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationY->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationY->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationY->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationY);

        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationZ = new QLineEdit(m_UseOptimizerScalesFixedCenterOfRotationAffine);
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationZ->setObjectName(QStringLiteral("m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationZ"));
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationZ->setMinimumSize(QSize(0, 20));
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationZ->setFont(font);
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationZ->setAlignment(Qt::AlignRight);

        _91->addWidget(m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationZ);


        _80->addLayout(_91);


        verticalLayout_65->addLayout(_80);


        verticalLayout_66->addWidget(m_UseOptimizerScalesFixedCenterOfRotationAffine);

        m_CenterForInitializerFixedCenterOfRotationAffine = new QGroupBox(m_FixedCenterOfRotationAffineTransformFrame);
        m_CenterForInitializerFixedCenterOfRotationAffine->setObjectName(QStringLiteral("m_CenterForInitializerFixedCenterOfRotationAffine"));
        m_CenterForInitializerFixedCenterOfRotationAffine->setFlat(true);
        m_CenterForInitializerFixedCenterOfRotationAffine->setCheckable(true);
        horizontalLayout_2 = new QHBoxLayout(m_CenterForInitializerFixedCenterOfRotationAffine);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_GeometryFixedCenterOfRotationAffine = new QRadioButton(m_CenterForInitializerFixedCenterOfRotationAffine);
        m_GeometryFixedCenterOfRotationAffine->setObjectName(QStringLiteral("m_GeometryFixedCenterOfRotationAffine"));
        m_GeometryFixedCenterOfRotationAffine->setEnabled(true);
        m_GeometryFixedCenterOfRotationAffine->setMinimumSize(QSize(0, 20));
        m_GeometryFixedCenterOfRotationAffine->setFont(font);

        horizontalLayout_2->addWidget(m_GeometryFixedCenterOfRotationAffine);

        m_MomentsFixedCenterOfRotationAffine = new QRadioButton(m_CenterForInitializerFixedCenterOfRotationAffine);
        m_MomentsFixedCenterOfRotationAffine->setObjectName(QStringLiteral("m_MomentsFixedCenterOfRotationAffine"));
        m_MomentsFixedCenterOfRotationAffine->setEnabled(true);
        m_MomentsFixedCenterOfRotationAffine->setMinimumSize(QSize(0, 20));
        m_MomentsFixedCenterOfRotationAffine->setFont(font);
        m_MomentsFixedCenterOfRotationAffine->setChecked(true);

        horizontalLayout_2->addWidget(m_MomentsFixedCenterOfRotationAffine);


        verticalLayout_66->addWidget(m_CenterForInitializerFixedCenterOfRotationAffine);


        verticalLayout->addWidget(m_FixedCenterOfRotationAffineTransformFrame);


        retranslateUi(QmitkFixedCenterOfRotationAffineTransformControls);

        QMetaObject::connectSlotsByName(QmitkFixedCenterOfRotationAffineTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkFixedCenterOfRotationAffineTransformControls)
    {
        QmitkFixedCenterOfRotationAffineTransformControls->setWindowTitle(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Form", 0));
        m_UseOptimizerScalesFixedCenterOfRotationAffine->setTitle(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8_2_3_2_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Scale 1:", 0));
        textLabel2_6_3_3_2_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Scale 2:", 0));
        textLabel3_5_3_3_2_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Scale 3:", 0));
        textLabel1_9_2_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Scale 4:", 0));
        textLabel2_7_2_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Scale 5:", 0));
        textLabel3_6_2_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Scale 6:", 0));
        textLabel4_4_3_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Scale 7:", 0));
        textLabel5_4_2_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Scale 8:", 0));
        textLabel6_4_2_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Scale 9:", 0));
        textLabel11_3_2_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Translation Scale X:", 0));
        textLabel12_3_2_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Translation Scale Y:", 0));
        textLabel13_2_2_2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Translation Scale Z:", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScale1->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "1.0", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScale2->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "1.0", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScale3->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "1.0", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScale4->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "1.0", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScale5->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "1.0", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScale6->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "1.0", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScale7->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "1.0", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScale8->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "1.0", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScale9->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "1.0", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationX->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "0.001", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationY->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "0.001", 0));
        m_ScalesFixedCenterOfRotationAffineTransformScaleTranslationZ->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "0.001", 0));
        m_CenterForInitializerFixedCenterOfRotationAffine->setTitle(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Center for Initializer", 0));
        m_GeometryFixedCenterOfRotationAffine->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Geometry", 0));
        m_MomentsFixedCenterOfRotationAffine->setText(QApplication::translate("QmitkFixedCenterOfRotationAffineTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkFixedCenterOfRotationAffineTransformControls: public Ui_QmitkFixedCenterOfRotationAffineTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKFIXEDCENTEROFROTATIONAFFINETRANSFORMCONTROLS_H
