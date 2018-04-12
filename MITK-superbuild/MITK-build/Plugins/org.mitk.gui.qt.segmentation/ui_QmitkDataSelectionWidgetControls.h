/********************************************************************************
** Form generated from reading UI file 'QmitkDataSelectionWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKDATASELECTIONWIDGETCONTROLS_H
#define UI_QMITKDATASELECTIONWIDGETCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkDataSelectionWidgetControls
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *dataSelectionGroupBox;
    QVBoxLayout *verticalLayout_2;
    QWidget *dataSelectionWidget;
    QGridLayout *gridLayout;
    QLabel *helpLabel;

    void setupUi(QWidget *QmitkDataSelectionWidgetControls)
    {
        if (QmitkDataSelectionWidgetControls->objectName().isEmpty())
            QmitkDataSelectionWidgetControls->setObjectName(QStringLiteral("QmitkDataSelectionWidgetControls"));
        QmitkDataSelectionWidgetControls->resize(333, 191);
        QmitkDataSelectionWidgetControls->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(QmitkDataSelectionWidgetControls);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dataSelectionGroupBox = new QGroupBox(QmitkDataSelectionWidgetControls);
        dataSelectionGroupBox->setObjectName(QStringLiteral("dataSelectionGroupBox"));
        dataSelectionGroupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(dataSelectionGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        dataSelectionWidget = new QWidget(dataSelectionGroupBox);
        dataSelectionWidget->setObjectName(QStringLiteral("dataSelectionWidget"));
        gridLayout = new QGridLayout(dataSelectionWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        verticalLayout_2->addWidget(dataSelectionWidget);

        helpLabel = new QLabel(dataSelectionGroupBox);
        helpLabel->setObjectName(QStringLiteral("helpLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpLabel->sizePolicy().hasHeightForWidth());
        helpLabel->setSizePolicy(sizePolicy);
        helpLabel->setStyleSheet(QStringLiteral("color: red"));
        helpLabel->setWordWrap(true);

        verticalLayout_2->addWidget(helpLabel);


        verticalLayout->addWidget(dataSelectionGroupBox);


        retranslateUi(QmitkDataSelectionWidgetControls);

        QMetaObject::connectSlotsByName(QmitkDataSelectionWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkDataSelectionWidgetControls)
    {
        dataSelectionGroupBox->setTitle(QApplication::translate("QmitkDataSelectionWidgetControls", "Data Selection", 0));
        helpLabel->setText(QString());
        Q_UNUSED(QmitkDataSelectionWidgetControls);
    } // retranslateUi

};

namespace Ui {
    class QmitkDataSelectionWidgetControls: public Ui_QmitkDataSelectionWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKDATASELECTIONWIDGETCONTROLS_H
