/********************************************************************************
** Form generated from reading UI file 'QmitkAdaptiveRegionGrowingToolGUIControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKADAPTIVEREGIONGROWINGTOOLGUICONTROLS_H
#define UI_QMITKADAPTIVEREGIONGROWINGTOOLGUICONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ctkRangeWidget.h>
#include <ctkSliderWidget.h>

QT_BEGIN_NAMESPACE

class Ui_QmitkAdaptiveRegionGrowingToolGUIControls
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_lblSetSeedpoint;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    ctkRangeWidget *m_ThresholdSlider;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_pbRunSegmentation;
    QCheckBox *m_cbVolumeRendering;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    ctkSliderWidget *m_PreviewSlider;
    QPushButton *m_pbConfirmSegementation;

    void setupUi(QWidget *QmitkAdaptiveRegionGrowingToolGUIControls)
    {
        if (QmitkAdaptiveRegionGrowingToolGUIControls->objectName().isEmpty())
            QmitkAdaptiveRegionGrowingToolGUIControls->setObjectName(QStringLiteral("QmitkAdaptiveRegionGrowingToolGUIControls"));
        QmitkAdaptiveRegionGrowingToolGUIControls->resize(264, 171);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkAdaptiveRegionGrowingToolGUIControls->sizePolicy().hasHeightForWidth());
        QmitkAdaptiveRegionGrowingToolGUIControls->setSizePolicy(sizePolicy);
        QmitkAdaptiveRegionGrowingToolGUIControls->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(QmitkAdaptiveRegionGrowingToolGUIControls);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_lblSetSeedpoint = new QLabel(QmitkAdaptiveRegionGrowingToolGUIControls);
        m_lblSetSeedpoint->setObjectName(QStringLiteral("m_lblSetSeedpoint"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_lblSetSeedpoint->sizePolicy().hasHeightForWidth());
        m_lblSetSeedpoint->setSizePolicy(sizePolicy1);
        m_lblSetSeedpoint->setMargin(0);

        verticalLayout->addWidget(m_lblSetSeedpoint);

        groupBox = new QGroupBox(QmitkAdaptiveRegionGrowingToolGUIControls);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 6, 0, 0);
        m_ThresholdSlider = new ctkRangeWidget(groupBox);
        m_ThresholdSlider->setObjectName(QStringLiteral("m_ThresholdSlider"));

        verticalLayout_3->addWidget(m_ThresholdSlider);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_pbRunSegmentation = new QPushButton(QmitkAdaptiveRegionGrowingToolGUIControls);
        m_pbRunSegmentation->setObjectName(QStringLiteral("m_pbRunSegmentation"));
        m_pbRunSegmentation->setEnabled(false);
        sizePolicy1.setHeightForWidth(m_pbRunSegmentation->sizePolicy().hasHeightForWidth());
        m_pbRunSegmentation->setSizePolicy(sizePolicy1);
        QFont font;
        m_pbRunSegmentation->setFont(font);

        horizontalLayout->addWidget(m_pbRunSegmentation);

        m_cbVolumeRendering = new QCheckBox(QmitkAdaptiveRegionGrowingToolGUIControls);
        m_cbVolumeRendering->setObjectName(QStringLiteral("m_cbVolumeRendering"));
        m_cbVolumeRendering->setEnabled(false);
        sizePolicy1.setHeightForWidth(m_cbVolumeRendering->sizePolicy().hasHeightForWidth());
        m_cbVolumeRendering->setSizePolicy(sizePolicy1);
        m_cbVolumeRendering->setLayoutDirection(Qt::LeftToRight);
        m_cbVolumeRendering->setChecked(false);

        horizontalLayout->addWidget(m_cbVolumeRendering);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(QmitkAdaptiveRegionGrowingToolGUIControls);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 6, 0, 0);
        m_PreviewSlider = new ctkSliderWidget(groupBox_2);
        m_PreviewSlider->setObjectName(QStringLiteral("m_PreviewSlider"));

        verticalLayout_2->addWidget(m_PreviewSlider);


        verticalLayout->addWidget(groupBox_2);

        m_pbConfirmSegementation = new QPushButton(QmitkAdaptiveRegionGrowingToolGUIControls);
        m_pbConfirmSegementation->setObjectName(QStringLiteral("m_pbConfirmSegementation"));
        m_pbConfirmSegementation->setEnabled(false);
        m_pbConfirmSegementation->setFont(font);

        verticalLayout->addWidget(m_pbConfirmSegementation);


        retranslateUi(QmitkAdaptiveRegionGrowingToolGUIControls);

        QMetaObject::connectSlotsByName(QmitkAdaptiveRegionGrowingToolGUIControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkAdaptiveRegionGrowingToolGUIControls)
    {
        QmitkAdaptiveRegionGrowingToolGUIControls->setWindowTitle(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "QmitkAdaptiveRegionGrowingWidget", 0));
#ifndef QT_NO_TOOLTIP
        QmitkAdaptiveRegionGrowingToolGUIControls->setToolTip(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "Move to adjust the segmentation", 0));
#endif // QT_NO_TOOLTIP
        m_lblSetSeedpoint->setText(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "Shift+Click to place seedpoint", 0));
        groupBox->setTitle(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "Define thresholds:", 0));
#ifndef QT_NO_TOOLTIP
        m_pbRunSegmentation->setToolTip(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "Press to start the segmentation of the tubular structure.", 0));
#endif // QT_NO_TOOLTIP
        m_pbRunSegmentation->setText(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "Run Segmentation", 0));
        m_pbRunSegmentation->setShortcut(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "Alt+R", 0));
#ifndef QT_NO_TOOLTIP
        m_cbVolumeRendering->setToolTip(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Enable/disable GPU volume rendering for the segmentation preview.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        m_cbVolumeRendering->setText(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "3D preview", 0));
        groupBox_2->setTitle(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "Adapt Region Growing:", 0));
#ifndef QT_NO_TOOLTIP
        m_pbConfirmSegementation->setToolTip(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "Press to confirm the segmentation and calculate 3D representation.", 0));
#endif // QT_NO_TOOLTIP
        m_pbConfirmSegementation->setText(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "&Confirm Segmentation", 0));
        m_pbConfirmSegementation->setShortcut(QApplication::translate("QmitkAdaptiveRegionGrowingToolGUIControls", "Alt+C", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkAdaptiveRegionGrowingToolGUIControls: public Ui_QmitkAdaptiveRegionGrowingToolGUIControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKADAPTIVEREGIONGROWINGTOOLGUICONTROLS_H
