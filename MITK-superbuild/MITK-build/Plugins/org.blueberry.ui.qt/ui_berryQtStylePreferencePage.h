/********************************************************************************
** Form generated from reading UI file 'berryQtStylePreferencePage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BERRYQTSTYLEPREFERENCEPAGE_H
#define UI_BERRYQTSTYLEPREFERENCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtStylePreferencePageUI
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *m_StylesCombo;
    QFrame *m_IconThemeFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *m_IconThemeLabel;
    QComboBox *m_IconThemeComboBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *m_PathList;
    QVBoxLayout *verticalLayout;
    QPushButton *m_AddButton;
    QPushButton *m_EditButton;
    QPushButton *m_RemoveButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QtStylePreferencePageUI)
    {
        if (QtStylePreferencePageUI->objectName().isEmpty())
            QtStylePreferencePageUI->setObjectName(QStringLiteral("QtStylePreferencePageUI"));
        QtStylePreferencePageUI->resize(400, 348);
        verticalLayout_2 = new QVBoxLayout(QtStylePreferencePageUI);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(QtStylePreferencePageUI);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_StylesCombo = new QComboBox(frame);
        m_StylesCombo->setObjectName(QStringLiteral("m_StylesCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_StylesCombo->sizePolicy().hasHeightForWidth());
        m_StylesCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_StylesCombo);


        verticalLayout_2->addWidget(frame);

        m_IconThemeFrame = new QFrame(QtStylePreferencePageUI);
        m_IconThemeFrame->setObjectName(QStringLiteral("m_IconThemeFrame"));
        m_IconThemeFrame->setFrameShape(QFrame::Panel);
        m_IconThemeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(m_IconThemeFrame);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        m_IconThemeLabel = new QLabel(m_IconThemeFrame);
        m_IconThemeLabel->setObjectName(QStringLiteral("m_IconThemeLabel"));

        horizontalLayout_3->addWidget(m_IconThemeLabel);

        m_IconThemeComboBox = new QComboBox(m_IconThemeFrame);
        m_IconThemeComboBox->setObjectName(QStringLiteral("m_IconThemeComboBox"));
        sizePolicy.setHeightForWidth(m_IconThemeComboBox->sizePolicy().hasHeightForWidth());
        m_IconThemeComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(m_IconThemeComboBox);


        verticalLayout_2->addWidget(m_IconThemeFrame);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_2 = new QLabel(QtStylePreferencePageUI);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_PathList = new QListWidget(QtStylePreferencePageUI);
        m_PathList->setObjectName(QStringLiteral("m_PathList"));
        m_PathList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        m_PathList->setSortingEnabled(true);

        horizontalLayout_2->addWidget(m_PathList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_AddButton = new QPushButton(QtStylePreferencePageUI);
        m_AddButton->setObjectName(QStringLiteral("m_AddButton"));

        verticalLayout->addWidget(m_AddButton);

        m_EditButton = new QPushButton(QtStylePreferencePageUI);
        m_EditButton->setObjectName(QStringLiteral("m_EditButton"));
        m_EditButton->setEnabled(false);

        verticalLayout->addWidget(m_EditButton);

        m_RemoveButton = new QPushButton(QtStylePreferencePageUI);
        m_RemoveButton->setObjectName(QStringLiteral("m_RemoveButton"));
        m_RemoveButton->setEnabled(false);

        verticalLayout->addWidget(m_RemoveButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(QtStylePreferencePageUI);

        QMetaObject::connectSlotsByName(QtStylePreferencePageUI);
    } // setupUi

    void retranslateUi(QWidget *QtStylePreferencePageUI)
    {
        QtStylePreferencePageUI->setWindowTitle(QApplication::translate("QtStylePreferencePageUI", "Form", 0));
        label->setText(QApplication::translate("QtStylePreferencePageUI", "Active Style Theme", 0));
        m_IconThemeLabel->setText(QApplication::translate("QtStylePreferencePageUI", "Active Icon Theme", 0));
        label_2->setText(QApplication::translate("QtStylePreferencePageUI", "Style Search Paths", 0));
        m_AddButton->setText(QApplication::translate("QtStylePreferencePageUI", "Add...", 0));
        m_EditButton->setText(QApplication::translate("QtStylePreferencePageUI", "Edit...", 0));
        m_RemoveButton->setText(QApplication::translate("QtStylePreferencePageUI", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class QtStylePreferencePageUI: public Ui_QtStylePreferencePageUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BERRYQTSTYLEPREFERENCEPAGE_H
