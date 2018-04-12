/********************************************************************************
** Form generated from reading UI file 'ctkDICOMServerNodeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDICOMSERVERNODEWIDGET_H
#define UI_CTKDICOMSERVERNODEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkDICOMServerNodeWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *CallingAETitleLabel;
    QLineEdit *CallingAETitle;
    QPushButton *AddButton;
    QLabel *StorageAETitleLabel;
    QLineEdit *StorageAETitle;
    QLabel *StoratePortLabel;
    QLineEdit *StoragePort;
    QPushButton *RemoveButton;
    QGroupBox *ServersGroupBox;
    QVBoxLayout *verticalLayout;
    QTableWidget *NodeTable;

    void setupUi(QWidget *ctkDICOMServerNodeWidget)
    {
        if (ctkDICOMServerNodeWidget->objectName().isEmpty())
            ctkDICOMServerNodeWidget->setObjectName(QStringLiteral("ctkDICOMServerNodeWidget"));
        ctkDICOMServerNodeWidget->resize(504, 347);
        gridLayout = new QGridLayout(ctkDICOMServerNodeWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        CallingAETitleLabel = new QLabel(ctkDICOMServerNodeWidget);
        CallingAETitleLabel->setObjectName(QStringLiteral("CallingAETitleLabel"));

        gridLayout->addWidget(CallingAETitleLabel, 0, 0, 1, 1);

        CallingAETitle = new QLineEdit(ctkDICOMServerNodeWidget);
        CallingAETitle->setObjectName(QStringLiteral("CallingAETitle"));

        gridLayout->addWidget(CallingAETitle, 0, 1, 1, 3);

        AddButton = new QPushButton(ctkDICOMServerNodeWidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));

        gridLayout->addWidget(AddButton, 2, 0, 1, 2);

        StorageAETitleLabel = new QLabel(ctkDICOMServerNodeWidget);
        StorageAETitleLabel->setObjectName(QStringLiteral("StorageAETitleLabel"));

        gridLayout->addWidget(StorageAETitleLabel, 3, 0, 1, 1);

        StorageAETitle = new QLineEdit(ctkDICOMServerNodeWidget);
        StorageAETitle->setObjectName(QStringLiteral("StorageAETitle"));

        gridLayout->addWidget(StorageAETitle, 3, 1, 1, 1);

        StoratePortLabel = new QLabel(ctkDICOMServerNodeWidget);
        StoratePortLabel->setObjectName(QStringLiteral("StoratePortLabel"));

        gridLayout->addWidget(StoratePortLabel, 3, 2, 1, 1);

        StoragePort = new QLineEdit(ctkDICOMServerNodeWidget);
        StoragePort->setObjectName(QStringLiteral("StoragePort"));

        gridLayout->addWidget(StoragePort, 3, 3, 1, 1);

        RemoveButton = new QPushButton(ctkDICOMServerNodeWidget);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));

        gridLayout->addWidget(RemoveButton, 2, 2, 1, 2);

        ServersGroupBox = new QGroupBox(ctkDICOMServerNodeWidget);
        ServersGroupBox->setObjectName(QStringLiteral("ServersGroupBox"));
        verticalLayout = new QVBoxLayout(ServersGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        NodeTable = new QTableWidget(ServersGroupBox);
        if (NodeTable->columnCount() < 5)
            NodeTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        NodeTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        NodeTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        NodeTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        NodeTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        NodeTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        NodeTable->setObjectName(QStringLiteral("NodeTable"));
        NodeTable->setColumnCount(5);
        NodeTable->horizontalHeader()->setStretchLastSection(true);
        NodeTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(NodeTable);


        gridLayout->addWidget(ServersGroupBox, 1, 0, 1, 4);


        retranslateUi(ctkDICOMServerNodeWidget);

        QMetaObject::connectSlotsByName(ctkDICOMServerNodeWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkDICOMServerNodeWidget)
    {
        ctkDICOMServerNodeWidget->setWindowTitle(QApplication::translate("ctkDICOMServerNodeWidget", "Server List", 0));
        CallingAETitleLabel->setText(QApplication::translate("ctkDICOMServerNodeWidget", "Calling AETitle", 0));
        AddButton->setText(QApplication::translate("ctkDICOMServerNodeWidget", "Add Server", 0));
        StorageAETitleLabel->setText(QApplication::translate("ctkDICOMServerNodeWidget", "Storage AETitle", 0));
        StoratePortLabel->setText(QApplication::translate("ctkDICOMServerNodeWidget", "Storage Port", 0));
        RemoveButton->setText(QApplication::translate("ctkDICOMServerNodeWidget", "Remove Server", 0));
        ServersGroupBox->setTitle(QApplication::translate("ctkDICOMServerNodeWidget", "Servers", 0));
        QTableWidgetItem *___qtablewidgetitem = NodeTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ctkDICOMServerNodeWidget", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = NodeTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ctkDICOMServerNodeWidget", "AETitle", 0));
        QTableWidgetItem *___qtablewidgetitem2 = NodeTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ctkDICOMServerNodeWidget", "Address", 0));
        QTableWidgetItem *___qtablewidgetitem3 = NodeTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ctkDICOMServerNodeWidget", "Port", 0));
        QTableWidgetItem *___qtablewidgetitem4 = NodeTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ctkDICOMServerNodeWidget", "CGET", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkDICOMServerNodeWidget: public Ui_ctkDICOMServerNodeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDICOMSERVERNODEWIDGET_H
