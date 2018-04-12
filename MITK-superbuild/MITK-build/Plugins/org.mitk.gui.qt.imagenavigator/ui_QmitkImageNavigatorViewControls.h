/********************************************************************************
** Form generated from reading UI file 'QmitkImageNavigatorViewControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKIMAGENAVIGATORVIEWCONTROLS_H
#define UI_QMITKIMAGENAVIGATORVIEWCONTROLS_H

#include <QmitkSliderNavigatorWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "QmitkDataStorageComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkImageNavigatorViewControls
{
public:
    QGridLayout *gridLayout;
    QLabel *m_LocationLabel;
    QDoubleSpinBox *m_XWorldCoordinateSpinBox;
    QDoubleSpinBox *m_YWorldCoordinateSpinBox;
    QDoubleSpinBox *m_ZWorldCoordinateSpinBox;
    QLabel *m_AxialLabel;
    QmitkSliderNavigatorWidget *m_SliceNavigatorAxial;
    QLabel *m_SagittalLabel;
    QmitkSliderNavigatorWidget *m_SliceNavigatorSagittal;
    QLabel *m_CoronalLabel;
    QmitkSliderNavigatorWidget *m_SliceNavigatorFrontal;
    QLabel *m_TimeLabel;
    QmitkSliderNavigatorWidget *m_SliceNavigatorTime;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkImageNavigatorViewControls)
    {
        if (QmitkImageNavigatorViewControls->objectName().isEmpty())
            QmitkImageNavigatorViewControls->setObjectName(QStringLiteral("QmitkImageNavigatorViewControls"));
        QmitkImageNavigatorViewControls->resize(399, 440);
        QmitkImageNavigatorViewControls->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(QmitkImageNavigatorViewControls);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_LocationLabel = new QLabel(QmitkImageNavigatorViewControls);
        m_LocationLabel->setObjectName(QStringLiteral("m_LocationLabel"));

        gridLayout->addWidget(m_LocationLabel, 0, 0, 1, 1);

        m_XWorldCoordinateSpinBox = new QDoubleSpinBox(QmitkImageNavigatorViewControls);
        m_XWorldCoordinateSpinBox->setObjectName(QStringLiteral("m_XWorldCoordinateSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_XWorldCoordinateSpinBox->sizePolicy().hasHeightForWidth());
        m_XWorldCoordinateSpinBox->setSizePolicy(sizePolicy);
        m_XWorldCoordinateSpinBox->setKeyboardTracking(false);
        m_XWorldCoordinateSpinBox->setDecimals(2);
        m_XWorldCoordinateSpinBox->setMinimum(-100000);
        m_XWorldCoordinateSpinBox->setMaximum(100000);

        gridLayout->addWidget(m_XWorldCoordinateSpinBox, 0, 1, 1, 1);

        m_YWorldCoordinateSpinBox = new QDoubleSpinBox(QmitkImageNavigatorViewControls);
        m_YWorldCoordinateSpinBox->setObjectName(QStringLiteral("m_YWorldCoordinateSpinBox"));
        sizePolicy.setHeightForWidth(m_YWorldCoordinateSpinBox->sizePolicy().hasHeightForWidth());
        m_YWorldCoordinateSpinBox->setSizePolicy(sizePolicy);
        m_YWorldCoordinateSpinBox->setKeyboardTracking(false);
        m_YWorldCoordinateSpinBox->setDecimals(2);
        m_YWorldCoordinateSpinBox->setMinimum(-100000);
        m_YWorldCoordinateSpinBox->setMaximum(100000);

        gridLayout->addWidget(m_YWorldCoordinateSpinBox, 0, 2, 1, 1);

        m_ZWorldCoordinateSpinBox = new QDoubleSpinBox(QmitkImageNavigatorViewControls);
        m_ZWorldCoordinateSpinBox->setObjectName(QStringLiteral("m_ZWorldCoordinateSpinBox"));
        sizePolicy.setHeightForWidth(m_ZWorldCoordinateSpinBox->sizePolicy().hasHeightForWidth());
        m_ZWorldCoordinateSpinBox->setSizePolicy(sizePolicy);
        m_ZWorldCoordinateSpinBox->setKeyboardTracking(false);
        m_ZWorldCoordinateSpinBox->setDecimals(2);
        m_ZWorldCoordinateSpinBox->setMinimum(-100000);
        m_ZWorldCoordinateSpinBox->setMaximum(100000);

        gridLayout->addWidget(m_ZWorldCoordinateSpinBox, 0, 3, 1, 1);

        m_AxialLabel = new QLabel(QmitkImageNavigatorViewControls);
        m_AxialLabel->setObjectName(QStringLiteral("m_AxialLabel"));
        sizePolicy.setHeightForWidth(m_AxialLabel->sizePolicy().hasHeightForWidth());
        m_AxialLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_AxialLabel, 1, 0, 1, 1);

        m_SliceNavigatorAxial = new QmitkSliderNavigatorWidget(QmitkImageNavigatorViewControls);
        m_SliceNavigatorAxial->setObjectName(QStringLiteral("m_SliceNavigatorAxial"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_SliceNavigatorAxial->sizePolicy().hasHeightForWidth());
        m_SliceNavigatorAxial->setSizePolicy(sizePolicy1);
        m_SliceNavigatorAxial->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(m_SliceNavigatorAxial, 1, 1, 1, 3);

        m_SagittalLabel = new QLabel(QmitkImageNavigatorViewControls);
        m_SagittalLabel->setObjectName(QStringLiteral("m_SagittalLabel"));
        sizePolicy.setHeightForWidth(m_SagittalLabel->sizePolicy().hasHeightForWidth());
        m_SagittalLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_SagittalLabel, 2, 0, 1, 1);

        m_SliceNavigatorSagittal = new QmitkSliderNavigatorWidget(QmitkImageNavigatorViewControls);
        m_SliceNavigatorSagittal->setObjectName(QStringLiteral("m_SliceNavigatorSagittal"));
        sizePolicy1.setHeightForWidth(m_SliceNavigatorSagittal->sizePolicy().hasHeightForWidth());
        m_SliceNavigatorSagittal->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_SliceNavigatorSagittal, 2, 1, 1, 3);

        m_CoronalLabel = new QLabel(QmitkImageNavigatorViewControls);
        m_CoronalLabel->setObjectName(QStringLiteral("m_CoronalLabel"));
        sizePolicy.setHeightForWidth(m_CoronalLabel->sizePolicy().hasHeightForWidth());
        m_CoronalLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_CoronalLabel, 3, 0, 1, 1);

        m_SliceNavigatorFrontal = new QmitkSliderNavigatorWidget(QmitkImageNavigatorViewControls);
        m_SliceNavigatorFrontal->setObjectName(QStringLiteral("m_SliceNavigatorFrontal"));
        sizePolicy1.setHeightForWidth(m_SliceNavigatorFrontal->sizePolicy().hasHeightForWidth());
        m_SliceNavigatorFrontal->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_SliceNavigatorFrontal, 3, 1, 1, 3);

        m_TimeLabel = new QLabel(QmitkImageNavigatorViewControls);
        m_TimeLabel->setObjectName(QStringLiteral("m_TimeLabel"));
        sizePolicy.setHeightForWidth(m_TimeLabel->sizePolicy().hasHeightForWidth());
        m_TimeLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_TimeLabel, 4, 0, 1, 1);

        m_SliceNavigatorTime = new QmitkSliderNavigatorWidget(QmitkImageNavigatorViewControls);
        m_SliceNavigatorTime->setObjectName(QStringLiteral("m_SliceNavigatorTime"));
        sizePolicy1.setHeightForWidth(m_SliceNavigatorTime->sizePolicy().hasHeightForWidth());
        m_SliceNavigatorTime->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_SliceNavigatorTime, 4, 1, 1, 3);

        verticalSpacer = new QSpacerItem(20, 413, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 2, 1, 2);


        retranslateUi(QmitkImageNavigatorViewControls);

        QMetaObject::connectSlotsByName(QmitkImageNavigatorViewControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkImageNavigatorViewControls)
    {
        QmitkImageNavigatorViewControls->setWindowTitle(QApplication::translate("QmitkImageNavigatorViewControls", "QmitkTemplate", 0));
        m_LocationLabel->setText(QApplication::translate("QmitkImageNavigatorViewControls", "Location (mm)", 0));
        m_AxialLabel->setText(QApplication::translate("QmitkImageNavigatorViewControls", "Axial", 0));
        m_SagittalLabel->setText(QApplication::translate("QmitkImageNavigatorViewControls", "Sagittal", 0));
        m_CoronalLabel->setText(QApplication::translate("QmitkImageNavigatorViewControls", "Coronal", 0));
        m_TimeLabel->setText(QApplication::translate("QmitkImageNavigatorViewControls", "Time", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkImageNavigatorViewControls: public Ui_QmitkImageNavigatorViewControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKIMAGENAVIGATORVIEWCONTROLS_H
