/********************************************************************************
** Form generated from reading UI file 'QmitkGnuplotWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKGNUPLOTWIDGET_H
#define UI_QMITKGNUPLOTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkGnuplotWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *QmitkGnuplotWidget)
    {
        if (QmitkGnuplotWidget->objectName().isEmpty())
            QmitkGnuplotWidget->setObjectName(QStringLiteral("QmitkGnuplotWidget"));
        QmitkGnuplotWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(QmitkGnuplotWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QmitkGnuplotWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(1, 1));
        label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 0, 0);"));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(label);


        retranslateUi(QmitkGnuplotWidget);

        QMetaObject::connectSlotsByName(QmitkGnuplotWidget);
    } // setupUi

    void retranslateUi(QWidget *QmitkGnuplotWidget)
    {
        Q_UNUSED(QmitkGnuplotWidget);
    } // retranslateUi

};

namespace Ui {
    class QmitkGnuplotWidget: public Ui_QmitkGnuplotWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKGNUPLOTWIDGET_H
