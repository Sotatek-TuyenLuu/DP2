/********************************************************************************
** Form generated from reading UI file 'QmitkPropertiesPreferencePage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKPROPERTIESPREFERENCEPAGE_H
#define UI_QMITKPROPERTIESPREFERENCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkPropertiesPreferencePage
{
public:
    QVBoxLayout *verticalLayout_5;
    QGroupBox *aliasesGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *showAliasesCheckBox;
    QGroupBox *descriptionsGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *showDescriptionsCheckBox;
    QCheckBox *showAliasesInDescriptionCheckBox;
    QCheckBox *showPersistenceInDescriptionCheckBox;
    QGroupBox *filtersGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *filterPropertiesCheckBox;
    QGroupBox *developerModeGroupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *enableDeveloperModeCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkPropertiesPreferencePage)
    {
        if (QmitkPropertiesPreferencePage->objectName().isEmpty())
            QmitkPropertiesPreferencePage->setObjectName(QStringLiteral("QmitkPropertiesPreferencePage"));
        QmitkPropertiesPreferencePage->resize(400, 577);
        verticalLayout_5 = new QVBoxLayout(QmitkPropertiesPreferencePage);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        aliasesGroupBox = new QGroupBox(QmitkPropertiesPreferencePage);
        aliasesGroupBox->setObjectName(QStringLiteral("aliasesGroupBox"));
        verticalLayout_2 = new QVBoxLayout(aliasesGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        showAliasesCheckBox = new QCheckBox(aliasesGroupBox);
        showAliasesCheckBox->setObjectName(QStringLiteral("showAliasesCheckBox"));
        showAliasesCheckBox->setChecked(true);

        verticalLayout_2->addWidget(showAliasesCheckBox);


        verticalLayout_5->addWidget(aliasesGroupBox);

        descriptionsGroupBox = new QGroupBox(QmitkPropertiesPreferencePage);
        descriptionsGroupBox->setObjectName(QStringLiteral("descriptionsGroupBox"));
        verticalLayout = new QVBoxLayout(descriptionsGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        showDescriptionsCheckBox = new QCheckBox(descriptionsGroupBox);
        showDescriptionsCheckBox->setObjectName(QStringLiteral("showDescriptionsCheckBox"));
        showDescriptionsCheckBox->setChecked(true);

        verticalLayout->addWidget(showDescriptionsCheckBox);

        showAliasesInDescriptionCheckBox = new QCheckBox(descriptionsGroupBox);
        showAliasesInDescriptionCheckBox->setObjectName(QStringLiteral("showAliasesInDescriptionCheckBox"));
        showAliasesInDescriptionCheckBox->setStyleSheet(QStringLiteral("margin-left: 18px;"));
        showAliasesInDescriptionCheckBox->setChecked(true);

        verticalLayout->addWidget(showAliasesInDescriptionCheckBox);

        showPersistenceInDescriptionCheckBox = new QCheckBox(descriptionsGroupBox);
        showPersistenceInDescriptionCheckBox->setObjectName(QStringLiteral("showPersistenceInDescriptionCheckBox"));
        showPersistenceInDescriptionCheckBox->setStyleSheet(QStringLiteral("margin-left: 18px;"));
        showPersistenceInDescriptionCheckBox->setChecked(true);

        verticalLayout->addWidget(showPersistenceInDescriptionCheckBox);


        verticalLayout_5->addWidget(descriptionsGroupBox);

        filtersGroupBox = new QGroupBox(QmitkPropertiesPreferencePage);
        filtersGroupBox->setObjectName(QStringLiteral("filtersGroupBox"));
        verticalLayout_3 = new QVBoxLayout(filtersGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        filterPropertiesCheckBox = new QCheckBox(filtersGroupBox);
        filterPropertiesCheckBox->setObjectName(QStringLiteral("filterPropertiesCheckBox"));
        filterPropertiesCheckBox->setChecked(true);

        verticalLayout_3->addWidget(filterPropertiesCheckBox);


        verticalLayout_5->addWidget(filtersGroupBox);

        developerModeGroupBox = new QGroupBox(QmitkPropertiesPreferencePage);
        developerModeGroupBox->setObjectName(QStringLiteral("developerModeGroupBox"));
        verticalLayout_4 = new QVBoxLayout(developerModeGroupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        enableDeveloperModeCheckBox = new QCheckBox(developerModeGroupBox);
        enableDeveloperModeCheckBox->setObjectName(QStringLiteral("enableDeveloperModeCheckBox"));
        enableDeveloperModeCheckBox->setEnabled(true);
        enableDeveloperModeCheckBox->setChecked(false);

        verticalLayout_4->addWidget(enableDeveloperModeCheckBox);


        verticalLayout_5->addWidget(developerModeGroupBox);

        verticalSpacer = new QSpacerItem(20, 204, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        QWidget::setTabOrder(showAliasesCheckBox, showDescriptionsCheckBox);

        retranslateUi(QmitkPropertiesPreferencePage);

        QMetaObject::connectSlotsByName(QmitkPropertiesPreferencePage);
    } // setupUi

    void retranslateUi(QWidget *QmitkPropertiesPreferencePage)
    {
        QmitkPropertiesPreferencePage->setWindowTitle(QString());
        aliasesGroupBox->setTitle(QApplication::translate("QmitkPropertiesPreferencePage", "Aliases", 0));
        showAliasesCheckBox->setText(QApplication::translate("QmitkPropertiesPreferencePage", "Replace genuine property names by aliases", 0));
        descriptionsGroupBox->setTitle(QApplication::translate("QmitkPropertiesPreferencePage", "Descriptions", 0));
        showDescriptionsCheckBox->setText(QApplication::translate("QmitkPropertiesPreferencePage", "Show descriptions", 0));
        showAliasesInDescriptionCheckBox->setText(QApplication::translate("QmitkPropertiesPreferencePage", "Show aliases of genuine property names", 0));
        showPersistenceInDescriptionCheckBox->setText(QApplication::translate("QmitkPropertiesPreferencePage", "Show persistence info", 0));
        filtersGroupBox->setTitle(QApplication::translate("QmitkPropertiesPreferencePage", "Filters", 0));
        filterPropertiesCheckBox->setText(QApplication::translate("QmitkPropertiesPreferencePage", "Only show filtered properties", 0));
        developerModeGroupBox->setTitle(QApplication::translate("QmitkPropertiesPreferencePage", "Developer Mode", 0));
        enableDeveloperModeCheckBox->setText(QApplication::translate("QmitkPropertiesPreferencePage", "Enabled", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkPropertiesPreferencePage: public Ui_QmitkPropertiesPreferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKPROPERTIESPREFERENCEPAGE_H
