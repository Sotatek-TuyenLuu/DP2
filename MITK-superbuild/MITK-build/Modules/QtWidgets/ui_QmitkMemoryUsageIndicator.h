/********************************************************************************
** Form generated from reading UI file 'QmitkMemoryUsageIndicator.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKMEMORYUSAGEINDICATOR_H
#define UI_QMITKMEMORYUSAGEINDICATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <QtGui/QPixmap>
#include <string>
#include "mitkCommon.h"

QT_BEGIN_NAMESPACE

class MITKQTWIDGETS_EXPORT Ui_QmitkMemoryUsageIndicator
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *m_Label;
    QLabel *m_LED;

    void setupUi(QWidget *QmitkMemoryUsageIndicator)
    {
        if (QmitkMemoryUsageIndicator->objectName().isEmpty())
            QmitkMemoryUsageIndicator->setObjectName(QStringLiteral("QmitkMemoryUsageIndicator"));
        QmitkMemoryUsageIndicator->resize(124, 22);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkMemoryUsageIndicator->sizePolicy().hasHeightForWidth());
        QmitkMemoryUsageIndicator->setSizePolicy(sizePolicy);
        QmitkMemoryUsageIndicator->setMaximumSize(QSize(32000, 32000));
        hboxLayout = new QHBoxLayout(QmitkMemoryUsageIndicator);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        m_Label = new QLabel(QmitkMemoryUsageIndicator);
        m_Label->setObjectName(QStringLiteral("m_Label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_Label->sizePolicy().hasHeightForWidth());
        m_Label->setSizePolicy(sizePolicy1);
        m_Label->setTextFormat(Qt::AutoText);
        m_Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_Label->setWordWrap(true);

        hboxLayout->addWidget(m_Label);

        m_LED = new QLabel(QmitkMemoryUsageIndicator);
        m_LED->setObjectName(QStringLiteral("m_LED"));
        m_LED->setMaximumSize(QSize(20, 20));
        m_LED->setLineWidth(0);
        m_LED->setPixmap(QPixmap(QString::fromUtf8("QmitkApplicationBase/image0")));
        m_LED->setScaledContents(true);
        m_LED->setWordWrap(false);

        hboxLayout->addWidget(m_LED);


        retranslateUi(QmitkMemoryUsageIndicator);

        QMetaObject::connectSlotsByName(QmitkMemoryUsageIndicator);
    } // setupUi

    void retranslateUi(QWidget *QmitkMemoryUsageIndicator)
    {
        QmitkMemoryUsageIndicator->setWindowTitle(QApplication::translate("QmitkMemoryUsageIndicator", "Form1", 0));
#ifndef QT_NO_TOOLTIP
        QmitkMemoryUsageIndicator->setToolTip(QApplication::translate("QmitkMemoryUsageIndicator", "Memory usage in % of physical memory", 0));
#endif // QT_NO_TOOLTIP
        m_Label->setText(QApplication::translate("QmitkMemoryUsageIndicator", "000,00 %", 0));
    } // retranslateUi

};

namespace Ui {
    class MITKQTWIDGETS_EXPORT QmitkMemoryUsageIndicator: public Ui_QmitkMemoryUsageIndicator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKMEMORYUSAGEINDICATOR_H
