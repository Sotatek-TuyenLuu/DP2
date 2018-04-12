/********************************************************************************
** Form generated from reading UI file 'QmitkSliceWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSLICEWIDGET_H
#define UI_QMITKSLICEWIDGET_H

#include <QmitkLevelWindowWidget.h>
#include <QmitkSliderNavigatorWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkSliceWidgetUi
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *SelectionFrame;
    QHBoxLayout *hboxLayout;
    QFrame *container;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QmitkLevelWindowWidget *levelWindow;
    QmitkSliderNavigatorWidget *m_NavigatorWidget;

    void setupUi(QWidget *QmitkSliceWidgetUi)
    {
        if (QmitkSliceWidgetUi->objectName().isEmpty())
            QmitkSliceWidgetUi->setObjectName(QStringLiteral("QmitkSliceWidgetUi"));
        QmitkSliceWidgetUi->resize(534, 519);
        vboxLayout = new QVBoxLayout(QmitkSliceWidgetUi);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        SelectionFrame = new QFrame(QmitkSliceWidgetUi);
        SelectionFrame->setObjectName(QStringLiteral("SelectionFrame"));
        SelectionFrame->setFrameShape(QFrame::NoFrame);
        SelectionFrame->setFrameShadow(QFrame::Plain);
        SelectionFrame->setProperty("margin", QVariant(0));
        hboxLayout = new QHBoxLayout(SelectionFrame);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        container = new QFrame(SelectionFrame);
        container->setObjectName(QStringLiteral("container"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(container->sizePolicy().hasHeightForWidth());
        container->setSizePolicy(sizePolicy);
        container->setFrameShape(QFrame::NoFrame);
        container->setFrameShadow(QFrame::Plain);

        hboxLayout->addWidget(container);

        frame = new QFrame(SelectionFrame);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setSpacing(0);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        levelWindow = new QmitkLevelWindowWidget(frame);
        levelWindow->setObjectName(QStringLiteral("levelWindow"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(levelWindow->sizePolicy().hasHeightForWidth());
        levelWindow->setSizePolicy(sizePolicy2);
        levelWindow->setMinimumSize(QSize(25, 50));
        levelWindow->setMaximumSize(QSize(25, 2000));

        vboxLayout1->addWidget(levelWindow);


        hboxLayout->addWidget(frame);


        vboxLayout->addWidget(SelectionFrame);

        m_NavigatorWidget = new QmitkSliderNavigatorWidget(QmitkSliceWidgetUi);
        m_NavigatorWidget->setObjectName(QStringLiteral("m_NavigatorWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_NavigatorWidget->sizePolicy().hasHeightForWidth());
        m_NavigatorWidget->setSizePolicy(sizePolicy3);
        m_NavigatorWidget->setMinimumSize(QSize(0, 25));
        m_NavigatorWidget->setMaximumSize(QSize(32767, 25));

        vboxLayout->addWidget(m_NavigatorWidget);


        retranslateUi(QmitkSliceWidgetUi);

        QMetaObject::connectSlotsByName(QmitkSliceWidgetUi);
    } // setupUi

    void retranslateUi(QWidget *QmitkSliceWidgetUi)
    {
        QmitkSliceWidgetUi->setWindowTitle(QApplication::translate("QmitkSliceWidgetUi", "QmitkSliceWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkSliceWidgetUi: public Ui_QmitkSliceWidgetUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSLICEWIDGET_H
