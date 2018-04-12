/********************************************************************************
** Form generated from reading UI file 'MyViewControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYVIEWCONTROLS_H
#define UI_MYVIEWCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyViewControls
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelWarning;
    QPushButton *buttonPerformImageProcessing;
    QSpacerItem *spacer1;

    void setupUi(QWidget *MyViewControls)
    {
        if (MyViewControls->objectName().isEmpty())
            MyViewControls->setObjectName(QStringLiteral("MyViewControls"));
        MyViewControls->resize(222, 161);
        MyViewControls->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(MyViewControls);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelWarning = new QLabel(MyViewControls);
        labelWarning->setObjectName(QStringLiteral("labelWarning"));
        labelWarning->setStyleSheet(QStringLiteral("QLabel { color: rgb(255, 0, 0) }"));

        verticalLayout->addWidget(labelWarning);

        buttonPerformImageProcessing = new QPushButton(MyViewControls);
        buttonPerformImageProcessing->setObjectName(QStringLiteral("buttonPerformImageProcessing"));

        verticalLayout->addWidget(buttonPerformImageProcessing);

        spacer1 = new QSpacerItem(20, 220, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer1);


        retranslateUi(MyViewControls);

        QMetaObject::connectSlotsByName(MyViewControls);
    } // setupUi

    void retranslateUi(QWidget *MyViewControls)
    {
        MyViewControls->setWindowTitle(QApplication::translate("MyViewControls", "QmitkTemplate", 0));
        labelWarning->setText(QApplication::translate("MyViewControls", "Please select an image!", 0));
#ifndef QT_NO_TOOLTIP
        buttonPerformImageProcessing->setToolTip(QApplication::translate("MyViewControls", "Do image processing", 0));
#endif // QT_NO_TOOLTIP
        buttonPerformImageProcessing->setText(QApplication::translate("MyViewControls", "Do Something", 0));
    } // retranslateUi

};

namespace Ui {
    class MyViewControls: public Ui_MyViewControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYVIEWCONTROLS_H
