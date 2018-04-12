/********************************************************************************
** Form generated from reading UI file 'QmitkSurfaceToImageWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSURFACETOIMAGEWIDGETCONTROLS_H
#define UI_QMITKSURFACETOIMAGEWIDGETCONTROLS_H

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

class Ui_QmitkSurfaceToImageWidgetControls
{
public:
    QVBoxLayout *verticalLayout;
    QmitkDataSelectionWidget *dataSelectionWidget;
    QPushButton *btnSurface2Image;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkSurfaceToImageWidgetControls)
    {
        if (QmitkSurfaceToImageWidgetControls->objectName().isEmpty())
            QmitkSurfaceToImageWidgetControls->setObjectName(QStringLiteral("QmitkSurfaceToImageWidgetControls"));
        QmitkSurfaceToImageWidgetControls->resize(94, 78);
        verticalLayout = new QVBoxLayout(QmitkSurfaceToImageWidgetControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dataSelectionWidget = new QmitkDataSelectionWidget(QmitkSurfaceToImageWidgetControls);
        dataSelectionWidget->setObjectName(QStringLiteral("dataSelectionWidget"));

        verticalLayout->addWidget(dataSelectionWidget);

        btnSurface2Image = new QPushButton(QmitkSurfaceToImageWidgetControls);
        btnSurface2Image->setObjectName(QStringLiteral("btnSurface2Image"));

        verticalLayout->addWidget(btnSurface2Image);

        verticalSpacer = new QSpacerItem(20, 273, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QmitkSurfaceToImageWidgetControls);

        QMetaObject::connectSlotsByName(QmitkSurfaceToImageWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkSurfaceToImageWidgetControls)
    {
        btnSurface2Image->setText(QApplication::translate("QmitkSurfaceToImageWidgetControls", "Convert", 0));
        Q_UNUSED(QmitkSurfaceToImageWidgetControls);
    } // retranslateUi

};

namespace Ui {
    class QmitkSurfaceToImageWidgetControls: public Ui_QmitkSurfaceToImageWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSURFACETOIMAGEWIDGETCONTROLS_H
