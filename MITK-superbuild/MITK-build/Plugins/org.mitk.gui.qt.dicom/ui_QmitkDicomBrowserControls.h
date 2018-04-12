/********************************************************************************
** Form generated from reading UI file 'QmitkDicomBrowserControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKDICOMBROWSERCONTROLS_H
#define UI_QMITKDICOMBROWSERCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QmitkDicomExternalDataWidget.h"
#include "QmitkDicomLocalStorageWidget.h"
#include "ctkDICOMQueryRetrieveWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkDicomBrowserControls
{
public:
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QVBoxLayout *verticalLayout_3;
    QmitkDicomLocalStorageWidget *internalDataWidget;
    QWidget *tabWidgetPage2;
    QVBoxLayout *verticalLayout_9;
    QmitkDicomExternalDataWidget *externalDataWidget;
    QWidget *tabWidgetPage3;
    QVBoxLayout *verticalLayout_12;
    QLabel *label;
    ctkDICOMQueryRetrieveWidget *m_ctkDICOMQueryRetrieveWidget;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *StoreSCPStatusLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkDicomBrowserControls)
    {
        if (QmitkDicomBrowserControls->objectName().isEmpty())
            QmitkDicomBrowserControls->setObjectName(QStringLiteral("QmitkDicomBrowserControls"));
        QmitkDicomBrowserControls->resize(752, 696);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkDicomBrowserControls->sizePolicy().hasHeightForWidth());
        QmitkDicomBrowserControls->setSizePolicy(sizePolicy);
        QmitkDicomBrowserControls->setMinimumSize(QSize(0, 0));
        QmitkDicomBrowserControls->setAcceptDrops(false);
        horizontalLayout_2 = new QHBoxLayout(QmitkDicomBrowserControls);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        scrollArea = new QScrollArea(QmitkDicomBrowserControls);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 738, 682));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(scrollAreaWidgetContents_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(32, 32));
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QStringLiteral("tabWidgetPage1"));
        sizePolicy1.setHeightForWidth(tabWidgetPage1->sizePolicy().hasHeightForWidth());
        tabWidgetPage1->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(tabWidgetPage1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        internalDataWidget = new QmitkDicomLocalStorageWidget(tabWidgetPage1);
        internalDataWidget->setObjectName(QStringLiteral("internalDataWidget"));
        sizePolicy1.setHeightForWidth(internalDataWidget->sizePolicy().hasHeightForWidth());
        internalDataWidget->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(internalDataWidget);

        QIcon icon;
        icon.addFile(QStringLiteral(":/org.mitk.gui.qt.dicom/drive-harddisk_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage1, icon, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QStringLiteral("tabWidgetPage2"));
        sizePolicy1.setHeightForWidth(tabWidgetPage2->sizePolicy().hasHeightForWidth());
        tabWidgetPage2->setSizePolicy(sizePolicy1);
        verticalLayout_9 = new QVBoxLayout(tabWidgetPage2);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        externalDataWidget = new QmitkDicomExternalDataWidget(tabWidgetPage2);
        externalDataWidget->setObjectName(QStringLiteral("externalDataWidget"));
        sizePolicy1.setHeightForWidth(externalDataWidget->sizePolicy().hasHeightForWidth());
        externalDataWidget->setSizePolicy(sizePolicy1);

        verticalLayout_9->addWidget(externalDataWidget);

        QIcon icon1;
        icon1.addFile(QStringLiteral(":/org.mitk.gui.qt.dicom/import_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/org.mitk.gui.qt.dicom/import_32.png"), QSize(), QIcon::Selected, QIcon::On);
        tabWidget->addTab(tabWidgetPage2, icon1, QString());
        tabWidgetPage3 = new QWidget();
        tabWidgetPage3->setObjectName(QStringLiteral("tabWidgetPage3"));
        sizePolicy1.setHeightForWidth(tabWidgetPage3->sizePolicy().hasHeightForWidth());
        tabWidgetPage3->setSizePolicy(sizePolicy1);
        verticalLayout_12 = new QVBoxLayout(tabWidgetPage3);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label = new QLabel(tabWidgetPage3);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout_12->addWidget(label);

        m_ctkDICOMQueryRetrieveWidget = new ctkDICOMQueryRetrieveWidget(tabWidgetPage3);
        m_ctkDICOMQueryRetrieveWidget->setObjectName(QStringLiteral("m_ctkDICOMQueryRetrieveWidget"));
        sizePolicy1.setHeightForWidth(m_ctkDICOMQueryRetrieveWidget->sizePolicy().hasHeightForWidth());
        m_ctkDICOMQueryRetrieveWidget->setSizePolicy(sizePolicy1);

        verticalLayout_12->addWidget(m_ctkDICOMQueryRetrieveWidget);

        QIcon icon2;
        icon2.addFile(QStringLiteral(":/org.mitk.gui.qt.dicom/network-workgroup_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage3, icon2, QString());

        verticalLayout->addWidget(tabWidget);

        frame_2 = new QFrame(scrollAreaWidgetContents_2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(4, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        StoreSCPStatusLabel = new QLabel(frame_2);
        StoreSCPStatusLabel->setObjectName(QStringLiteral("StoreSCPStatusLabel"));
        sizePolicy1.setHeightForWidth(StoreSCPStatusLabel->sizePolicy().hasHeightForWidth());
        StoreSCPStatusLabel->setSizePolicy(sizePolicy1);
        StoreSCPStatusLabel->setTextFormat(Qt::RichText);

        horizontalLayout->addWidget(StoreSCPStatusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_2->addWidget(scrollArea);


        retranslateUi(QmitkDicomBrowserControls);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QmitkDicomBrowserControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkDicomBrowserControls)
    {
        QmitkDicomBrowserControls->setWindowTitle(QApplication::translate("QmitkDicomBrowserControls", "QmitkTemplate", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QApplication::translate("QmitkDicomBrowserControls", "Local Storage", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(tabWidgetPage1), QApplication::translate("QmitkDicomBrowserControls", "Manage your local dicom imports", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QApplication::translate("QmitkDicomBrowserControls", "Import", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(tabWidgetPage2), QApplication::translate("QmitkDicomBrowserControls", "Import dicom data from any hard drive", 0));
        label->setText(QApplication::translate("QmitkDicomBrowserControls", "Warning: This is currently an experimental feature!", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage3), QApplication::translate("QmitkDicomBrowserControls", "Query Retrieve", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(tabWidgetPage3), QApplication::translate("QmitkDicomBrowserControls", "Query and retrieve dicom data from server", 0));
        StoreSCPStatusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QmitkDicomBrowserControls: public Ui_QmitkDicomBrowserControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKDICOMBROWSERCONTROLS_H
