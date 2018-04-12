/********************************************************************************
** Form generated from reading UI file 'ctkAddRemoveComboBox.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKADDREMOVECOMBOBOX_H
#define UI_CTKADDREMOVECOMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkAddRemoveComboBox
{
public:
    QHBoxLayout *hboxLayout;
    QComboBox *ComboBox;
    QPushButton *AddPushButton;
    QPushButton *RemovePushButton;
    QPushButton *EditPushButton;

    void setupUi(QWidget *ctkAddRemoveComboBox)
    {
        if (ctkAddRemoveComboBox->objectName().isEmpty())
            ctkAddRemoveComboBox->setObjectName(QStringLiteral("ctkAddRemoveComboBox"));
        ctkAddRemoveComboBox->resize(251, 23);
        hboxLayout = new QHBoxLayout(ctkAddRemoveComboBox);
        hboxLayout->setSpacing(2);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        ComboBox = new QComboBox(ctkAddRemoveComboBox);
        ComboBox->setObjectName(QStringLiteral("ComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ComboBox->sizePolicy().hasHeightForWidth());
        ComboBox->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(ComboBox);

        AddPushButton = new QPushButton(ctkAddRemoveComboBox);
        AddPushButton->setObjectName(QStringLiteral("AddPushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddPushButton->setIcon(icon);
        AddPushButton->setIconSize(QSize(8, 8));

        hboxLayout->addWidget(AddPushButton);

        RemovePushButton = new QPushButton(ctkAddRemoveComboBox);
        RemovePushButton->setObjectName(QStringLiteral("RemovePushButton"));
        RemovePushButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        RemovePushButton->setIcon(icon1);
        RemovePushButton->setIconSize(QSize(8, 8));

        hboxLayout->addWidget(RemovePushButton);

        EditPushButton = new QPushButton(ctkAddRemoveComboBox);
        EditPushButton->setObjectName(QStringLiteral("EditPushButton"));
        EditPushButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditPushButton->setIcon(icon2);
        EditPushButton->setIconSize(QSize(8, 8));

        hboxLayout->addWidget(EditPushButton);


        retranslateUi(ctkAddRemoveComboBox);

        QMetaObject::connectSlotsByName(ctkAddRemoveComboBox);
    } // setupUi

    void retranslateUi(QWidget *ctkAddRemoveComboBox)
    {
        ctkAddRemoveComboBox->setWindowTitle(QApplication::translate("ctkAddRemoveComboBox", "ctkAddRemoveComboBox", 0));
#ifndef QT_NO_TOOLTIP
        AddPushButton->setToolTip(QApplication::translate("ctkAddRemoveComboBox", "Add an object", 0));
#endif // QT_NO_TOOLTIP
        AddPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        RemovePushButton->setToolTip(QApplication::translate("ctkAddRemoveComboBox", "Remove select object", 0));
#endif // QT_NO_TOOLTIP
        RemovePushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditPushButton->setToolTip(QApplication::translate("ctkAddRemoveComboBox", "Edit selected object", 0));
#endif // QT_NO_TOOLTIP
        EditPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ctkAddRemoveComboBox: public Ui_ctkAddRemoveComboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKADDREMOVECOMBOBOX_H
