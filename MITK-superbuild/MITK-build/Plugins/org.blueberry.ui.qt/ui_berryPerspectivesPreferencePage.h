/********************************************************************************
** Form generated from reading UI file 'berryPerspectivesPreferencePage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BERRYPERSPECTIVESPREFERENCEPAGE_H
#define UI_BERRYPERSPECTIVESPREFERENCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PerspectivesPreferencePage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *sameWindowButton;
    QRadioButton *newWindowButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *perspectivesListWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *makeDefaultButton;
    QPushButton *revertButton;
    QPushButton *deleteButton;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;

    void setupUi(QWidget *PerspectivesPreferencePage)
    {
        if (PerspectivesPreferencePage->objectName().isEmpty())
            PerspectivesPreferencePage->setObjectName(QStringLiteral("PerspectivesPreferencePage"));
        PerspectivesPreferencePage->resize(400, 300);
        verticalLayout = new QVBoxLayout(PerspectivesPreferencePage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(PerspectivesPreferencePage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sameWindowButton = new QRadioButton(groupBox);
        sameWindowButton->setObjectName(QStringLiteral("sameWindowButton"));

        horizontalLayout->addWidget(sameWindowButton);

        newWindowButton = new QRadioButton(groupBox);
        newWindowButton->setObjectName(QStringLiteral("newWindowButton"));

        horizontalLayout->addWidget(newWindowButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBox);

        label = new QLabel(PerspectivesPreferencePage);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        perspectivesListWidget = new QListWidget(PerspectivesPreferencePage);
        perspectivesListWidget->setObjectName(QStringLiteral("perspectivesListWidget"));

        horizontalLayout_2->addWidget(perspectivesListWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        makeDefaultButton = new QPushButton(PerspectivesPreferencePage);
        makeDefaultButton->setObjectName(QStringLiteral("makeDefaultButton"));
        makeDefaultButton->setEnabled(false);

        verticalLayout_2->addWidget(makeDefaultButton);

        revertButton = new QPushButton(PerspectivesPreferencePage);
        revertButton->setObjectName(QStringLiteral("revertButton"));
        revertButton->setEnabled(false);

        verticalLayout_2->addWidget(revertButton);

        deleteButton = new QPushButton(PerspectivesPreferencePage);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setEnabled(false);

        verticalLayout_2->addWidget(deleteButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(PerspectivesPreferencePage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);


        retranslateUi(PerspectivesPreferencePage);

        QMetaObject::connectSlotsByName(PerspectivesPreferencePage);
    } // setupUi

    void retranslateUi(QWidget *PerspectivesPreferencePage)
    {
        PerspectivesPreferencePage->setWindowTitle(QApplication::translate("PerspectivesPreferencePage", "Form", 0));
        groupBox->setTitle(QApplication::translate("PerspectivesPreferencePage", "Open a new perspective", 0));
        sameWindowButton->setText(QApplication::translate("PerspectivesPreferencePage", "In the same window", 0));
        newWindowButton->setText(QApplication::translate("PerspectivesPreferencePage", "In a new window", 0));
        label->setText(QApplication::translate("PerspectivesPreferencePage", "Available perspectives:", 0));
#ifndef QT_NO_TOOLTIP
        makeDefaultButton->setToolTip(QApplication::translate("PerspectivesPreferencePage", "Make the Current Selection the Default Perspective", 0));
#endif // QT_NO_TOOLTIP
        makeDefaultButton->setText(QApplication::translate("PerspectivesPreferencePage", "Make Default", 0));
#ifndef QT_NO_TOOLTIP
        revertButton->setToolTip(QApplication::translate("PerspectivesPreferencePage", "messages.properties\n"
"\n"
"Reverts the Current Selection to its Original Value", 0));
#endif // QT_NO_TOOLTIP
        revertButton->setText(QApplication::translate("PerspectivesPreferencePage", "Revert", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("PerspectivesPreferencePage", "Delete a User Defined Perspective", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("PerspectivesPreferencePage", "Delete", 0));
        label_2->setText(QApplication::translate("PerspectivesPreferencePage", "<html><head/><body><p><span style=\" font-weight:600;\">Note:</span> 'Revert' removes the customization from the selected perspective. This only applies to newly opened perspectives.</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class PerspectivesPreferencePage: public Ui_PerspectivesPreferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BERRYPERSPECTIVESPREFERENCEPAGE_H
