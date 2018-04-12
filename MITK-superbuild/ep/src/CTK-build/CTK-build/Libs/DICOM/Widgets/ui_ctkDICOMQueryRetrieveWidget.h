/********************************************************************************
** Form generated from reading UI file 'ctkDICOMQueryRetrieveWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDICOMQUERYRETRIEVEWIDGET_H
#define UI_CTKDICOMQUERYRETRIEVEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkDICOMQueryWidget.h"
#include "ctkDICOMServerNodeWidget.h"
#include "ctkDICOMTableManager.h"

QT_BEGIN_NAMESPACE

class Ui_ctkDICOMQueryRetrieveWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    ctkDICOMServerNodeWidget *ServerNodeWidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    ctkDICOMQueryWidget *QueryWidget;
    QWidget *commandFrame;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *QueryButton;
    QPushButton *RetrieveButton;
    QPushButton *CancelButton;
    QSpacerItem *horizontalSpacer_2;
    ctkDICOMTableManager *dicomTableManager;

    void setupUi(QWidget *ctkDICOMQueryRetrieveWidget)
    {
        if (ctkDICOMQueryRetrieveWidget->objectName().isEmpty())
            ctkDICOMQueryRetrieveWidget->setObjectName(QStringLiteral("ctkDICOMQueryRetrieveWidget"));
        ctkDICOMQueryRetrieveWidget->resize(843, 815);
        verticalLayout = new QVBoxLayout(ctkDICOMQueryRetrieveWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(ctkDICOMQueryRetrieveWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ServerNodeWidget = new ctkDICOMServerNodeWidget(groupBox);
        ServerNodeWidget->setObjectName(QStringLiteral("ServerNodeWidget"));
        ServerNodeWidget->setMinimumSize(QSize(300, 200));

        verticalLayout_2->addWidget(ServerNodeWidget);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        QueryWidget = new ctkDICOMQueryWidget(groupBox_2);
        QueryWidget->setObjectName(QStringLiteral("QueryWidget"));

        verticalLayout_4->addWidget(QueryWidget);


        horizontalLayout->addWidget(groupBox_2);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addWidget(frame);

        commandFrame = new QWidget(ctkDICOMQueryRetrieveWidget);
        commandFrame->setObjectName(QStringLiteral("commandFrame"));
        horizontalLayout_4 = new QHBoxLayout(commandFrame);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        QueryButton = new QPushButton(commandFrame);
        QueryButton->setObjectName(QStringLiteral("QueryButton"));

        horizontalLayout_4->addWidget(QueryButton);

        RetrieveButton = new QPushButton(commandFrame);
        RetrieveButton->setObjectName(QStringLiteral("RetrieveButton"));
        RetrieveButton->setEnabled(false);

        horizontalLayout_4->addWidget(RetrieveButton);

        CancelButton = new QPushButton(commandFrame);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));

        horizontalLayout_4->addWidget(CancelButton);

        horizontalSpacer_2 = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(commandFrame);

        dicomTableManager = new ctkDICOMTableManager(ctkDICOMQueryRetrieveWidget);
        dicomTableManager->setObjectName(QStringLiteral("dicomTableManager"));

        verticalLayout->addWidget(dicomTableManager);


        retranslateUi(ctkDICOMQueryRetrieveWidget);

        QMetaObject::connectSlotsByName(ctkDICOMQueryRetrieveWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkDICOMQueryRetrieveWidget)
    {
        ctkDICOMQueryRetrieveWidget->setWindowTitle(QApplication::translate("ctkDICOMQueryRetrieveWidget", "Form", 0));
        groupBox->setTitle(QApplication::translate("ctkDICOMQueryRetrieveWidget", "Data Sources", 0));
        groupBox_2->setTitle(QApplication::translate("ctkDICOMQueryRetrieveWidget", "Search Options", 0));
        QueryButton->setText(QApplication::translate("ctkDICOMQueryRetrieveWidget", "Query", 0));
        RetrieveButton->setText(QApplication::translate("ctkDICOMQueryRetrieveWidget", "Retrieve", 0));
        CancelButton->setText(QApplication::translate("ctkDICOMQueryRetrieveWidget", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkDICOMQueryRetrieveWidget: public Ui_ctkDICOMQueryRetrieveWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDICOMQUERYRETRIEVEWIDGET_H
