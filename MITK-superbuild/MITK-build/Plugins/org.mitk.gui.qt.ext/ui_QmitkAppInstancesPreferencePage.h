/********************************************************************************
** Form generated from reading UI file 'QmitkAppInstancesPreferencePage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKAPPINSTANCESPREFERENCEPAGE_H
#define UI_QMITKAPPINSTANCESPREFERENCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkAppInstancesPreferencePage
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *newInstanceAlways;
    QCheckBox *newInstanceScene;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkAppInstancesPreferencePage)
    {
        if (QmitkAppInstancesPreferencePage->objectName().isEmpty())
            QmitkAppInstancesPreferencePage->setObjectName(QStringLiteral("QmitkAppInstancesPreferencePage"));
        QmitkAppInstancesPreferencePage->resize(400, 300);
        horizontalLayout = new QHBoxLayout(QmitkAppInstancesPreferencePage);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(QmitkAppInstancesPreferencePage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        newInstanceAlways = new QCheckBox(groupBox);
        newInstanceAlways->setObjectName(QStringLiteral("newInstanceAlways"));

        verticalLayout->addWidget(newInstanceAlways);

        newInstanceScene = new QCheckBox(groupBox);
        newInstanceScene->setObjectName(QStringLiteral("newInstanceScene"));

        verticalLayout->addWidget(newInstanceScene);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(groupBox);


        retranslateUi(QmitkAppInstancesPreferencePage);

        QMetaObject::connectSlotsByName(QmitkAppInstancesPreferencePage);
    } // setupUi

    void retranslateUi(QWidget *QmitkAppInstancesPreferencePage)
    {
        QmitkAppInstancesPreferencePage->setWindowTitle(QApplication::translate("QmitkAppInstancesPreferencePage", "Form", 0));
        groupBox->setTitle(QApplication::translate("QmitkAppInstancesPreferencePage", "Running multiple application instances", 0));
        label->setText(QApplication::translate("QmitkAppInstancesPreferencePage", "The options below specify the behavior of repeated invocations of this MITK application.", 0));
#ifndef QT_NO_TOOLTIP
        newInstanceAlways->setToolTip(QApplication::translate("QmitkAppInstancesPreferencePage", "Create a new application instance each time the executable is run.", 0));
#endif // QT_NO_TOOLTIP
        newInstanceAlways->setText(QApplication::translate("QmitkAppInstancesPreferencePage", "New instance for each application invocation", 0));
#ifndef QT_NO_TOOLTIP
        newInstanceScene->setToolTip(QApplication::translate("QmitkAppInstancesPreferencePage", "Open each MITK scene file given on the command line in a new application instance.", 0));
#endif // QT_NO_TOOLTIP
        newInstanceScene->setText(QApplication::translate("QmitkAppInstancesPreferencePage", "New instance for each MITK scene file (.mitk)", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkAppInstancesPreferencePage: public Ui_QmitkAppInstancesPreferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKAPPINSTANCESPREFERENCEPAGE_H
