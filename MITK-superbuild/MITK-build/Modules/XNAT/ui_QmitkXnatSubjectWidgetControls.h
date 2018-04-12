/********************************************************************************
** Form generated from reading UI file 'QmitkXnatSubjectWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKXNATSUBJECTWIDGETCONTROLS_H
#define UI_QMITKXNATSUBJECTWIDGETCONTROLS_H

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

class Ui_QmitkXnatSubjectWidgetControls
{
public:
    QGridLayout *gridLayout;
    QLineEdit *labelLineEdit;
    QLabel *genderLabel;
    QLabel *birthdateLabel;
    QLabel *handednessLabel;
    QLabel *heightLabel;
    QLabel *weightLabel;
    QLabel *columnLabel;
    QLabel *breadcrumbLabel;
    QLineEdit *birthdateLineEdit;
    QLineEdit *genderLineEdit;
    QLineEdit *handednessLineEdit;
    QLineEdit *heightLineEdit;
    QLineEdit *weightLineEdit;
    QLabel *labelLabel;
    QLabel *mandatoryLabel;

    void setupUi(QWidget *QmitkXnatSubjectWidgetControls)
    {
        if (QmitkXnatSubjectWidgetControls->objectName().isEmpty())
            QmitkXnatSubjectWidgetControls->setObjectName(QStringLiteral("QmitkXnatSubjectWidgetControls"));
        QmitkXnatSubjectWidgetControls->setEnabled(true);
        QmitkXnatSubjectWidgetControls->resize(350, 225);
        gridLayout = new QGridLayout(QmitkXnatSubjectWidgetControls);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelLineEdit = new QLineEdit(QmitkXnatSubjectWidgetControls);
        labelLineEdit->setObjectName(QStringLiteral("labelLineEdit"));
        labelLineEdit->setReadOnly(true);

        gridLayout->addWidget(labelLineEdit, 3, 1, 1, 1);

        genderLabel = new QLabel(QmitkXnatSubjectWidgetControls);
        genderLabel->setObjectName(QStringLiteral("genderLabel"));

        gridLayout->addWidget(genderLabel, 5, 0, 1, 1);

        birthdateLabel = new QLabel(QmitkXnatSubjectWidgetControls);
        birthdateLabel->setObjectName(QStringLiteral("birthdateLabel"));

        gridLayout->addWidget(birthdateLabel, 4, 0, 1, 1);

        handednessLabel = new QLabel(QmitkXnatSubjectWidgetControls);
        handednessLabel->setObjectName(QStringLiteral("handednessLabel"));

        gridLayout->addWidget(handednessLabel, 6, 0, 1, 1);

        heightLabel = new QLabel(QmitkXnatSubjectWidgetControls);
        heightLabel->setObjectName(QStringLiteral("heightLabel"));

        gridLayout->addWidget(heightLabel, 7, 0, 1, 1);

        weightLabel = new QLabel(QmitkXnatSubjectWidgetControls);
        weightLabel->setObjectName(QStringLiteral("weightLabel"));

        gridLayout->addWidget(weightLabel, 8, 0, 1, 1);

        columnLabel = new QLabel(QmitkXnatSubjectWidgetControls);
        columnLabel->setObjectName(QStringLiteral("columnLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        columnLabel->setFont(font);
        columnLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(columnLabel, 1, 0, 1, 2);

        breadcrumbLabel = new QLabel(QmitkXnatSubjectWidgetControls);
        breadcrumbLabel->setObjectName(QStringLiteral("breadcrumbLabel"));
        QFont font1;
        font1.setItalic(true);
        breadcrumbLabel->setFont(font1);

        gridLayout->addWidget(breadcrumbLabel, 2, 0, 1, 2);

        birthdateLineEdit = new QLineEdit(QmitkXnatSubjectWidgetControls);
        birthdateLineEdit->setObjectName(QStringLiteral("birthdateLineEdit"));
        birthdateLineEdit->setReadOnly(true);

        gridLayout->addWidget(birthdateLineEdit, 4, 1, 1, 1);

        genderLineEdit = new QLineEdit(QmitkXnatSubjectWidgetControls);
        genderLineEdit->setObjectName(QStringLiteral("genderLineEdit"));
        genderLineEdit->setReadOnly(true);

        gridLayout->addWidget(genderLineEdit, 5, 1, 1, 1);

        handednessLineEdit = new QLineEdit(QmitkXnatSubjectWidgetControls);
        handednessLineEdit->setObjectName(QStringLiteral("handednessLineEdit"));
        handednessLineEdit->setReadOnly(true);

        gridLayout->addWidget(handednessLineEdit, 6, 1, 1, 1);

        heightLineEdit = new QLineEdit(QmitkXnatSubjectWidgetControls);
        heightLineEdit->setObjectName(QStringLiteral("heightLineEdit"));
        heightLineEdit->setReadOnly(true);

        gridLayout->addWidget(heightLineEdit, 7, 1, 1, 1);

        weightLineEdit = new QLineEdit(QmitkXnatSubjectWidgetControls);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setReadOnly(true);

        gridLayout->addWidget(weightLineEdit, 8, 1, 1, 1);

        labelLabel = new QLabel(QmitkXnatSubjectWidgetControls);
        labelLabel->setObjectName(QStringLiteral("labelLabel"));

        gridLayout->addWidget(labelLabel, 3, 0, 1, 1);

        mandatoryLabel = new QLabel(QmitkXnatSubjectWidgetControls);
        mandatoryLabel->setObjectName(QStringLiteral("mandatoryLabel"));

        gridLayout->addWidget(mandatoryLabel, 9, 0, 1, 2);


        retranslateUi(QmitkXnatSubjectWidgetControls);

        QMetaObject::connectSlotsByName(QmitkXnatSubjectWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkXnatSubjectWidgetControls)
    {
        QmitkXnatSubjectWidgetControls->setWindowTitle(QApplication::translate("QmitkXnatSubjectWidgetControls", "Qmitk Template", 0));
        genderLabel->setText(QApplication::translate("QmitkXnatSubjectWidgetControls", "Gender:", 0));
        birthdateLabel->setText(QApplication::translate("QmitkXnatSubjectWidgetControls", "Birthdate:", 0));
        handednessLabel->setText(QApplication::translate("QmitkXnatSubjectWidgetControls", "Handedness:", 0));
        heightLabel->setText(QApplication::translate("QmitkXnatSubjectWidgetControls", "Height (inches):", 0));
        weightLabel->setText(QApplication::translate("QmitkXnatSubjectWidgetControls", "Weight (lbs)", 0));
        columnLabel->setText(QApplication::translate("QmitkXnatSubjectWidgetControls", "Subject Information", 0));
        breadcrumbLabel->setText(QString());
        birthdateLineEdit->setPlaceholderText(QApplication::translate("QmitkXnatSubjectWidgetControls", "YYYY-MM-DD", 0));
        labelLabel->setText(QApplication::translate("QmitkXnatSubjectWidgetControls", "ID*:", 0));
        mandatoryLabel->setText(QApplication::translate("QmitkXnatSubjectWidgetControls", "* mandatory field", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkXnatSubjectWidgetControls: public Ui_QmitkXnatSubjectWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKXNATSUBJECTWIDGETCONTROLS_H
