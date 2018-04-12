/********************************************************************************
** Form generated from reading UI file 'ctkDICOMImportWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDICOMIMPORTWIDGET_H
#define UI_CTKDICOMIMPORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkDirectoryButton.h"

QT_BEGIN_NAMESPACE

class Ui_ctkDICOMImportWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    ctkDirectoryButton *DirectoryWidget;
    QTreeView *directoryList;
    QCheckBox *copyCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ctkDICOMImportWidget)
    {
        if (ctkDICOMImportWidget->objectName().isEmpty())
            ctkDICOMImportWidget->setObjectName(QStringLiteral("ctkDICOMImportWidget"));
        ctkDICOMImportWidget->resize(400, 420);
        ctkDICOMImportWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(ctkDICOMImportWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        DirectoryWidget = new ctkDirectoryButton(ctkDICOMImportWidget);
        DirectoryWidget->setObjectName(QStringLiteral("DirectoryWidget"));

        verticalLayout_2->addWidget(DirectoryWidget);

        directoryList = new QTreeView(ctkDICOMImportWidget);
        directoryList->setObjectName(QStringLiteral("directoryList"));

        verticalLayout_2->addWidget(directoryList);

        copyCheckBox = new QCheckBox(ctkDICOMImportWidget);
        copyCheckBox->setObjectName(QStringLiteral("copyCheckBox"));

        verticalLayout_2->addWidget(copyCheckBox);

        buttonBox = new QDialogButtonBox(ctkDICOMImportWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(ctkDICOMImportWidget);
        QObject::connect(buttonBox, SIGNAL(accepted()), ctkDICOMImportWidget, SLOT(close()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ctkDICOMImportWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ctkDICOMImportWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkDICOMImportWidget)
    {
        ctkDICOMImportWidget->setWindowTitle(QApplication::translate("ctkDICOMImportWidget", "Import DICOM", 0));
        copyCheckBox->setText(QApplication::translate("ctkDICOMImportWidget", "Copy to library", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkDICOMImportWidget: public Ui_ctkDICOMImportWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDICOMIMPORTWIDGET_H
