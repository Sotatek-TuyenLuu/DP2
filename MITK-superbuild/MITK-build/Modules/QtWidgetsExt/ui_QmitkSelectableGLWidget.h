/********************************************************************************
** Form generated from reading UI file 'QmitkSelectableGLWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSELECTABLEGLWIDGET_H
#define UI_QMITKSELECTABLEGLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkSelectableGLWidget
{
public:
    QHBoxLayout *hboxLayout;

    void setupUi(QWidget *QmitkSelectableGLWidget)
    {
        if (QmitkSelectableGLWidget->objectName().isEmpty())
            QmitkSelectableGLWidget->setObjectName(QStringLiteral("QmitkSelectableGLWidget"));
        QmitkSelectableGLWidget->resize(498, 588);
        hboxLayout = new QHBoxLayout(QmitkSelectableGLWidget);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));

        retranslateUi(QmitkSelectableGLWidget);

        QMetaObject::connectSlotsByName(QmitkSelectableGLWidget);
    } // setupUi

    void retranslateUi(QWidget *QmitkSelectableGLWidget)
    {
        QmitkSelectableGLWidget->setWindowTitle(QApplication::translate("QmitkSelectableGLWidget", "Form1", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkSelectableGLWidget: public Ui_QmitkSelectableGLWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSELECTABLEGLWIDGET_H
