/********************************************************************************
** Form generated from reading UI file 'berryHelpTopicChooser.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BERRYHELPTOPICCHOOSER_H
#define UI_BERRYHELPTOPICCHOOSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HelpTopicChooser
{
public:
    QVBoxLayout *unnamed;
    QLabel *label;
    QListWidget *listWidget;
    QHBoxLayout *layout;
    QSpacerItem *Horizontal_Spacing2;
    QPushButton *buttonDisplay;
    QPushButton *buttonCancel;

    void setupUi(QDialog *HelpTopicChooser)
    {
        if (HelpTopicChooser->objectName().isEmpty())
            HelpTopicChooser->setObjectName(QStringLiteral("HelpTopicChooser"));
        HelpTopicChooser->resize(391, 223);
        HelpTopicChooser->setSizeGripEnabled(true);
        unnamed = new QVBoxLayout(HelpTopicChooser);
#ifndef Q_OS_MAC
        unnamed->setSpacing(6);
#endif
        unnamed->setContentsMargins(11, 11, 11, 11);
        unnamed->setObjectName(QStringLiteral("unnamed"));
        label = new QLabel(HelpTopicChooser);
        label->setObjectName(QStringLiteral("label"));

        unnamed->addWidget(label);

        listWidget = new QListWidget(HelpTopicChooser);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        unnamed->addWidget(listWidget);

        layout = new QHBoxLayout();
#ifndef Q_OS_MAC
        layout->setSpacing(6);
#endif
        layout->setContentsMargins(0, 0, 0, 0);
        layout->setObjectName(QStringLiteral("layout"));
        Horizontal_Spacing2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout->addItem(Horizontal_Spacing2);

        buttonDisplay = new QPushButton(HelpTopicChooser);
        buttonDisplay->setObjectName(QStringLiteral("buttonDisplay"));
        buttonDisplay->setAutoDefault(true);
        buttonDisplay->setDefault(true);

        layout->addWidget(buttonDisplay);

        buttonCancel = new QPushButton(HelpTopicChooser);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        layout->addWidget(buttonCancel);


        unnamed->addLayout(layout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(listWidget);
#endif // QT_NO_SHORTCUT

        retranslateUi(HelpTopicChooser);

        QMetaObject::connectSlotsByName(HelpTopicChooser);
    } // setupUi

    void retranslateUi(QDialog *HelpTopicChooser)
    {
        HelpTopicChooser->setWindowTitle(QApplication::translate("HelpTopicChooser", "Choose Topic", 0));
        label->setText(QApplication::translate("HelpTopicChooser", "&Topics", 0));
        buttonDisplay->setText(QApplication::translate("HelpTopicChooser", "&Display", 0));
        buttonCancel->setText(QApplication::translate("HelpTopicChooser", "&Close", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpTopicChooser: public Ui_HelpTopicChooser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BERRYHELPTOPICCHOOSER_H
