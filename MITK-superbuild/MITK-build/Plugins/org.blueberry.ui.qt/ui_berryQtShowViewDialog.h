/********************************************************************************
** Form generated from reading UI file 'berryQtShowViewDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BERRYQTSHOWVIEWDIALOG_H
#define UI_BERRYQTSHOWVIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QtShowViewDialog_
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QLineEdit *m_Filter;
    QCheckBox *m_KeywordFilter;
    QTreeView *m_TreeView;
    QLabel *m_Description;
    QDialogButtonBox *m_ButtonBox;

    void setupUi(QDialog *QtShowViewDialog_)
    {
        if (QtShowViewDialog_->objectName().isEmpty())
            QtShowViewDialog_->setObjectName(QStringLiteral("QtShowViewDialog_"));
        QtShowViewDialog_->setWindowModality(Qt::NonModal);
        QtShowViewDialog_->resize(406, 341);
        QtShowViewDialog_->setSizeGripEnabled(true);
        QtShowViewDialog_->setModal(true);
        hboxLayout = new QHBoxLayout(QtShowViewDialog_);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        m_Filter = new QLineEdit(QtShowViewDialog_);
        m_Filter->setObjectName(QStringLiteral("m_Filter"));

        vboxLayout->addWidget(m_Filter);

        m_KeywordFilter = new QCheckBox(QtShowViewDialog_);
        m_KeywordFilter->setObjectName(QStringLiteral("m_KeywordFilter"));
        m_KeywordFilter->setChecked(true);

        vboxLayout->addWidget(m_KeywordFilter);

        m_TreeView = new QTreeView(QtShowViewDialog_);
        m_TreeView->setObjectName(QStringLiteral("m_TreeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(m_TreeView->sizePolicy().hasHeightForWidth());
        m_TreeView->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(m_TreeView);

        m_Description = new QLabel(QtShowViewDialog_);
        m_Description->setObjectName(QStringLiteral("m_Description"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(m_Description->sizePolicy().hasHeightForWidth());
        m_Description->setSizePolicy(sizePolicy1);
        m_Description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_Description->setWordWrap(true);

        vboxLayout->addWidget(m_Description);

        m_ButtonBox = new QDialogButtonBox(QtShowViewDialog_);
        m_ButtonBox->setObjectName(QStringLiteral("m_ButtonBox"));
        m_ButtonBox->setOrientation(Qt::Horizontal);
        m_ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_ButtonBox);


        hboxLayout->addLayout(vboxLayout);


        retranslateUi(QtShowViewDialog_);
        QObject::connect(m_ButtonBox, SIGNAL(accepted()), QtShowViewDialog_, SLOT(accept()));
        QObject::connect(m_ButtonBox, SIGNAL(rejected()), QtShowViewDialog_, SLOT(reject()));

        QMetaObject::connectSlotsByName(QtShowViewDialog_);
    } // setupUi

    void retranslateUi(QDialog *QtShowViewDialog_)
    {
        QtShowViewDialog_->setWindowTitle(QApplication::translate("QtShowViewDialog_", "Show View", 0));
        m_Filter->setPlaceholderText(QApplication::translate("QtShowViewDialog_", "filter...", 0));
        m_KeywordFilter->setText(QApplication::translate("QtShowViewDialog_", "Enable keyword filter", 0));
        m_Description->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtShowViewDialog_: public Ui_QtShowViewDialog_ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BERRYQTSHOWVIEWDIALOG_H
