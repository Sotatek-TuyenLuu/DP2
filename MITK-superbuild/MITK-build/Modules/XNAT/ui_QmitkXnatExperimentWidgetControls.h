/********************************************************************************
** Form generated from reading UI file 'QmitkXnatExperimentWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKXNATEXPERIMENTWIDGETCONTROLS_H
#define UI_QMITKXNATEXPERIMENTWIDGETCONTROLS_H

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

class Ui_QmitkXnatExperimentWidgetControls
{
public:
    QGridLayout *gridLayout;
    QLabel *timeLabel;
    QLabel *dateLabel;
    QLabel *scannerLabel;
    QLabel *columnLabel;
    QLabel *modalityLabel;
    QLabel *breadcrumbLabel;
    QLabel *labelLabel;
    QLabel *mandatoryLabel;
    QLineEdit *labelLineEdit;
    QLineEdit *dateLineEdit;
    QLineEdit *timeLineEdit;
    QLineEdit *scannerLineEdit;
    QLineEdit *modalityLineEdit;

    void setupUi(QWidget *QmitkXnatExperimentWidgetControls)
    {
        if (QmitkXnatExperimentWidgetControls->objectName().isEmpty())
            QmitkXnatExperimentWidgetControls->setObjectName(QStringLiteral("QmitkXnatExperimentWidgetControls"));
        QmitkXnatExperimentWidgetControls->setEnabled(true);
        QmitkXnatExperimentWidgetControls->resize(350, 225);
        gridLayout = new QGridLayout(QmitkXnatExperimentWidgetControls);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        timeLabel = new QLabel(QmitkXnatExperimentWidgetControls);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        gridLayout->addWidget(timeLabel, 6, 0, 1, 1);

        dateLabel = new QLabel(QmitkXnatExperimentWidgetControls);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));

        gridLayout->addWidget(dateLabel, 5, 0, 1, 1);

        scannerLabel = new QLabel(QmitkXnatExperimentWidgetControls);
        scannerLabel->setObjectName(QStringLiteral("scannerLabel"));

        gridLayout->addWidget(scannerLabel, 7, 0, 1, 1);

        columnLabel = new QLabel(QmitkXnatExperimentWidgetControls);
        columnLabel->setObjectName(QStringLiteral("columnLabel"));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        columnLabel->setFont(font);
        columnLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(columnLabel, 1, 0, 1, 2);

        modalityLabel = new QLabel(QmitkXnatExperimentWidgetControls);
        modalityLabel->setObjectName(QStringLiteral("modalityLabel"));

        gridLayout->addWidget(modalityLabel, 8, 0, 1, 1);

        breadcrumbLabel = new QLabel(QmitkXnatExperimentWidgetControls);
        breadcrumbLabel->setObjectName(QStringLiteral("breadcrumbLabel"));
        QFont font1;
        font1.setItalic(true);
        breadcrumbLabel->setFont(font1);

        gridLayout->addWidget(breadcrumbLabel, 2, 0, 1, 2);

        labelLabel = new QLabel(QmitkXnatExperimentWidgetControls);
        labelLabel->setObjectName(QStringLiteral("labelLabel"));

        gridLayout->addWidget(labelLabel, 3, 0, 1, 1);

        mandatoryLabel = new QLabel(QmitkXnatExperimentWidgetControls);
        mandatoryLabel->setObjectName(QStringLiteral("mandatoryLabel"));

        gridLayout->addWidget(mandatoryLabel, 9, 0, 1, 2);

        labelLineEdit = new QLineEdit(QmitkXnatExperimentWidgetControls);
        labelLineEdit->setObjectName(QStringLiteral("labelLineEdit"));
        labelLineEdit->setReadOnly(true);

        gridLayout->addWidget(labelLineEdit, 3, 1, 1, 1);

        dateLineEdit = new QLineEdit(QmitkXnatExperimentWidgetControls);
        dateLineEdit->setObjectName(QStringLiteral("dateLineEdit"));
        dateLineEdit->setReadOnly(true);

        gridLayout->addWidget(dateLineEdit, 5, 1, 1, 1);

        timeLineEdit = new QLineEdit(QmitkXnatExperimentWidgetControls);
        timeLineEdit->setObjectName(QStringLiteral("timeLineEdit"));
        timeLineEdit->setReadOnly(true);

        gridLayout->addWidget(timeLineEdit, 6, 1, 1, 1);

        scannerLineEdit = new QLineEdit(QmitkXnatExperimentWidgetControls);
        scannerLineEdit->setObjectName(QStringLiteral("scannerLineEdit"));
        scannerLineEdit->setReadOnly(true);

        gridLayout->addWidget(scannerLineEdit, 7, 1, 1, 1);

        modalityLineEdit = new QLineEdit(QmitkXnatExperimentWidgetControls);
        modalityLineEdit->setObjectName(QStringLiteral("modalityLineEdit"));
        modalityLineEdit->setReadOnly(true);

        gridLayout->addWidget(modalityLineEdit, 8, 1, 1, 1);


        retranslateUi(QmitkXnatExperimentWidgetControls);

        QMetaObject::connectSlotsByName(QmitkXnatExperimentWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkXnatExperimentWidgetControls)
    {
        QmitkXnatExperimentWidgetControls->setWindowTitle(QApplication::translate("QmitkXnatExperimentWidgetControls", "Qmitk Template", 0));
        timeLabel->setText(QApplication::translate("QmitkXnatExperimentWidgetControls", "Time:", 0));
        dateLabel->setText(QApplication::translate("QmitkXnatExperimentWidgetControls", "Date:", 0));
        scannerLabel->setText(QApplication::translate("QmitkXnatExperimentWidgetControls", "Scanner:", 0));
        columnLabel->setText(QApplication::translate("QmitkXnatExperimentWidgetControls", "Experiment Information", 0));
        modalityLabel->setText(QApplication::translate("QmitkXnatExperimentWidgetControls", "Modality:", 0));
        breadcrumbLabel->setText(QString());
        labelLabel->setText(QApplication::translate("QmitkXnatExperimentWidgetControls", "ID*:", 0));
        mandatoryLabel->setText(QApplication::translate("QmitkXnatExperimentWidgetControls", "* mandatory field", 0));
        dateLineEdit->setPlaceholderText(QApplication::translate("QmitkXnatExperimentWidgetControls", "YYYY-MM-DD", 0));
        timeLineEdit->setPlaceholderText(QApplication::translate("QmitkXnatExperimentWidgetControls", "hh:mm:ss", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkXnatExperimentWidgetControls: public Ui_QmitkXnatExperimentWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKXNATEXPERIMENTWIDGETCONTROLS_H
