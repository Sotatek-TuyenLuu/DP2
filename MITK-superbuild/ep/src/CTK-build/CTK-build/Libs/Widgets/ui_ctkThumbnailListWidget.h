/********************************************************************************
** Form generated from reading UI file 'ctkThumbnailListWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKTHUMBNAILLISTWIDGET_H
#define UI_CTKTHUMBNAILLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkThumbnailListWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *ScrollArea;
    QWidget *ScrollAreaContentWidget;

    void setupUi(QWidget *ctkThumbnailListWidget)
    {
        if (ctkThumbnailListWidget->objectName().isEmpty())
            ctkThumbnailListWidget->setObjectName(QStringLiteral("ctkThumbnailListWidget"));
        ctkThumbnailListWidget->resize(224, 237);
        verticalLayout_2 = new QVBoxLayout(ctkThumbnailListWidget);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ScrollArea = new QScrollArea(ctkThumbnailListWidget);
        ScrollArea->setObjectName(QStringLiteral("ScrollArea"));
        ScrollArea->setWidgetResizable(false);
        ScrollAreaContentWidget = new QWidget();
        ScrollAreaContentWidget->setObjectName(QStringLiteral("ScrollAreaContentWidget"));
        ScrollAreaContentWidget->setGeometry(QRect(0, 0, 198, 211));
        ScrollArea->setWidget(ScrollAreaContentWidget);

        verticalLayout_2->addWidget(ScrollArea);


        retranslateUi(ctkThumbnailListWidget);

        QMetaObject::connectSlotsByName(ctkThumbnailListWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkThumbnailListWidget)
    {
        ctkThumbnailListWidget->setWindowTitle(QApplication::translate("ctkThumbnailListWidget", "ThumbnailList", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkThumbnailListWidget: public Ui_ctkThumbnailListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKTHUMBNAILLISTWIDGET_H
