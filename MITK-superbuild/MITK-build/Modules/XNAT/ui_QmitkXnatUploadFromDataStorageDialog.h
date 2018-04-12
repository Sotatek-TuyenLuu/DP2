/********************************************************************************
** Form generated from reading UI file 'QmitkXnatUploadFromDataStorageDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKXNATUPLOADFROMDATASTORAGEDIALOG_H
#define UI_QMITKXNATUPLOADFROMDATASTORAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "QmitkDataStorageComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkXnatUploadFromDataStorageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblSelectData;
    QmitkDataStorageComboBox *cBDataSelection;
    QCheckBox *cbUploadMITKProject;
    QLineEdit *leMITKProjectFileName;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QPushButton *btnUpload;

    void setupUi(QDialog *QmitkXnatUploadFromDataStorageDialog)
    {
        if (QmitkXnatUploadFromDataStorageDialog->objectName().isEmpty())
            QmitkXnatUploadFromDataStorageDialog->setObjectName(QStringLiteral("QmitkXnatUploadFromDataStorageDialog"));
        QmitkXnatUploadFromDataStorageDialog->resize(400, 164);
        verticalLayout = new QVBoxLayout(QmitkXnatUploadFromDataStorageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblSelectData = new QLabel(QmitkXnatUploadFromDataStorageDialog);
        lblSelectData->setObjectName(QStringLiteral("lblSelectData"));

        verticalLayout->addWidget(lblSelectData);

        cBDataSelection = new QmitkDataStorageComboBox(QmitkXnatUploadFromDataStorageDialog);
        cBDataSelection->setObjectName(QStringLiteral("cBDataSelection"));

        verticalLayout->addWidget(cBDataSelection);

        cbUploadMITKProject = new QCheckBox(QmitkXnatUploadFromDataStorageDialog);
        cbUploadMITKProject->setObjectName(QStringLiteral("cbUploadMITKProject"));

        verticalLayout->addWidget(cbUploadMITKProject);

        leMITKProjectFileName = new QLineEdit(QmitkXnatUploadFromDataStorageDialog);
        leMITKProjectFileName->setObjectName(QStringLiteral("leMITKProjectFileName"));

        verticalLayout->addWidget(leMITKProjectFileName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCancel = new QPushButton(QmitkXnatUploadFromDataStorageDialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        btnUpload = new QPushButton(QmitkXnatUploadFromDataStorageDialog);
        btnUpload->setObjectName(QStringLiteral("btnUpload"));
        btnUpload->setEnabled(false);

        horizontalLayout->addWidget(btnUpload);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QmitkXnatUploadFromDataStorageDialog);

        QMetaObject::connectSlotsByName(QmitkXnatUploadFromDataStorageDialog);
    } // setupUi

    void retranslateUi(QDialog *QmitkXnatUploadFromDataStorageDialog)
    {
        QmitkXnatUploadFromDataStorageDialog->setWindowTitle(QApplication::translate("QmitkXnatUploadFromDataStorageDialog", "Dialog", 0));
        lblSelectData->setText(QApplication::translate("QmitkXnatUploadFromDataStorageDialog", "Select the data for upload:", 0));
#ifndef QT_NO_TOOLTIP
        cbUploadMITKProject->setToolTip(QApplication::translate("QmitkXnatUploadFromDataStorageDialog", "Uploads all data as MITK project file", 0));
#endif // QT_NO_TOOLTIP
        cbUploadMITKProject->setText(QApplication::translate("QmitkXnatUploadFromDataStorageDialog", "Upload scene as MITK project file", 0));
        leMITKProjectFileName->setPlaceholderText(QApplication::translate("QmitkXnatUploadFromDataStorageDialog", "Enter project file name", 0));
        btnCancel->setText(QApplication::translate("QmitkXnatUploadFromDataStorageDialog", "Cancel", 0));
        btnUpload->setText(QApplication::translate("QmitkXnatUploadFromDataStorageDialog", "Upload", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkXnatUploadFromDataStorageDialog: public Ui_QmitkXnatUploadFromDataStorageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKXNATUPLOADFROMDATASTORAGEDIALOG_H
