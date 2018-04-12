/********************************************************************************
** Form generated from reading UI file 'QmitkPreferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKPREFERENCESDIALOG_H
#define UI_QMITKPREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkPreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    ctkSearchBox *m_Keyword;
    QTreeWidget *m_PreferencesTree;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *m_Headline;
    QStackedWidget *m_PreferencesPanel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QmitkPreferencesDialog)
    {
        if (QmitkPreferencesDialog->objectName().isEmpty())
            QmitkPreferencesDialog->setObjectName(QStringLiteral("QmitkPreferencesDialog"));
        QmitkPreferencesDialog->resize(878, 602);
        QIcon icon;
        icon.addFile(QStringLiteral(":/org.mitk.gui.qt.common/preferences-system.png"), QSize(), QIcon::Normal, QIcon::Off);
        QmitkPreferencesDialog->setWindowIcon(icon);
        QmitkPreferencesDialog->setSizeGripEnabled(true);
        QmitkPreferencesDialog->setModal(true);
        verticalLayout = new QVBoxLayout(QmitkPreferencesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(QmitkPreferencesDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setMinimumSize(QSize(860, 0));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_Keyword = new ctkSearchBox(widget);
        m_Keyword->setObjectName(QStringLiteral("m_Keyword"));

        verticalLayout_2->addWidget(m_Keyword);

        m_PreferencesTree = new QTreeWidget(widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        m_PreferencesTree->setHeaderItem(__qtreewidgetitem);
        m_PreferencesTree->setObjectName(QStringLiteral("m_PreferencesTree"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_PreferencesTree->sizePolicy().hasHeightForWidth());
        m_PreferencesTree->setSizePolicy(sizePolicy);
        m_PreferencesTree->setHeaderHidden(true);

        verticalLayout_2->addWidget(m_PreferencesTree);

        splitter->addWidget(widget);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, 0, 0);
        m_Headline = new QLabel(widget_2);
        m_Headline->setObjectName(QStringLiteral("m_Headline"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(192, 192, 192, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        m_Headline->setPalette(palette);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        m_Headline->setFont(font);
        m_Headline->setStyleSheet(QLatin1String("background-color:   silver; \n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: white;\n"
"color: white;"));

        verticalLayout_3->addWidget(m_Headline);

        m_PreferencesPanel = new QStackedWidget(widget_2);
        m_PreferencesPanel->setObjectName(QStringLiteral("m_PreferencesPanel"));

        verticalLayout_3->addWidget(m_PreferencesPanel);

        splitter->addWidget(widget_2);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(QmitkPreferencesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QmitkPreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QmitkPreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QmitkPreferencesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QmitkPreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *QmitkPreferencesDialog)
    {
        QmitkPreferencesDialog->setWindowTitle(QApplication::translate("QmitkPreferencesDialog", "Preferences", 0));
#ifndef QT_NO_WHATSTHIS
        QmitkPreferencesDialog->setWhatsThis(QApplication::translate("QmitkPreferencesDialog", "Dialog to set application wide preferences", 0));
#endif // QT_NO_WHATSTHIS
        m_Keyword->setPlaceholderText(QApplication::translate("QmitkPreferencesDialog", "Filter", 0));
        m_Headline->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QmitkPreferencesDialog: public Ui_QmitkPreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKPREFERENCESDIALOG_H
