/********************************************************************************
** Form generated from reading UI file 'ctkDICOMObjectListWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDICOMOBJECTLISTWIDGET_H
#define UI_CTKDICOMOBJECTLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkSliderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ctkDICOMObjectListWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *currentPathLabel;
    QPushButton *copyPathPushButton;
    ctkSliderWidget *fileSliderWidget;
    QHBoxLayout *horizontalLayout_3;
    QTreeView *dcmObjectTreeView;

    void setupUi(QWidget *ctkDICOMObjectListWidget)
    {
        if (ctkDICOMObjectListWidget->objectName().isEmpty())
            ctkDICOMObjectListWidget->setObjectName(QStringLiteral("ctkDICOMObjectListWidget"));
        ctkDICOMObjectListWidget->resize(312, 206);
        verticalLayout_2 = new QVBoxLayout(ctkDICOMObjectListWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ctkDICOMObjectListWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(70, 0));
        label->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(label);

        currentPathLabel = new QLabel(ctkDICOMObjectListWidget);
        currentPathLabel->setObjectName(QStringLiteral("currentPathLabel"));

        horizontalLayout->addWidget(currentPathLabel);

        copyPathPushButton = new QPushButton(ctkDICOMObjectListWidget);
        copyPathPushButton->setObjectName(QStringLiteral("copyPathPushButton"));
        copyPathPushButton->setMinimumSize(QSize(100, 0));
        copyPathPushButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(copyPathPushButton);


        verticalLayout->addLayout(horizontalLayout);

        fileSliderWidget = new ctkSliderWidget(ctkDICOMObjectListWidget);
        fileSliderWidget->setObjectName(QStringLiteral("fileSliderWidget"));
        fileSliderWidget->setDecimals(0);

        verticalLayout->addWidget(fileSliderWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);

        dcmObjectTreeView = new QTreeView(ctkDICOMObjectListWidget);
        dcmObjectTreeView->setObjectName(QStringLiteral("dcmObjectTreeView"));

        verticalLayout->addWidget(dcmObjectTreeView);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ctkDICOMObjectListWidget);

        QMetaObject::connectSlotsByName(ctkDICOMObjectListWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkDICOMObjectListWidget)
    {
        ctkDICOMObjectListWidget->setWindowTitle(QApplication::translate("ctkDICOMObjectListWidget", "Form", 0));
        label->setText(QApplication::translate("ctkDICOMObjectListWidget", "File Path:", 0));
        currentPathLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        copyPathPushButton->setToolTip(QApplication::translate("ctkDICOMObjectListWidget", "Copy the file full path to the clipboard.", 0));
#endif // QT_NO_TOOLTIP
        copyPathPushButton->setText(QApplication::translate("ctkDICOMObjectListWidget", "Copy Path", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkDICOMObjectListWidget: public Ui_ctkDICOMObjectListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDICOMOBJECTLISTWIDGET_H
