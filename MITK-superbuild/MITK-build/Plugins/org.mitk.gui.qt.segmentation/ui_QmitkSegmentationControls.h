/********************************************************************************
** Form generated from reading UI file 'QmitkSegmentationControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSEGMENTATIONCONTROLS_H
#define UI_QMITKSEGMENTATIONCONTROLS_H

#include <QmitkDataStorageComboBox.h>
#include <QmitkSlicesInterpolator.h>
#include <QmitkToolGUIArea.h>
#include <QmitkToolReferenceDataSelectionBox.h>
#include <QmitkToolSelectionBox.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkSegmentationControls
{
public:
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *lblPatientImage;
    QLabel *lblSegmentation;
    QToolButton *btnNewSegmentation;
    QmitkDataStorageComboBox *segImageSelector;
    QmitkDataStorageComboBox *patImageSelector;
    QLabel *lblSegmentationWarnings;
    QTabWidget *tabWidgetSegmentationTools;
    QWidget *tab2DTools;
    QVBoxLayout *verticalLayout;
    QmitkToolGUIArea *m_ManualToolGUIContainer2D;
    QmitkToolSelectionBox *m_ManualToolSelectionBox2D;
    QmitkSlicesInterpolator *m_SlicesInterpolator;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab3DTools;
    QVBoxLayout *verticalLayout_2;
    QmitkToolGUIArea *m_ManualToolGUIContainer3D;
    QmitkToolSelectionBox *m_ManualToolSelectionBox3D;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkSegmentationControls)
    {
        if (QmitkSegmentationControls->objectName().isEmpty())
            QmitkSegmentationControls->setObjectName(QStringLiteral("QmitkSegmentationControls"));
        QmitkSegmentationControls->resize(237, 591);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkSegmentationControls->sizePolicy().hasHeightForWidth());
        QmitkSegmentationControls->setSizePolicy(sizePolicy);
        QmitkSegmentationControls->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        QmitkSegmentationControls->setFont(font);
        verticalLayout_6 = new QVBoxLayout(QmitkSegmentationControls);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_6->setContentsMargins(6, 6, 6, 6);
        groupBox = new QGroupBox(QmitkSegmentationControls);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        lblPatientImage = new QLabel(groupBox);
        lblPatientImage->setObjectName(QStringLiteral("lblPatientImage"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblPatientImage->sizePolicy().hasHeightForWidth());
        lblPatientImage->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(lblPatientImage, 0, 0, 1, 1);

        lblSegmentation = new QLabel(groupBox);
        lblSegmentation->setObjectName(QStringLiteral("lblSegmentation"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblSegmentation->sizePolicy().hasHeightForWidth());
        lblSegmentation->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(lblSegmentation, 1, 0, 1, 1);

        btnNewSegmentation = new QToolButton(groupBox);
        btnNewSegmentation->setObjectName(QStringLiteral("btnNewSegmentation"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnNewSegmentation->sizePolicy().hasHeightForWidth());
        btnNewSegmentation->setSizePolicy(sizePolicy4);
        QIcon icon;
        icon.addFile(QStringLiteral(":/segmentation/btnNew.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNewSegmentation->setIcon(icon);

        gridLayout_2->addWidget(btnNewSegmentation, 1, 2, 1, 1);

        segImageSelector = new QmitkDataStorageComboBox(groupBox);
        segImageSelector->setObjectName(QStringLiteral("segImageSelector"));
        sizePolicy1.setHeightForWidth(segImageSelector->sizePolicy().hasHeightForWidth());
        segImageSelector->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(segImageSelector, 1, 1, 1, 1);

        patImageSelector = new QmitkDataStorageComboBox(groupBox);
        patImageSelector->setObjectName(QStringLiteral("patImageSelector"));
        sizePolicy1.setHeightForWidth(patImageSelector->sizePolicy().hasHeightForWidth());
        patImageSelector->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(patImageSelector, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        lblSegmentationWarnings = new QLabel(groupBox);
        lblSegmentationWarnings->setObjectName(QStringLiteral("lblSegmentationWarnings"));
        sizePolicy1.setHeightForWidth(lblSegmentationWarnings->sizePolicy().hasHeightForWidth());
        lblSegmentationWarnings->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(200, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(84, 82, 78, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        lblSegmentationWarnings->setPalette(palette);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        lblSegmentationWarnings->setFont(font1);
        lblSegmentationWarnings->setWordWrap(true);

        verticalLayout_3->addWidget(lblSegmentationWarnings);


        verticalLayout_6->addWidget(groupBox);

        tabWidgetSegmentationTools = new QTabWidget(QmitkSegmentationControls);
        tabWidgetSegmentationTools->setObjectName(QStringLiteral("tabWidgetSegmentationTools"));
        sizePolicy.setHeightForWidth(tabWidgetSegmentationTools->sizePolicy().hasHeightForWidth());
        tabWidgetSegmentationTools->setSizePolicy(sizePolicy);
        tabWidgetSegmentationTools->setLayoutDirection(Qt::LeftToRight);
        tabWidgetSegmentationTools->setStyleSheet(QStringLiteral("QTabWidget::tab-bar { alignment: middle; }"));
        tabWidgetSegmentationTools->setTabPosition(QTabWidget::North);
        tabWidgetSegmentationTools->setTabShape(QTabWidget::Triangular);
        tab2DTools = new QWidget();
        tab2DTools->setObjectName(QStringLiteral("tab2DTools"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tab2DTools->sizePolicy().hasHeightForWidth());
        tab2DTools->setSizePolicy(sizePolicy5);
        tab2DTools->setLayoutDirection(Qt::LeftToRight);
        tab2DTools->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(tab2DTools);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        m_ManualToolGUIContainer2D = new QmitkToolGUIArea(tab2DTools);
        m_ManualToolGUIContainer2D->setObjectName(QStringLiteral("m_ManualToolGUIContainer2D"));
        sizePolicy.setHeightForWidth(m_ManualToolGUIContainer2D->sizePolicy().hasHeightForWidth());
        m_ManualToolGUIContainer2D->setSizePolicy(sizePolicy);
        m_ManualToolGUIContainer2D->setFont(font1);

        verticalLayout->addWidget(m_ManualToolGUIContainer2D);

        m_ManualToolSelectionBox2D = new QmitkToolSelectionBox(tab2DTools);
        m_ManualToolSelectionBox2D->setObjectName(QStringLiteral("m_ManualToolSelectionBox2D"));
        sizePolicy1.setHeightForWidth(m_ManualToolSelectionBox2D->sizePolicy().hasHeightForWidth());
        m_ManualToolSelectionBox2D->setSizePolicy(sizePolicy1);
        m_ManualToolSelectionBox2D->setFont(font1);

        verticalLayout->addWidget(m_ManualToolSelectionBox2D);

        m_SlicesInterpolator = new QmitkSlicesInterpolator(tab2DTools);
        m_SlicesInterpolator->setObjectName(QStringLiteral("m_SlicesInterpolator"));
        sizePolicy1.setHeightForWidth(m_SlicesInterpolator->sizePolicy().hasHeightForWidth());
        m_SlicesInterpolator->setSizePolicy(sizePolicy1);
        m_SlicesInterpolator->setFont(font1);

        verticalLayout->addWidget(m_SlicesInterpolator);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabWidgetSegmentationTools->addTab(tab2DTools, QString());
        tab3DTools = new QWidget();
        tab3DTools->setObjectName(QStringLiteral("tab3DTools"));
        sizePolicy.setHeightForWidth(tab3DTools->sizePolicy().hasHeightForWidth());
        tab3DTools->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(tab3DTools);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        m_ManualToolGUIContainer3D = new QmitkToolGUIArea(tab3DTools);
        m_ManualToolGUIContainer3D->setObjectName(QStringLiteral("m_ManualToolGUIContainer3D"));
        sizePolicy.setHeightForWidth(m_ManualToolGUIContainer3D->sizePolicy().hasHeightForWidth());
        m_ManualToolGUIContainer3D->setSizePolicy(sizePolicy);
        m_ManualToolGUIContainer3D->setFont(font1);

        verticalLayout_2->addWidget(m_ManualToolGUIContainer3D);

        m_ManualToolSelectionBox3D = new QmitkToolSelectionBox(tab3DTools);
        m_ManualToolSelectionBox3D->setObjectName(QStringLiteral("m_ManualToolSelectionBox3D"));
        sizePolicy.setHeightForWidth(m_ManualToolSelectionBox3D->sizePolicy().hasHeightForWidth());
        m_ManualToolSelectionBox3D->setSizePolicy(sizePolicy);
        m_ManualToolSelectionBox3D->setFont(font1);

        verticalLayout_2->addWidget(m_ManualToolSelectionBox3D);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidgetSegmentationTools->addTab(tab3DTools, QString());

        verticalLayout_6->addWidget(tabWidgetSegmentationTools);


        retranslateUi(QmitkSegmentationControls);

        tabWidgetSegmentationTools->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QmitkSegmentationControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkSegmentationControls)
    {
        QmitkSegmentationControls->setWindowTitle(QApplication::translate("QmitkSegmentationControls", "QmitkSegmentation", 0));
        groupBox->setTitle(QApplication::translate("QmitkSegmentationControls", "Data Selection", 0));
        lblPatientImage->setText(QApplication::translate("QmitkSegmentationControls", "Patient Image", 0));
        lblSegmentation->setText(QApplication::translate("QmitkSegmentationControls", "Segmentation", 0));
#ifndef QT_NO_TOOLTIP
        btnNewSegmentation->setToolTip(QApplication::translate("QmitkSegmentationControls", "Create a new segmentation", 0));
#endif // QT_NO_TOOLTIP
        btnNewSegmentation->setText(QApplication::translate("QmitkSegmentationControls", "...", 0));
        lblSegmentationWarnings->setText(QApplication::translate("QmitkSegmentationControls", "Please load an image!", 0));
        tabWidgetSegmentationTools->setTabText(tabWidgetSegmentationTools->indexOf(tab2DTools), QApplication::translate("QmitkSegmentationControls", "2D Tools", 0));
        tabWidgetSegmentationTools->setTabText(tabWidgetSegmentationTools->indexOf(tab3DTools), QApplication::translate("QmitkSegmentationControls", "3D Tools", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkSegmentationControls: public Ui_QmitkSegmentationControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSEGMENTATIONCONTROLS_H
