/********************************************************************************
** Form generated from reading UI file 'berryQtStatusPart.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BERRYQTSTATUSPART_H
#define UI_BERRYQTSTATUSPART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtStatusPart
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *m_TitleLabel;
    QLabel *m_DetailsLabel;

    void setupUi(QWidget *QtStatusPart)
    {
        if (QtStatusPart->objectName().isEmpty())
            QtStatusPart->setObjectName(QStringLiteral("QtStatusPart"));
        QtStatusPart->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(QtStatusPart);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 10, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(QtStatusPart);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(48);
        sizePolicy.setVerticalStretch(48);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/org.blueberry.ui.qt/dialog-error.svg")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        m_TitleLabel = new QLabel(QtStatusPart);
        m_TitleLabel->setObjectName(QStringLiteral("m_TitleLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_TitleLabel->sizePolicy().hasHeightForWidth());
        m_TitleLabel->setSizePolicy(sizePolicy1);
        m_TitleLabel->setWordWrap(true);

        horizontalLayout->addWidget(m_TitleLabel);


        verticalLayout->addLayout(horizontalLayout);

        m_DetailsLabel = new QLabel(QtStatusPart);
        m_DetailsLabel->setObjectName(QStringLiteral("m_DetailsLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_DetailsLabel->sizePolicy().hasHeightForWidth());
        m_DetailsLabel->setSizePolicy(sizePolicy2);
        m_DetailsLabel->setTextFormat(Qt::RichText);
        m_DetailsLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_DetailsLabel->setWordWrap(true);
        m_DetailsLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(m_DetailsLabel);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(QtStatusPart);

        QMetaObject::connectSlotsByName(QtStatusPart);
    } // setupUi

    void retranslateUi(QWidget *QtStatusPart)
    {
        QtStatusPart->setWindowTitle(QApplication::translate("QtStatusPart", "Form", 0));
        label->setText(QString());
        m_TitleLabel->setText(QString());
        m_DetailsLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtStatusPart: public Ui_QtStatusPart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BERRYQTSTATUSPART_H
