/********************************************************************************
** Form generated from reading UI file 'QmitkTranslationTransformControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKTRANSLATIONTRANSFORMCONTROLS_H
#define UI_QMITKTRANSLATIONTRANSFORMCONTROLS_H

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

class Ui_QmitkTranslationTransformControls
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_TranslationTransformFrame;
    QVBoxLayout *verticalLayout_115;
    QGroupBox *m_UseOptimizerScalesTranslation;
    QVBoxLayout *verticalLayout_58;
    QHBoxLayout *_10;
    QVBoxLayout *_12;
    QLabel *textLabel2_6_2;
    QLabel *textLabel3_5_2;
    QLabel *textLabel4_4_2;
    QVBoxLayout *_16;
    QLineEdit *m_ScalesTranslationTransformTranslationX;
    QLineEdit *m_ScalesTranslationTransformTranslationY;
    QLineEdit *m_ScalesTranslationTransformTranslationZ;

    void setupUi(QWidget *QmitkTranslationTransformControls)
    {
        if (QmitkTranslationTransformControls->objectName().isEmpty())
            QmitkTranslationTransformControls->setObjectName(QStringLiteral("QmitkTranslationTransformControls"));
        QmitkTranslationTransformControls->resize(145, 110);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkTranslationTransformControls->sizePolicy().hasHeightForWidth());
        QmitkTranslationTransformControls->setSizePolicy(sizePolicy);
        QmitkTranslationTransformControls->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(QmitkTranslationTransformControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_TranslationTransformFrame = new QFrame(QmitkTranslationTransformControls);
        m_TranslationTransformFrame->setObjectName(QStringLiteral("m_TranslationTransformFrame"));
        m_TranslationTransformFrame->setFrameShape(QFrame::StyledPanel);
        m_TranslationTransformFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_115 = new QVBoxLayout(m_TranslationTransformFrame);
        verticalLayout_115->setSpacing(0);
        verticalLayout_115->setContentsMargins(0, 0, 0, 0);
        verticalLayout_115->setObjectName(QStringLiteral("verticalLayout_115"));
        m_UseOptimizerScalesTranslation = new QGroupBox(m_TranslationTransformFrame);
        m_UseOptimizerScalesTranslation->setObjectName(QStringLiteral("m_UseOptimizerScalesTranslation"));
        m_UseOptimizerScalesTranslation->setFlat(true);
        m_UseOptimizerScalesTranslation->setCheckable(true);
        m_UseOptimizerScalesTranslation->setChecked(false);
        verticalLayout_58 = new QVBoxLayout(m_UseOptimizerScalesTranslation);
#ifndef Q_OS_MAC
        verticalLayout_58->setSpacing(6);
#endif
        verticalLayout_58->setContentsMargins(0, 0, 0, 0);
        verticalLayout_58->setObjectName(QStringLiteral("verticalLayout_58"));
        _10 = new QHBoxLayout();
        _10->setObjectName(QStringLiteral("_10"));
        _12 = new QVBoxLayout();
        _12->setObjectName(QStringLiteral("_12"));
        textLabel2_6_2 = new QLabel(m_UseOptimizerScalesTranslation);
        textLabel2_6_2->setObjectName(QStringLiteral("textLabel2_6_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        textLabel2_6_2->setFont(font);
        textLabel2_6_2->setWordWrap(false);

        _12->addWidget(textLabel2_6_2);

        textLabel3_5_2 = new QLabel(m_UseOptimizerScalesTranslation);
        textLabel3_5_2->setObjectName(QStringLiteral("textLabel3_5_2"));
        textLabel3_5_2->setFont(font);
        textLabel3_5_2->setWordWrap(false);

        _12->addWidget(textLabel3_5_2);

        textLabel4_4_2 = new QLabel(m_UseOptimizerScalesTranslation);
        textLabel4_4_2->setObjectName(QStringLiteral("textLabel4_4_2"));
        textLabel4_4_2->setFont(font);
        textLabel4_4_2->setWordWrap(false);

        _12->addWidget(textLabel4_4_2);


        _10->addLayout(_12);

        _16 = new QVBoxLayout();
        _16->setObjectName(QStringLiteral("_16"));
        m_ScalesTranslationTransformTranslationX = new QLineEdit(m_UseOptimizerScalesTranslation);
        m_ScalesTranslationTransformTranslationX->setObjectName(QStringLiteral("m_ScalesTranslationTransformTranslationX"));
        m_ScalesTranslationTransformTranslationX->setMinimumSize(QSize(0, 20));
        m_ScalesTranslationTransformTranslationX->setFont(font);
        m_ScalesTranslationTransformTranslationX->setAlignment(Qt::AlignRight);

        _16->addWidget(m_ScalesTranslationTransformTranslationX);

        m_ScalesTranslationTransformTranslationY = new QLineEdit(m_UseOptimizerScalesTranslation);
        m_ScalesTranslationTransformTranslationY->setObjectName(QStringLiteral("m_ScalesTranslationTransformTranslationY"));
        m_ScalesTranslationTransformTranslationY->setMinimumSize(QSize(0, 20));
        m_ScalesTranslationTransformTranslationY->setFont(font);
        m_ScalesTranslationTransformTranslationY->setAlignment(Qt::AlignRight);

        _16->addWidget(m_ScalesTranslationTransformTranslationY);

        m_ScalesTranslationTransformTranslationZ = new QLineEdit(m_UseOptimizerScalesTranslation);
        m_ScalesTranslationTransformTranslationZ->setObjectName(QStringLiteral("m_ScalesTranslationTransformTranslationZ"));
        m_ScalesTranslationTransformTranslationZ->setMinimumSize(QSize(0, 20));
        m_ScalesTranslationTransformTranslationZ->setFont(font);
        m_ScalesTranslationTransformTranslationZ->setAlignment(Qt::AlignRight);

        _16->addWidget(m_ScalesTranslationTransformTranslationZ);


        _10->addLayout(_16);


        verticalLayout_58->addLayout(_10);


        verticalLayout_115->addWidget(m_UseOptimizerScalesTranslation);


        verticalLayout->addWidget(m_TranslationTransformFrame);


        retranslateUi(QmitkTranslationTransformControls);

        QMetaObject::connectSlotsByName(QmitkTranslationTransformControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkTranslationTransformControls)
    {
        QmitkTranslationTransformControls->setWindowTitle(QApplication::translate("QmitkTranslationTransformControls", "Form", 0));
        m_UseOptimizerScalesTranslation->setTitle(QApplication::translate("QmitkTranslationTransformControls", "Use Optimizer Scales", 0));
        textLabel2_6_2->setText(QApplication::translate("QmitkTranslationTransformControls", "Tranlsation X:", 0));
        textLabel3_5_2->setText(QApplication::translate("QmitkTranslationTransformControls", "Translation Y:", 0));
        textLabel4_4_2->setText(QApplication::translate("QmitkTranslationTransformControls", "Translation Z:", 0));
        m_ScalesTranslationTransformTranslationX->setText(QApplication::translate("QmitkTranslationTransformControls", "1.0", 0));
        m_ScalesTranslationTransformTranslationY->setText(QApplication::translate("QmitkTranslationTransformControls", "1.0", 0));
        m_ScalesTranslationTransformTranslationZ->setText(QApplication::translate("QmitkTranslationTransformControls", "1.0", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkTranslationTransformControls: public Ui_QmitkTranslationTransformControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKTRANSLATIONTRANSFORMCONTROLS_H
