/********************************************************************************
** Form generated from reading UI file 'QmitkAboutDialogGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKABOUTDIALOGGUI_H
#define UI_QMITKABOUTDIALOGGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkAboutDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *m_CaptionLabel;
    QLabel *m_RevisionLabel;
    QLabel *m_ToolkitVersionsLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *m_LogoLabel;
    QScrollArea *scrollArea;
    QWidget *m_ScrollArea;
    QGridLayout *gridLayout;
    QLabel *m_AboutLabel;
    QDialogButtonBox *m_ButtonBox;

    void setupUi(QDialog *QmitkAboutDialog)
    {
        if (QmitkAboutDialog->objectName().isEmpty())
            QmitkAboutDialog->setObjectName(QStringLiteral("QmitkAboutDialog"));
        QmitkAboutDialog->resize(534, 421);
        QmitkAboutDialog->setAutoFillBackground(false);
        verticalLayout_2 = new QVBoxLayout(QmitkAboutDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_CaptionLabel = new QLabel(QmitkAboutDialog);
        m_CaptionLabel->setObjectName(QStringLiteral("m_CaptionLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_CaptionLabel->sizePolicy().hasHeightForWidth());
        m_CaptionLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("MS Sans Serif"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        m_CaptionLabel->setFont(font);
        m_CaptionLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(m_CaptionLabel);

        m_RevisionLabel = new QLabel(QmitkAboutDialog);
        m_RevisionLabel->setObjectName(QStringLiteral("m_RevisionLabel"));
        sizePolicy.setHeightForWidth(m_RevisionLabel->sizePolicy().hasHeightForWidth());
        m_RevisionLabel->setSizePolicy(sizePolicy);
        m_RevisionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(m_RevisionLabel);

        m_ToolkitVersionsLabel = new QLabel(QmitkAboutDialog);
        m_ToolkitVersionsLabel->setObjectName(QStringLiteral("m_ToolkitVersionsLabel"));

        verticalLayout->addWidget(m_ToolkitVersionsLabel);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_LogoLabel = new QLabel(QmitkAboutDialog);
        m_LogoLabel->setObjectName(QStringLiteral("m_LogoLabel"));
        m_LogoLabel->setMaximumSize(QSize(84, 56));
        m_LogoLabel->setScaledContents(true);
        m_LogoLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(m_LogoLabel);


        verticalLayout_2->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(QmitkAboutDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        m_ScrollArea = new QWidget();
        m_ScrollArea->setObjectName(QStringLiteral("m_ScrollArea"));
        m_ScrollArea->setGeometry(QRect(0, 0, 514, 236));
        gridLayout = new QGridLayout(m_ScrollArea);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_AboutLabel = new QLabel(m_ScrollArea);
        m_AboutLabel->setObjectName(QStringLiteral("m_AboutLabel"));
        m_AboutLabel->setWordWrap(true);
        m_AboutLabel->setOpenExternalLinks(true);

        gridLayout->addWidget(m_AboutLabel, 0, 1, 1, 1);

        scrollArea->setWidget(m_ScrollArea);

        verticalLayout_2->addWidget(scrollArea);

        m_ButtonBox = new QDialogButtonBox(QmitkAboutDialog);
        m_ButtonBox->setObjectName(QStringLiteral("m_ButtonBox"));
        m_ButtonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(m_ButtonBox);


        retranslateUi(QmitkAboutDialog);

        QMetaObject::connectSlotsByName(QmitkAboutDialog);
    } // setupUi

    void retranslateUi(QDialog *QmitkAboutDialog)
    {
        QmitkAboutDialog->setWindowTitle(QApplication::translate("QmitkAboutDialog", "About", 0));
        m_CaptionLabel->setText(QApplication::translate("QmitkAboutDialog", "MITK", 0));
        m_RevisionLabel->setText(QApplication::translate("QmitkAboutDialog", "Revision: hash\n"
"Description:", 0));
        m_ToolkitVersionsLabel->setText(QApplication::translate("QmitkAboutDialog", "ITK x.x.x, VTK x.x.x, Qt x.x.x", 0));
        m_LogoLabel->setText(QApplication::translate("QmitkAboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.dkfz.de/en/mbi/\"><span style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/QtWidgetsExt/Logo_mbiATdkfz_small.png\" /></span></a></p></body></html>", 0));
        m_AboutLabel->setText(QApplication::translate("QmitkAboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:600;\">General Information</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">MITK [1] has been developed by the Division of Medical and Biological Informatics of the German Cancer Research Center (DKFZ) [2].</p>\n"
""
                        "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[1] <a href=\"http://www.mitk.org/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.mitk.org/</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[2] <a href=\"http://www.dkfz.de/en/mbi/index.php\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.dkfz.de/en/mbi/index.php</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">To contact the MITK team, see <a hre"
                        "f=\"http://www.mitk.org/wiki/Contact\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.mitk.org/wiki/Contact</span></a>.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Third Party Libraries</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://docs.mitk.org/nightly/thirdpartylibs.html\"><span style=\" text-decoration: underline; color:#0000ff;\">http://docs.mitk.org/nightly/thirdpartylibs.html</span></a></p>"
                        "\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; text-decoration: underline; color:#0000ff;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkAboutDialog: public Ui_QmitkAboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKABOUTDIALOGGUI_H
