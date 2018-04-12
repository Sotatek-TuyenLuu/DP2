/********************************************************************************
** Form generated from reading UI file 'QmitkXnatProjectWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKXNATPROJECTWIDGETCONTROLS_H
#define UI_QMITKXNATPROJECTWIDGETCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkXnatProjectWidgetControls
{
public:
    QGridLayout *gridLayout;
    QLabel *descriptionLabel;
    QLabel *nameLabel;
    QLabel *piLabel;
    QLabel *columnLabel;
    QLineEdit *descriptionLineEdit;
    QLineEdit *nameLineEdit;
    QLabel *idLabel;
    QLineEdit *piLineEdit;
    QLineEdit *idLineEdit;
    QLabel *mandatoryLabel;

    void setupUi(QWidget *QmitkXnatProjectWidgetControls)
    {
        if (QmitkXnatProjectWidgetControls->objectName().isEmpty())
            QmitkXnatProjectWidgetControls->setObjectName(QStringLiteral("QmitkXnatProjectWidgetControls"));
        QmitkXnatProjectWidgetControls->setEnabled(true);
        QmitkXnatProjectWidgetControls->resize(350, 154);
        gridLayout = new QGridLayout(QmitkXnatProjectWidgetControls);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        descriptionLabel = new QLabel(QmitkXnatProjectWidgetControls);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        gridLayout->addWidget(descriptionLabel, 3, 0, 1, 1);

        nameLabel = new QLabel(QmitkXnatProjectWidgetControls);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout->addWidget(nameLabel, 2, 0, 1, 1);

        piLabel = new QLabel(QmitkXnatProjectWidgetControls);
        piLabel->setObjectName(QStringLiteral("piLabel"));

        gridLayout->addWidget(piLabel, 4, 0, 1, 1);

        columnLabel = new QLabel(QmitkXnatProjectWidgetControls);
        columnLabel->setObjectName(QStringLiteral("columnLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        columnLabel->setFont(font);
        columnLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(columnLabel, 0, 0, 1, 2);

        descriptionLineEdit = new QLineEdit(QmitkXnatProjectWidgetControls);
        descriptionLineEdit->setObjectName(QStringLiteral("descriptionLineEdit"));
        descriptionLineEdit->setReadOnly(true);

        gridLayout->addWidget(descriptionLineEdit, 3, 1, 1, 1);

        nameLineEdit = new QLineEdit(QmitkXnatProjectWidgetControls);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setReadOnly(true);

        gridLayout->addWidget(nameLineEdit, 2, 1, 1, 1);

        idLabel = new QLabel(QmitkXnatProjectWidgetControls);
        idLabel->setObjectName(QStringLiteral("idLabel"));

        gridLayout->addWidget(idLabel, 1, 0, 1, 1);

        piLineEdit = new QLineEdit(QmitkXnatProjectWidgetControls);
        piLineEdit->setObjectName(QStringLiteral("piLineEdit"));
        piLineEdit->setReadOnly(true);

        gridLayout->addWidget(piLineEdit, 4, 1, 1, 1);

        idLineEdit = new QLineEdit(QmitkXnatProjectWidgetControls);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));
        idLineEdit->setReadOnly(true);

        gridLayout->addWidget(idLineEdit, 1, 1, 1, 1);

        mandatoryLabel = new QLabel(QmitkXnatProjectWidgetControls);
        mandatoryLabel->setObjectName(QStringLiteral("mandatoryLabel"));

        gridLayout->addWidget(mandatoryLabel, 5, 0, 1, 2);


        retranslateUi(QmitkXnatProjectWidgetControls);

        QMetaObject::connectSlotsByName(QmitkXnatProjectWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkXnatProjectWidgetControls)
    {
        QmitkXnatProjectWidgetControls->setWindowTitle(QApplication::translate("QmitkXnatProjectWidgetControls", "Qmitk Template", 0));
        descriptionLabel->setText(QApplication::translate("QmitkXnatProjectWidgetControls", "Description:", 0));
        nameLabel->setText(QApplication::translate("QmitkXnatProjectWidgetControls", "Name:", 0));
        piLabel->setText(QApplication::translate("QmitkXnatProjectWidgetControls", "PI:", 0));
        columnLabel->setText(QApplication::translate("QmitkXnatProjectWidgetControls", "Project Information", 0));
        idLabel->setText(QApplication::translate("QmitkXnatProjectWidgetControls", "ID*:", 0));
        mandatoryLabel->setText(QApplication::translate("QmitkXnatProjectWidgetControls", "* mandatory field", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkXnatProjectWidgetControls: public Ui_QmitkXnatProjectWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKXNATPROJECTWIDGETCONTROLS_H
