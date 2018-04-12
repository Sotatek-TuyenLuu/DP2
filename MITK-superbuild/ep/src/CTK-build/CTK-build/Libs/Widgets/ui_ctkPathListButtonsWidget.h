/********************************************************************************
** Form generated from reading UI file 'ctkPathListButtonsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKPATHLISTBUTTONSWIDGET_H
#define UI_CTKPATHLISTBUTTONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkPathListButtonsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *AddFilesButton;
    QToolButton *AddDirectoryButton;
    QToolButton *RemoveButton;
    QToolButton *EditButton;

    void setupUi(QWidget *ctkPathListButtonsWidget)
    {
        if (ctkPathListButtonsWidget->objectName().isEmpty())
            ctkPathListButtonsWidget->setObjectName(QStringLiteral("ctkPathListButtonsWidget"));
        ctkPathListButtonsWidget->resize(302, 25);
        horizontalLayout = new QHBoxLayout(ctkPathListButtonsWidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AddFilesButton = new QToolButton(ctkPathListButtonsWidget);
        AddFilesButton->setObjectName(QStringLiteral("AddFilesButton"));

        horizontalLayout->addWidget(AddFilesButton);

        AddDirectoryButton = new QToolButton(ctkPathListButtonsWidget);
        AddDirectoryButton->setObjectName(QStringLiteral("AddDirectoryButton"));

        horizontalLayout->addWidget(AddDirectoryButton);

        RemoveButton = new QToolButton(ctkPathListButtonsWidget);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));

        horizontalLayout->addWidget(RemoveButton);

        EditButton = new QToolButton(ctkPathListButtonsWidget);
        EditButton->setObjectName(QStringLiteral("EditButton"));

        horizontalLayout->addWidget(EditButton);


        retranslateUi(ctkPathListButtonsWidget);

        QMetaObject::connectSlotsByName(ctkPathListButtonsWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkPathListButtonsWidget)
    {
        ctkPathListButtonsWidget->setWindowTitle(QApplication::translate("ctkPathListButtonsWidget", "Form", 0));
#ifndef QT_NO_TOOLTIP
        AddFilesButton->setToolTip(QApplication::translate("ctkPathListButtonsWidget", "Add files", 0));
#endif // QT_NO_TOOLTIP
        AddFilesButton->setText(QApplication::translate("ctkPathListButtonsWidget", "Add files", 0));
#ifndef QT_NO_TOOLTIP
        AddDirectoryButton->setToolTip(QApplication::translate("ctkPathListButtonsWidget", "Add a directory", 0));
#endif // QT_NO_TOOLTIP
        AddDirectoryButton->setText(QApplication::translate("ctkPathListButtonsWidget", "Add directory", 0));
#ifndef QT_NO_TOOLTIP
        RemoveButton->setToolTip(QApplication::translate("ctkPathListButtonsWidget", "Remove selected entries", 0));
#endif // QT_NO_TOOLTIP
        RemoveButton->setText(QApplication::translate("ctkPathListButtonsWidget", "Remove", 0));
#ifndef QT_NO_TOOLTIP
        EditButton->setToolTip(QApplication::translate("ctkPathListButtonsWidget", "Edit current entry", 0));
#endif // QT_NO_TOOLTIP
        EditButton->setText(QApplication::translate("ctkPathListButtonsWidget", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkPathListButtonsWidget: public Ui_ctkPathListButtonsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKPATHLISTBUTTONSWIDGET_H
