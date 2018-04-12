/********************************************************************************
** Form generated from reading UI file 'QmitkFileWriterOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKFILEWRITEROPTIONSDIALOG_H
#define UI_QMITKFILEWRITEROPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QmitkFileWriterOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_WriterLabel;
    QComboBox *m_WriterComboBox;
    QLabel *m_FilePathLabel;
    QGroupBox *m_OptionsBox;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *m_StackedOptionsWidget;
    QCheckBox *m_ReuseOptionsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QmitkFileWriterOptionsDialog)
    {
        if (QmitkFileWriterOptionsDialog->objectName().isEmpty())
            QmitkFileWriterOptionsDialog->setObjectName(QStringLiteral("QmitkFileWriterOptionsDialog"));
        QmitkFileWriterOptionsDialog->resize(272, 186);
        QmitkFileWriterOptionsDialog->setSizeGripEnabled(false);
        QmitkFileWriterOptionsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(QmitkFileWriterOptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        m_WriterLabel = new QLabel(QmitkFileWriterOptionsDialog);
        m_WriterLabel->setObjectName(QStringLiteral("m_WriterLabel"));

        verticalLayout->addWidget(m_WriterLabel);

        m_WriterComboBox = new QComboBox(QmitkFileWriterOptionsDialog);
        m_WriterComboBox->setObjectName(QStringLiteral("m_WriterComboBox"));

        verticalLayout->addWidget(m_WriterComboBox);

        m_FilePathLabel = new QLabel(QmitkFileWriterOptionsDialog);
        m_FilePathLabel->setObjectName(QStringLiteral("m_FilePathLabel"));
        m_FilePathLabel->setWordWrap(true);

        verticalLayout->addWidget(m_FilePathLabel);

        m_OptionsBox = new QGroupBox(QmitkFileWriterOptionsDialog);
        m_OptionsBox->setObjectName(QStringLiteral("m_OptionsBox"));
        m_OptionsBox->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(m_OptionsBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_StackedOptionsWidget = new QStackedWidget(m_OptionsBox);
        m_StackedOptionsWidget->setObjectName(QStringLiteral("m_StackedOptionsWidget"));

        verticalLayout_2->addWidget(m_StackedOptionsWidget);


        verticalLayout->addWidget(m_OptionsBox);

        m_ReuseOptionsCheckBox = new QCheckBox(QmitkFileWriterOptionsDialog);
        m_ReuseOptionsCheckBox->setObjectName(QStringLiteral("m_ReuseOptionsCheckBox"));

        verticalLayout->addWidget(m_ReuseOptionsCheckBox);

        buttonBox = new QDialogButtonBox(QmitkFileWriterOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QmitkFileWriterOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QmitkFileWriterOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QmitkFileWriterOptionsDialog, SLOT(reject()));
        QObject::connect(m_WriterComboBox, SIGNAL(currentIndexChanged(int)), m_StackedOptionsWidget, SLOT(setCurrentIndex(int)));

        QMetaObject::connectSlotsByName(QmitkFileWriterOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QmitkFileWriterOptionsDialog)
    {
        QmitkFileWriterOptionsDialog->setWindowTitle(QApplication::translate("QmitkFileWriterOptionsDialog", "Dialog", 0));
        m_WriterLabel->setText(QApplication::translate("QmitkFileWriterOptionsDialog", "Choose file writer", 0));
        m_FilePathLabel->setText(QString());
        m_OptionsBox->setTitle(QApplication::translate("QmitkFileWriterOptionsDialog", "Options", 0));
        m_ReuseOptionsCheckBox->setText(QApplication::translate("QmitkFileWriterOptionsDialog", "Apply to the next files with same type", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkFileWriterOptionsDialog: public Ui_QmitkFileWriterOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKFILEWRITEROPTIONSDIALOG_H
