/********************************************************************************
** Form generated from reading UI file 'QmitkBSplineRegistrationViewControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKBSPLINEREGISTRATIONVIEWCONTROLS_H
#define UI_QMITKBSPLINEREGISTRATIONVIEWCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkBSplineRegistrationViewControls
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *m_OptimizerGroup;
    QVBoxLayout *verticalLayout;
    QComboBox *m_OptimizerSelector;
    QStackedWidget *m_OptimizerWidgetStack;
    QWidget *m_LBFGS;
    QVBoxLayout *verticalLayout_7;
    QFrame *m_LBFGSFrame;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *m_GradConvTolerance;
    QLabel *label_2;
    QLineEdit *m_LineSearchAccuracy;
    QLabel *label_3;
    QLineEdit *m_DefaultStepLength;
    QLabel *label_4;
    QLineEdit *m_FunctionEvaluations;
    QCheckBox *m_TraceOn;
    QWidget *m_GradientDescent;
    QVBoxLayout *verticalLayout_9;
    QFrame *m_GradientDescentFrame;
    QVBoxLayout *verticalLayout_8;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLineEdit *m_LearningRateGradientDescent;
    QLabel *label_7;
    QLineEdit *m_NumberOfIterationsGradientDescent;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *m_NumberOfGridNodes;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QCheckBox *m_SaveDeformFieldCheck;
    QLineEdit *m_DeformationField;
    QPushButton *m_BrowseDeformationField;
    QPushButton *m_ApplyDeformationField;
    QPushButton *m_PrintDeformField;

    void setupUi(QWidget *QmitkBSplineRegistrationViewControls)
    {
        if (QmitkBSplineRegistrationViewControls->objectName().isEmpty())
            QmitkBSplineRegistrationViewControls->setObjectName(QStringLiteral("QmitkBSplineRegistrationViewControls"));
        QmitkBSplineRegistrationViewControls->resize(260, 361);
        QmitkBSplineRegistrationViewControls->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(QmitkBSplineRegistrationViewControls);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        m_OptimizerGroup = new QGroupBox(QmitkBSplineRegistrationViewControls);
        m_OptimizerGroup->setObjectName(QStringLiteral("m_OptimizerGroup"));
        m_OptimizerGroup->setEnabled(true);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        m_OptimizerGroup->setFont(font);
        m_OptimizerGroup->setFlat(true);
        verticalLayout = new QVBoxLayout(m_OptimizerGroup);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_OptimizerSelector = new QComboBox(m_OptimizerGroup);
        m_OptimizerSelector->setObjectName(QStringLiteral("m_OptimizerSelector"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        m_OptimizerSelector->setFont(font1);

        verticalLayout->addWidget(m_OptimizerSelector);

        m_OptimizerWidgetStack = new QStackedWidget(m_OptimizerGroup);
        m_OptimizerWidgetStack->setObjectName(QStringLiteral("m_OptimizerWidgetStack"));
        m_OptimizerWidgetStack->setFont(font1);
        m_OptimizerWidgetStack->setFrameShape(QFrame::NoFrame);
        m_OptimizerWidgetStack->setFrameShadow(QFrame::Plain);
        m_OptimizerWidgetStack->setLineWidth(1);
        m_LBFGS = new QWidget();
        m_LBFGS->setObjectName(QStringLiteral("m_LBFGS"));
        verticalLayout_7 = new QVBoxLayout(m_LBFGS);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        m_LBFGSFrame = new QFrame(m_LBFGS);
        m_LBFGSFrame->setObjectName(QStringLiteral("m_LBFGSFrame"));
        m_LBFGSFrame->setEnabled(true);
        m_LBFGSFrame->setFrameShape(QFrame::StyledPanel);
        m_LBFGSFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(m_LBFGSFrame);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(m_LBFGSFrame);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        m_GradConvTolerance = new QLineEdit(m_LBFGSFrame);
        m_GradConvTolerance->setObjectName(QStringLiteral("m_GradConvTolerance"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, m_GradConvTolerance);

        label_2 = new QLabel(m_LBFGSFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        m_LineSearchAccuracy = new QLineEdit(m_LBFGSFrame);
        m_LineSearchAccuracy->setObjectName(QStringLiteral("m_LineSearchAccuracy"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, m_LineSearchAccuracy);

        label_3 = new QLabel(m_LBFGSFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        m_DefaultStepLength = new QLineEdit(m_LBFGSFrame);
        m_DefaultStepLength->setObjectName(QStringLiteral("m_DefaultStepLength"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, m_DefaultStepLength);

        label_4 = new QLabel(m_LBFGSFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        m_FunctionEvaluations = new QLineEdit(m_LBFGSFrame);
        m_FunctionEvaluations->setObjectName(QStringLiteral("m_FunctionEvaluations"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, m_FunctionEvaluations);


        verticalLayout_5->addLayout(formLayout_2);

        m_TraceOn = new QCheckBox(m_LBFGSFrame);
        m_TraceOn->setObjectName(QStringLiteral("m_TraceOn"));
        m_TraceOn->setFont(font1);

        verticalLayout_5->addWidget(m_TraceOn);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_7->addWidget(m_LBFGSFrame);

        m_OptimizerWidgetStack->addWidget(m_LBFGS);
        m_GradientDescent = new QWidget();
        m_GradientDescent->setObjectName(QStringLiteral("m_GradientDescent"));
        verticalLayout_9 = new QVBoxLayout(m_GradientDescent);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        m_GradientDescentFrame = new QFrame(m_GradientDescent);
        m_GradientDescentFrame->setObjectName(QStringLiteral("m_GradientDescentFrame"));
        m_GradientDescentFrame->setFrameShape(QFrame::StyledPanel);
        m_GradientDescentFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(m_GradientDescentFrame);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_6 = new QLabel(m_GradientDescentFrame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        m_LearningRateGradientDescent = new QLineEdit(m_GradientDescentFrame);
        m_LearningRateGradientDescent->setObjectName(QStringLiteral("m_LearningRateGradientDescent"));
        m_LearningRateGradientDescent->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, m_LearningRateGradientDescent);

        label_7 = new QLabel(m_GradientDescentFrame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        m_NumberOfIterationsGradientDescent = new QLineEdit(m_GradientDescentFrame);
        m_NumberOfIterationsGradientDescent->setObjectName(QStringLiteral("m_NumberOfIterationsGradientDescent"));
        m_NumberOfIterationsGradientDescent->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, m_NumberOfIterationsGradientDescent);


        verticalLayout_8->addLayout(formLayout);


        verticalLayout_9->addWidget(m_GradientDescentFrame);

        m_OptimizerWidgetStack->addWidget(m_GradientDescent);

        verticalLayout->addWidget(m_OptimizerWidgetStack);


        verticalLayout_4->addWidget(m_OptimizerGroup);

        groupBox = new QGroupBox(QmitkBSplineRegistrationViewControls);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font);
        groupBox->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        horizontalLayout->addWidget(label_5);

        m_NumberOfGridNodes = new QLineEdit(groupBox);
        m_NumberOfGridNodes->setObjectName(QStringLiteral("m_NumberOfGridNodes"));
        m_NumberOfGridNodes->setFont(font1);

        horizontalLayout->addWidget(m_NumberOfGridNodes);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QmitkBSplineRegistrationViewControls);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        groupBox_2->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        m_SaveDeformFieldCheck = new QCheckBox(groupBox_2);
        m_SaveDeformFieldCheck->setObjectName(QStringLiteral("m_SaveDeformFieldCheck"));
        m_SaveDeformFieldCheck->setFont(font1);

        gridLayout_2->addWidget(m_SaveDeformFieldCheck, 0, 0, 1, 1);

        m_DeformationField = new QLineEdit(groupBox_2);
        m_DeformationField->setObjectName(QStringLiteral("m_DeformationField"));
        m_DeformationField->setFont(font1);

        gridLayout_2->addWidget(m_DeformationField, 1, 0, 1, 1);

        m_BrowseDeformationField = new QPushButton(groupBox_2);
        m_BrowseDeformationField->setObjectName(QStringLiteral("m_BrowseDeformationField"));
        m_BrowseDeformationField->setFont(font1);

        gridLayout_2->addWidget(m_BrowseDeformationField, 1, 1, 1, 1);

        m_ApplyDeformationField = new QPushButton(groupBox_2);
        m_ApplyDeformationField->setObjectName(QStringLiteral("m_ApplyDeformationField"));
        m_ApplyDeformationField->setFont(font1);

        gridLayout_2->addWidget(m_ApplyDeformationField, 2, 0, 1, 2);

        m_PrintDeformField = new QPushButton(groupBox_2);
        m_PrintDeformField->setObjectName(QStringLiteral("m_PrintDeformField"));
        m_PrintDeformField->setFont(font1);

        gridLayout_2->addWidget(m_PrintDeformField, 3, 0, 1, 2);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout_4->addWidget(groupBox_2);


        retranslateUi(QmitkBSplineRegistrationViewControls);

        m_OptimizerWidgetStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QmitkBSplineRegistrationViewControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkBSplineRegistrationViewControls)
    {
        QmitkBSplineRegistrationViewControls->setWindowTitle(QApplication::translate("QmitkBSplineRegistrationViewControls", "QmitkBSplineRegistrationViewControls", 0));
        m_OptimizerGroup->setTitle(QApplication::translate("QmitkBSplineRegistrationViewControls", "Optimizer", 0));
        m_OptimizerSelector->clear();
        m_OptimizerSelector->insertItems(0, QStringList()
         << QApplication::translate("QmitkBSplineRegistrationViewControls", "LBFGSOptimizer", 0)
         << QApplication::translate("QmitkBSplineRegistrationViewControls", "Gradient Descent", 0)
        );
        label->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Gradient Convergence Tolerance", 0));
        m_GradConvTolerance->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "0.00001", 0));
        label_2->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Line Search Accuracy", 0));
        m_LineSearchAccuracy->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "0.9", 0));
        label_3->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Default Step Length", 0));
        m_DefaultStepLength->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "1.0", 0));
        label_4->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Max # Function Evaluations", 0));
        m_FunctionEvaluations->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "1000", 0));
        m_TraceOn->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Print out information on every iteration step", 0));
        label_6->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Learning rate", 0));
        m_LearningRateGradientDescent->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "0.01", 0));
        label_7->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Number of iterations", 0));
        m_NumberOfIterationsGradientDescent->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "100", 0));
        groupBox->setTitle(QApplication::translate("QmitkBSplineRegistrationViewControls", "Transform", 0));
        label_5->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Number of Grid Nodes Inside Image", 0));
        m_NumberOfGridNodes->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "5", 0));
        groupBox_2->setTitle(QApplication::translate("QmitkBSplineRegistrationViewControls", "Deformation Field", 0));
        m_SaveDeformFieldCheck->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Save Deformation Field", 0));
        m_BrowseDeformationField->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Browse", 0));
        m_ApplyDeformationField->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Apply deformation field", 0));
        m_PrintDeformField->setText(QApplication::translate("QmitkBSplineRegistrationViewControls", "Print deformation field", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkBSplineRegistrationViewControls: public Ui_QmitkBSplineRegistrationViewControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKBSPLINEREGISTRATIONVIEWCONTROLS_H
