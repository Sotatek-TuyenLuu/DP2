/********************************************************************************
** Form generated from reading UI file 'QmitkBooleanOperationsWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKBOOLEANOPERATIONSWIDGETCONTROLS_H
#define UI_QMITKBOOLEANOPERATIONSWIDGETCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "internal/Common/QmitkDataSelectionWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkBooleanOperationsWidgetControls
{
public:
    QVBoxLayout *verticalLayout;
    QmitkDataSelectionWidget *dataSelectionWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *differenceButton;
    QToolButton *intersectionButton;
    QToolButton *unionButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkBooleanOperationsWidgetControls)
    {
        if (QmitkBooleanOperationsWidgetControls->objectName().isEmpty())
            QmitkBooleanOperationsWidgetControls->setObjectName(QStringLiteral("QmitkBooleanOperationsWidgetControls"));
        QmitkBooleanOperationsWidgetControls->resize(251, 300);
        verticalLayout = new QVBoxLayout(QmitkBooleanOperationsWidgetControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dataSelectionWidget = new QmitkDataSelectionWidget(QmitkBooleanOperationsWidgetControls);
        dataSelectionWidget->setObjectName(QStringLiteral("dataSelectionWidget"));

        verticalLayout->addWidget(dataSelectionWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        differenceButton = new QToolButton(QmitkBooleanOperationsWidgetControls);
        differenceButton->setObjectName(QStringLiteral("differenceButton"));
        differenceButton->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(differenceButton->sizePolicy().hasHeightForWidth());
        differenceButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/SegmentationUtilities/BooleanOperations/BooleanDifference_48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        differenceButton->setIcon(icon);
        differenceButton->setIconSize(QSize(24, 24));
        differenceButton->setCheckable(false);
        differenceButton->setChecked(false);
        differenceButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        differenceButton->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(differenceButton);

        intersectionButton = new QToolButton(QmitkBooleanOperationsWidgetControls);
        intersectionButton->setObjectName(QStringLiteral("intersectionButton"));
        intersectionButton->setEnabled(false);
        sizePolicy.setHeightForWidth(intersectionButton->sizePolicy().hasHeightForWidth());
        intersectionButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/SegmentationUtilities/BooleanOperations/BooleanIntersection_48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        intersectionButton->setIcon(icon1);
        intersectionButton->setIconSize(QSize(24, 24));
        intersectionButton->setCheckable(false);
        intersectionButton->setChecked(false);
        intersectionButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        intersectionButton->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(intersectionButton);

        unionButton = new QToolButton(QmitkBooleanOperationsWidgetControls);
        unionButton->setObjectName(QStringLiteral("unionButton"));
        unionButton->setEnabled(false);
        sizePolicy.setHeightForWidth(unionButton->sizePolicy().hasHeightForWidth());
        unionButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/SegmentationUtilities/BooleanOperations/BooleanUnion_48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        unionButton->setIcon(icon2);
        unionButton->setIconSize(QSize(24, 24));
        unionButton->setCheckable(false);
        unionButton->setChecked(false);
        unionButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        unionButton->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(unionButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 273, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QmitkBooleanOperationsWidgetControls);

        QMetaObject::connectSlotsByName(QmitkBooleanOperationsWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkBooleanOperationsWidgetControls)
    {
#ifndef QT_NO_TOOLTIP
        differenceButton->setToolTip(QApplication::translate("QmitkBooleanOperationsWidgetControls", "Subtracts first segmentation from the second one", 0));
#endif // QT_NO_TOOLTIP
        differenceButton->setText(QApplication::translate("QmitkBooleanOperationsWidgetControls", "Difference", 0));
#ifndef QT_NO_TOOLTIP
        intersectionButton->setToolTip(QApplication::translate("QmitkBooleanOperationsWidgetControls", "Keeps just the overlapping areas of two the segmentations", 0));
#endif // QT_NO_TOOLTIP
        intersectionButton->setText(QApplication::translate("QmitkBooleanOperationsWidgetControls", "Intersection", 0));
#ifndef QT_NO_TOOLTIP
        unionButton->setToolTip(QApplication::translate("QmitkBooleanOperationsWidgetControls", "Combines the two segmentations", 0));
#endif // QT_NO_TOOLTIP
        unionButton->setText(QApplication::translate("QmitkBooleanOperationsWidgetControls", "Union", 0));
        Q_UNUSED(QmitkBooleanOperationsWidgetControls);
    } // retranslateUi

};

namespace Ui {
    class QmitkBooleanOperationsWidgetControls: public Ui_QmitkBooleanOperationsWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKBOOLEANOPERATIONSWIDGETCONTROLS_H
