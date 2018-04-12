/********************************************************************************
** Form generated from reading UI file 'QmitkLevelWindowWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKLEVELWINDOWWIDGET_H
#define UI_QMITKLEVELWINDOWWIDGET_H

#include <QmitkLineEditLevelWindowWidget.h>
#include <QmitkSliderLevelWindowWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkLevelWindow
{
public:
    QVBoxLayout *vboxLayout;
    QmitkSliderLevelWindowWidget *SliderLevelWindowWidget;
    QmitkLineEditLevelWindowWidget *LineEditLevelWindowWidget;

    void setupUi(QWidget *QmitkLevelWindow)
    {
        if (QmitkLevelWindow->objectName().isEmpty())
            QmitkLevelWindow->setObjectName(QStringLiteral("QmitkLevelWindow"));
        QmitkLevelWindow->resize(0, 0);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkLevelWindow->sizePolicy().hasHeightForWidth());
        QmitkLevelWindow->setSizePolicy(sizePolicy);
        QmitkLevelWindow->setMinimumSize(QSize(0, 0));
        QmitkLevelWindow->setMaximumSize(QSize(114, 32767));
        vboxLayout = new QVBoxLayout(QmitkLevelWindow);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        SliderLevelWindowWidget = new QmitkSliderLevelWindowWidget(QmitkLevelWindow);
        SliderLevelWindowWidget->setObjectName(QStringLiteral("SliderLevelWindowWidget"));
        sizePolicy.setHeightForWidth(SliderLevelWindowWidget->sizePolicy().hasHeightForWidth());
        SliderLevelWindowWidget->setSizePolicy(sizePolicy);
        SliderLevelWindowWidget->setMinimumSize(QSize(0, 50));
        SliderLevelWindowWidget->setMaximumSize(QSize(50, 32767));

        vboxLayout->addWidget(SliderLevelWindowWidget);

        LineEditLevelWindowWidget = new QmitkLineEditLevelWindowWidget(QmitkLevelWindow);
        LineEditLevelWindowWidget->setObjectName(QStringLiteral("LineEditLevelWindowWidget"));
        sizePolicy.setHeightForWidth(LineEditLevelWindowWidget->sizePolicy().hasHeightForWidth());
        LineEditLevelWindowWidget->setSizePolicy(sizePolicy);
        LineEditLevelWindowWidget->setMinimumSize(QSize(0, 0));
        LineEditLevelWindowWidget->setMaximumSize(QSize(50, 32767));

        vboxLayout->addWidget(LineEditLevelWindowWidget);


        retranslateUi(QmitkLevelWindow);

        QMetaObject::connectSlotsByName(QmitkLevelWindow);
    } // setupUi

    void retranslateUi(QWidget *QmitkLevelWindow)
    {
        QmitkLevelWindow->setWindowTitle(QApplication::translate("QmitkLevelWindow", "QmitkLevelWindowWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkLevelWindow: public Ui_QmitkLevelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKLEVELWINDOWWIDGET_H
