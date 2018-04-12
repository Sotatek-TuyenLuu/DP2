/********************************************************************************
** Form generated from reading UI file 'QmitkServiceListWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSERVICELISTWIDGETCONTROLS_H
#define UI_QMITKSERVICELISTWIDGETCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkServiceListWidgetControls
{
public:
    QGridLayout *gridLayout;
    QListWidget *m_ServiceList;

    void setupUi(QWidget *QmitkServiceListWidgetControls)
    {
        if (QmitkServiceListWidgetControls->objectName().isEmpty())
            QmitkServiceListWidgetControls->setObjectName(QStringLiteral("QmitkServiceListWidgetControls"));
        QmitkServiceListWidgetControls->resize(323, 231);
        QmitkServiceListWidgetControls->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(QmitkServiceListWidgetControls);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_ServiceList = new QListWidget(QmitkServiceListWidgetControls);
        m_ServiceList->setObjectName(QStringLiteral("m_ServiceList"));

        gridLayout->addWidget(m_ServiceList, 0, 0, 1, 1);


        retranslateUi(QmitkServiceListWidgetControls);

        QMetaObject::connectSlotsByName(QmitkServiceListWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkServiceListWidgetControls)
    {
        QmitkServiceListWidgetControls->setWindowTitle(QApplication::translate("QmitkServiceListWidgetControls", "QmitkServiceListWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkServiceListWidgetControls: public Ui_QmitkServiceListWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSERVICELISTWIDGETCONTROLS_H
