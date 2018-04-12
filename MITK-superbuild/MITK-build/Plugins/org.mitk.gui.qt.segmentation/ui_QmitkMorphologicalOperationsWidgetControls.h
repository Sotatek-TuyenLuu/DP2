/********************************************************************************
** Form generated from reading UI file 'QmitkMorphologicalOperationsWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKMORPHOLOGICALOPERATIONSWIDGETCONTROLS_H
#define UI_QMITKMORPHOLOGICALOPERATIONSWIDGETCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "internal/Common/QmitkDataSelectionWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkMorphologicalOperationsWidgetControls
{
public:
    QVBoxLayout *verticalLayout_2;
    QmitkDataSelectionWidget *dataSelectionWidget;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonMorphoBall;
    QRadioButton *radioButtonMorphoCross;
    QComboBox *planeSelectionComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *sliderMorphFactor;
    QSpinBox *spinBoxMorphFactor;
    QGridLayout *gridLayout;
    QToolButton *btnDilatation;
    QToolButton *btnErosion;
    QToolButton *btnClosing;
    QToolButton *btnOpening;
    QToolButton *btnFillHoles;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkMorphologicalOperationsWidgetControls)
    {
        if (QmitkMorphologicalOperationsWidgetControls->objectName().isEmpty())
            QmitkMorphologicalOperationsWidgetControls->setObjectName(QStringLiteral("QmitkMorphologicalOperationsWidgetControls"));
        QmitkMorphologicalOperationsWidgetControls->resize(263, 469);
        verticalLayout_2 = new QVBoxLayout(QmitkMorphologicalOperationsWidgetControls);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        dataSelectionWidget = new QmitkDataSelectionWidget(QmitkMorphologicalOperationsWidgetControls);
        dataSelectionWidget->setObjectName(QStringLiteral("dataSelectionWidget"));

        verticalLayout_2->addWidget(dataSelectionWidget);

        groupBox_6 = new QGroupBox(QmitkMorphologicalOperationsWidgetControls);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout = new QVBoxLayout(groupBox_6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButtonMorphoBall = new QRadioButton(groupBox_6);
        radioButtonMorphoBall->setObjectName(QStringLiteral("radioButtonMorphoBall"));
        radioButtonMorphoBall->setChecked(true);

        verticalLayout->addWidget(radioButtonMorphoBall);

        radioButtonMorphoCross = new QRadioButton(groupBox_6);
        radioButtonMorphoCross->setObjectName(QStringLiteral("radioButtonMorphoCross"));

        verticalLayout->addWidget(radioButtonMorphoCross);

        planeSelectionComboBox = new QComboBox(groupBox_6);
        planeSelectionComboBox->setObjectName(QStringLiteral("planeSelectionComboBox"));

        verticalLayout->addWidget(planeSelectionComboBox);


        verticalLayout_2->addWidget(groupBox_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(QmitkMorphologicalOperationsWidgetControls);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        sliderMorphFactor = new QSlider(QmitkMorphologicalOperationsWidgetControls);
        sliderMorphFactor->setObjectName(QStringLiteral("sliderMorphFactor"));
        sliderMorphFactor->setMinimum(1);
        sliderMorphFactor->setMaximum(20);
        sliderMorphFactor->setPageStep(1);
        sliderMorphFactor->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderMorphFactor);

        spinBoxMorphFactor = new QSpinBox(QmitkMorphologicalOperationsWidgetControls);
        spinBoxMorphFactor->setObjectName(QStringLiteral("spinBoxMorphFactor"));
        spinBoxMorphFactor->setMinimum(1);
        spinBoxMorphFactor->setMaximum(20);

        horizontalLayout_2->addWidget(spinBoxMorphFactor);


        verticalLayout_2->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnDilatation = new QToolButton(QmitkMorphologicalOperationsWidgetControls);
        btnDilatation->setObjectName(QStringLiteral("btnDilatation"));
        btnDilatation->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnDilatation->sizePolicy().hasHeightForWidth());
        btnDilatation->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/SegmentationUtilities/MorphologicalOperations/Dilate_48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDilatation->setIcon(icon);
        btnDilatation->setIconSize(QSize(32, 32));
        btnDilatation->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(btnDilatation, 0, 0, 1, 1);

        btnErosion = new QToolButton(QmitkMorphologicalOperationsWidgetControls);
        btnErosion->setObjectName(QStringLiteral("btnErosion"));
        btnErosion->setEnabled(false);
        sizePolicy.setHeightForWidth(btnErosion->sizePolicy().hasHeightForWidth());
        btnErosion->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/SegmentationUtilities/MorphologicalOperations/Erode_48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnErosion->setIcon(icon1);
        btnErosion->setIconSize(QSize(32, 32));
        btnErosion->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(btnErosion, 0, 1, 1, 1);

        btnClosing = new QToolButton(QmitkMorphologicalOperationsWidgetControls);
        btnClosing->setObjectName(QStringLiteral("btnClosing"));
        btnClosing->setEnabled(false);
        sizePolicy.setHeightForWidth(btnClosing->sizePolicy().hasHeightForWidth());
        btnClosing->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/SegmentationUtilities/MorphologicalOperations/Closing_48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClosing->setIcon(icon2);
        btnClosing->setIconSize(QSize(32, 32));
        btnClosing->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(btnClosing, 1, 0, 1, 1);

        btnOpening = new QToolButton(QmitkMorphologicalOperationsWidgetControls);
        btnOpening->setObjectName(QStringLiteral("btnOpening"));
        btnOpening->setEnabled(false);
        sizePolicy.setHeightForWidth(btnOpening->sizePolicy().hasHeightForWidth());
        btnOpening->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/SegmentationUtilities/MorphologicalOperations/Opening_48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOpening->setIcon(icon3);
        btnOpening->setIconSize(QSize(32, 32));
        btnOpening->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(btnOpening, 1, 1, 1, 1);

        btnFillHoles = new QToolButton(QmitkMorphologicalOperationsWidgetControls);
        btnFillHoles->setObjectName(QStringLiteral("btnFillHoles"));
        btnFillHoles->setEnabled(false);
        sizePolicy.setHeightForWidth(btnFillHoles->sizePolicy().hasHeightForWidth());
        btnFillHoles->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/SegmentationUtilities/MorphologicalOperations/FillHoles_48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnFillHoles->setIcon(icon4);
        btnFillHoles->setIconSize(QSize(32, 32));
        btnFillHoles->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(btnFillHoles, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 518, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(QmitkMorphologicalOperationsWidgetControls);
        QObject::connect(sliderMorphFactor, SIGNAL(valueChanged(int)), spinBoxMorphFactor, SLOT(setValue(int)));
        QObject::connect(spinBoxMorphFactor, SIGNAL(valueChanged(int)), sliderMorphFactor, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(QmitkMorphologicalOperationsWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkMorphologicalOperationsWidgetControls)
    {
        QmitkMorphologicalOperationsWidgetControls->setWindowTitle(QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "Form", 0));
        groupBox_6->setTitle(QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "Structuring Element", 0));
        radioButtonMorphoBall->setText(QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "Ball", 0));
        radioButtonMorphoCross->setText(QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "Cross", 0));
        planeSelectionComboBox->clear();
        planeSelectionComboBox->insertItems(0, QStringList()
         << QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "3D Operation", 0)
         << QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "2D Operation - Axial", 0)
         << QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "2D Operation - Sagital", 0)
         << QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "2D Operation - Coronal", 0)
        );
        label->setText(QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "Radius", 0));
        btnDilatation->setText(QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "Dilation", 0));
        btnErosion->setText(QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "Erosion", 0));
        btnClosing->setText(QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "Closing", 0));
        btnOpening->setText(QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "Opening", 0));
#ifndef QT_NO_TOOLTIP
        btnFillHoles->setToolTip(QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "Globally fills holes in segmentation (structuring element and radius not required)", 0));
#endif // QT_NO_TOOLTIP
        btnFillHoles->setText(QApplication::translate("QmitkMorphologicalOperationsWidgetControls", "Fill Holes", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkMorphologicalOperationsWidgetControls: public Ui_QmitkMorphologicalOperationsWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKMORPHOLOGICALOPERATIONSWIDGETCONTROLS_H
