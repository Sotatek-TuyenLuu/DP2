/********************************************************************************
** Form generated from reading UI file 'QmitkTransferFunctionWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKTRANSFERFUNCTIONWIDGET_H
#define UI_QMITKTRANSFERFUNCTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ctkRangeSlider.h>
#include "QmitkColorTransferFunctionCanvas.h"
#include "QmitkPiecewiseFunctionCanvas.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkTransferFunctionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    ctkRangeSlider *m_RangeSlider;
    QPushButton *m_RangeSliderReset;
    QWidget *m_ScalarOpacityWidget;
    QVBoxLayout *verticalLayout_2;
    QmitkPiecewiseFunctionCanvas *m_ScalarOpacityFunctionCanvas;
    QHBoxLayout *hboxLayout;
    QLineEdit *m_XEditScalarOpacity;
    QLabel *m_textLabelX;
    QSpacerItem *horizontalSpacer_2;
    QLabel *m_textLabelY;
    QLineEdit *m_YEditScalarOpacity;
    QWidget *m_ColorWidget;
    QVBoxLayout *verticalLayout_3;
    QmitkColorTransferFunctionCanvas *m_ColorTransferFunctionCanvas;
    QHBoxLayout *hboxLayout1;
    QLineEdit *m_XEditColor;
    QLabel *m_textLabelX_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *m_GradientOpacityWidget;
    QVBoxLayout *verticalLayout_4;
    QmitkPiecewiseFunctionCanvas *m_GradientOpacityCanvas;
    QHBoxLayout *hboxLayout2;
    QLineEdit *m_XEditGradientOpacity;
    QLabel *m_textLabelX_2;
    QSpacerItem *horizontalSpacer;
    QLabel *m_textLabelY_2;
    QLineEdit *m_YEditGradientOpacity;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkTransferFunctionWidget)
    {
        if (QmitkTransferFunctionWidget->objectName().isEmpty())
            QmitkTransferFunctionWidget->setObjectName(QStringLiteral("QmitkTransferFunctionWidget"));
        QmitkTransferFunctionWidget->resize(300, 542);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(QmitkTransferFunctionWidget->sizePolicy().hasHeightForWidth());
        QmitkTransferFunctionWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QmitkTransferFunctionWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_RangeSlider = new ctkRangeSlider(QmitkTransferFunctionWidget);
        m_RangeSlider->setObjectName(QStringLiteral("m_RangeSlider"));
        m_RangeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(m_RangeSlider);

        m_RangeSliderReset = new QPushButton(QmitkTransferFunctionWidget);
        m_RangeSliderReset->setObjectName(QStringLiteral("m_RangeSliderReset"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_RangeSliderReset->sizePolicy().hasHeightForWidth());
        m_RangeSliderReset->setSizePolicy(sizePolicy1);
        m_RangeSliderReset->setMaximumSize(QSize(48, 16777215));

        horizontalLayout->addWidget(m_RangeSliderReset);


        verticalLayout->addLayout(horizontalLayout);

        m_ScalarOpacityWidget = new QWidget(QmitkTransferFunctionWidget);
        m_ScalarOpacityWidget->setObjectName(QStringLiteral("m_ScalarOpacityWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(3);
        sizePolicy2.setHeightForWidth(m_ScalarOpacityWidget->sizePolicy().hasHeightForWidth());
        m_ScalarOpacityWidget->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(m_ScalarOpacityWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_ScalarOpacityFunctionCanvas = new QmitkPiecewiseFunctionCanvas(m_ScalarOpacityWidget);
        m_ScalarOpacityFunctionCanvas->setObjectName(QStringLiteral("m_ScalarOpacityFunctionCanvas"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(m_ScalarOpacityFunctionCanvas->sizePolicy().hasHeightForWidth());
        m_ScalarOpacityFunctionCanvas->setSizePolicy(sizePolicy3);
        m_ScalarOpacityFunctionCanvas->setMinimumSize(QSize(0, 64));
        QFont font;
        m_ScalarOpacityFunctionCanvas->setFont(font);

        verticalLayout_2->addWidget(m_ScalarOpacityFunctionCanvas);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        m_XEditScalarOpacity = new QLineEdit(m_ScalarOpacityWidget);
        m_XEditScalarOpacity->setObjectName(QStringLiteral("m_XEditScalarOpacity"));
        m_XEditScalarOpacity->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(m_XEditScalarOpacity->sizePolicy().hasHeightForWidth());
        m_XEditScalarOpacity->setSizePolicy(sizePolicy4);
        m_XEditScalarOpacity->setMinimumSize(QSize(64, 0));
        m_XEditScalarOpacity->setMaximumSize(QSize(64, 16777215));
        m_XEditScalarOpacity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(m_XEditScalarOpacity);

        m_textLabelX = new QLabel(m_ScalarOpacityWidget);
        m_textLabelX->setObjectName(QStringLiteral("m_textLabelX"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(m_textLabelX->sizePolicy().hasHeightForWidth());
        m_textLabelX->setSizePolicy(sizePolicy5);
        m_textLabelX->setFont(font);
        m_textLabelX->setWordWrap(false);

        hboxLayout->addWidget(m_textLabelX);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);

        m_textLabelY = new QLabel(m_ScalarOpacityWidget);
        m_textLabelY->setObjectName(QStringLiteral("m_textLabelY"));
        sizePolicy5.setHeightForWidth(m_textLabelY->sizePolicy().hasHeightForWidth());
        m_textLabelY->setSizePolicy(sizePolicy5);
        m_textLabelY->setFont(font);
        m_textLabelY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_textLabelY->setWordWrap(false);

        hboxLayout->addWidget(m_textLabelY);

        m_YEditScalarOpacity = new QLineEdit(m_ScalarOpacityWidget);
        m_YEditScalarOpacity->setObjectName(QStringLiteral("m_YEditScalarOpacity"));
        sizePolicy4.setHeightForWidth(m_YEditScalarOpacity->sizePolicy().hasHeightForWidth());
        m_YEditScalarOpacity->setSizePolicy(sizePolicy4);
        m_YEditScalarOpacity->setMinimumSize(QSize(64, 0));
        m_YEditScalarOpacity->setMaximumSize(QSize(64, 16777215));
        m_YEditScalarOpacity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(m_YEditScalarOpacity);


        verticalLayout_2->addLayout(hboxLayout);


        verticalLayout->addWidget(m_ScalarOpacityWidget);

        m_ColorWidget = new QWidget(QmitkTransferFunctionWidget);
        m_ColorWidget->setObjectName(QStringLiteral("m_ColorWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(m_ColorWidget->sizePolicy().hasHeightForWidth());
        m_ColorWidget->setSizePolicy(sizePolicy6);
        verticalLayout_3 = new QVBoxLayout(m_ColorWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        m_ColorTransferFunctionCanvas = new QmitkColorTransferFunctionCanvas(m_ColorWidget);
        m_ColorTransferFunctionCanvas->setObjectName(QStringLiteral("m_ColorTransferFunctionCanvas"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(1);
        sizePolicy7.setHeightForWidth(m_ColorTransferFunctionCanvas->sizePolicy().hasHeightForWidth());
        m_ColorTransferFunctionCanvas->setSizePolicy(sizePolicy7);
        m_ColorTransferFunctionCanvas->setMinimumSize(QSize(0, 48));
        m_ColorTransferFunctionCanvas->setFont(font);

        verticalLayout_3->addWidget(m_ColorTransferFunctionCanvas);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        m_XEditColor = new QLineEdit(m_ColorWidget);
        m_XEditColor->setObjectName(QStringLiteral("m_XEditColor"));
        sizePolicy4.setHeightForWidth(m_XEditColor->sizePolicy().hasHeightForWidth());
        m_XEditColor->setSizePolicy(sizePolicy4);
        m_XEditColor->setMinimumSize(QSize(64, 0));
        m_XEditColor->setMaximumSize(QSize(64, 16777215));
        m_XEditColor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(m_XEditColor);

        m_textLabelX_3 = new QLabel(m_ColorWidget);
        m_textLabelX_3->setObjectName(QStringLiteral("m_textLabelX_3"));
        m_textLabelX_3->setFont(font);
        m_textLabelX_3->setWordWrap(false);

        hboxLayout1->addWidget(m_textLabelX_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(hboxLayout1);


        verticalLayout->addWidget(m_ColorWidget);

        m_GradientOpacityWidget = new QWidget(QmitkTransferFunctionWidget);
        m_GradientOpacityWidget->setObjectName(QStringLiteral("m_GradientOpacityWidget"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(2);
        sizePolicy8.setHeightForWidth(m_GradientOpacityWidget->sizePolicy().hasHeightForWidth());
        m_GradientOpacityWidget->setSizePolicy(sizePolicy8);
        verticalLayout_4 = new QVBoxLayout(m_GradientOpacityWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        m_GradientOpacityCanvas = new QmitkPiecewiseFunctionCanvas(m_GradientOpacityWidget);
        m_GradientOpacityCanvas->setObjectName(QStringLiteral("m_GradientOpacityCanvas"));
        sizePolicy3.setHeightForWidth(m_GradientOpacityCanvas->sizePolicy().hasHeightForWidth());
        m_GradientOpacityCanvas->setSizePolicy(sizePolicy3);
        m_GradientOpacityCanvas->setMinimumSize(QSize(0, 64));
        m_GradientOpacityCanvas->setFont(font);

        verticalLayout_4->addWidget(m_GradientOpacityCanvas);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        m_XEditGradientOpacity = new QLineEdit(m_GradientOpacityWidget);
        m_XEditGradientOpacity->setObjectName(QStringLiteral("m_XEditGradientOpacity"));
        sizePolicy4.setHeightForWidth(m_XEditGradientOpacity->sizePolicy().hasHeightForWidth());
        m_XEditGradientOpacity->setSizePolicy(sizePolicy4);
        m_XEditGradientOpacity->setMinimumSize(QSize(64, 0));
        m_XEditGradientOpacity->setMaximumSize(QSize(64, 16777215));
        m_XEditGradientOpacity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(m_XEditGradientOpacity);

        m_textLabelX_2 = new QLabel(m_GradientOpacityWidget);
        m_textLabelX_2->setObjectName(QStringLiteral("m_textLabelX_2"));
        m_textLabelX_2->setFont(font);
        m_textLabelX_2->setWordWrap(false);

        hboxLayout2->addWidget(m_textLabelX_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(horizontalSpacer);

        m_textLabelY_2 = new QLabel(m_GradientOpacityWidget);
        m_textLabelY_2->setObjectName(QStringLiteral("m_textLabelY_2"));
        m_textLabelY_2->setFont(font);
        m_textLabelY_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_textLabelY_2->setWordWrap(false);

        hboxLayout2->addWidget(m_textLabelY_2);

        m_YEditGradientOpacity = new QLineEdit(m_GradientOpacityWidget);
        m_YEditGradientOpacity->setObjectName(QStringLiteral("m_YEditGradientOpacity"));
        sizePolicy4.setHeightForWidth(m_YEditGradientOpacity->sizePolicy().hasHeightForWidth());
        m_YEditGradientOpacity->setSizePolicy(sizePolicy4);
        m_YEditGradientOpacity->setMinimumSize(QSize(64, 0));
        m_YEditGradientOpacity->setMaximumSize(QSize(64, 16777215));
        m_YEditGradientOpacity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(m_YEditGradientOpacity);


        verticalLayout_4->addLayout(hboxLayout2);


        verticalLayout->addWidget(m_GradientOpacityWidget);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QmitkTransferFunctionWidget);

        QMetaObject::connectSlotsByName(QmitkTransferFunctionWidget);
    } // setupUi

    void retranslateUi(QWidget *QmitkTransferFunctionWidget)
    {
        QmitkTransferFunctionWidget->setWindowTitle(QApplication::translate("QmitkTransferFunctionWidget", "Form", 0));
#ifndef QT_NO_TOOLTIP
        m_RangeSlider->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Change transfer function window range.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_RangeSliderReset->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Resets range to histogram minimum and maximum.", 0));
#endif // QT_NO_TOOLTIP
        m_RangeSliderReset->setText(QApplication::translate("QmitkTransferFunctionWidget", "Reset", 0));
#ifndef QT_NO_TOOLTIP
        m_ScalarOpacityFunctionCanvas->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Left-click to select a point or add a new point.\n"
"Hold left mouse button to move selected point.\n"
"Click right mouse button to delete a point.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_XEditScalarOpacity->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Edit x-coordinate (grayvalue) of currently selected point.", 0));
#endif // QT_NO_TOOLTIP
        m_XEditScalarOpacity->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_textLabelX->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Edit x-coordinate (grayvalue) of currently selected point.", 0));
#endif // QT_NO_TOOLTIP
        m_textLabelX->setText(QApplication::translate("QmitkTransferFunctionWidget", "Grayvalue", 0));
#ifndef QT_NO_TOOLTIP
        m_textLabelY->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Edit y-coordinate (opacity) of currently selected point.", 0));
#endif // QT_NO_TOOLTIP
        m_textLabelY->setText(QApplication::translate("QmitkTransferFunctionWidget", "Opacity", 0));
#ifndef QT_NO_TOOLTIP
        m_YEditScalarOpacity->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Edit y-coordinate (opacity) of currently selected point.", 0));
#endif // QT_NO_TOOLTIP
        m_YEditScalarOpacity->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_ColorTransferFunctionCanvas->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Left-click to select a point or add a new point.\n"
"Hold left mouse button to move selected point.\n"
"Click right mouse button to delete a point.\n"
"Double-click left mouse button to change color of a point.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_XEditColor->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Edit x-coordinate (grayvalue) of currently selected point.", 0));
#endif // QT_NO_TOOLTIP
        m_XEditColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_textLabelX_3->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Edit x-coordinate (grayvalue) of currently selected point.", 0));
#endif // QT_NO_TOOLTIP
        m_textLabelX_3->setText(QApplication::translate("QmitkTransferFunctionWidget", "Grayvalue", 0));
#ifndef QT_NO_TOOLTIP
        m_GradientOpacityCanvas->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Left-click to select a point or add a new point.\n"
"Hold left mouse button to move selected point.\n"
"Click right mouse button to delete a point.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_XEditGradientOpacity->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Edit x-coordinate (grayvalue) of currently selected point.", 0));
#endif // QT_NO_TOOLTIP
        m_XEditGradientOpacity->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_textLabelX_2->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Edit x-coordinate (grayvalue) of currently selected point.", 0));
#endif // QT_NO_TOOLTIP
        m_textLabelX_2->setText(QApplication::translate("QmitkTransferFunctionWidget", "Grayvalue", 0));
#ifndef QT_NO_TOOLTIP
        m_textLabelY_2->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Edit y-coordinate (opacity) of currently selected point.", 0));
#endif // QT_NO_TOOLTIP
        m_textLabelY_2->setText(QApplication::translate("QmitkTransferFunctionWidget", "Opacity", 0));
#ifndef QT_NO_TOOLTIP
        m_YEditGradientOpacity->setToolTip(QApplication::translate("QmitkTransferFunctionWidget", "Edit y-coordinate (opacity) of currently selected point.", 0));
#endif // QT_NO_TOOLTIP
        m_YEditGradientOpacity->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QmitkTransferFunctionWidget: public Ui_QmitkTransferFunctionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKTRANSFERFUNCTIONWIDGET_H
