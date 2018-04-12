/********************************************************************************
** Form generated from reading UI file 'QmitkScaleLogarithmicTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSCALELOGARITHMICTRANSFORMCONTROLS_H
#define UI_QMITKSCALELOGARITHMICTRANSFORMCONTROLS_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkScaleLogarithmicTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_ScaleLogarithmicTransformFrame;
    QVBoxLayout *verticalLayout_62;
    QGroupBox *m_UseOptimizerScalesScaleLogarithmic;
    QVBoxLayout *verticalLayout_61;
    QHBoxLayout *_46;
    QVBoxLayout *_47;
    QLabel *textLabel1_8_2;
    QLabel *textLabel2_6_3;
    QLabel *textLabel3_5_3;
    QVBoxLayout *_48;
    QLineEdit *m_ScalesScaleLogarithmicTransformScaleX;
    QLineEdit *m_ScalesScaleLogarithmicTransformScaleY;
    QLineEdit *m_ScalesScaleLogarithmicTransformScaleZ;

    void setupUi(QWidget *QmitkScaleLogarithmicTransformControls)
    {
        if (QmitkScaleLogarithmicTransformControls->objectName().isEmpty())
            QmitkScaleLogarithmicTransformControls->setObjectName(QStringLiteral("QmitkScaleLogarithmicTransformControls"));
        QmitkScaleLogarithmicTransformControls->resize(143, 110);
        verticalLayout = new QVBoxLayout(QmitkScaleLogarithmicTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_ScaleLogarithmicTransformFrame = new QFrame(QmitkScaleLogarithmicTransformControls);
        m_ScaleLogarithmicTransformFrame->setObjectName(QStringLiteral("m_ScaleLogarithmicTransformFrame"));
        m_ScaleLogarithmicTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_ScaleLogarithmicTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_62 = new QVBoxLayout(m_ScaleLogarithmicTransformFrame);
        verticalLayout_62->setSpacing(0);
        verticalLayout_62->setContentsMargins(0, 0, 0, 0);
        verticalLayout_62->setObjectName(QStringLiteral("verticalLayout_62"));
        m_UseOptimizerScalesScaleLogarithmic = new QGroupBox(m_ScaleLogarithmicTransformFrame);
        m_UseOptimizerScalesScaleLogarithmic->setObjectName(QStringLiteral("m_UseOptimizerScalesScaleLogarithmic"));
        m_UseOptimizerScalesScaleLogarithmic->setFlat(true);
        m_UseOptimizerScalesScaleLogarithmic->setCheckable(true);
        m_UseOptimizerScalesScaleLogarithmic->setChecked(false);
        verticalLayout_61 = new QVBoxLayout(m_UseOptimizerScalesScaleLogarithmic);
        verticalLayout_61->setSpacing(0);
        verticalLayout_61->setContentsMargins(0, 0, 0, 0);
        verticalLayout_61->setObjectName(QStringLiteral("verticalLayout_61"));
        _46 = new QHBoxLayout();
        _46->setObjectName(QStringLiteral("_46"));
        _47 = new QVBoxLayout();
        _47->setObjectName(QStringLiteral("_47"));
        textLabel1_8_2 = new QLabel(m_UseOptimizerScalesScaleLogarithmic);
        textLabel1_8_2->setObjectName(QStringLiteral("textLabel1_8_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_8_2->setFont(font);
        textLabel1_8_2->setWordWrap(false);

        _47->addWidget(textLabel1_8_2);

        textLabel2_6_3 = new QLabel(m_UseOptimizerScalesScaleLogarithmic);
        textLabel2_6_3->setObjectName(QStringLiteral("textLabel2_6_3"));
        textLabel2_6_3->setFont(font);
        textLabel2_6_3->setWordWrap(false);

        _47->addWidget(textLabel2_6_3);

        textLabel3_5_3 = new QLabel(m_UseOptimizerScalesScaleLogarithmic);
        textLabel3_5_3->setObjectName(QStringLiteral("textLabel3_5_3"));
        textLabel3_5_3->setFont(font);
        textLabel3_5_3->setWordWrap(false);

        _47->addWidget(textLabel3_5_3);


        _46->addLayout(_47);

        _48 = new QVBoxLayout();
        _48->setObjectName(QStringLiteral("_48"));
        m_ScalesScaleLogarithmicTransformScaleX = new QLineEdit(m_UseOptimizerScalesScaleLogarithmic);
        m_ScalesScaleLogarithmicTransformScaleX->setObjectName(QStringLiteral("m_ScalesScaleLogarithmicTransformScaleX"));
        m_ScalesScaleLogarithmicTransformScaleX->setMinimumSize(QSize(0, 20));
        m_ScalesScaleLogarithmicTransformScaleX->setFont(font);
        m_ScalesScaleLogarithmicTransformScaleX->setAlignment(Qt::AlignRight);

        _48->addWidget(m_ScalesScaleLogarithmicTransformScaleX);

        m_ScalesScaleLogarithmicTransformScaleY = new QLineEdit(m_UseOptimizerScalesScaleLogarithmic);
        m_ScalesScaleLogarithmicTransformScaleY->setObjectName(QStringLiteral("m_ScalesScaleLogarithmicTransformScaleY"));
        m_ScalesScaleLogarithmicTransformScaleY->setMinimumSize(QSize(0, 20));
        m_ScalesScaleLogarithmicTransformScaleY->setFont(font);
        m_ScalesScaleLogarithmicTransformScaleY->setAlignment(Qt::AlignRight);

        _48->addWidget(m_ScalesScaleLogarithmicTransformScaleY);

        m_ScalesScaleLogarithmicTransformScaleZ = new QLineEdit(m_UseOptimizerScalesScaleLogarithmic);
        m_ScalesScaleLogarithmicTransformScaleZ->setObjectName(QStringLiteral("m_ScalesScaleLogarithmicTransformScaleZ"));
        m_ScalesScaleLogarithmicTransformScaleZ->setMinimumSize(QSize(0, 20));
        m_ScalesScaleLogarithmicTransformScaleZ->setFont(font);
        m_ScalesScaleLogarithmicTransformScaleZ->setAlignment(Qt::AlignRight);

        _48->addWidget(m_ScalesScaleLogarithmicTransformScaleZ);


        _46->addLayout(_48);


        verticalLayout_61->addLayout(_46);


        verticalLayout_62->addWidget(m_UseOptimizerScalesScaleLogarithmic);


        verticalLayout->addWidget(m_ScaleLogarithmicTransformFrame);


        retranslateUi(QmitkScaleLogarithmicTransformControls);

        QMetaObject::connectSlotsByName(QmitkScaleLogarithmicTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkScaleLogarithmicTransformControls)
    {
        QmitkScaleLogarithmicTransformControls->setWindowTitle(QApplication::translate("QmitkScaleLogarithmicTransformControls", "Form", 0));
        m_UseOptimizerScalesScaleLogarithmic->setTitle(QApplication::translate("QmitkScaleLogarithmicTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8_2->setText(QApplication::translate("QmitkScaleLogarithmicTransformControls", "Scale X:", 0));
        textLabel2_6_3->setText(QApplication::translate("QmitkScaleLogarithmicTransformControls", "Scale Y:", 0));
        textLabel3_5_3->setText(QApplication::translate("QmitkScaleLogarithmicTransformControls", "Scale Z:", 0));
        m_ScalesScaleLogarithmicTransformScaleX->setText(QApplication::translate("QmitkScaleLogarithmicTransformControls", "1.0", 0));
        m_ScalesScaleLogarithmicTransformScaleY->setText(QApplication::translate("QmitkScaleLogarithmicTransformControls", "1.0", 0));
        m_ScalesScaleLogarithmicTransformScaleZ->setText(QApplication::translate("QmitkScaleLogarithmicTransformControls", "1.0", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkScaleLogarithmicTransformControls: public Ui_QmitkScaleLogarithmicTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSCALELOGARITHMICTRANSFORMCONTROLS_H
