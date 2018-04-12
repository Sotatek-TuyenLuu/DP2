/********************************************************************************
** Form generated from reading UI file 'ctkDateRangeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDATERANGEWIDGET_H
#define UI_CTKDATERANGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkDateRangeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *AnyDateRadioButton;
    QRadioButton *TodayRadioButton;
    QRadioButton *YesterdayRadioButton;
    QRadioButton *LastWeekRadioButton;
    QRadioButton *LastMonthRadioButton;
    QRadioButton *SelectRangeRadioButton;
    QFrame *DateRangeWidget;
    QVBoxLayout *verticalLayout_2;
    QDateTimeEdit *StartDate;
    QDateTimeEdit *EndDate;

    void setupUi(QWidget *ctkDateRangeWidget)
    {
        if (ctkDateRangeWidget->objectName().isEmpty())
            ctkDateRangeWidget->setObjectName(QStringLiteral("ctkDateRangeWidget"));
        ctkDateRangeWidget->resize(167, 186);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ctkDateRangeWidget->sizePolicy().hasHeightForWidth());
        ctkDateRangeWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ctkDateRangeWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        AnyDateRadioButton = new QRadioButton(ctkDateRangeWidget);
        AnyDateRadioButton->setObjectName(QStringLiteral("AnyDateRadioButton"));

        verticalLayout->addWidget(AnyDateRadioButton);

        TodayRadioButton = new QRadioButton(ctkDateRangeWidget);
        TodayRadioButton->setObjectName(QStringLiteral("TodayRadioButton"));

        verticalLayout->addWidget(TodayRadioButton);

        YesterdayRadioButton = new QRadioButton(ctkDateRangeWidget);
        YesterdayRadioButton->setObjectName(QStringLiteral("YesterdayRadioButton"));

        verticalLayout->addWidget(YesterdayRadioButton);

        LastWeekRadioButton = new QRadioButton(ctkDateRangeWidget);
        LastWeekRadioButton->setObjectName(QStringLiteral("LastWeekRadioButton"));

        verticalLayout->addWidget(LastWeekRadioButton);

        LastMonthRadioButton = new QRadioButton(ctkDateRangeWidget);
        LastMonthRadioButton->setObjectName(QStringLiteral("LastMonthRadioButton"));

        verticalLayout->addWidget(LastMonthRadioButton);

        SelectRangeRadioButton = new QRadioButton(ctkDateRangeWidget);
        SelectRangeRadioButton->setObjectName(QStringLiteral("SelectRangeRadioButton"));
        SelectRangeRadioButton->setChecked(true);

        verticalLayout->addWidget(SelectRangeRadioButton);

        DateRangeWidget = new QFrame(ctkDateRangeWidget);
        DateRangeWidget->setObjectName(QStringLiteral("DateRangeWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DateRangeWidget->sizePolicy().hasHeightForWidth());
        DateRangeWidget->setSizePolicy(sizePolicy1);
        DateRangeWidget->setFrameShape(QFrame::StyledPanel);
        DateRangeWidget->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(DateRangeWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        StartDate = new QDateTimeEdit(DateRangeWidget);
        StartDate->setObjectName(QStringLiteral("StartDate"));
        StartDate->setCalendarPopup(true);

        verticalLayout_2->addWidget(StartDate);

        EndDate = new QDateTimeEdit(DateRangeWidget);
        EndDate->setObjectName(QStringLiteral("EndDate"));
        EndDate->setCalendarPopup(true);

        verticalLayout_2->addWidget(EndDate);


        verticalLayout->addWidget(DateRangeWidget);


        retranslateUi(ctkDateRangeWidget);
        QObject::connect(AnyDateRadioButton, SIGNAL(toggled(bool)), DateRangeWidget, SLOT(setHidden(bool)));

        QMetaObject::connectSlotsByName(ctkDateRangeWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkDateRangeWidget)
    {
        ctkDateRangeWidget->setWindowTitle(QApplication::translate("ctkDateRangeWidget", "Date Range", 0));
        AnyDateRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Any Date", 0));
        TodayRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Today", 0));
        YesterdayRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Yesterday", 0));
        LastWeekRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Last Week", 0));
        LastMonthRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Last Month", 0));
        SelectRangeRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Select Range", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkDateRangeWidget: public Ui_ctkDateRangeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDATERANGEWIDGET_H
