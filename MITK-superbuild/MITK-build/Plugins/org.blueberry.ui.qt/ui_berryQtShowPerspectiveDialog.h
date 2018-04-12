/********************************************************************************
** Form generated from reading UI file 'berryQtShowPerspectiveDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BERRYQTSHOWPERSPECTIVEDIALOG_H
#define UI_BERRYQTSHOWPERSPECTIVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QtShowPerspectiveDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListView *m_ListView;
    QLabel *m_Description;
    QDialogButtonBox *m_ButtonBox;

    void setupUi(QDialog *QtShowPerspectiveDialog)
    {
        if (QtShowPerspectiveDialog->objectName().isEmpty())
            QtShowPerspectiveDialog->setObjectName(QStringLiteral("QtShowPerspectiveDialog"));
        QtShowPerspectiveDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(QtShowPerspectiveDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_ListView = new QListView(QtShowPerspectiveDialog);
        m_ListView->setObjectName(QStringLiteral("m_ListView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(m_ListView->sizePolicy().hasHeightForWidth());
        m_ListView->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(m_ListView);

        m_Description = new QLabel(QtShowPerspectiveDialog);
        m_Description->setObjectName(QStringLiteral("m_Description"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(m_Description->sizePolicy().hasHeightForWidth());
        m_Description->setSizePolicy(sizePolicy1);
        m_Description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_Description->setWordWrap(true);

        verticalLayout->addWidget(m_Description);

        m_ButtonBox = new QDialogButtonBox(QtShowPerspectiveDialog);
        m_ButtonBox->setObjectName(QStringLiteral("m_ButtonBox"));
        m_ButtonBox->setOrientation(Qt::Horizontal);
        m_ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(m_ButtonBox);


        retranslateUi(QtShowPerspectiveDialog);
        QObject::connect(m_ButtonBox, SIGNAL(accepted()), QtShowPerspectiveDialog, SLOT(accept()));
        QObject::connect(m_ButtonBox, SIGNAL(rejected()), QtShowPerspectiveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QtShowPerspectiveDialog);
    } // setupUi

    void retranslateUi(QDialog *QtShowPerspectiveDialog)
    {
        QtShowPerspectiveDialog->setWindowTitle(QApplication::translate("QtShowPerspectiveDialog", "Open Perspective", 0));
        m_Description->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtShowPerspectiveDialog: public Ui_QtShowPerspectiveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BERRYQTSHOWPERSPECTIVEDIALOG_H
