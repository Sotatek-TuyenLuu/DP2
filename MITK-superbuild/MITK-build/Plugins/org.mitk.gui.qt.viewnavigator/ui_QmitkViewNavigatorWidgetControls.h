/********************************************************************************
** Form generated from reading UI file 'QmitkViewNavigatorWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKVIEWNAVIGATORWIDGETCONTROLS_H
#define UI_QMITKVIEWNAVIGATORWIDGETCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkViewNavigatorWidgetControls
{
public:
    QVBoxLayout *verticalLayout;
    ctkSearchBox *lineEdit;
    QTreeView *m_PluginTreeView;

    void setupUi(QWidget *QmitkViewNavigatorWidgetControls)
    {
        if (QmitkViewNavigatorWidgetControls->objectName().isEmpty())
            QmitkViewNavigatorWidgetControls->setObjectName(QStringLiteral("QmitkViewNavigatorWidgetControls"));
        QmitkViewNavigatorWidgetControls->resize(752, 974);
        QmitkViewNavigatorWidgetControls->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(QmitkViewNavigatorWidgetControls);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new ctkSearchBox(QmitkViewNavigatorWidgetControls);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        m_PluginTreeView = new QTreeView(QmitkViewNavigatorWidgetControls);
        m_PluginTreeView->setObjectName(QStringLiteral("m_PluginTreeView"));
        m_PluginTreeView->setRootIsDecorated(true);
        m_PluginTreeView->header()->setVisible(false);

        verticalLayout->addWidget(m_PluginTreeView);


        retranslateUi(QmitkViewNavigatorWidgetControls);

        QMetaObject::connectSlotsByName(QmitkViewNavigatorWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkViewNavigatorWidgetControls)
    {
        QmitkViewNavigatorWidgetControls->setWindowTitle(QApplication::translate("QmitkViewNavigatorWidgetControls", "QmitkTemplate", 0));
        lineEdit->setPlaceholderText(QApplication::translate("QmitkViewNavigatorWidgetControls", "Filter...", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkViewNavigatorWidgetControls: public Ui_QmitkViewNavigatorWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKVIEWNAVIGATORWIDGETCONTROLS_H
