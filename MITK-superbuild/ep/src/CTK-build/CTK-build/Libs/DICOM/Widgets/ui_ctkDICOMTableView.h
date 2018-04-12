/********************************************************************************
** Form generated from reading UI file 'ctkDICOMTableView.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDICOMTABLEVIEW_H
#define UI_CTKDICOMTABLEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ctkSearchBox.h>

QT_BEGIN_NAMESPACE

class Ui_ctkDICOMTableView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblTableName;
    QSpacerItem *horizontalSpacer;
    ctkSearchBox *leSearchBox;
    QTableView *tblDicomDatabaseView;

    void setupUi(QWidget *ctkDICOMTableView)
    {
        if (ctkDICOMTableView->objectName().isEmpty())
            ctkDICOMTableView->setObjectName(QStringLiteral("ctkDICOMTableView"));
        ctkDICOMTableView->resize(794, 462);
        verticalLayout = new QVBoxLayout(ctkDICOMTableView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblTableName = new QLabel(ctkDICOMTableView);
        lblTableName->setObjectName(QStringLiteral("lblTableName"));

        horizontalLayout->addWidget(lblTableName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        leSearchBox = new ctkSearchBox(ctkDICOMTableView);
        leSearchBox->setObjectName(QStringLiteral("leSearchBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leSearchBox->sizePolicy().hasHeightForWidth());
        leSearchBox->setSizePolicy(sizePolicy);
        leSearchBox->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(leSearchBox);


        verticalLayout->addLayout(horizontalLayout);

        tblDicomDatabaseView = new QTableView(ctkDICOMTableView);
        tblDicomDatabaseView->setObjectName(QStringLiteral("tblDicomDatabaseView"));
        tblDicomDatabaseView->setStyleSheet(QStringLiteral("font: 75 10pt \"Lucida Grande\";"));
        tblDicomDatabaseView->setAlternatingRowColors(true);
        tblDicomDatabaseView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblDicomDatabaseView->setTextElideMode(Qt::ElideMiddle);
        tblDicomDatabaseView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tblDicomDatabaseView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tblDicomDatabaseView->setShowGrid(false);
        tblDicomDatabaseView->setGridStyle(Qt::SolidLine);
        tblDicomDatabaseView->horizontalHeader()->setStretchLastSection(true);
        tblDicomDatabaseView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tblDicomDatabaseView);


        retranslateUi(ctkDICOMTableView);

        QMetaObject::connectSlotsByName(ctkDICOMTableView);
    } // setupUi

    void retranslateUi(QWidget *ctkDICOMTableView)
    {
        ctkDICOMTableView->setWindowTitle(QApplication::translate("ctkDICOMTableView", "Form", 0));
        lblTableName->setText(QApplication::translate("ctkDICOMTableView", "TextLabel", 0));
        leSearchBox->setText(QString());
        leSearchBox->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class ctkDICOMTableView: public Ui_ctkDICOMTableView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDICOMTABLEVIEW_H
