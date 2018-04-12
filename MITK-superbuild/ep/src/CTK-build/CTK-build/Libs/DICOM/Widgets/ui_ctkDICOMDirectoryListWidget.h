/********************************************************************************
** Form generated from reading UI file 'ctkDICOMDirectoryListWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDICOMDIRECTORYLISTWIDGET_H
#define UI_CTKDICOMDIRECTORYLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkDICOMDirectoryListWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *directoryListView;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *removeButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QWidget *ctkDICOMDirectoryListWidget)
    {
        if (ctkDICOMDirectoryListWidget->objectName().isEmpty())
            ctkDICOMDirectoryListWidget->setObjectName(QStringLiteral("ctkDICOMDirectoryListWidget"));
        ctkDICOMDirectoryListWidget->resize(393, 325);
        verticalLayout = new QVBoxLayout(ctkDICOMDirectoryListWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ctkDICOMDirectoryListWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        directoryListView = new QListView(ctkDICOMDirectoryListWidget);
        directoryListView->setObjectName(QStringLiteral("directoryListView"));

        verticalLayout->addWidget(directoryListView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addButton = new QPushButton(ctkDICOMDirectoryListWidget);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout->addWidget(addButton);

        removeButton = new QPushButton(ctkDICOMDirectoryListWidget);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        horizontalLayout->addWidget(removeButton);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(ctkDICOMDirectoryListWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ctkDICOMDirectoryListWidget);

        QMetaObject::connectSlotsByName(ctkDICOMDirectoryListWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkDICOMDirectoryListWidget)
    {
        ctkDICOMDirectoryListWidget->setWindowTitle(QApplication::translate("ctkDICOMDirectoryListWidget", "DICOM Directories", 0));
        label->setText(QApplication::translate("ctkDICOMDirectoryListWidget", "DICOM Directories", 0));
        addButton->setText(QApplication::translate("ctkDICOMDirectoryListWidget", "Add Directory", 0));
        removeButton->setText(QApplication::translate("ctkDICOMDirectoryListWidget", "Remove Directory", 0));
        okButton->setText(QApplication::translate("ctkDICOMDirectoryListWidget", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkDICOMDirectoryListWidget: public Ui_ctkDICOMDirectoryListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDICOMDIRECTORYLISTWIDGET_H
