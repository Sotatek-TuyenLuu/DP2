/********************************************************************************
** Form generated from reading UI file 'QmitkPickingToolGUIControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKPICKINGTOOLGUICONTROLS_H
#define UI_QMITKPICKINGTOOLGUICONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkPickingToolGUIControls
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *m_ConfirmButton;

    void setupUi(QWidget *QmitkPickingToolGUIControls)
    {
        if (QmitkPickingToolGUIControls->objectName().isEmpty())
            QmitkPickingToolGUIControls->setObjectName(QStringLiteral("QmitkPickingToolGUIControls"));
        QmitkPickingToolGUIControls->resize(421, 263);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkPickingToolGUIControls->sizePolicy().hasHeightForWidth());
        QmitkPickingToolGUIControls->setSizePolicy(sizePolicy);
        QmitkPickingToolGUIControls->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(QmitkPickingToolGUIControls);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(QmitkPickingToolGUIControls);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(QmitkPickingToolGUIControls);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        m_ConfirmButton = new QPushButton(QmitkPickingToolGUIControls);
        m_ConfirmButton->setObjectName(QStringLiteral("m_ConfirmButton"));

        verticalLayout_2->addWidget(m_ConfirmButton);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(QmitkPickingToolGUIControls);

        QMetaObject::connectSlotsByName(QmitkPickingToolGUIControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkPickingToolGUIControls)
    {
        QmitkPickingToolGUIControls->setWindowTitle(QApplication::translate("QmitkPickingToolGUIControls", "QmitkPickingToolGUIControls", 0));
#ifndef QT_NO_TOOLTIP
        QmitkPickingToolGUIControls->setToolTip(QApplication::translate("QmitkPickingToolGUIControls", "Confirm all previous contour.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("QmitkPickingToolGUIControls", "Use shift click to pick a single", 0));
        label_2->setText(QApplication::translate("QmitkPickingToolGUIControls", "region from the segmentation image.", 0));
        m_ConfirmButton->setText(QApplication::translate("QmitkPickingToolGUIControls", "Confirm picked region", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkPickingToolGUIControls: public Ui_QmitkPickingToolGUIControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKPICKINGTOOLGUICONTROLS_H
