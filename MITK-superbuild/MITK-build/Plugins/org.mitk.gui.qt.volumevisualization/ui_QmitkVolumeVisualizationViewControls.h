/********************************************************************************
** Form generated from reading UI file 'QmitkVolumeVisualizationViewControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKVOLUMEVISUALIZATIONVIEWCONTROLS_H
#define UI_QMITKVOLUMEVISUALIZATIONVIEWCONTROLS_H

#include <QmitkTransferFunctionGeneratorWidget.h>
#include <QmitkTransferFunctionWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QmitkDataStorageComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkVolumeVisualizationViewControls
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_ErrorImageLabel;
    QLabel *m_NoSelectedImageLabel;
    QLabel *m_SelectedImageLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *m_EnableRenderingCB;
    QCheckBox *m_EnableLOD;
    QComboBox *m_RenderMode;
    QmitkTransferFunctionGeneratorWidget *m_TransferFunctionGeneratorWidget;
    QmitkTransferFunctionWidget *m_TransferFunctionWidget;

    void setupUi(QWidget *QmitkVolumeVisualizationViewControls)
    {
        if (QmitkVolumeVisualizationViewControls->objectName().isEmpty())
            QmitkVolumeVisualizationViewControls->setObjectName(QStringLiteral("QmitkVolumeVisualizationViewControls"));
        QmitkVolumeVisualizationViewControls->resize(324, 679);
        QmitkVolumeVisualizationViewControls->setMinimumSize(QSize(0, 0));
        QmitkVolumeVisualizationViewControls->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(QmitkVolumeVisualizationViewControls);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_ErrorImageLabel = new QLabel(QmitkVolumeVisualizationViewControls);
        m_ErrorImageLabel->setObjectName(QStringLiteral("m_ErrorImageLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_ErrorImageLabel->sizePolicy().hasHeightForWidth());
        m_ErrorImageLabel->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(191, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        m_ErrorImageLabel->setPalette(palette);

        verticalLayout->addWidget(m_ErrorImageLabel);

        m_NoSelectedImageLabel = new QLabel(QmitkVolumeVisualizationViewControls);
        m_NoSelectedImageLabel->setObjectName(QStringLiteral("m_NoSelectedImageLabel"));
        sizePolicy.setHeightForWidth(m_NoSelectedImageLabel->sizePolicy().hasHeightForWidth());
        m_NoSelectedImageLabel->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush2(QColor(197, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush3(QColor(189, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        m_NoSelectedImageLabel->setPalette(palette1);

        verticalLayout->addWidget(m_NoSelectedImageLabel);

        m_SelectedImageLabel = new QLabel(QmitkVolumeVisualizationViewControls);
        m_SelectedImageLabel->setObjectName(QStringLiteral("m_SelectedImageLabel"));
        sizePolicy.setHeightForWidth(m_SelectedImageLabel->sizePolicy().hasHeightForWidth());
        m_SelectedImageLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(m_SelectedImageLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_EnableRenderingCB = new QCheckBox(QmitkVolumeVisualizationViewControls);
        m_EnableRenderingCB->setObjectName(QStringLiteral("m_EnableRenderingCB"));

        horizontalLayout->addWidget(m_EnableRenderingCB);

        m_EnableLOD = new QCheckBox(QmitkVolumeVisualizationViewControls);
        m_EnableLOD->setObjectName(QStringLiteral("m_EnableLOD"));

        horizontalLayout->addWidget(m_EnableLOD);

        m_RenderMode = new QComboBox(QmitkVolumeVisualizationViewControls);
        m_RenderMode->setObjectName(QStringLiteral("m_RenderMode"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(m_RenderMode->sizePolicy().hasHeightForWidth());
        m_RenderMode->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(m_RenderMode);


        verticalLayout->addLayout(horizontalLayout);

        m_TransferFunctionGeneratorWidget = new QmitkTransferFunctionGeneratorWidget(QmitkVolumeVisualizationViewControls);
        m_TransferFunctionGeneratorWidget->setObjectName(QStringLiteral("m_TransferFunctionGeneratorWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_TransferFunctionGeneratorWidget->sizePolicy().hasHeightForWidth());
        m_TransferFunctionGeneratorWidget->setSizePolicy(sizePolicy2);
        m_TransferFunctionGeneratorWidget->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(m_TransferFunctionGeneratorWidget);

        m_TransferFunctionWidget = new QmitkTransferFunctionWidget(QmitkVolumeVisualizationViewControls);
        m_TransferFunctionWidget->setObjectName(QStringLiteral("m_TransferFunctionWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(m_TransferFunctionWidget->sizePolicy().hasHeightForWidth());
        m_TransferFunctionWidget->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(m_TransferFunctionWidget);


        retranslateUi(QmitkVolumeVisualizationViewControls);

        QMetaObject::connectSlotsByName(QmitkVolumeVisualizationViewControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkVolumeVisualizationViewControls)
    {
        QmitkVolumeVisualizationViewControls->setWindowTitle(QApplication::translate("QmitkVolumeVisualizationViewControls", "QmitkTemplate", 0));
        m_ErrorImageLabel->setText(QString());
        m_NoSelectedImageLabel->setText(QApplication::translate("QmitkVolumeVisualizationViewControls", "Please select a volume image!", 0));
        m_SelectedImageLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_EnableRenderingCB->setToolTip(QApplication::translate("QmitkVolumeVisualizationViewControls", "Click this checkbox to enable volumerendering in the 3D view of the selected image.", 0));
#endif // QT_NO_TOOLTIP
        m_EnableRenderingCB->setText(QApplication::translate("QmitkVolumeVisualizationViewControls", "Volumerendering", 0));
#ifndef QT_NO_TOOLTIP
        m_EnableLOD->setToolTip(QApplication::translate("QmitkVolumeVisualizationViewControls", "Level of detail (LOD) enables a fast but lower quality preview rendering to increase interactivity.", 0));
#endif // QT_NO_TOOLTIP
        m_EnableLOD->setText(QApplication::translate("QmitkVolumeVisualizationViewControls", "LOD", 0));
#ifndef QT_NO_TOOLTIP
        m_RenderMode->setToolTip(QApplication::translate("QmitkVolumeVisualizationViewControls", "Select render mode", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QmitkVolumeVisualizationViewControls: public Ui_QmitkVolumeVisualizationViewControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKVOLUMEVISUALIZATIONVIEWCONTROLS_H
