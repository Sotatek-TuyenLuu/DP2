/********************************************************************************
** Form generated from reading UI file 'QmitkPropertyTreeView.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKPROPERTYTREEVIEW_H
#define UI_QMITKPROPERTYTREEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkPropertyTreeView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *propertyListLabel;
    QComboBox *propertyListComboBox;
    QPushButton *newButton;
    QLineEdit *filterLineEdit;
    QTreeView *treeView;
    QLabel *description;

    void setupUi(QWidget *QmitkPropertyTreeView)
    {
        if (QmitkPropertyTreeView->objectName().isEmpty())
            QmitkPropertyTreeView->setObjectName(QStringLiteral("QmitkPropertyTreeView"));
        QmitkPropertyTreeView->resize(300, 600);
        verticalLayout = new QVBoxLayout(QmitkPropertyTreeView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        propertyListLabel = new QLabel(QmitkPropertyTreeView);
        propertyListLabel->setObjectName(QStringLiteral("propertyListLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(propertyListLabel->sizePolicy().hasHeightForWidth());
        propertyListLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(propertyListLabel);

        propertyListComboBox = new QComboBox(QmitkPropertyTreeView);
        propertyListComboBox->setObjectName(QStringLiteral("propertyListComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(propertyListComboBox->sizePolicy().hasHeightForWidth());
        propertyListComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(propertyListComboBox);

        newButton = new QPushButton(QmitkPropertyTreeView);
        newButton->setObjectName(QStringLiteral("newButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Properties/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        newButton->setIcon(icon);
        newButton->setIconSize(QSize(16, 16));
        newButton->setFlat(false);

        horizontalLayout->addWidget(newButton);


        verticalLayout->addLayout(horizontalLayout);

        filterLineEdit = new QLineEdit(QmitkPropertyTreeView);
        filterLineEdit->setObjectName(QStringLiteral("filterLineEdit"));

        verticalLayout->addWidget(filterLineEdit);

        treeView = new QTreeView(QmitkPropertyTreeView);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setFocusPolicy(Qt::NoFocus);
        treeView->setStyleSheet(QLatin1String("::item {\n"
"  border-right: 1px solid palette(midlight);\n"
"  padding-bottom: 1px;\n"
"  padding-top: 1px;\n"
"}\n"
"\n"
"::item:last {\n"
"  border-right: 0;\n"
"}\n"
"\n"
"::item:selected {\n"
"  background: palette(highlight);\n"
"  color: palette(highlighted-text);\n"
"}"));
        treeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        treeView->setAlternatingRowColors(true);
        treeView->setSortingEnabled(true);
        treeView->header()->setDefaultSectionSize(54);

        verticalLayout->addWidget(treeView);

        description = new QLabel(QmitkPropertyTreeView);
        description->setObjectName(QStringLiteral("description"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy2);
        description->setTextFormat(Qt::RichText);
        description->setWordWrap(true);

        verticalLayout->addWidget(description);


        retranslateUi(QmitkPropertyTreeView);

        QMetaObject::connectSlotsByName(QmitkPropertyTreeView);
    } // setupUi

    void retranslateUi(QWidget *QmitkPropertyTreeView)
    {
        QmitkPropertyTreeView->setWindowTitle(QString());
        propertyListLabel->setText(QApplication::translate("QmitkPropertyTreeView", "Property List", 0));
#ifndef QT_NO_TOOLTIP
        newButton->setToolTip(QApplication::translate("QmitkPropertyTreeView", "Add new property", 0));
#endif // QT_NO_TOOLTIP
        newButton->setText(QString());
        filterLineEdit->setPlaceholderText(QApplication::translate("QmitkPropertyTreeView", "Filter", 0));
        description->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QmitkPropertyTreeView: public Ui_QmitkPropertyTreeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKPROPERTYTREEVIEW_H
