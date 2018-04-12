/********************************************************************************
** Form generated from reading UI file 'QmitkLevelWindowPresetDefinition.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKLEVELWINDOWPRESETDEFINITION_H
#define UI_QMITKLEVELWINDOWPRESETDEFINITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QmitkLevelWindowPresetDefinition
{
public:
    QHBoxLayout *hboxLayout;
    QTableView *presetView;
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *presetnameLabel;
    QLineEdit *presetnameLineEdit;
    QLabel *levelLabel;
    QSpinBox *levelSpinBox;
    QLabel *windowLabel;
    QSpinBox *windowSpinBox;
    QPushButton *addButton;
    QPushButton *changeButton;
    QPushButton *removeButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *QmitkLevelWindowPresetDefinition)
    {
        if (QmitkLevelWindowPresetDefinition->objectName().isEmpty())
            QmitkLevelWindowPresetDefinition->setObjectName(QStringLiteral("QmitkLevelWindowPresetDefinition"));
        QmitkLevelWindowPresetDefinition->setWindowModality(Qt::NonModal);
        QmitkLevelWindowPresetDefinition->resize(646, 281);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkLevelWindowPresetDefinition->sizePolicy().hasHeightForWidth());
        QmitkLevelWindowPresetDefinition->setSizePolicy(sizePolicy);
        QmitkLevelWindowPresetDefinition->setMinimumSize(QSize(610, 280));
        QmitkLevelWindowPresetDefinition->setSizeGripEnabled(true);
        QmitkLevelWindowPresetDefinition->setModal(true);
        hboxLayout = new QHBoxLayout(QmitkLevelWindowPresetDefinition);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        presetView = new QTableView(QmitkLevelWindowPresetDefinition);
        presetView->setObjectName(QStringLiteral("presetView"));
        presetView->setSelectionMode(QAbstractItemView::SingleSelection);
        presetView->setSelectionBehavior(QAbstractItemView::SelectRows);
        presetView->setShowGrid(false);
        presetView->setSortingEnabled(true);
        presetView->setCornerButtonEnabled(false);

        hboxLayout->addWidget(presetView);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        presetnameLabel = new QLabel(QmitkLevelWindowPresetDefinition);
        presetnameLabel->setObjectName(QStringLiteral("presetnameLabel"));
        presetnameLabel->setWordWrap(false);

        gridLayout->addWidget(presetnameLabel, 0, 0, 1, 1);

        presetnameLineEdit = new QLineEdit(QmitkLevelWindowPresetDefinition);
        presetnameLineEdit->setObjectName(QStringLiteral("presetnameLineEdit"));

        gridLayout->addWidget(presetnameLineEdit, 0, 1, 1, 2);

        levelLabel = new QLabel(QmitkLevelWindowPresetDefinition);
        levelLabel->setObjectName(QStringLiteral("levelLabel"));
        levelLabel->setWordWrap(false);

        gridLayout->addWidget(levelLabel, 1, 0, 1, 1);

        levelSpinBox = new QSpinBox(QmitkLevelWindowPresetDefinition);
        levelSpinBox->setObjectName(QStringLiteral("levelSpinBox"));
        levelSpinBox->setMinimum(-1024);
        levelSpinBox->setMaximum(3072);

        gridLayout->addWidget(levelSpinBox, 1, 1, 1, 1);

        windowLabel = new QLabel(QmitkLevelWindowPresetDefinition);
        windowLabel->setObjectName(QStringLiteral("windowLabel"));
        windowLabel->setWordWrap(false);

        gridLayout->addWidget(windowLabel, 2, 0, 1, 1);

        windowSpinBox = new QSpinBox(QmitkLevelWindowPresetDefinition);
        windowSpinBox->setObjectName(QStringLiteral("windowSpinBox"));
        windowSpinBox->setMaximum(4096);

        gridLayout->addWidget(windowSpinBox, 2, 1, 1, 1);

        addButton = new QPushButton(QmitkLevelWindowPresetDefinition);
        addButton->setObjectName(QStringLiteral("addButton"));

        gridLayout->addWidget(addButton, 3, 0, 1, 1);

        changeButton = new QPushButton(QmitkLevelWindowPresetDefinition);
        changeButton->setObjectName(QStringLiteral("changeButton"));

        gridLayout->addWidget(changeButton, 3, 1, 1, 1);

        removeButton = new QPushButton(QmitkLevelWindowPresetDefinition);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        gridLayout->addWidget(removeButton, 3, 2, 1, 1);


        vboxLayout->addLayout(gridLayout);

        spacerItem = new QSpacerItem(20, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        spacerItem1 = new QSpacerItem(204, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        okButton = new QPushButton(QmitkLevelWindowPresetDefinition);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout1->addWidget(okButton);

        cancelButton = new QPushButton(QmitkLevelWindowPresetDefinition);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout1);


        hboxLayout->addLayout(vboxLayout);

        QWidget::setTabOrder(addButton, removeButton);
        QWidget::setTabOrder(removeButton, changeButton);
        QWidget::setTabOrder(changeButton, presetnameLineEdit);
        QWidget::setTabOrder(presetnameLineEdit, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(QmitkLevelWindowPresetDefinition);
        QObject::connect(okButton, SIGNAL(clicked()), QmitkLevelWindowPresetDefinition, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), QmitkLevelWindowPresetDefinition, SLOT(reject()));

        QMetaObject::connectSlotsByName(QmitkLevelWindowPresetDefinition);
    } // setupUi

    void retranslateUi(QDialog *QmitkLevelWindowPresetDefinition)
    {
        QmitkLevelWindowPresetDefinition->setWindowTitle(QApplication::translate("QmitkLevelWindowPresetDefinition", "Preset definition", 0));
        presetnameLabel->setText(QApplication::translate("QmitkLevelWindowPresetDefinition", "Preset:", 0));
        levelLabel->setText(QApplication::translate("QmitkLevelWindowPresetDefinition", "Level:", 0));
        windowLabel->setText(QApplication::translate("QmitkLevelWindowPresetDefinition", "Window:", 0));
        addButton->setText(QApplication::translate("QmitkLevelWindowPresetDefinition", "Add preset", 0));
        changeButton->setText(QApplication::translate("QmitkLevelWindowPresetDefinition", "Change", 0));
        removeButton->setText(QApplication::translate("QmitkLevelWindowPresetDefinition", "Delete preset", 0));
        okButton->setText(QApplication::translate("QmitkLevelWindowPresetDefinition", "OK", 0));
        cancelButton->setText(QApplication::translate("QmitkLevelWindowPresetDefinition", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkLevelWindowPresetDefinition: public Ui_QmitkLevelWindowPresetDefinition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKLEVELWINDOWPRESETDEFINITION_H
