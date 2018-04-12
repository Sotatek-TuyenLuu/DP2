/********************************************************************************
** Form generated from reading UI file 'QmitkFileReaderOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKFILEREADEROPTIONSDIALOG_H
#define UI_QMITKFILEREADEROPTIONSDIALOG_H

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

class Ui_QmitkFileReaderOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_ReaderLabel;
    QComboBox *m_ReaderComboBox;
    QLabel *m_FilePathLabel;
    QGroupBox *m_OptionsBox;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *m_StackedOptionsWidget;
    QCheckBox *m_ReuseOptionsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QmitkFileReaderOptionsDialog)
    {
        if (QmitkFileReaderOptionsDialog->objectName().isEmpty())
            QmitkFileReaderOptionsDialog->setObjectName(QStringLiteral("QmitkFileReaderOptionsDialog"));
        QmitkFileReaderOptionsDialog->resize(272, 186);
        QmitkFileReaderOptionsDialog->setSizeGripEnabled(false);
        QmitkFileReaderOptionsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(QmitkFileReaderOptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        m_ReaderLabel = new QLabel(QmitkFileReaderOptionsDialog);
        m_ReaderLabel->setObjectName(QStringLiteral("m_ReaderLabel"));

        verticalLayout->addWidget(m_ReaderLabel);

        m_ReaderComboBox = new QComboBox(QmitkFileReaderOptionsDialog);
        m_ReaderComboBox->setObjectName(QStringLiteral("m_ReaderComboBox"));

        verticalLayout->addWidget(m_ReaderComboBox);

        m_FilePathLabel = new QLabel(QmitkFileReaderOptionsDialog);
        m_FilePathLabel->setObjectName(QStringLiteral("m_FilePathLabel"));
        m_FilePathLabel->setWordWrap(true);

        verticalLayout->addWidget(m_FilePathLabel);

        m_OptionsBox = new QGroupBox(QmitkFileReaderOptionsDialog);
        m_OptionsBox->setObjectName(QStringLiteral("m_OptionsBox"));
        m_OptionsBox->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(m_OptionsBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_StackedOptionsWidget = new QStackedWidget(m_OptionsBox);
        m_StackedOptionsWidget->setObjectName(QStringLiteral("m_StackedOptionsWidget"));

        verticalLayout_2->addWidget(m_StackedOptionsWidget);


        verticalLayout->addWidget(m_OptionsBox);

        m_ReuseOptionsCheckBox = new QCheckBox(QmitkFileReaderOptionsDialog);
        m_ReuseOptionsCheckBox->setObjectName(QStringLiteral("m_ReuseOptionsCheckBox"));

        verticalLayout->addWidget(m_ReuseOptionsCheckBox);

        buttonBox = new QDialogButtonBox(QmitkFileReaderOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QmitkFileReaderOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QmitkFileReaderOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QmitkFileReaderOptionsDialog, SLOT(reject()));
        QObject::connect(m_ReaderComboBox, SIGNAL(currentIndexChanged(int)), m_StackedOptionsWidget, SLOT(setCurrentIndex(int)));

        QMetaObject::connectSlotsByName(QmitkFileReaderOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QmitkFileReaderOptionsDialog)
    {
        QmitkFileReaderOptionsDialog->setWindowTitle(QApplication::translate("QmitkFileReaderOptionsDialog", "Dialog", 0));
        m_ReaderLabel->setText(QApplication::translate("QmitkFileReaderOptionsDialog", "Choose file reader", 0));
        m_FilePathLabel->setText(QString());
        m_OptionsBox->setTitle(QApplication::translate("QmitkFileReaderOptionsDialog", "Options", 0));
        m_ReuseOptionsCheckBox->setText(QApplication::translate("QmitkFileReaderOptionsDialog", "Apply to the next files with same type", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkFileReaderOptionsDialog: public Ui_QmitkFileReaderOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKFILEREADEROPTIONSDIALOG_H
