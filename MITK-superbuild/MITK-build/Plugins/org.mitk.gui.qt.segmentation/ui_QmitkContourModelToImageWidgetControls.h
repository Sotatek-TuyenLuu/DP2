/********************************************************************************
** Form generated from reading UI file 'QmitkContourModelToImageWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKCONTOURMODELTOIMAGEWIDGETCONTROLS_H
#define UI_QMITKCONTOURMODELTOIMAGEWIDGETCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "internal/Common/QmitkDataSelectionWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkContourModelToImageWidgetControls
{
public:
    QVBoxLayout *verticalLayout;
    QmitkDataSelectionWidget *dataSelectionWidget;
    QPushButton *btnProcess;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkContourModelToImageWidgetControls)
    {
        if (QmitkContourModelToImageWidgetControls->objectName().isEmpty())
            QmitkContourModelToImageWidgetControls->setObjectName(QStringLiteral("QmitkContourModelToImageWidgetControls"));
        QmitkContourModelToImageWidgetControls->resize(180, 154);
        verticalLayout = new QVBoxLayout(QmitkContourModelToImageWidgetControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dataSelectionWidget = new QmitkDataSelectionWidget(QmitkContourModelToImageWidgetControls);
        dataSelectionWidget->setObjectName(QStringLiteral("dataSelectionWidget"));

        verticalLayout->addWidget(dataSelectionWidget);

        btnProcess = new QPushButton(QmitkContourModelToImageWidgetControls);
        btnProcess->setObjectName(QStringLiteral("btnProcess"));

        verticalLayout->addWidget(btnProcess);

        verticalSpacer = new QSpacerItem(20, 273, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QmitkContourModelToImageWidgetControls);

        QMetaObject::connectSlotsByName(QmitkContourModelToImageWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkContourModelToImageWidgetControls)
    {
        btnProcess->setText(QApplication::translate("QmitkContourModelToImageWidgetControls", "Process", 0));
        Q_UNUSED(QmitkContourModelToImageWidgetControls);
    } // retranslateUi

};

namespace Ui {
    class QmitkContourModelToImageWidgetControls: public Ui_QmitkContourModelToImageWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKCONTOURMODELTOIMAGEWIDGETCONTROLS_H
