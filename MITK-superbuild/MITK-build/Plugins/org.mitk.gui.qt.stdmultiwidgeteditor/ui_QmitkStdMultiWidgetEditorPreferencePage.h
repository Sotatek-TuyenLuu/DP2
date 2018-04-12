/********************************************************************************
** Form generated from reading UI file 'QmitkStdMultiWidgetEditorPreferencePage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSTDMULTIWIDGETEDITORPREFERENCEPAGE_H
#define UI_QMITKSTDMULTIWIDGETEDITORPREFERENCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkStdMultiWidgetEditorPreferencePage
{
public:
    QGridLayout *gridLayout;
    QComboBox *m_RenderWindowChooser;
    QLabel *label_2;
    QPushButton *m_ResetButton;
    QComboBox *m_RenderingMode;
    QLabel *label;
    QSpinBox *m_CrosshairGapSize;
    QFrame *line_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_7;
    QPushButton *m_RenderWindowDecorationColor;
    QLabel *label_6;
    QCheckBox *m_ShowLevelWindowWidget;
    QCheckBox *m_PACSLikeMouseMode;
    QPushButton *m_ColorButton2;
    QFrame *line;
    QLabel *label_5;
    QLineEdit *m_RenderWindowDecorationText;
    QPushButton *m_ColorButton1;
    QCheckBox *m_EnableFlexibleZooming;

    void setupUi(QWidget *QmitkStdMultiWidgetEditorPreferencePage)
    {
        if (QmitkStdMultiWidgetEditorPreferencePage->objectName().isEmpty())
            QmitkStdMultiWidgetEditorPreferencePage->setObjectName(QStringLiteral("QmitkStdMultiWidgetEditorPreferencePage"));
        QmitkStdMultiWidgetEditorPreferencePage->resize(518, 431);
        gridLayout = new QGridLayout(QmitkStdMultiWidgetEditorPreferencePage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_RenderWindowChooser = new QComboBox(QmitkStdMultiWidgetEditorPreferencePage);
        m_RenderWindowChooser->setObjectName(QStringLiteral("m_RenderWindowChooser"));

        gridLayout->addWidget(m_RenderWindowChooser, 10, 1, 1, 1);

        label_2 = new QLabel(QmitkStdMultiWidgetEditorPreferencePage);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 11, 0, 1, 1);

        m_ResetButton = new QPushButton(QmitkStdMultiWidgetEditorPreferencePage);
        m_ResetButton->setObjectName(QStringLiteral("m_ResetButton"));

        gridLayout->addWidget(m_ResetButton, 15, 0, 1, 1);

        m_RenderingMode = new QComboBox(QmitkStdMultiWidgetEditorPreferencePage);
        m_RenderingMode->setObjectName(QStringLiteral("m_RenderingMode"));

        gridLayout->addWidget(m_RenderingMode, 6, 1, 1, 2);

        label = new QLabel(QmitkStdMultiWidgetEditorPreferencePage);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 7, 0, 1, 3);

        m_CrosshairGapSize = new QSpinBox(QmitkStdMultiWidgetEditorPreferencePage);
        m_CrosshairGapSize->setObjectName(QStringLiteral("m_CrosshairGapSize"));
        m_CrosshairGapSize->setValue(32);

        gridLayout->addWidget(m_CrosshairGapSize, 9, 1, 1, 1);

        line_3 = new QFrame(QmitkStdMultiWidgetEditorPreferencePage);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 8, 0, 1, 3);

        label_8 = new QLabel(QmitkStdMultiWidgetEditorPreferencePage);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 14, 0, 1, 1);

        label_9 = new QLabel(QmitkStdMultiWidgetEditorPreferencePage);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 9, 0, 1, 1);

        label_7 = new QLabel(QmitkStdMultiWidgetEditorPreferencePage);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 13, 0, 1, 1);

        m_RenderWindowDecorationColor = new QPushButton(QmitkStdMultiWidgetEditorPreferencePage);
        m_RenderWindowDecorationColor->setObjectName(QStringLiteral("m_RenderWindowDecorationColor"));

        gridLayout->addWidget(m_RenderWindowDecorationColor, 13, 1, 1, 1);

        label_6 = new QLabel(QmitkStdMultiWidgetEditorPreferencePage);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 10, 0, 1, 1);

        m_ShowLevelWindowWidget = new QCheckBox(QmitkStdMultiWidgetEditorPreferencePage);
        m_ShowLevelWindowWidget->setObjectName(QStringLiteral("m_ShowLevelWindowWidget"));
        m_ShowLevelWindowWidget->setLayoutDirection(Qt::LeftToRight);
        m_ShowLevelWindowWidget->setChecked(true);

        gridLayout->addWidget(m_ShowLevelWindowWidget, 1, 0, 1, 3);

        m_PACSLikeMouseMode = new QCheckBox(QmitkStdMultiWidgetEditorPreferencePage);
        m_PACSLikeMouseMode->setObjectName(QStringLiteral("m_PACSLikeMouseMode"));
        m_PACSLikeMouseMode->setLayoutDirection(Qt::LeftToRight);
        m_PACSLikeMouseMode->setTristate(false);

        gridLayout->addWidget(m_PACSLikeMouseMode, 2, 0, 1, 3);

        m_ColorButton2 = new QPushButton(QmitkStdMultiWidgetEditorPreferencePage);
        m_ColorButton2->setObjectName(QStringLiteral("m_ColorButton2"));

        gridLayout->addWidget(m_ColorButton2, 11, 2, 1, 1);

        line = new QFrame(QmitkStdMultiWidgetEditorPreferencePage);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 3);

        label_5 = new QLabel(QmitkStdMultiWidgetEditorPreferencePage);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        m_RenderWindowDecorationText = new QLineEdit(QmitkStdMultiWidgetEditorPreferencePage);
        m_RenderWindowDecorationText->setObjectName(QStringLiteral("m_RenderWindowDecorationText"));

        gridLayout->addWidget(m_RenderWindowDecorationText, 14, 1, 1, 2);

        m_ColorButton1 = new QPushButton(QmitkStdMultiWidgetEditorPreferencePage);
        m_ColorButton1->setObjectName(QStringLiteral("m_ColorButton1"));

        gridLayout->addWidget(m_ColorButton1, 11, 1, 1, 1);

        m_EnableFlexibleZooming = new QCheckBox(QmitkStdMultiWidgetEditorPreferencePage);
        m_EnableFlexibleZooming->setObjectName(QStringLiteral("m_EnableFlexibleZooming"));
        m_EnableFlexibleZooming->setLayoutDirection(Qt::LeftToRight);
        m_EnableFlexibleZooming->setChecked(true);

        gridLayout->addWidget(m_EnableFlexibleZooming, 0, 0, 1, 3);


        retranslateUi(QmitkStdMultiWidgetEditorPreferencePage);

        QMetaObject::connectSlotsByName(QmitkStdMultiWidgetEditorPreferencePage);
    } // setupUi

    void retranslateUi(QWidget *QmitkStdMultiWidgetEditorPreferencePage)
    {
        QmitkStdMultiWidgetEditorPreferencePage->setWindowTitle(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "External Programs", 0));
        m_RenderWindowChooser->clear();
        m_RenderWindowChooser->insertItems(0, QStringList()
         << QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "stdmulti.widget1", 0)
         << QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "stdmulti.widget2", 0)
         << QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "stdmulti.widget3", 0)
         << QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "stdmulti.widget4", 0)
        );
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "<html><head/><body><p>If two colors are set, a gradient background is generated.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Background color", 0));
        m_ResetButton->setText(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Reset preferences", 0));
        m_RenderingMode->clear();
        m_RenderingMode->insertItems(0, QStringList()
         << QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Standard Rendering", 0)
         << QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Enable Multisampling (Antialiasing)", 0)
         << QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Enable Depth Peeling", 0)
        );
        label->setText(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "* Changes require restart of MITK.\n"
" Depth Peeling is only supported by Windows.\n"
" For other OS, use Standard Rendering and enable\n"
" the property 'Depth Sorting' in the property list of the surface data node.", 0));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "The small text on the button left of each renderwindow.", 0));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Corner annotation", 0));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "<html><head/><body><p>The gap in the middle of the crosshair in pixels.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Crosshair gap size", 0));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "<html><head/><body><p>The color is used for the following decorations (of each renderwindow):</p><p>Rectangle border</p><p>Corner annotation</p><p>Crosshair</p><p>Plane geometry helper objects (3D Planes)</p><p>Image navigator borders</p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Decoration color", 0));
        m_RenderWindowDecorationColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "<html><head/><body><p>Choose the renderwindow from the multi widget.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Render windows", 0));
        m_ShowLevelWindowWidget->setText(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Show level/window widget", 0));
        m_PACSLikeMouseMode->setText(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Use PACS like mouse interaction (select left mouse button action)", 0));
        m_ColorButton2->setText(QString());
        label_5->setText(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Rendering Mode*", 0));
        m_ColorButton1->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_EnableFlexibleZooming->setToolTip(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "<html><head/><body><p>If activated, zooming and panning is limited to a certain space arround each image.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        m_EnableFlexibleZooming->setText(QApplication::translate("QmitkStdMultiWidgetEditorPreferencePage", "Use constraint zooming and panning", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkStdMultiWidgetEditorPreferencePage: public Ui_QmitkStdMultiWidgetEditorPreferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSTDMULTIWIDGETEDITORPREFERENCEPAGE_H
