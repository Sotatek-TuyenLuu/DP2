/********************************************************************************
** Form generated from reading UI file 'QmitkDeformableClippingPlaneViewControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKDEFORMABLECLIPPINGPLANEVIEWCONTROLS_H
#define UI_QMITKDEFORMABLECLIPPINGPLANEVIEWCONTROLS_H

#include <QmitkDataStorageComboBox.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkDeformableClippingPlaneViewControls
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *noSelectedImageLabel;
    QGroupBox *planeGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *createNewPlanePushButton;
    QCheckBox *surfaceModelCheckBox;
    QHBoxLayout *horizontalLayout_1;
    QLabel *clippingPlaneSelectorLabel;
    QmitkDataStorageComboBox *clippingPlaneSelector;
    QGroupBox *interactionSelectionBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *translationPushButton;
    QPushButton *rotationPushButton;
    QPushButton *deformationPushButton;
    QSpacerItem *verticalSpacer;
    QLabel *planesWarningLabel;
    QGroupBox *volumeGroupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *segmentationLabel;
    QLabel *clippingPlansLabel;
    QVBoxLayout *verticalLayout_4;
    QLabel *selectedImageLabel;
    QLabel *selectedVolumePlanesLabel;
    QPushButton *updateVolumePushButton;
    QSpacerItem *verticalSpacer_2;
    QListWidget *volumeList;

    void setupUi(QWidget *QmitkDeformableClippingPlaneViewControls)
    {
        if (QmitkDeformableClippingPlaneViewControls->objectName().isEmpty())
            QmitkDeformableClippingPlaneViewControls->setObjectName(QStringLiteral("QmitkDeformableClippingPlaneViewControls"));
        QmitkDeformableClippingPlaneViewControls->resize(422, 642);
        QmitkDeformableClippingPlaneViewControls->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(QmitkDeformableClippingPlaneViewControls);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        noSelectedImageLabel = new QLabel(QmitkDeformableClippingPlaneViewControls);
        noSelectedImageLabel->setObjectName(QStringLiteral("noSelectedImageLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(noSelectedImageLabel->sizePolicy().hasHeightForWidth());
        noSelectedImageLabel->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(197, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(191, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush2(QColor(189, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        noSelectedImageLabel->setPalette(palette);

        verticalLayout_3->addWidget(noSelectedImageLabel);

        planeGroupBox = new QGroupBox(QmitkDeformableClippingPlaneViewControls);
        planeGroupBox->setObjectName(QStringLiteral("planeGroupBox"));
        planeGroupBox->setCheckable(false);
        planeGroupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(planeGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        createNewPlanePushButton = new QPushButton(planeGroupBox);
        createNewPlanePushButton->setObjectName(QStringLiteral("createNewPlanePushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(createNewPlanePushButton->sizePolicy().hasHeightForWidth());
        createNewPlanePushButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(createNewPlanePushButton);

        surfaceModelCheckBox = new QCheckBox(planeGroupBox);
        surfaceModelCheckBox->setObjectName(QStringLiteral("surfaceModelCheckBox"));
        surfaceModelCheckBox->setLayoutDirection(Qt::RightToLeft);
        surfaceModelCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(surfaceModelCheckBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setSpacing(6);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        clippingPlaneSelectorLabel = new QLabel(planeGroupBox);
        clippingPlaneSelectorLabel->setObjectName(QStringLiteral("clippingPlaneSelectorLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clippingPlaneSelectorLabel->sizePolicy().hasHeightForWidth());
        clippingPlaneSelectorLabel->setSizePolicy(sizePolicy2);
        clippingPlaneSelectorLabel->setMinimumSize(QSize(0, 0));
        clippingPlaneSelectorLabel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_1->addWidget(clippingPlaneSelectorLabel);

        clippingPlaneSelector = new QmitkDataStorageComboBox(planeGroupBox);
        clippingPlaneSelector->setObjectName(QStringLiteral("clippingPlaneSelector"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(clippingPlaneSelector->sizePolicy().hasHeightForWidth());
        clippingPlaneSelector->setSizePolicy(sizePolicy3);
        clippingPlaneSelector->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        horizontalLayout_1->addWidget(clippingPlaneSelector);


        verticalLayout->addLayout(horizontalLayout_1);

        interactionSelectionBox = new QGroupBox(planeGroupBox);
        interactionSelectionBox->setObjectName(QStringLiteral("interactionSelectionBox"));
        interactionSelectionBox->setEnabled(true);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        interactionSelectionBox->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(interactionSelectionBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        translationPushButton = new QPushButton(interactionSelectionBox);
        translationPushButton->setObjectName(QStringLiteral("translationPushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(translationPushButton->sizePolicy().hasHeightForWidth());
        translationPushButton->setSizePolicy(sizePolicy4);
        translationPushButton->setMinimumSize(QSize(20, 50));
        QIcon icon;
        icon.addFile(QStringLiteral(":/org.mitk.gui.qt.segmentation/resources/clipping_plane_translate_48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        translationPushButton->setIcon(icon);
        translationPushButton->setIconSize(QSize(32, 32));
        translationPushButton->setCheckable(true);
        translationPushButton->setAutoRepeat(false);
        translationPushButton->setAutoExclusive(false);

        horizontalLayout_3->addWidget(translationPushButton);

        rotationPushButton = new QPushButton(interactionSelectionBox);
        rotationPushButton->setObjectName(QStringLiteral("rotationPushButton"));
        sizePolicy4.setHeightForWidth(rotationPushButton->sizePolicy().hasHeightForWidth());
        rotationPushButton->setSizePolicy(sizePolicy4);
        rotationPushButton->setMinimumSize(QSize(20, 50));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/org.mitk.gui.qt.segmentation/resources/clipping_plane_rotate48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        rotationPushButton->setIcon(icon1);
        rotationPushButton->setIconSize(QSize(32, 32));
        rotationPushButton->setCheckable(true);
        rotationPushButton->setAutoExclusive(false);

        horizontalLayout_3->addWidget(rotationPushButton);

        deformationPushButton = new QPushButton(interactionSelectionBox);
        deformationPushButton->setObjectName(QStringLiteral("deformationPushButton"));
        sizePolicy4.setHeightForWidth(deformationPushButton->sizePolicy().hasHeightForWidth());
        deformationPushButton->setSizePolicy(sizePolicy4);
        deformationPushButton->setMinimumSize(QSize(20, 50));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/org.mitk.gui.qt.segmentation/resources/clipping_plane_deform48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        deformationPushButton->setIcon(icon2);
        deformationPushButton->setIconSize(QSize(32, 32));
        deformationPushButton->setCheckable(true);
        deformationPushButton->setAutoExclusive(false);

        horizontalLayout_3->addWidget(deformationPushButton);


        verticalLayout->addWidget(interactionSelectionBox);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addWidget(planeGroupBox);

        planesWarningLabel = new QLabel(QmitkDeformableClippingPlaneViewControls);
        planesWarningLabel->setObjectName(QStringLiteral("planesWarningLabel"));
        sizePolicy.setHeightForWidth(planesWarningLabel->sizePolicy().hasHeightForWidth());
        planesWarningLabel->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        planesWarningLabel->setPalette(palette1);

        verticalLayout_3->addWidget(planesWarningLabel);

        volumeGroupBox = new QGroupBox(QmitkDeformableClippingPlaneViewControls);
        volumeGroupBox->setObjectName(QStringLiteral("volumeGroupBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(volumeGroupBox->sizePolicy().hasHeightForWidth());
        volumeGroupBox->setSizePolicy(sizePolicy5);
        verticalLayout_5 = new QVBoxLayout(volumeGroupBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        segmentationLabel = new QLabel(volumeGroupBox);
        segmentationLabel->setObjectName(QStringLiteral("segmentationLabel"));
        sizePolicy3.setHeightForWidth(segmentationLabel->sizePolicy().hasHeightForWidth());
        segmentationLabel->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(segmentationLabel);

        clippingPlansLabel = new QLabel(volumeGroupBox);
        clippingPlansLabel->setObjectName(QStringLiteral("clippingPlansLabel"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(clippingPlansLabel->sizePolicy().hasHeightForWidth());
        clippingPlansLabel->setSizePolicy(sizePolicy6);
        clippingPlansLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(clippingPlansLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        selectedImageLabel = new QLabel(volumeGroupBox);
        selectedImageLabel->setObjectName(QStringLiteral("selectedImageLabel"));
        selectedImageLabel->setEnabled(true);
        sizePolicy3.setHeightForWidth(selectedImageLabel->sizePolicy().hasHeightForWidth());
        selectedImageLabel->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        selectedImageLabel->setFont(font1);

        verticalLayout_4->addWidget(selectedImageLabel);

        selectedVolumePlanesLabel = new QLabel(volumeGroupBox);
        selectedVolumePlanesLabel->setObjectName(QStringLiteral("selectedVolumePlanesLabel"));
        QFont font2;
        font2.setPointSize(8);
        selectedVolumePlanesLabel->setFont(font2);
        selectedVolumePlanesLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_4->addWidget(selectedVolumePlanesLabel);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout);

        updateVolumePushButton = new QPushButton(volumeGroupBox);
        updateVolumePushButton->setObjectName(QStringLiteral("updateVolumePushButton"));

        verticalLayout_5->addWidget(updateVolumePushButton);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_2);

        volumeList = new QListWidget(volumeGroupBox);
        volumeList->setObjectName(QStringLiteral("volumeList"));
        volumeList->setEnabled(true);
        sizePolicy5.setHeightForWidth(volumeList->sizePolicy().hasHeightForWidth());
        volumeList->setSizePolicy(sizePolicy5);

        verticalLayout_5->addWidget(volumeList);


        verticalLayout_3->addWidget(volumeGroupBox);


        retranslateUi(QmitkDeformableClippingPlaneViewControls);

        QMetaObject::connectSlotsByName(QmitkDeformableClippingPlaneViewControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkDeformableClippingPlaneViewControls)
    {
        QmitkDeformableClippingPlaneViewControls->setWindowTitle(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "QmitkDeformableSurface", 0));
        noSelectedImageLabel->setText(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "Please select an image!", 0));
        planeGroupBox->setTitle(QString());
        createNewPlanePushButton->setText(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "Create new clipping plane", 0));
        surfaceModelCheckBox->setText(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "...with surface model", 0));
        clippingPlaneSelectorLabel->setText(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "Plane", 0));
#ifndef QT_NO_TOOLTIP
        translationPushButton->setToolTip(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "Translation", 0));
#endif // QT_NO_TOOLTIP
        translationPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        rotationPushButton->setToolTip(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "Rotation", 0));
#endif // QT_NO_TOOLTIP
        rotationPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        deformationPushButton->setToolTip(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "Deformation", 0));
#endif // QT_NO_TOOLTIP
        deformationPushButton->setText(QString());
        planesWarningLabel->setText(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "Please select less or equal 6 clipping planes!", 0));
        volumeGroupBox->setTitle(QString());
        segmentationLabel->setText(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "Referenced image", 0));
        clippingPlansLabel->setText(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "Clipping planes  ", 0));
        selectedImageLabel->setText(QString());
        selectedVolumePlanesLabel->setText(QString());
        updateVolumePushButton->setText(QApplication::translate("QmitkDeformableClippingPlaneViewControls", "Update Volumina", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkDeformableClippingPlaneViewControls: public Ui_QmitkDeformableClippingPlaneViewControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKDEFORMABLECLIPPINGPLANEVIEWCONTROLS_H
