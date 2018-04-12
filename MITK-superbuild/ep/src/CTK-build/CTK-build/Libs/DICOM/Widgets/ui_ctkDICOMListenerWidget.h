/********************************************************************************
** Form generated from reading UI file 'ctkDICOMListenerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDICOMLISTENERWIDGET_H
#define UI_CTKDICOMLISTENERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkDICOMListenerWidget
{
public:

    void setupUi(QWidget *ctkDICOMListenerWidget)
    {
        if (ctkDICOMListenerWidget->objectName().isEmpty())
            ctkDICOMListenerWidget->setObjectName(QStringLiteral("ctkDICOMListenerWidget"));
        ctkDICOMListenerWidget->resize(400, 300);

        retranslateUi(ctkDICOMListenerWidget);

        QMetaObject::connectSlotsByName(ctkDICOMListenerWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkDICOMListenerWidget)
    {
        ctkDICOMListenerWidget->setWindowTitle(QApplication::translate("ctkDICOMListenerWidget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkDICOMListenerWidget: public Ui_ctkDICOMListenerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDICOMLISTENERWIDGET_H
