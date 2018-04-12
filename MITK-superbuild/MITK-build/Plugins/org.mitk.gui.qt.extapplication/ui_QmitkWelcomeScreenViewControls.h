/********************************************************************************
** Form generated from reading UI file 'QmitkWelcomeScreenViewControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKWELCOMESCREENVIEWCONTROLS_H
#define UI_QMITKWELCOMESCREENVIEWCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkWelcomeScreenViewControls
{
public:
    QGridLayout *gridLayout;
    QGridLayout *m_WebViewLayout;

    void setupUi(QWidget *QmitkWelcomeScreenViewControls)
    {
        if (QmitkWelcomeScreenViewControls->objectName().isEmpty())
            QmitkWelcomeScreenViewControls->setObjectName(QStringLiteral("QmitkWelcomeScreenViewControls"));
        QmitkWelcomeScreenViewControls->resize(458, 398);
        QmitkWelcomeScreenViewControls->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(QmitkWelcomeScreenViewControls);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_WebViewLayout = new QGridLayout();
        m_WebViewLayout->setSpacing(6);
        m_WebViewLayout->setObjectName(QStringLiteral("m_WebViewLayout"));

        gridLayout->addLayout(m_WebViewLayout, 0, 0, 1, 1);


        retranslateUi(QmitkWelcomeScreenViewControls);

        QMetaObject::connectSlotsByName(QmitkWelcomeScreenViewControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkWelcomeScreenViewControls)
    {
        QmitkWelcomeScreenViewControls->setWindowTitle(QApplication::translate("QmitkWelcomeScreenViewControls", "QmitkTemplate", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkWelcomeScreenViewControls: public Ui_QmitkWelcomeScreenViewControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKWELCOMESCREENVIEWCONTROLS_H
