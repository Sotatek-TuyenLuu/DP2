/********************************************************************************
** Form generated from reading UI file 'ctkErrorLogWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKERRORLOGWIDGET_H
#define UI_CTKERRORLOGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkErrorLogWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *ShowAllEntryButton;
    QPushButton *ShowErrorEntryButton;
    QPushButton *ShowWarningEntryButton;
    QPushButton *ShowInfoEntryButton;
    QFrame *line;
    QPushButton *ClearButton;
    QTableView *ErrorLogTableView;
    QTextBrowser *ErrorLogDescription;

    void setupUi(QWidget *ctkErrorLogWidget)
    {
        if (ctkErrorLogWidget->objectName().isEmpty())
            ctkErrorLogWidget->setObjectName(QStringLiteral("ctkErrorLogWidget"));
        ctkErrorLogWidget->resize(754, 429);
        verticalLayout = new QVBoxLayout(ctkErrorLogWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ShowAllEntryButton = new QPushButton(ctkErrorLogWidget);
        ShowAllEntryButton->setObjectName(QStringLiteral("ShowAllEntryButton"));
        ShowAllEntryButton->setChecked(false);

        horizontalLayout->addWidget(ShowAllEntryButton);

        ShowErrorEntryButton = new QPushButton(ctkErrorLogWidget);
        ShowErrorEntryButton->setObjectName(QStringLiteral("ShowErrorEntryButton"));
        ShowErrorEntryButton->setCheckable(true);

        horizontalLayout->addWidget(ShowErrorEntryButton);

        ShowWarningEntryButton = new QPushButton(ctkErrorLogWidget);
        ShowWarningEntryButton->setObjectName(QStringLiteral("ShowWarningEntryButton"));
        ShowWarningEntryButton->setCheckable(true);

        horizontalLayout->addWidget(ShowWarningEntryButton);

        ShowInfoEntryButton = new QPushButton(ctkErrorLogWidget);
        ShowInfoEntryButton->setObjectName(QStringLiteral("ShowInfoEntryButton"));
        ShowInfoEntryButton->setCheckable(true);

        horizontalLayout->addWidget(ShowInfoEntryButton);

        line = new QFrame(ctkErrorLogWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        ClearButton = new QPushButton(ctkErrorLogWidget);
        ClearButton->setObjectName(QStringLiteral("ClearButton"));

        horizontalLayout->addWidget(ClearButton);


        verticalLayout->addLayout(horizontalLayout);

        ErrorLogTableView = new QTableView(ctkErrorLogWidget);
        ErrorLogTableView->setObjectName(QStringLiteral("ErrorLogTableView"));
        ErrorLogTableView->setAlternatingRowColors(true);
        ErrorLogTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ErrorLogTableView->setCornerButtonEnabled(false);
        ErrorLogTableView->horizontalHeader()->setVisible(false);
        ErrorLogTableView->horizontalHeader()->setStretchLastSection(true);
        ErrorLogTableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(ErrorLogTableView);

        ErrorLogDescription = new QTextBrowser(ctkErrorLogWidget);
        ErrorLogDescription->setObjectName(QStringLiteral("ErrorLogDescription"));

        verticalLayout->addWidget(ErrorLogDescription);


        retranslateUi(ctkErrorLogWidget);

        QMetaObject::connectSlotsByName(ctkErrorLogWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkErrorLogWidget)
    {
        ctkErrorLogWidget->setWindowTitle(QApplication::translate("ctkErrorLogWidget", "Log messages", 0));
        ShowAllEntryButton->setText(QApplication::translate("ctkErrorLogWidget", "&All", 0));
        ShowErrorEntryButton->setText(QApplication::translate("ctkErrorLogWidget", "&Errors", 0));
        ShowWarningEntryButton->setText(QApplication::translate("ctkErrorLogWidget", "&Warnings", 0));
        ShowInfoEntryButton->setText(QApplication::translate("ctkErrorLogWidget", "&Messages", 0));
        ClearButton->setText(QApplication::translate("ctkErrorLogWidget", "&Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkErrorLogWidget: public Ui_ctkErrorLogWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKERRORLOGWIDGET_H
