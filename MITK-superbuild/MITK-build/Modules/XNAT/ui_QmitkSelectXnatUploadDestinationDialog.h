/********************************************************************************
** Form generated from reading UI file 'QmitkSelectXnatUploadDestinationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSELECTXNATUPLOADDESTINATIONDIALOG_H
#define UI_QMITKSELECTXNATUPLOADDESTINATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QmitkSelectXnatUploadDestinationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbSelectResource;
    QRadioButton *rbSelectFromTreeView;
    QComboBox *cbSelectResources;
    QLineEdit *leResourceName;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbCancel;
    QPushButton *pbUpload;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *QmitkSelectXnatUploadDestinationDialog)
    {
        if (QmitkSelectXnatUploadDestinationDialog->objectName().isEmpty())
            QmitkSelectXnatUploadDestinationDialog->setObjectName(QStringLiteral("QmitkSelectXnatUploadDestinationDialog"));
        QmitkSelectXnatUploadDestinationDialog->resize(419, 210);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkSelectXnatUploadDestinationDialog->sizePolicy().hasHeightForWidth());
        QmitkSelectXnatUploadDestinationDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QmitkSelectXnatUploadDestinationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rbSelectResource = new QRadioButton(QmitkSelectXnatUploadDestinationDialog);
        buttonGroup = new QButtonGroup(QmitkSelectXnatUploadDestinationDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(rbSelectResource);
        rbSelectResource->setObjectName(QStringLiteral("rbSelectResource"));
        rbSelectResource->setChecked(true);

        horizontalLayout->addWidget(rbSelectResource);

        rbSelectFromTreeView = new QRadioButton(QmitkSelectXnatUploadDestinationDialog);
        buttonGroup->addButton(rbSelectFromTreeView);
        rbSelectFromTreeView->setObjectName(QStringLiteral("rbSelectFromTreeView"));
        rbSelectFromTreeView->setChecked(false);

        horizontalLayout->addWidget(rbSelectFromTreeView);


        verticalLayout->addLayout(horizontalLayout);

        cbSelectResources = new QComboBox(QmitkSelectXnatUploadDestinationDialog);
        cbSelectResources->setObjectName(QStringLiteral("cbSelectResources"));

        verticalLayout->addWidget(cbSelectResources);

        leResourceName = new QLineEdit(QmitkSelectXnatUploadDestinationDialog);
        leResourceName->setObjectName(QStringLiteral("leResourceName"));

        verticalLayout->addWidget(leResourceName);

        treeView = new QTreeView(QmitkSelectXnatUploadDestinationDialog);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setHeaderHidden(true);

        verticalLayout->addWidget(treeView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pbCancel = new QPushButton(QmitkSelectXnatUploadDestinationDialog);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));

        horizontalLayout_2->addWidget(pbCancel);

        pbUpload = new QPushButton(QmitkSelectXnatUploadDestinationDialog);
        pbUpload->setObjectName(QStringLiteral("pbUpload"));

        horizontalLayout_2->addWidget(pbUpload);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(QmitkSelectXnatUploadDestinationDialog);

        QMetaObject::connectSlotsByName(QmitkSelectXnatUploadDestinationDialog);
    } // setupUi

    void retranslateUi(QDialog *QmitkSelectXnatUploadDestinationDialog)
    {
        QmitkSelectXnatUploadDestinationDialog->setWindowTitle(QApplication::translate("QmitkSelectXnatUploadDestinationDialog", "Dialog", 0));
        rbSelectResource->setText(QApplication::translate("QmitkSelectXnatUploadDestinationDialog", "Select existing resource folder", 0));
        rbSelectFromTreeView->setText(QApplication::translate("QmitkSelectXnatUploadDestinationDialog", "Select from Treebrowser", 0));
        pbCancel->setText(QApplication::translate("QmitkSelectXnatUploadDestinationDialog", "Cancel", 0));
        pbUpload->setText(QApplication::translate("QmitkSelectXnatUploadDestinationDialog", "Upload", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkSelectXnatUploadDestinationDialog: public Ui_QmitkSelectXnatUploadDestinationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSELECTXNATUPLOADDESTINATIONDIALOG_H
