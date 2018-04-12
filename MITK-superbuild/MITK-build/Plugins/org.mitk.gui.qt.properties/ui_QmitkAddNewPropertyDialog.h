/********************************************************************************
** Form generated from reading UI file 'QmitkAddNewPropertyDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKADDNEWPROPERTYDIALOG_H
#define UI_QMITKADDNEWPROPERTYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QmitkAddNewPropertyDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *typeLabel;
    QComboBox *typeComboBox;
    QLabel *valueLabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *valueLineEdit;
    QCheckBox *valueCheckBox;
    QLabel *persistentLabel;
    QCheckBox *persistentCheckBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *QmitkAddNewPropertyDialog)
    {
        if (QmitkAddNewPropertyDialog->objectName().isEmpty())
            QmitkAddNewPropertyDialog->setObjectName(QStringLiteral("QmitkAddNewPropertyDialog"));
        QmitkAddNewPropertyDialog->resize(319, 235);
        verticalLayout_2 = new QVBoxLayout(QmitkAddNewPropertyDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nameLabel = new QLabel(QmitkAddNewPropertyDialog);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(QmitkAddNewPropertyDialog);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        typeLabel = new QLabel(QmitkAddNewPropertyDialog);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, typeLabel);

        typeComboBox = new QComboBox(QmitkAddNewPropertyDialog);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, typeComboBox);

        valueLabel = new QLabel(QmitkAddNewPropertyDialog);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, valueLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        valueLineEdit = new QLineEdit(QmitkAddNewPropertyDialog);
        valueLineEdit->setObjectName(QStringLiteral("valueLineEdit"));

        verticalLayout->addWidget(valueLineEdit);

        valueCheckBox = new QCheckBox(QmitkAddNewPropertyDialog);
        valueCheckBox->setObjectName(QStringLiteral("valueCheckBox"));

        verticalLayout->addWidget(valueCheckBox);


        formLayout->setLayout(2, QFormLayout::FieldRole, verticalLayout);

        persistentLabel = new QLabel(QmitkAddNewPropertyDialog);
        persistentLabel->setObjectName(QStringLiteral("persistentLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, persistentLabel);

        persistentCheckBox = new QCheckBox(QmitkAddNewPropertyDialog);
        persistentCheckBox->setObjectName(QStringLiteral("persistentCheckBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, persistentCheckBox);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addButton = new QPushButton(QmitkAddNewPropertyDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setAutoDefault(false);
        addButton->setDefault(true);

        horizontalLayout->addWidget(addButton);

        cancelButton = new QPushButton(QmitkAddNewPropertyDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout->addWidget(cancelButton);


        verticalLayout_2->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        nameLabel->setBuddy(nameLineEdit);
        typeLabel->setBuddy(typeComboBox);
        valueLabel->setBuddy(valueLineEdit);
        persistentLabel->setBuddy(persistentCheckBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(nameLineEdit, typeComboBox);
        QWidget::setTabOrder(typeComboBox, valueLineEdit);
        QWidget::setTabOrder(valueLineEdit, valueCheckBox);
        QWidget::setTabOrder(valueCheckBox, addButton);
        QWidget::setTabOrder(addButton, cancelButton);

        retranslateUi(QmitkAddNewPropertyDialog);

        QMetaObject::connectSlotsByName(QmitkAddNewPropertyDialog);
    } // setupUi

    void retranslateUi(QDialog *QmitkAddNewPropertyDialog)
    {
        QmitkAddNewPropertyDialog->setWindowTitle(QApplication::translate("QmitkAddNewPropertyDialog", "Add new property", 0));
        nameLabel->setText(QApplication::translate("QmitkAddNewPropertyDialog", "Name", 0));
        typeLabel->setText(QApplication::translate("QmitkAddNewPropertyDialog", "Type", 0));
        valueLabel->setText(QApplication::translate("QmitkAddNewPropertyDialog", "Value", 0));
        valueCheckBox->setText(QString());
        persistentLabel->setText(QApplication::translate("QmitkAddNewPropertyDialog", "Persistent", 0));
        persistentCheckBox->setText(QString());
        addButton->setText(QApplication::translate("QmitkAddNewPropertyDialog", "&Add", 0));
        cancelButton->setText(QApplication::translate("QmitkAddNewPropertyDialog", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkAddNewPropertyDialog: public Ui_QmitkAddNewPropertyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKADDNEWPROPERTYDIALOG_H
