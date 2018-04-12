/********************************************************************************
** Form generated from reading UI file 'QmitkScaleTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSCALETRANSFORMCONTROLS_H
#define UI_QMITKSCALETRANSFORMCONTROLS_H

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

class Ui_QmitkScaleTransformControls
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *m_ScaleTransformFrame;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *m_UseOptimizerScalesScale;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_28;
    QVBoxLayout *_30;
    QLabel *textLabel1_8;
    QLabel *textLabel2_6;
    QLabel *textLabel3_5;
    QVBoxLayout *_34;
    QLineEdit *m_ScalesScaleTransformScaleX;
    QLineEdit *m_ScalesScaleTransformScaleY;
    QLineEdit *m_ScalesScaleTransformScaleZ;

    void setupUi(QWidget *QmitkScaleTransformControls)
    {
        if (QmitkScaleTransformControls->objectName().isEmpty())
            QmitkScaleTransformControls->setObjectName(QStringLiteral("QmitkScaleTransformControls"));
        QmitkScaleTransformControls->resize(143, 110);
        verticalLayout_3 = new QVBoxLayout(QmitkScaleTransformControls);
#ifndef Q_OS_MAC
        verticalLayout_3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        verticalLayout_3->setContentsMargins(9, 9, 9, 9);
#endif
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        m_ScaleTransformFrame = new QFrame(QmitkScaleTransformControls);
        m_ScaleTransformFrame->setObjectName(QStringLiteral("m_ScaleTransformFrame"));
        m_ScaleTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_ScaleTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(m_ScaleTransformFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_UseOptimizerScalesScale = new QGroupBox(m_ScaleTransformFrame);
        m_UseOptimizerScalesScale->setObjectName(QStringLiteral("m_UseOptimizerScalesScale"));
        m_UseOptimizerScalesScale->setFlat(true);
        m_UseOptimizerScalesScale->setCheckable(true);
        verticalLayout = new QVBoxLayout(m_UseOptimizerScalesScale);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _28 = new QHBoxLayout();
        _28->setObjectName(QStringLiteral("_28"));
        _30 = new QVBoxLayout();
        _30->setObjectName(QStringLiteral("_30"));
        textLabel1_8 = new QLabel(m_UseOptimizerScalesScale);
        textLabel1_8->setObjectName(QStringLiteral("textLabel1_8"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_8->setFont(font);
        textLabel1_8->setWordWrap(false);

        _30->addWidget(textLabel1_8);

        textLabel2_6 = new QLabel(m_UseOptimizerScalesScale);
        textLabel2_6->setObjectName(QStringLiteral("textLabel2_6"));
        textLabel2_6->setFont(font);
        textLabel2_6->setWordWrap(false);

        _30->addWidget(textLabel2_6);

        textLabel3_5 = new QLabel(m_UseOptimizerScalesScale);
        textLabel3_5->setObjectName(QStringLiteral("textLabel3_5"));
        textLabel3_5->setFont(font);
        textLabel3_5->setWordWrap(false);

        _30->addWidget(textLabel3_5);


        _28->addLayout(_30);

        _34 = new QVBoxLayout();
        _34->setObjectName(QStringLiteral("_34"));
        m_ScalesScaleTransformScaleX = new QLineEdit(m_UseOptimizerScalesScale);
        m_ScalesScaleTransformScaleX->setObjectName(QStringLiteral("m_ScalesScaleTransformScaleX"));
        m_ScalesScaleTransformScaleX->setMinimumSize(QSize(0, 20));
        m_ScalesScaleTransformScaleX->setFont(font);
        m_ScalesScaleTransformScaleX->setAlignment(Qt::AlignRight);

        _34->addWidget(m_ScalesScaleTransformScaleX);

        m_ScalesScaleTransformScaleY = new QLineEdit(m_UseOptimizerScalesScale);
        m_ScalesScaleTransformScaleY->setObjectName(QStringLiteral("m_ScalesScaleTransformScaleY"));
        m_ScalesScaleTransformScaleY->setMinimumSize(QSize(0, 20));
        m_ScalesScaleTransformScaleY->setFont(font);
        m_ScalesScaleTransformScaleY->setAlignment(Qt::AlignRight);

        _34->addWidget(m_ScalesScaleTransformScaleY);

        m_ScalesScaleTransformScaleZ = new QLineEdit(m_UseOptimizerScalesScale);
        m_ScalesScaleTransformScaleZ->setObjectName(QStringLiteral("m_ScalesScaleTransformScaleZ"));
        m_ScalesScaleTransformScaleZ->setMinimumSize(QSize(0, 20));
        m_ScalesScaleTransformScaleZ->setFont(font);
        m_ScalesScaleTransformScaleZ->setAlignment(Qt::AlignRight);

        _34->addWidget(m_ScalesScaleTransformScaleZ);


        _28->addLayout(_34);


        verticalLayout->addLayout(_28);


        verticalLayout_2->addWidget(m_UseOptimizerScalesScale);


        verticalLayout_3->addWidget(m_ScaleTransformFrame);


        retranslateUi(QmitkScaleTransformControls);

        QMetaObject::connectSlotsByName(QmitkScaleTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkScaleTransformControls)
    {
        QmitkScaleTransformControls->setWindowTitle(QApplication::translate("QmitkScaleTransformControls", "Form", 0));
        m_UseOptimizerScalesScale->setTitle(QApplication::translate("QmitkScaleTransformControls", "Use Optimizer Scales", 0));
        textLabel1_8->setText(QApplication::translate("QmitkScaleTransformControls", "Scale X:", 0));
        textLabel2_6->setText(QApplication::translate("QmitkScaleTransformControls", "Scale Y:", 0));
        textLabel3_5->setText(QApplication::translate("QmitkScaleTransformControls", "Scale Z:", 0));
        m_ScalesScaleTransformScaleX->setText(QApplication::translate("QmitkScaleTransformControls", "1.0", 0));
        m_ScalesScaleTransformScaleY->setText(QApplication::translate("QmitkScaleTransformControls", "1.0", 0));
        m_ScalesScaleTransformScaleZ->setText(QApplication::translate("QmitkScaleTransformControls", "1.0", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkScaleTransformControls: public Ui_QmitkScaleTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSCALETRANSFORMCONTROLS_H
