/********************************************************************************
** Form generated from reading UI file 'berrySavePerspectiveDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BERRYSAVEPERSPECTIVEDIALOG_H
#define UI_BERRYSAVEPERSPECTIVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SavePerspectiveDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QListView *listView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SavePerspectiveDialog)
    {
        if (SavePerspectiveDialog->objectName().isEmpty())
            SavePerspectiveDialog->setObjectName(QStringLiteral("SavePerspectiveDialog"));
        SavePerspectiveDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(SavePerspectiveDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(SavePerspectiveDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 10, -1, 10);
        label_2 = new QLabel(SavePerspectiveDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(SavePerspectiveDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(SavePerspectiveDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        listView = new QListView(SavePerspectiveDialog);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        buttonBox = new QDialogButtonBox(SavePerspectiveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SavePerspectiveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SavePerspectiveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SavePerspectiveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SavePerspectiveDialog);
    } // setupUi

    void retranslateUi(QDialog *SavePerspectiveDialog)
    {
        SavePerspectiveDialog->setWindowTitle(QApplication::translate("SavePerspectiveDialog", "Save Perspective As...", 0));
        label->setText(QApplication::translate("SavePerspectiveDialog", "Enter or select a name to save the current perspective as.", 0));
        label_2->setText(QApplication::translate("SavePerspectiveDialog", "Name:", 0));
        label_3->setText(QApplication::translate("SavePerspectiveDialog", "Existing Perspectives:", 0));
    } // retranslateUi

};

namespace Ui {
    class SavePerspectiveDialog: public Ui_SavePerspectiveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BERRYSAVEPERSPECTIVEDIALOG_H
