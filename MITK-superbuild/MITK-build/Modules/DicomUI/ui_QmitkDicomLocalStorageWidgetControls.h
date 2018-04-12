/********************************************************************************
** Form generated from reading UI file 'QmitkDicomLocalStorageWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKDICOMLOCALSTORAGEWIDGETCONTROLS_H
#define UI_QMITKDICOMLOCALSTORAGEWIDGETCONTROLS_H

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

class Ui_QmitkDicomLocalStorageWidgetControls
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *localFilesGroupBox;
    QVBoxLayout *verticalLayout_11;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *viewInternalDataButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *QueryLayout;
    ctkDICOMTableManager *ctkDicomBrowser;

    void setupUi(QWidget *QmitkDicomLocalStorageWidgetControls)
    {
        if (QmitkDicomLocalStorageWidgetControls->objectName().isEmpty())
            QmitkDicomLocalStorageWidgetControls->setObjectName(QStringLiteral("QmitkDicomLocalStorageWidgetControls"));
        QmitkDicomLocalStorageWidgetControls->resize(754, 633);
        verticalLayout = new QVBoxLayout(QmitkDicomLocalStorageWidgetControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        localFilesGroupBox = new QGroupBox(QmitkDicomLocalStorageWidgetControls);
        localFilesGroupBox->setObjectName(QStringLiteral("localFilesGroupBox"));
        verticalLayout_11 = new QVBoxLayout(localFilesGroupBox);
        verticalLayout_11->setContentsMargins(12, 12, 12, 12);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        frame = new QFrame(localFilesGroupBox);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout_5 = new QHBoxLayout(frame);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        viewInternalDataButton = new QPushButton(frame);
        viewInternalDataButton->setObjectName(QStringLiteral("viewInternalDataButton"));
        viewInternalDataButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/org.mitk.gui.qt.dicom/viewIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewInternalDataButton->setIcon(icon);
        viewInternalDataButton->setIconSize(QSize(16, 20));

        horizontalLayout_5->addWidget(viewInternalDataButton);

        deleteButton = new QPushButton(frame);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/org.mitk.gui.qt.datamanager/Remove_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon1);

        horizontalLayout_5->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_11->addWidget(frame);

        QueryLayout = new QHBoxLayout();
        QueryLayout->setSpacing(0);
        QueryLayout->setObjectName(QStringLiteral("QueryLayout"));
        QueryLayout->setSizeConstraint(QLayout::SetNoConstraint);
        QueryLayout->setContentsMargins(0, -1, 0, -1);
        ctkDicomBrowser = new ctkDICOMTableManager(localFilesGroupBox);
        ctkDicomBrowser->setObjectName(QStringLiteral("ctkDicomBrowser"));

        QueryLayout->addWidget(ctkDicomBrowser);


        verticalLayout_11->addLayout(QueryLayout);


        verticalLayout->addWidget(localFilesGroupBox);


        retranslateUi(QmitkDicomLocalStorageWidgetControls);

        QMetaObject::connectSlotsByName(QmitkDicomLocalStorageWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkDicomLocalStorageWidgetControls)
    {
        QmitkDicomLocalStorageWidgetControls->setWindowTitle(QApplication::translate("QmitkDicomLocalStorageWidgetControls", "Form", 0));
        localFilesGroupBox->setTitle(QApplication::translate("QmitkDicomLocalStorageWidgetControls", "Local Dicom Storage", 0));
        viewInternalDataButton->setText(QApplication::translate("QmitkDicomLocalStorageWidgetControls", "View", 0));
        deleteButton->setText(QApplication::translate("QmitkDicomLocalStorageWidgetControls", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkDicomLocalStorageWidgetControls: public Ui_QmitkDicomLocalStorageWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKDICOMLOCALSTORAGEWIDGETCONTROLS_H
