/********************************************************************************
** Form generated from reading UI file 'QmitkExternalProgramsPreferencePage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKEXTERNALPROGRAMSPREFERENCEPAGE_H
#define UI_QMITKEXTERNALPROGRAMSPREFERENCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkExternalProgramsPreferencePage
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *ffmpegLabel;
    QLineEdit *ffmpegLineEdit;
    QToolButton *ffmpegButton;
    QLabel *gnuplotLabel;
    QLineEdit *gnuplotLineEdit;
    QToolButton *gnuplotButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkExternalProgramsPreferencePage)
    {
        if (QmitkExternalProgramsPreferencePage->objectName().isEmpty())
            QmitkExternalProgramsPreferencePage->setObjectName(QStringLiteral("QmitkExternalProgramsPreferencePage"));
        QmitkExternalProgramsPreferencePage->resize(400, 300);
        verticalLayout = new QVBoxLayout(QmitkExternalProgramsPreferencePage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ffmpegLabel = new QLabel(QmitkExternalProgramsPreferencePage);
        ffmpegLabel->setObjectName(QStringLiteral("ffmpegLabel"));
        ffmpegLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(ffmpegLabel, 0, 0, 1, 1);

        ffmpegLineEdit = new QLineEdit(QmitkExternalProgramsPreferencePage);
        ffmpegLineEdit->setObjectName(QStringLiteral("ffmpegLineEdit"));
        ffmpegLineEdit->setReadOnly(true);

        gridLayout->addWidget(ffmpegLineEdit, 0, 1, 1, 1);

        ffmpegButton = new QToolButton(QmitkExternalProgramsPreferencePage);
        ffmpegButton->setObjectName(QStringLiteral("ffmpegButton"));

        gridLayout->addWidget(ffmpegButton, 0, 2, 1, 1);

        gnuplotLabel = new QLabel(QmitkExternalProgramsPreferencePage);
        gnuplotLabel->setObjectName(QStringLiteral("gnuplotLabel"));
        gnuplotLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(gnuplotLabel, 1, 0, 1, 1);

        gnuplotLineEdit = new QLineEdit(QmitkExternalProgramsPreferencePage);
        gnuplotLineEdit->setObjectName(QStringLiteral("gnuplotLineEdit"));
        gnuplotLineEdit->setReadOnly(true);

        gridLayout->addWidget(gnuplotLineEdit, 1, 1, 1, 1);

        gnuplotButton = new QToolButton(QmitkExternalProgramsPreferencePage);
        gnuplotButton->setObjectName(QStringLiteral("gnuplotButton"));

        gridLayout->addWidget(gnuplotButton, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 248, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        ffmpegLabel->setBuddy(gnuplotButton);
        gnuplotLabel->setBuddy(gnuplotButton);
#endif // QT_NO_SHORTCUT

        retranslateUi(QmitkExternalProgramsPreferencePage);

        QMetaObject::connectSlotsByName(QmitkExternalProgramsPreferencePage);
    } // setupUi

    void retranslateUi(QWidget *QmitkExternalProgramsPreferencePage)
    {
        QmitkExternalProgramsPreferencePage->setWindowTitle(QApplication::translate("QmitkExternalProgramsPreferencePage", "External Programs", 0));
        ffmpegLabel->setText(QApplication::translate("QmitkExternalProgramsPreferencePage", "FFmpeg/Libav:", 0));
        ffmpegButton->setText(QApplication::translate("QmitkExternalProgramsPreferencePage", "...", 0));
        gnuplotLabel->setText(QApplication::translate("QmitkExternalProgramsPreferencePage", "gnuplot:", 0));
        gnuplotButton->setText(QApplication::translate("QmitkExternalProgramsPreferencePage", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkExternalProgramsPreferencePage: public Ui_QmitkExternalProgramsPreferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKEXTERNALPROGRAMSPREFERENCEPAGE_H
