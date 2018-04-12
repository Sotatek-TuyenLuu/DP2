/********************************************************************************
** Form generated from reading UI file 'QmitkOtsuToolWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKOTSUTOOLWIDGETCONTROLS_H
#define UI_QMITKOTSUTOOLWIDGETCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkExpandButton.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkOtsuToolWidgetControls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *numberOfRegionsLabel;
    QSpinBox *m_Spinbox;
    ctkExpandButton *advancedSettingsButton;
    QGridLayout *advancedSettingsLayout;
    QCheckBox *m_ValleyCheckbox;
    QLabel *binLabel;
    QSpinBox *m_BinsSpinBox;
    QListWidget *m_selectionListWidget;
    QPushButton *previewButton;
    QPushButton *m_ConfSegButton;

    void setupUi(QWidget *QmitkOtsuToolWidgetControls)
    {
        if (QmitkOtsuToolWidgetControls->objectName().isEmpty())
            QmitkOtsuToolWidgetControls->setObjectName(QStringLiteral("QmitkOtsuToolWidgetControls"));
        QmitkOtsuToolWidgetControls->resize(192, 293);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkOtsuToolWidgetControls->sizePolicy().hasHeightForWidth());
        QmitkOtsuToolWidgetControls->setSizePolicy(sizePolicy);
        QmitkOtsuToolWidgetControls->setMinimumSize(QSize(100, 0));
        QmitkOtsuToolWidgetControls->setMaximumSize(QSize(100000, 100000));
        verticalLayout = new QVBoxLayout(QmitkOtsuToolWidgetControls);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        numberOfRegionsLabel = new QLabel(QmitkOtsuToolWidgetControls);
        numberOfRegionsLabel->setObjectName(QStringLiteral("numberOfRegionsLabel"));
        sizePolicy.setHeightForWidth(numberOfRegionsLabel->sizePolicy().hasHeightForWidth());
        numberOfRegionsLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(numberOfRegionsLabel);

        m_Spinbox = new QSpinBox(QmitkOtsuToolWidgetControls);
        m_Spinbox->setObjectName(QStringLiteral("m_Spinbox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_Spinbox->sizePolicy().hasHeightForWidth());
        m_Spinbox->setSizePolicy(sizePolicy1);
        m_Spinbox->setMaximumSize(QSize(40, 16777215));
        m_Spinbox->setMinimum(2);
        m_Spinbox->setMaximum(32);

        horizontalLayout->addWidget(m_Spinbox);


        verticalLayout->addLayout(horizontalLayout);

        advancedSettingsButton = new ctkExpandButton(QmitkOtsuToolWidgetControls);
        advancedSettingsButton->setObjectName(QStringLiteral("advancedSettingsButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(advancedSettingsButton->sizePolicy().hasHeightForWidth());
        advancedSettingsButton->setSizePolicy(sizePolicy2);
        advancedSettingsButton->setMinimumSize(QSize(0, 32));
        advancedSettingsButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        advancedSettingsButton->setProperty("mirrorOnExpand", QVariant(true));

        verticalLayout->addWidget(advancedSettingsButton);

        advancedSettingsLayout = new QGridLayout();
        advancedSettingsLayout->setSpacing(6);
        advancedSettingsLayout->setObjectName(QStringLiteral("advancedSettingsLayout"));
        m_ValleyCheckbox = new QCheckBox(QmitkOtsuToolWidgetControls);
        m_ValleyCheckbox->setObjectName(QStringLiteral("m_ValleyCheckbox"));

        advancedSettingsLayout->addWidget(m_ValleyCheckbox, 0, 0, 1, 1);

        binLabel = new QLabel(QmitkOtsuToolWidgetControls);
        binLabel->setObjectName(QStringLiteral("binLabel"));

        advancedSettingsLayout->addWidget(binLabel, 1, 0, 1, 1);

        m_BinsSpinBox = new QSpinBox(QmitkOtsuToolWidgetControls);
        m_BinsSpinBox->setObjectName(QStringLiteral("m_BinsSpinBox"));
        m_BinsSpinBox->setMinimum(2);
        m_BinsSpinBox->setMaximum(4096);
        m_BinsSpinBox->setValue(128);

        advancedSettingsLayout->addWidget(m_BinsSpinBox, 1, 1, 1, 1);


        verticalLayout->addLayout(advancedSettingsLayout);

        m_selectionListWidget = new QListWidget(QmitkOtsuToolWidgetControls);
        m_selectionListWidget->setObjectName(QStringLiteral("m_selectionListWidget"));
        sizePolicy1.setHeightForWidth(m_selectionListWidget->sizePolicy().hasHeightForWidth());
        m_selectionListWidget->setSizePolicy(sizePolicy1);
        m_selectionListWidget->setMaximumSize(QSize(10000000, 100));
        m_selectionListWidget->setAutoScrollMargin(0);
        m_selectionListWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        m_selectionListWidget->setResizeMode(QListView::Adjust);

        verticalLayout->addWidget(m_selectionListWidget);

        previewButton = new QPushButton(QmitkOtsuToolWidgetControls);
        previewButton->setObjectName(QStringLiteral("previewButton"));
        sizePolicy1.setHeightForWidth(previewButton->sizePolicy().hasHeightForWidth());
        previewButton->setSizePolicy(sizePolicy1);
        previewButton->setMaximumSize(QSize(100000, 16777215));

        verticalLayout->addWidget(previewButton);

        m_ConfSegButton = new QPushButton(QmitkOtsuToolWidgetControls);
        m_ConfSegButton->setObjectName(QStringLiteral("m_ConfSegButton"));
        m_ConfSegButton->setEnabled(false);
        sizePolicy1.setHeightForWidth(m_ConfSegButton->sizePolicy().hasHeightForWidth());
        m_ConfSegButton->setSizePolicy(sizePolicy1);
        m_ConfSegButton->setMaximumSize(QSize(100000, 16777215));

        verticalLayout->addWidget(m_ConfSegButton);


        retranslateUi(QmitkOtsuToolWidgetControls);

        QMetaObject::connectSlotsByName(QmitkOtsuToolWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkOtsuToolWidgetControls)
    {
        QmitkOtsuToolWidgetControls->setWindowTitle(QApplication::translate("QmitkOtsuToolWidgetControls", "QmitkOtsuToolWidget", 0));
#ifndef QT_NO_TOOLTIP
        QmitkOtsuToolWidgetControls->setToolTip(QApplication::translate("QmitkOtsuToolWidgetControls", "Move to adjust the segmentation", 0));
#endif // QT_NO_TOOLTIP
        numberOfRegionsLabel->setText(QApplication::translate("QmitkOtsuToolWidgetControls", "Number of Regions:", 0));
        advancedSettingsButton->setText(QApplication::translate("QmitkOtsuToolWidgetControls", "Advanced settings", 0));
        m_ValleyCheckbox->setText(QApplication::translate("QmitkOtsuToolWidgetControls", "Use Valley Emphasis", 0));
        binLabel->setText(QApplication::translate("QmitkOtsuToolWidgetControls", "Number of Histogram Bins:", 0));
        previewButton->setText(QApplication::translate("QmitkOtsuToolWidgetControls", "Preview", 0));
        m_ConfSegButton->setText(QApplication::translate("QmitkOtsuToolWidgetControls", "Confirm Segmentation", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkOtsuToolWidgetControls: public Ui_QmitkOtsuToolWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKOTSUTOOLWIDGETCONTROLS_H
