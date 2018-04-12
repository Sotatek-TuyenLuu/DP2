/********************************************************************************
** Form generated from reading UI file 'QmitkSegmentationUtilitiesViewControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSEGMENTATIONUTILITIESVIEWCONTROLS_H
#define UI_QMITKSEGMENTATIONUTILITIESVIEWCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkSegmentationUtilitiesViewControls
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;

    void setupUi(QWidget *QmitkSegmentationUtilitiesViewControls)
    {
        if (QmitkSegmentationUtilitiesViewControls->objectName().isEmpty())
            QmitkSegmentationUtilitiesViewControls->setObjectName(QStringLiteral("QmitkSegmentationUtilitiesViewControls"));
        QmitkSegmentationUtilitiesViewControls->resize(289, 418);
        QmitkSegmentationUtilitiesViewControls->setMinimumSize(QSize(0, 0));
        QmitkSegmentationUtilitiesViewControls->setStyleSheet(QStringLiteral("icon-size: 32px 32px"));
        verticalLayout = new QVBoxLayout(QmitkSegmentationUtilitiesViewControls);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolBox = new QToolBox(QmitkSegmentationUtilitiesViewControls);
        toolBox->setObjectName(QStringLiteral("toolBox"));

        verticalLayout->addWidget(toolBox);


        retranslateUi(QmitkSegmentationUtilitiesViewControls);

        toolBox->setCurrentIndex(-1);
        toolBox->layout()->setSpacing(0);


        QMetaObject::connectSlotsByName(QmitkSegmentationUtilitiesViewControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkSegmentationUtilitiesViewControls)
    {
        QmitkSegmentationUtilitiesViewControls->setWindowTitle(QApplication::translate("QmitkSegmentationUtilitiesViewControls", "QmitkTemplate", 0));
#ifndef QT_NO_ACCESSIBILITY
        toolBox->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
    } // retranslateUi

};

namespace Ui {
    class QmitkSegmentationUtilitiesViewControls: public Ui_QmitkSegmentationUtilitiesViewControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSEGMENTATIONUTILITIESVIEWCONTROLS_H
