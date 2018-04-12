/********************************************************************************
** Form generated from reading UI file 'QmitkFreeIsoDoseLevelWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKFREEISODOSELEVELWIDGET_H
#define UI_QMITKFREEISODOSELEVELWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "ctkColorPickerButton.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkFreeIsoDoseLevelWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    ctkColorPickerButton *colorBtn;
    QSlider *doseSlider;
    QDoubleSpinBox *sbRelValue;
    QLabel *label;
    QDoubleSpinBox *sbAbsValue;
    QCheckBox *checkVisibleIso;

    void setupUi(QWidget *QmitkFreeIsoDoseLevelWidget)
    {
        if (QmitkFreeIsoDoseLevelWidget->objectName().isEmpty())
            QmitkFreeIsoDoseLevelWidget->setObjectName(QStringLiteral("QmitkFreeIsoDoseLevelWidget"));
        QmitkFreeIsoDoseLevelWidget->resize(395, 32);
        horizontalLayout_2 = new QHBoxLayout(QmitkFreeIsoDoseLevelWidget);
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        colorBtn = new ctkColorPickerButton(QmitkFreeIsoDoseLevelWidget);
        colorBtn->setObjectName(QStringLiteral("colorBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorBtn->sizePolicy().hasHeightForWidth());
        colorBtn->setSizePolicy(sizePolicy);
        colorBtn->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(colorBtn);

        doseSlider = new QSlider(QmitkFreeIsoDoseLevelWidget);
        doseSlider->setObjectName(QStringLiteral("doseSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(doseSlider->sizePolicy().hasHeightForWidth());
        doseSlider->setSizePolicy(sizePolicy1);
        doseSlider->setMinimumSize(QSize(60, 0));
        doseSlider->setMaximum(150);
        doseSlider->setOrientation(Qt::Horizontal);
        doseSlider->setInvertedAppearance(false);
        doseSlider->setInvertedControls(false);
        doseSlider->setTickPosition(QSlider::NoTicks);
        doseSlider->setTickInterval(0);

        horizontalLayout_2->addWidget(doseSlider);

        sbRelValue = new QDoubleSpinBox(QmitkFreeIsoDoseLevelWidget);
        sbRelValue->setObjectName(QStringLiteral("sbRelValue"));
        sizePolicy1.setHeightForWidth(sbRelValue->sizePolicy().hasHeightForWidth());
        sbRelValue->setSizePolicy(sizePolicy1);
        sbRelValue->setMinimumSize(QSize(50, 0));
        sbRelValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbRelValue->setMaximum(9999);
        sbRelValue->setSingleStep(0.5);

        horizontalLayout_2->addWidget(sbRelValue);

        label = new QLabel(QmitkFreeIsoDoseLevelWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        sbAbsValue = new QDoubleSpinBox(QmitkFreeIsoDoseLevelWidget);
        sbAbsValue->setObjectName(QStringLiteral("sbAbsValue"));
        sizePolicy1.setHeightForWidth(sbAbsValue->sizePolicy().hasHeightForWidth());
        sbAbsValue->setSizePolicy(sizePolicy1);
        sbAbsValue->setMinimumSize(QSize(50, 0));
        sbAbsValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbAbsValue->setMaximum(9999);
        sbAbsValue->setSingleStep(0.5);

        horizontalLayout_2->addWidget(sbAbsValue);

        checkVisibleIso = new QCheckBox(QmitkFreeIsoDoseLevelWidget);
        checkVisibleIso->setObjectName(QStringLiteral("checkVisibleIso"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkVisibleIso->sizePolicy().hasHeightForWidth());
        checkVisibleIso->setSizePolicy(sizePolicy2);
        checkVisibleIso->setMinimumSize(QSize(0, 0));
        checkVisibleIso->setMaximumSize(QSize(50, 16777215));
        checkVisibleIso->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QStringLiteral(":/RTUI/eye_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/RTUI/eye_open.png"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QStringLiteral(":/RTUI/eye_open.png"), QSize(), QIcon::Active, QIcon::On);
        checkVisibleIso->setIcon(icon);
        checkVisibleIso->setIconSize(QSize(24, 16));
        checkVisibleIso->setTristate(false);

        horizontalLayout_2->addWidget(checkVisibleIso);


        retranslateUi(QmitkFreeIsoDoseLevelWidget);

        QMetaObject::connectSlotsByName(QmitkFreeIsoDoseLevelWidget);
    } // setupUi

    void retranslateUi(QWidget *QmitkFreeIsoDoseLevelWidget)
    {
        QmitkFreeIsoDoseLevelWidget->setWindowTitle(QApplication::translate("QmitkFreeIsoDoseLevelWidget", "Form", 0));
#ifndef QT_NO_TOOLTIP
        colorBtn->setToolTip(QApplication::translate("QmitkFreeIsoDoseLevelWidget", "Color of the iso dose level", 0));
#endif // QT_NO_TOOLTIP
        colorBtn->setText(QString());
        sbRelValue->setSuffix(QApplication::translate("QmitkFreeIsoDoseLevelWidget", " %", 0));
        label->setText(QApplication::translate("QmitkFreeIsoDoseLevelWidget", " = ", 0));
#ifndef QT_NO_TOOLTIP
        sbAbsValue->setToolTip(QApplication::translate("QmitkFreeIsoDoseLevelWidget", "Minimum dose value of this level.", 0));
#endif // QT_NO_TOOLTIP
        sbAbsValue->setSuffix(QApplication::translate("QmitkFreeIsoDoseLevelWidget", " Gy", 0));
#ifndef QT_NO_TOOLTIP
        checkVisibleIso->setToolTip(QApplication::translate("QmitkFreeIsoDoseLevelWidget", "Show isoline for this dose level", 0));
#endif // QT_NO_TOOLTIP
        checkVisibleIso->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QmitkFreeIsoDoseLevelWidget: public Ui_QmitkFreeIsoDoseLevelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKFREEISODOSELEVELWIDGET_H
