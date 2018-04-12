/********************************************************************************
** Form generated from reading UI file 'QmitkDicomExternalDataWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKDICOMEXTERNALDATAWIDGETCONTROLS_H
#define UI_QMITKDICOMEXTERNALDATAWIDGETCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkDICOMTableManager.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkDicomExternalDataWidgetControls
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *externalFilesGroupBox;
    QVBoxLayout *verticalLayout_10;
    QFrame *itemOperationsFrame;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *directoryButton;
    QPushButton *downloadButton;
    QPushButton *viewExternalDataButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *QueryLayout_2;
    ctkDICOMTableManager *ctkDICOMBrowser;

    void setupUi(QWidget *QmitkDicomExternalDataWidgetControls)
    {
        if (QmitkDicomExternalDataWidgetControls->objectName().isEmpty())
            QmitkDicomExternalDataWidgetControls->setObjectName(QStringLiteral("QmitkDicomExternalDataWidgetControls"));
        QmitkDicomExternalDataWidgetControls->resize(754, 633);
        verticalLayout = new QVBoxLayout(QmitkDicomExternalDataWidgetControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        externalFilesGroupBox = new QGroupBox(QmitkDicomExternalDataWidgetControls);
        externalFilesGroupBox->setObjectName(QStringLiteral("externalFilesGroupBox"));
        verticalLayout_10 = new QVBoxLayout(externalFilesGroupBox);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        itemOperationsFrame = new QFrame(externalFilesGroupBox);
        itemOperationsFrame->setObjectName(QStringLiteral("itemOperationsFrame"));
        itemOperationsFrame->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(itemOperationsFrame->sizePolicy().hasHeightForWidth());
        itemOperationsFrame->setSizePolicy(sizePolicy);
        itemOperationsFrame->setFrameShape(QFrame::Box);
        itemOperationsFrame->setFrameShadow(QFrame::Sunken);
        horizontalLayout_5 = new QHBoxLayout(itemOperationsFrame);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        directoryButton = new QPushButton(itemOperationsFrame);
        directoryButton->setObjectName(QStringLiteral("directoryButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/org.mitk.gui.qt.dicom/folder_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        directoryButton->setIcon(icon);

        horizontalLayout_5->addWidget(directoryButton);

        downloadButton = new QPushButton(itemOperationsFrame);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));
        downloadButton->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/org.mitk.gui.qt.dicom/import_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        downloadButton->setIcon(icon1);

        horizontalLayout_5->addWidget(downloadButton);

        viewExternalDataButton = new QPushButton(itemOperationsFrame);
        viewExternalDataButton->setObjectName(QStringLiteral("viewExternalDataButton"));
        viewExternalDataButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/org.mitk.gui.qt.dicom/viewIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewExternalDataButton->setIcon(icon2);
        viewExternalDataButton->setIconSize(QSize(16, 20));

        horizontalLayout_5->addWidget(viewExternalDataButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_10->addWidget(itemOperationsFrame);

        QueryLayout_2 = new QHBoxLayout();
        QueryLayout_2->setSpacing(0);
        QueryLayout_2->setObjectName(QStringLiteral("QueryLayout_2"));
        QueryLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        QueryLayout_2->setContentsMargins(0, -1, 0, -1);
        ctkDICOMBrowser = new ctkDICOMTableManager(externalFilesGroupBox);
        ctkDICOMBrowser->setObjectName(QStringLiteral("ctkDICOMBrowser"));

        QueryLayout_2->addWidget(ctkDICOMBrowser);


        verticalLayout_10->addLayout(QueryLayout_2);


        verticalLayout->addWidget(externalFilesGroupBox);


        retranslateUi(QmitkDicomExternalDataWidgetControls);

        QMetaObject::connectSlotsByName(QmitkDicomExternalDataWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkDicomExternalDataWidgetControls)
    {
        QmitkDicomExternalDataWidgetControls->setWindowTitle(QApplication::translate("QmitkDicomExternalDataWidgetControls", "Form", 0));
        externalFilesGroupBox->setTitle(QApplication::translate("QmitkDicomExternalDataWidgetControls", "External Dicom Data", 0));
        directoryButton->setText(QApplication::translate("QmitkDicomExternalDataWidgetControls", "Scan directory", 0));
        downloadButton->setText(QApplication::translate("QmitkDicomExternalDataWidgetControls", "Add to local storage", 0));
        viewExternalDataButton->setText(QApplication::translate("QmitkDicomExternalDataWidgetControls", "View", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkDicomExternalDataWidgetControls: public Ui_QmitkDicomExternalDataWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKDICOMEXTERNALDATAWIDGETCONTROLS_H
