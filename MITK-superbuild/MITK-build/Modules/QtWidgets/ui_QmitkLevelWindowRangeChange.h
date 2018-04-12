/********************************************************************************
** Form generated from reading UI file 'QmitkLevelWindowRangeChange.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKLEVELWINDOWRANGECHANGE_H
#define UI_QMITKLEVELWINDOWRANGECHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QmitkLevelWindowRangeChange
{
public:
    QGridLayout *gridLayout;
    QPushButton *okButton;
    QLabel *lowerLimitLabel;
    QLabel *upperLimitLabel;
    QPushButton *cancelButton;
    QDoubleSpinBox *rangeMaxDoubleSpinBox;
    QDoubleSpinBox *rangeMinDoubleSpinBox;

    void setupUi(QDialog *QmitkLevelWindowRangeChange)
    {
        if (QmitkLevelWindowRangeChange->objectName().isEmpty())
            QmitkLevelWindowRangeChange->setObjectName(QStringLiteral("QmitkLevelWindowRangeChange"));
        QmitkLevelWindowRangeChange->resize(210, 110);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkLevelWindowRangeChange->sizePolicy().hasHeightForWidth());
        QmitkLevelWindowRangeChange->setSizePolicy(sizePolicy);
        QmitkLevelWindowRangeChange->setMinimumSize(QSize(210, 110));
        QmitkLevelWindowRangeChange->setMaximumSize(QSize(210, 110));
        gridLayout = new QGridLayout(QmitkLevelWindowRangeChange);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        okButton = new QPushButton(QmitkLevelWindowRangeChange);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setAutoDefault(false);

        gridLayout->addWidget(okButton, 2, 0, 1, 2);

        lowerLimitLabel = new QLabel(QmitkLevelWindowRangeChange);
        lowerLimitLabel->setObjectName(QStringLiteral("lowerLimitLabel"));
        lowerLimitLabel->setWordWrap(false);

        gridLayout->addWidget(lowerLimitLabel, 1, 0, 1, 1);

        upperLimitLabel = new QLabel(QmitkLevelWindowRangeChange);
        upperLimitLabel->setObjectName(QStringLiteral("upperLimitLabel"));
        upperLimitLabel->setWordWrap(false);

        gridLayout->addWidget(upperLimitLabel, 0, 0, 1, 1);

        cancelButton = new QPushButton(QmitkLevelWindowRangeChange);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setAutoDefault(false);

        gridLayout->addWidget(cancelButton, 2, 2, 1, 1);

        rangeMaxDoubleSpinBox = new QDoubleSpinBox(QmitkLevelWindowRangeChange);
        rangeMaxDoubleSpinBox->setObjectName(QStringLiteral("rangeMaxDoubleSpinBox"));

        gridLayout->addWidget(rangeMaxDoubleSpinBox, 0, 1, 1, 2);

        rangeMinDoubleSpinBox = new QDoubleSpinBox(QmitkLevelWindowRangeChange);
        rangeMinDoubleSpinBox->setObjectName(QStringLiteral("rangeMinDoubleSpinBox"));

        gridLayout->addWidget(rangeMinDoubleSpinBox, 1, 1, 1, 2);

        QWidget::setTabOrder(rangeMaxDoubleSpinBox, rangeMinDoubleSpinBox);
        QWidget::setTabOrder(rangeMinDoubleSpinBox, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(QmitkLevelWindowRangeChange);
        QObject::connect(cancelButton, SIGNAL(clicked()), QmitkLevelWindowRangeChange, SLOT(reject()));

        QMetaObject::connectSlotsByName(QmitkLevelWindowRangeChange);
    } // setupUi

    void retranslateUi(QDialog *QmitkLevelWindowRangeChange)
    {
        QmitkLevelWindowRangeChange->setWindowTitle(QApplication::translate("QmitkLevelWindowRangeChange", "Change Scale Range", 0));
        okButton->setText(QApplication::translate("QmitkLevelWindowRangeChange", "OK", 0));
        lowerLimitLabel->setText(QApplication::translate("QmitkLevelWindowRangeChange", "Lower Limit:", 0));
        upperLimitLabel->setText(QApplication::translate("QmitkLevelWindowRangeChange", "Upper Limit:", 0));
        cancelButton->setText(QApplication::translate("QmitkLevelWindowRangeChange", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkLevelWindowRangeChange: public Ui_QmitkLevelWindowRangeChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKLEVELWINDOWRANGECHANGE_H
