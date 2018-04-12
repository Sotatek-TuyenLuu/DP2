/********************************************************************************
** Form generated from reading UI file 'QmitkConfirmSegmentationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKCONFIRMSEGMENTATIONDIALOG_H
#define UI_QMITKCONFIRMSEGMENTATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QmitkConfirmSegmentationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_lblDialogText;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_btnOverwriteSegmentation;
    QPushButton *m_btnNewSegmentation;
    QPushButton *m_btnCancel;

    void setupUi(QDialog *QmitkConfirmSegmentationDialog)
    {
        if (QmitkConfirmSegmentationDialog->objectName().isEmpty())
            QmitkConfirmSegmentationDialog->setObjectName(QStringLiteral("QmitkConfirmSegmentationDialog"));
        QmitkConfirmSegmentationDialog->resize(238, 80);
        verticalLayout = new QVBoxLayout(QmitkConfirmSegmentationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_lblDialogText = new QLabel(QmitkConfirmSegmentationDialog);
        m_lblDialogText->setObjectName(QStringLiteral("m_lblDialogText"));

        verticalLayout->addWidget(m_lblDialogText);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_btnOverwriteSegmentation = new QPushButton(QmitkConfirmSegmentationDialog);
        m_btnOverwriteSegmentation->setObjectName(QStringLiteral("m_btnOverwriteSegmentation"));

        horizontalLayout->addWidget(m_btnOverwriteSegmentation);

        m_btnNewSegmentation = new QPushButton(QmitkConfirmSegmentationDialog);
        m_btnNewSegmentation->setObjectName(QStringLiteral("m_btnNewSegmentation"));

        horizontalLayout->addWidget(m_btnNewSegmentation);

        m_btnCancel = new QPushButton(QmitkConfirmSegmentationDialog);
        m_btnCancel->setObjectName(QStringLiteral("m_btnCancel"));

        horizontalLayout->addWidget(m_btnCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QmitkConfirmSegmentationDialog);

        QMetaObject::connectSlotsByName(QmitkConfirmSegmentationDialog);
    } // setupUi

    void retranslateUi(QDialog *QmitkConfirmSegmentationDialog)
    {
        QmitkConfirmSegmentationDialog->setWindowTitle(QApplication::translate("QmitkConfirmSegmentationDialog", "Dialog", 0));
        m_lblDialogText->setText(QString());
        m_btnOverwriteSegmentation->setText(QApplication::translate("QmitkConfirmSegmentationDialog", "Ok", 0));
        m_btnNewSegmentation->setText(QApplication::translate("QmitkConfirmSegmentationDialog", "New...", 0));
        m_btnCancel->setText(QApplication::translate("QmitkConfirmSegmentationDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkConfirmSegmentationDialog: public Ui_QmitkConfirmSegmentationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKCONFIRMSEGMENTATIONDIALOG_H
