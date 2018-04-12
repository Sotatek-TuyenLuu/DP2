/********************************************************************************
** Form generated from reading UI file 'QmitkVersorTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKVERSORTRANSFORMCONTROLS_H
#define UI_QMITKVERSORTRANSFORMCONTROLS_H

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

class Ui_QmitkVersorTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_VersorFrame;
    QVBoxLayout *verticalLayout_76;
    QGroupBox *m_UseOptimizerScalesVersor;
    QVBoxLayout *verticalLayout_75;
    QHBoxLayout *_125;
    QVBoxLayout *_126;
    QLabel *textLabel1_8_2_3_2_2_2_3_2;
    QLabel *textLabel2_6_3_3_2_2_2_3_2;
    QLabel *textLabel3_5_3_3_2_2_2_3_2;
    QVBoxLayout *_127;
    QLineEdit *m_ScalesVersorTransformScale1;
    QLineEdit *m_ScalesVersorTransformScale2;
    QLineEdit *m_ScalesVersorTransformScale3;
    QGroupBox *m_CenterForInitializerVersor;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *m_GeometryVersor;
    QRadioButton *m_MomentsVersor;

    void setupUi(QWidget *QmitkVersorTransformControls)
    {
        if (QmitkVersorTransformControls->objectName().isEmpty())
            QmitkVersorTransformControls->setObjectName(QStringLiteral("QmitkVersorTransformControls"));
        QmitkVersorTransformControls->resize(160, 146);
        verticalLayout = new QVBoxLayout(QmitkVersorTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_VersorFrame = new QFrame(QmitkVersorTransformControls);
        m_VersorFrame->setObjectName(QStringLiteral("m_VersorFrame"));
        m_VersorFrame->setFrameShape(QFrame::StyledPanel);
        m_VersorFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_76 = new QVBoxLayout(m_VersorFrame);
        verticalLayout_76->setSpacing(0);
        verticalLayout_76->setContentsMargins(0, 0, 0, 0);
        verticalLayout_76->setObjectName(QStringLiteral("verticalLayout_76"));
        m_UseOptimizerScalesVersor = new QGroupBox(m_VersorFrame);
        m_UseOptimizerScalesVersor->setObjectName(QStringLiteral("m_UseOptimizerScalesVersor"));
        m_UseOptimizerScalesVersor->setCheckable(true);
        verticalLayout_75 = new QVBoxLayout(m_UseOptimizerScalesVersor);
        verticalLayout_75->setSpacing(0);
        verticalLayout_75->setContentsMargins(0, 0, 0, 0);
        verticalLayout_75->setObjectName(QStringLiteral("verticalLayout_75"));
        _125 = new QHBoxLayout();
        _125->setObjectName(QStringLiteral("_125"));
        _126 = new QVBoxLayout();
        _126->setObjectName(QStringLiteral("_126"));
        textLabel1_8_2_3_2_2_2_3_2 = new QLabel(m_UseOptimizerScalesVersor);
        textLabel1_8_2_3_2_2_2_3_2->setObjectName(QStringLiteral("textLabel1_8_2_3_2_2_2_3_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_8_2_3_2_2_2_3_2->setFont(font);
        textLabel1_8_2_3_2_2_2_3_2->setWordWrap(false);

        _126->addWidget(textLabel1_8_2_3_2_2_2_3_2);

        textLabel2_6_3_3_2_2_2_3_2 = new QLabel(m_UseOptimizerScalesVersor);
        textLabel2_6_3_3_2_2_2_3_2->setObjectName(QStringLiteral("textLabel2_6_3_3_2_2_2_3_2"));
        textLabel2_6_3_3_2_2_2_3_2->setFont(font);
        textLabel2_6_3_3_2_2_2_3_2->setWordWrap(false);

        _126->addWidget(textLabel2_6_3_3_2_2_2_3_2);

        textLabel3_5_3_3_2_2_2_3_2 = new QLabel(m_UseOptimizerScalesVersor);
        textLabel3_5_3_3_2_2_2_3_2->setObjectName(QStringLiteral("textLabel3_5_3_3_2_2_2_3_2"));
        textLabel3_5_3_3_2_2_2_3_2->setFont(font);
        textLabel3_5_3_3_2_2_2_3_2->setWordWrap(false);

        _126->addWidget(textLabel3_5_3_3_2_2_2_3_2);


        _125->addLayout(_126);

        _127 = new QVBoxLayout();
        _127->setObjectName(QStringLiteral("_127"));
        m_ScalesVersorTransformScale1 = new QLineEdit(m_UseOptimizerScalesVersor);
        m_ScalesVersorTransformScale1->setObjectName(QStringLiteral("m_ScalesVersorTransformScale1"));
        m_ScalesVersorTransformScale1->setMinimumSize(QSize(0, 20));
        m_ScalesVersorTransformScale1->setFont(font);
        m_ScalesVersorTransformScale1->setAlignment(Qt::AlignRight);

        _127->addWidget(m_ScalesVersorTransformScale1);

        m_ScalesVersorTransformScale2 = new QLineEdit(m_UseOptimizerScalesVersor);
        m_ScalesVersorTransformScale2->setObjectName(QStringLiteral("m_ScalesVersorTransformScale2"));
        m_ScalesVersorTransformScale2->setMinimumSize(QSize(0, 20));
        m_ScalesVersorTransformScale2->setFont(font);
        m_ScalesVersorTransformScale2->setAlignment(Qt::AlignRight);

        _127->addWidget(m_ScalesVersorTransformScale2);

        m_ScalesVersorTransformScale3 = new QLineEdit(m_UseOptimizerScalesVersor);
        m_ScalesVersorTransformScale3->setObjectName(QStringLiteral("m_ScalesVersorTransformScale3"));
        m_ScalesVersorTransformScale3->setMinimumSize(QSize(0, 20));
        m_ScalesVersorTransformScale3->setFont(font);
        m_ScalesVersorTransformScale3->setAlignment(Qt::AlignRight);

        _127->addWidget(m_ScalesVersorTransformScale3);


        _125->addLayout(_127);


        verticalLayout_75->addLayout(_125);


        verticalLayout_76->addWidget(m_UseOptimizerScalesVersor);

        m_CenterForInitializerVersor = new QGroupBox(m_VersorFrame);
        m_CenterForInitializerVersor->setObjectName(QStringLiteral("m_CenterForInitializerVersor"));
        m_CenterForInitializerVersor->setFlat(true);
        m_CenterForInitializerVersor->setCheckable(true);
        horizontalLayout_7 = new QHBoxLayout(m_CenterForInitializerVersor);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        m_GeometryVersor = new QRadioButton(m_CenterForInitializerVersor);
        m_GeometryVersor->setObjectName(QStringLiteral("m_GeometryVersor"));
        m_GeometryVersor->setEnabled(true);
        m_GeometryVersor->setMinimumSize(QSize(0, 20));
        m_GeometryVersor->setFont(font);

        horizontalLayout_7->addWidget(m_GeometryVersor);

        m_MomentsVersor = new QRadioButton(m_CenterForInitializerVersor);
        m_MomentsVersor->setObjectName(QStringLiteral("m_MomentsVersor"));
        m_MomentsVersor->setEnabled(true);
        m_MomentsVersor->setMinimumSize(QSize(0, 20));
        m_MomentsVersor->setFont(font);
        m_MomentsVersor->setChecked(true);

        horizontalLayout_7->addWidget(m_MomentsVersor);


        verticalLayout_76->addWidget(m_CenterForInitializerVersor);


        verticalLayout->addWidget(m_VersorFrame);


        retranslateUi(QmitkVersorTransformControls);

        QMetaObject::connectSlotsByName(QmitkVersorTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkVersorTransformControls)
    {
        QmitkVersorTransformControls->setWindowTitle(QApplication::translate("QmitkVersorTransformControls", "Form", 0));
        m_UseOptimizerScalesVersor->setTitle(QApplication::translate("QmitkVersorTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8_2_3_2_2_2_3_2->setText(QApplication::translate("QmitkVersorTransformControls", "Scale Versor 1:", 0));
        textLabel2_6_3_3_2_2_2_3_2->setText(QApplication::translate("QmitkVersorTransformControls", "Scale Versor 2:", 0));
        textLabel3_5_3_3_2_2_2_3_2->setText(QApplication::translate("QmitkVersorTransformControls", "Scale Versor 3:", 0));
        m_ScalesVersorTransformScale1->setText(QApplication::translate("QmitkVersorTransformControls", "1.0", 0));
        m_ScalesVersorTransformScale2->setText(QApplication::translate("QmitkVersorTransformControls", "1.0", 0));
        m_ScalesVersorTransformScale3->setText(QApplication::translate("QmitkVersorTransformControls", "1.0", 0));
        m_CenterForInitializerVersor->setTitle(QApplication::translate("QmitkVersorTransformControls", "Center for Initializer", 0));
        m_GeometryVersor->setText(QApplication::translate("QmitkVersorTransformControls", "Geometry", 0));
        m_MomentsVersor->setText(QApplication::translate("QmitkVersorTransformControls", "Moments", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkVersorTransformControls: public Ui_QmitkVersorTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKVERSORTRANSFORMCONTROLS_H
