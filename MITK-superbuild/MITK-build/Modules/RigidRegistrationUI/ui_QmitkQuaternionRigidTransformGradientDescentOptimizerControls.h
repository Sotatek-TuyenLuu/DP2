/********************************************************************************
** Form generated from reading UI file 'QmitkQuaternionRigidTransformGradientDescentOptimizerControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKQUATERNIONRIGIDTRANSFORMGRADIENTDESCENTOPTIMIZERCONTROLS_H
#define UI_QMITKQUATERNIONRIGIDTRANSFORMGRADIENTDESCENTOPTIMIZERCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkQuaternionRigidTransformGradientDescentOptimizerControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_19;
    QVBoxLayout *_21;
    QLabel *textLabel1_3;
    QLabel *textLabel2_3;
    QVBoxLayout *_22;
    QLineEdit *m_LearningRateQuaternionRigidTransformGradientDescent;
    QLineEdit *m_IterationsQuaternionRigidTransformGradientDescent;
    QCheckBox *m_Maximize;

    void setupUi(QWidget *QmitkQuaternionRigidTransformGradientDescentOptimizerControls)
    {
        if (QmitkQuaternionRigidTransformGradientDescentOptimizerControls->objectName().isEmpty())
            QmitkQuaternionRigidTransformGradientDescentOptimizerControls->setObjectName(QStringLiteral("QmitkQuaternionRigidTransformGradientDescentOptimizerControls"));
        QmitkQuaternionRigidTransformGradientDescentOptimizerControls->resize(182, 94);
        verticalLayout = new QVBoxLayout(QmitkQuaternionRigidTransformGradientDescentOptimizerControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _19 = new QHBoxLayout();
        _19->setObjectName(QStringLiteral("_19"));
        _21 = new QVBoxLayout();
        _21->setObjectName(QStringLiteral("_21"));
        textLabel1_3 = new QLabel(QmitkQuaternionRigidTransformGradientDescentOptimizerControls);
        textLabel1_3->setObjectName(QStringLiteral("textLabel1_3"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel1_3->setFont(font);
        textLabel1_3->setWordWrap(false);

        _21->addWidget(textLabel1_3);

        textLabel2_3 = new QLabel(QmitkQuaternionRigidTransformGradientDescentOptimizerControls);
        textLabel2_3->setObjectName(QStringLiteral("textLabel2_3"));
        textLabel2_3->setFont(font);
        textLabel2_3->setWordWrap(false);

        _21->addWidget(textLabel2_3);


        _19->addLayout(_21);

        _22 = new QVBoxLayout();
        _22->setObjectName(QStringLiteral("_22"));
        m_LearningRateQuaternionRigidTransformGradientDescent = new QLineEdit(QmitkQuaternionRigidTransformGradientDescentOptimizerControls);
        m_LearningRateQuaternionRigidTransformGradientDescent->setObjectName(QStringLiteral("m_LearningRateQuaternionRigidTransformGradientDescent"));
        m_LearningRateQuaternionRigidTransformGradientDescent->setMinimumSize(QSize(0, 20));
        m_LearningRateQuaternionRigidTransformGradientDescent->setFont(font);
        m_LearningRateQuaternionRigidTransformGradientDescent->setAlignment(Qt::AlignRight);

        _22->addWidget(m_LearningRateQuaternionRigidTransformGradientDescent);

        m_IterationsQuaternionRigidTransformGradientDescent = new QLineEdit(QmitkQuaternionRigidTransformGradientDescentOptimizerControls);
        m_IterationsQuaternionRigidTransformGradientDescent->setObjectName(QStringLiteral("m_IterationsQuaternionRigidTransformGradientDescent"));
        m_IterationsQuaternionRigidTransformGradientDescent->setMinimumSize(QSize(0, 20));
        m_IterationsQuaternionRigidTransformGradientDescent->setAlignment(Qt::AlignRight);

        _22->addWidget(m_IterationsQuaternionRigidTransformGradientDescent);


        _19->addLayout(_22);


        verticalLayout->addLayout(_19);

        m_Maximize = new QCheckBox(QmitkQuaternionRigidTransformGradientDescentOptimizerControls);
        m_Maximize->setObjectName(QStringLiteral("m_Maximize"));
        m_Maximize->setEnabled(true);
        m_Maximize->setMinimumSize(QSize(0, 20));
        m_Maximize->setFont(font);

        verticalLayout->addWidget(m_Maximize);


        retranslateUi(QmitkQuaternionRigidTransformGradientDescentOptimizerControls);

        QMetaObject::connectSlotsByName(QmitkQuaternionRigidTransformGradientDescentOptimizerControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkQuaternionRigidTransformGradientDescentOptimizerControls)
    {
        QmitkQuaternionRigidTransformGradientDescentOptimizerControls->setWindowTitle(QApplication::translate("QmitkQuaternionRigidTransformGradientDescentOptimizerControls", "Form", 0));
        textLabel1_3->setText(QApplication::translate("QmitkQuaternionRigidTransformGradientDescentOptimizerControls", "Learning Rate:", 0));
        textLabel2_3->setText(QApplication::translate("QmitkQuaternionRigidTransformGradientDescentOptimizerControls", "Number of Iterations:", 0));
        m_LearningRateQuaternionRigidTransformGradientDescent->setText(QApplication::translate("QmitkQuaternionRigidTransformGradientDescentOptimizerControls", "0.01", 0));
        m_IterationsQuaternionRigidTransformGradientDescent->setText(QApplication::translate("QmitkQuaternionRigidTransformGradientDescentOptimizerControls", "200", 0));
        m_Maximize->setText(QApplication::translate("QmitkQuaternionRigidTransformGradientDescentOptimizerControls", "Maximize Optimizer Value", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkQuaternionRigidTransformGradientDescentOptimizerControls: public Ui_QmitkQuaternionRigidTransformGradientDescentOptimizerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKQUATERNIONRIGIDTRANSFORMGRADIENTDESCENTOPTIMIZERCONTROLS_H
