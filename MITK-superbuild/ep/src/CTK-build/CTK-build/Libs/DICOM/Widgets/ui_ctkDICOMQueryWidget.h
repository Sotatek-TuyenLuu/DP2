/********************************************************************************
** Form generated from reading UI file 'ctkDICOMQueryWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDICOMQUERYWIDGET_H
#define UI_CTKDICOMQUERYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkDateRangeWidget.h"
#include "ctkModalityWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ctkDICOMQueryWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *QueryOptions;
    QWidget *Name;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *NameSearch;
    QWidget *Study;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *StudySearch;
    QWidget *Series;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *SeriesSearch;
    QWidget *ID;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *IdSearch;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    ctkDateRangeWidget *DateRangeWidget;
    QSpacerItem *verticalSpacer;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    ctkModalityWidget *ModalityWidget;

    void setupUi(QWidget *ctkDICOMQueryWidget)
    {
        if (ctkDICOMQueryWidget->objectName().isEmpty())
            ctkDICOMQueryWidget->setObjectName(QStringLiteral("ctkDICOMQueryWidget"));
        ctkDICOMQueryWidget->resize(279, 159);
        verticalLayout = new QVBoxLayout(ctkDICOMQueryWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        QueryOptions = new QTabWidget(ctkDICOMQueryWidget);
        QueryOptions->setObjectName(QStringLiteral("QueryOptions"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QueryOptions->sizePolicy().hasHeightForWidth());
        QueryOptions->setSizePolicy(sizePolicy);
        QueryOptions->setMaximumSize(QSize(16777215, 16777215));
        Name = new QWidget();
        Name->setObjectName(QStringLiteral("Name"));
        verticalLayout_7 = new QVBoxLayout(Name);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        NameSearch = new QLineEdit(Name);
        NameSearch->setObjectName(QStringLiteral("NameSearch"));

        verticalLayout_7->addWidget(NameSearch);

        QueryOptions->addTab(Name, QString());
        Study = new QWidget();
        Study->setObjectName(QStringLiteral("Study"));
        verticalLayout_8 = new QVBoxLayout(Study);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        StudySearch = new QLineEdit(Study);
        StudySearch->setObjectName(QStringLiteral("StudySearch"));

        verticalLayout_8->addWidget(StudySearch);

        QueryOptions->addTab(Study, QString());
        Series = new QWidget();
        Series->setObjectName(QStringLiteral("Series"));
        verticalLayout_9 = new QVBoxLayout(Series);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        SeriesSearch = new QLineEdit(Series);
        SeriesSearch->setObjectName(QStringLiteral("SeriesSearch"));

        verticalLayout_9->addWidget(SeriesSearch);

        QueryOptions->addTab(Series, QString());
        ID = new QWidget();
        ID->setObjectName(QStringLiteral("ID"));
        verticalLayout_10 = new QVBoxLayout(ID);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        IdSearch = new QLineEdit(ID);
        IdSearch->setObjectName(QStringLiteral("IdSearch"));

        verticalLayout_10->addWidget(IdSearch);

        QueryOptions->addTab(ID, QString());

        verticalLayout->addWidget(QueryOptions);

        frame = new QFrame(ctkDICOMQueryWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        DateRangeWidget = new ctkDateRangeWidget(frame_2);
        DateRangeWidget->setObjectName(QStringLiteral("DateRangeWidget"));

        verticalLayout_2->addWidget(DateRangeWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        ModalityWidget = new ctkModalityWidget(frame_3);
        ModalityWidget->setObjectName(QStringLiteral("ModalityWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ModalityWidget->sizePolicy().hasHeightForWidth());
        ModalityWidget->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(ModalityWidget);


        horizontalLayout_2->addWidget(frame_3);


        verticalLayout->addWidget(frame);

        verticalLayout->setStretch(1, 1);

        retranslateUi(ctkDICOMQueryWidget);

        QueryOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ctkDICOMQueryWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkDICOMQueryWidget)
    {
        ctkDICOMQueryWidget->setWindowTitle(QApplication::translate("ctkDICOMQueryWidget", "Form", 0));
        QueryOptions->setTabText(QueryOptions->indexOf(Name), QApplication::translate("ctkDICOMQueryWidget", "Name", 0));
        QueryOptions->setTabToolTip(QueryOptions->indexOf(Name), QApplication::translate("ctkDICOMQueryWidget", "Search by Person Name", 0));
        QueryOptions->setTabText(QueryOptions->indexOf(Study), QApplication::translate("ctkDICOMQueryWidget", "Study", 0));
        QueryOptions->setTabToolTip(QueryOptions->indexOf(Study), QApplication::translate("ctkDICOMQueryWidget", "Search in Study Description", 0));
        QueryOptions->setTabText(QueryOptions->indexOf(Series), QApplication::translate("ctkDICOMQueryWidget", "Series", 0));
        QueryOptions->setTabToolTip(QueryOptions->indexOf(Series), QApplication::translate("ctkDICOMQueryWidget", "Search in Series Description", 0));
        QueryOptions->setTabText(QueryOptions->indexOf(ID), QApplication::translate("ctkDICOMQueryWidget", "ID", 0));
        QueryOptions->setTabToolTip(QueryOptions->indexOf(ID), QApplication::translate("ctkDICOMQueryWidget", "Search by Person ID", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkDICOMQueryWidget: public Ui_ctkDICOMQueryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDICOMQUERYWIDGET_H
