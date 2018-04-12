/********************************************************************************
** Form generated from reading UI file 'ctkDICOMBrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDICOMBROWSER_H
#define UI_CTKDICOMBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkDICOMTableManager.h"
#include "ctkDirectoryButton.h"

QT_BEGIN_NAMESPACE

class Ui_ctkDICOMBrowser
{
public:
    QAction *ActionImport;
    QAction *ActionExport;
    QAction *ActionQuery;
    QAction *ActionSend;
    QAction *ActionRemove;
    QAction *ActionRepair;
    QVBoxLayout *verticalLayout_2;
    QToolBar *ToolBar;
    QVBoxLayout *VerticalLayout;
    QHBoxLayout *TopLayout;
    QLabel *DatabaseNameLabel;
    ctkDirectoryButton *DirectoryButton;
    QLabel *tablesDensityLabel;
    QComboBox *tableDensityComboBox;
    QSpacerItem *HorizontalSpacer;
    QHBoxLayout *QueryLayout;
    ctkDICOMTableManager *dicomTableManager;

    void setupUi(QWidget *ctkDICOMBrowser)
    {
        if (ctkDICOMBrowser->objectName().isEmpty())
            ctkDICOMBrowser->setObjectName(QStringLiteral("ctkDICOMBrowser"));
        ctkDICOMBrowser->resize(802, 607);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ctkDICOMBrowser->sizePolicy().hasHeightForWidth());
        ctkDICOMBrowser->setSizePolicy(sizePolicy);
        ActionImport = new QAction(ctkDICOMBrowser);
        ActionImport->setObjectName(QStringLiteral("ActionImport"));
        ActionExport = new QAction(ctkDICOMBrowser);
        ActionExport->setObjectName(QStringLiteral("ActionExport"));
        ActionExport->setEnabled(false);
        ActionQuery = new QAction(ctkDICOMBrowser);
        ActionQuery->setObjectName(QStringLiteral("ActionQuery"));
        ActionSend = new QAction(ctkDICOMBrowser);
        ActionSend->setObjectName(QStringLiteral("ActionSend"));
        ActionSend->setEnabled(false);
        ActionRemove = new QAction(ctkDICOMBrowser);
        ActionRemove->setObjectName(QStringLiteral("ActionRemove"));
        ActionRemove->setEnabled(false);
        ActionRepair = new QAction(ctkDICOMBrowser);
        ActionRepair->setObjectName(QStringLiteral("ActionRepair"));
        ActionRepair->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(ctkDICOMBrowser);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 12);
        ToolBar = new QToolBar(ctkDICOMBrowser);
        ToolBar->setObjectName(QStringLiteral("ToolBar"));
        ToolBar->setFloatable(true);

        verticalLayout_2->addWidget(ToolBar);

        VerticalLayout = new QVBoxLayout();
        VerticalLayout->setSpacing(12);
        VerticalLayout->setObjectName(QStringLiteral("VerticalLayout"));
        TopLayout = new QHBoxLayout();
        TopLayout->setObjectName(QStringLiteral("TopLayout"));
        TopLayout->setContentsMargins(12, -1, 12, -1);
        DatabaseNameLabel = new QLabel(ctkDICOMBrowser);
        DatabaseNameLabel->setObjectName(QStringLiteral("DatabaseNameLabel"));
        DatabaseNameLabel->setMaximumSize(QSize(100, 20));

        TopLayout->addWidget(DatabaseNameLabel);

        DirectoryButton = new ctkDirectoryButton(ctkDICOMBrowser);
        DirectoryButton->setObjectName(QStringLiteral("DirectoryButton"));
        DirectoryButton->setMinimumSize(QSize(200, 20));

        TopLayout->addWidget(DirectoryButton);

        tablesDensityLabel = new QLabel(ctkDICOMBrowser);
        tablesDensityLabel->setObjectName(QStringLiteral("tablesDensityLabel"));
        tablesDensityLabel->setMaximumSize(QSize(100, 20));

        TopLayout->addWidget(tablesDensityLabel);

        tableDensityComboBox = new QComboBox(ctkDICOMBrowser);
        tableDensityComboBox->setObjectName(QStringLiteral("tableDensityComboBox"));

        TopLayout->addWidget(tableDensityComboBox);

        HorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TopLayout->addItem(HorizontalSpacer);


        VerticalLayout->addLayout(TopLayout);


        verticalLayout_2->addLayout(VerticalLayout);

        QueryLayout = new QHBoxLayout();
        QueryLayout->setSpacing(0);
        QueryLayout->setObjectName(QStringLiteral("QueryLayout"));
        QueryLayout->setContentsMargins(0, -1, 0, -1);
        dicomTableManager = new ctkDICOMTableManager(ctkDICOMBrowser);
        dicomTableManager->setObjectName(QStringLiteral("dicomTableManager"));
        dicomTableManager->setDynamicTableLayout(true);
        dicomTableManager->setProperty("m_DynamicLayout", QVariant(true));

        QueryLayout->addWidget(dicomTableManager);


        verticalLayout_2->addLayout(QueryLayout);


        ToolBar->addAction(ActionImport);
        ToolBar->addAction(ActionExport);
        ToolBar->addAction(ActionQuery);
        ToolBar->addAction(ActionSend);
        ToolBar->addAction(ActionRemove);
        ToolBar->addAction(ActionRepair);

        retranslateUi(ctkDICOMBrowser);
        QObject::connect(ActionImport, SIGNAL(triggered(bool)), ctkDICOMBrowser, SLOT(openImportDialog()));
        QObject::connect(ActionExport, SIGNAL(triggered(bool)), ctkDICOMBrowser, SLOT(openExportDialog()));
        QObject::connect(ActionQuery, SIGNAL(triggered(bool)), ctkDICOMBrowser, SLOT(openQueryDialog()));
        QObject::connect(ActionRemove, SIGNAL(triggered()), ctkDICOMBrowser, SLOT(onRemoveAction()));
        QObject::connect(ActionRepair, SIGNAL(triggered()), ctkDICOMBrowser, SLOT(onRepairAction()));

        QMetaObject::connectSlotsByName(ctkDICOMBrowser);
    } // setupUi

    void retranslateUi(QWidget *ctkDICOMBrowser)
    {
        ctkDICOMBrowser->setWindowTitle(QApplication::translate("ctkDICOMBrowser", "ctkDICOMBrowser", 0));
        ActionImport->setText(QApplication::translate("ctkDICOMBrowser", "Import", 0));
#ifndef QT_NO_TOOLTIP
        ActionImport->setToolTip(QApplication::translate("ctkDICOMBrowser", "Import a DICOM file or folder", 0));
#endif // QT_NO_TOOLTIP
        ActionExport->setText(QApplication::translate("ctkDICOMBrowser", "Export", 0));
#ifndef QT_NO_TOOLTIP
        ActionExport->setToolTip(QApplication::translate("ctkDICOMBrowser", "Export selected study/series to a DICOM folder (not yet available)", 0));
#endif // QT_NO_TOOLTIP
        ActionQuery->setText(QApplication::translate("ctkDICOMBrowser", "Query", 0));
#ifndef QT_NO_TOOLTIP
        ActionQuery->setToolTip(QApplication::translate("ctkDICOMBrowser", "Query and Retrieve DICOM studies from a DICOM node", 0));
#endif // QT_NO_TOOLTIP
        ActionSend->setText(QApplication::translate("ctkDICOMBrowser", "Send", 0));
#ifndef QT_NO_TOOLTIP
        ActionSend->setToolTip(QApplication::translate("ctkDICOMBrowser", "Send DICOM Studies to a DICOM node (not yet available)", 0));
#endif // QT_NO_TOOLTIP
        ActionRemove->setText(QApplication::translate("ctkDICOMBrowser", "Remove", 0));
#ifndef QT_NO_TOOLTIP
        ActionRemove->setToolTip(QApplication::translate("ctkDICOMBrowser", "Remove selected series, studies, patients from database", 0));
#endif // QT_NO_TOOLTIP
        ActionRepair->setText(QApplication::translate("ctkDICOMBrowser", "Repair", 0));
#ifndef QT_NO_TOOLTIP
        ActionRepair->setToolTip(QApplication::translate("ctkDICOMBrowser", "Check whether all the files associated with images in the local Database are available on the disk.", 0));
#endif // QT_NO_TOOLTIP
        ToolBar->setWindowTitle(QApplication::translate("ctkDICOMBrowser", "toolBar", 0));
        DatabaseNameLabel->setText(QApplication::translate("ctkDICOMBrowser", "LocalDatabase:", 0));
        tablesDensityLabel->setText(QApplication::translate("ctkDICOMBrowser", "Density", 0));
        tableDensityComboBox->clear();
        tableDensityComboBox->insertItems(0, QStringList()
         << QApplication::translate("ctkDICOMBrowser", "Comfortable", 0)
         << QApplication::translate("ctkDICOMBrowser", "Cozy", 0)
         << QApplication::translate("ctkDICOMBrowser", "Compact", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class ctkDICOMBrowser: public Ui_ctkDICOMBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDICOMBROWSER_H
