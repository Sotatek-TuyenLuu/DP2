/********************************************************************************
** Form generated from reading UI file 'ctkDICOMTableManager.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDICOMTABLEMANAGER_H
#define UI_CTKDICOMTABLEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkDICOMTableView.h"

QT_BEGIN_NAMESPACE

class Ui_ctkDICOMTableManager
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *tableSplitter;
    ctkDICOMTableView *patientsTable;
    ctkDICOMTableView *studiesTable;
    ctkDICOMTableView *seriesTable;

    void setupUi(QWidget *ctkDICOMTableManager)
    {
        if (ctkDICOMTableManager->objectName().isEmpty())
            ctkDICOMTableManager->setObjectName(QStringLiteral("ctkDICOMTableManager"));
        ctkDICOMTableManager->resize(833, 455);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ctkDICOMTableManager->sizePolicy().hasHeightForWidth());
        ctkDICOMTableManager->setSizePolicy(sizePolicy);
        ctkDICOMTableManager->setMinimumSize(QSize(800, 400));
        verticalLayout = new QVBoxLayout(ctkDICOMTableManager);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableSplitter = new QSplitter(ctkDICOMTableManager);
        tableSplitter->setObjectName(QStringLiteral("tableSplitter"));
        sizePolicy.setHeightForWidth(tableSplitter->sizePolicy().hasHeightForWidth());
        tableSplitter->setSizePolicy(sizePolicy);
        tableSplitter->setStyleSheet(QLatin1String("QSplitter::handle {background-color: rgb(200,200,200);}\n"
"QSplitter::handle:horizontal {width: 2px;}\n"
"QSplitter::handle:vertical {height: 2px;}"));
        tableSplitter->setOrientation(Qt::Horizontal);
        tableSplitter->setChildrenCollapsible(false);
        patientsTable = new ctkDICOMTableView(tableSplitter);
        patientsTable->setObjectName(QStringLiteral("patientsTable"));
        tableSplitter->addWidget(patientsTable);
        studiesTable = new ctkDICOMTableView(tableSplitter);
        studiesTable->setObjectName(QStringLiteral("studiesTable"));
        tableSplitter->addWidget(studiesTable);
        seriesTable = new ctkDICOMTableView(tableSplitter);
        seriesTable->setObjectName(QStringLiteral("seriesTable"));
        tableSplitter->addWidget(seriesTable);

        verticalLayout->addWidget(tableSplitter);


        retranslateUi(ctkDICOMTableManager);
        QObject::connect(patientsTable, SIGNAL(selectionChanged(QStringList)), ctkDICOMTableManager, SLOT(onPatientsSelectionChanged(QStringList)));
        QObject::connect(studiesTable, SIGNAL(selectionChanged(QStringList)), ctkDICOMTableManager, SLOT(onStudiesSelectionChanged(QStringList)));
        QObject::connect(patientsTable, SIGNAL(queryChanged(QStringList)), ctkDICOMTableManager, SLOT(onPatientsQueryChanged(QStringList)));
        QObject::connect(studiesTable, SIGNAL(queryChanged(QStringList)), ctkDICOMTableManager, SLOT(onStudiesQueryChanged(QStringList)));
        QObject::connect(patientsTable, SIGNAL(queryChanged(QStringList)), studiesTable, SLOT(onUpdateQuery(QStringList)));
        QObject::connect(studiesTable, SIGNAL(queryChanged(QStringList)), seriesTable, SLOT(onUpdateQuery(QStringList)));
        QObject::connect(patientsTable, SIGNAL(selectionChanged(QStringList)), studiesTable, SLOT(onUpdateQuery(QStringList)));
        QObject::connect(studiesTable, SIGNAL(selectionChanged(QStringList)), seriesTable, SLOT(onUpdateQuery(QStringList)));
        QObject::connect(patientsTable, SIGNAL(selectionChanged(QStringList)), studiesTable, SLOT(selectAll()));
        QObject::connect(studiesTable, SIGNAL(selectionChanged(QStringList)), seriesTable, SLOT(selectAll()));

        QMetaObject::connectSlotsByName(ctkDICOMTableManager);
    } // setupUi

    void retranslateUi(QWidget *ctkDICOMTableManager)
    {
        ctkDICOMTableManager->setWindowTitle(QApplication::translate("ctkDICOMTableManager", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkDICOMTableManager: public Ui_ctkDICOMTableManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDICOMTABLEMANAGER_H
