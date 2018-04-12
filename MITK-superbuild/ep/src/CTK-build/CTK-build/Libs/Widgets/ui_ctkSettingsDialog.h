/********************************************************************************
** Form generated from reading UI file 'ctkSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKSETTINGSDIALOG_H
#define UI_CTKSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *SettingsTreeWidget;
    QStackedWidget *SettingsStackedWidget;
    QDialogButtonBox *SettingsButtonBox;
    QLabel *RestartRequiredLabel;

    void setupUi(QDialog *ctkSettingsDialog)
    {
        if (ctkSettingsDialog->objectName().isEmpty())
            ctkSettingsDialog->setObjectName(QStringLiteral("ctkSettingsDialog"));
        ctkSettingsDialog->resize(457, 397);
        gridLayout = new QGridLayout(ctkSettingsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        SettingsTreeWidget = new QTreeWidget(ctkSettingsDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        SettingsTreeWidget->setHeaderItem(__qtreewidgetitem);
        SettingsTreeWidget->setObjectName(QStringLiteral("SettingsTreeWidget"));
        SettingsTreeWidget->setHeaderHidden(true);

        gridLayout->addWidget(SettingsTreeWidget, 0, 0, 2, 1);

        SettingsStackedWidget = new QStackedWidget(ctkSettingsDialog);
        SettingsStackedWidget->setObjectName(QStringLiteral("SettingsStackedWidget"));

        gridLayout->addWidget(SettingsStackedWidget, 0, 1, 1, 1);

        SettingsButtonBox = new QDialogButtonBox(ctkSettingsDialog);
        SettingsButtonBox->setObjectName(QStringLiteral("SettingsButtonBox"));
        SettingsButtonBox->setOrientation(Qt::Horizontal);
        SettingsButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);

        gridLayout->addWidget(SettingsButtonBox, 2, 0, 1, 2);

        RestartRequiredLabel = new QLabel(ctkSettingsDialog);
        RestartRequiredLabel->setObjectName(QStringLiteral("RestartRequiredLabel"));
        RestartRequiredLabel->setFrameShape(QFrame::StyledPanel);
        RestartRequiredLabel->setFrameShadow(QFrame::Sunken);
        RestartRequiredLabel->setTextFormat(Qt::RichText);
        RestartRequiredLabel->setScaledContents(true);
        RestartRequiredLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        RestartRequiredLabel->setWordWrap(true);
        RestartRequiredLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(RestartRequiredLabel, 1, 1, 1, 1);


        retranslateUi(ctkSettingsDialog);
        QObject::connect(SettingsButtonBox, SIGNAL(accepted()), ctkSettingsDialog, SLOT(accept()));
        QObject::connect(SettingsButtonBox, SIGNAL(rejected()), ctkSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ctkSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ctkSettingsDialog)
    {
        ctkSettingsDialog->setWindowTitle(QApplication::translate("ctkSettingsDialog", "Settings", 0));
        RestartRequiredLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ctkSettingsDialog: public Ui_ctkSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKSETTINGSDIALOG_H
