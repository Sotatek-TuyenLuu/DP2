/********************************************************************************
** Form generated from reading UI file 'QmitkLiveWireTool2DGUIControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKLIVEWIRETOOL2DGUICONTROLS_H
#define UI_QMITKLIVEWIRETOOL2DGUICONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkLiveWireTool2DGUIControls
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *m_ConfirmButton;
    QPushButton *m_ClearButton;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *m_InformationCheckBox;
    QWidget *m_Information;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *QmitkLiveWireTool2DGUIControls)
    {
        if (QmitkLiveWireTool2DGUIControls->objectName().isEmpty())
            QmitkLiveWireTool2DGUIControls->setObjectName(QStringLiteral("QmitkLiveWireTool2DGUIControls"));
        QmitkLiveWireTool2DGUIControls->resize(421, 355);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkLiveWireTool2DGUIControls->sizePolicy().hasHeightForWidth());
        QmitkLiveWireTool2DGUIControls->setSizePolicy(sizePolicy);
        QmitkLiveWireTool2DGUIControls->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(QmitkLiveWireTool2DGUIControls);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_ConfirmButton = new QPushButton(QmitkLiveWireTool2DGUIControls);
        m_ConfirmButton->setObjectName(QStringLiteral("m_ConfirmButton"));

        verticalLayout_2->addWidget(m_ConfirmButton);

        m_ClearButton = new QPushButton(QmitkLiveWireTool2DGUIControls);
        m_ClearButton->setObjectName(QStringLiteral("m_ClearButton"));

        verticalLayout_2->addWidget(m_ClearButton);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        m_InformationCheckBox = new QCheckBox(QmitkLiveWireTool2DGUIControls);
        m_InformationCheckBox->setObjectName(QStringLiteral("m_InformationCheckBox"));

        verticalLayout_2->addWidget(m_InformationCheckBox);

        m_Information = new QWidget(QmitkLiveWireTool2DGUIControls);
        m_Information->setObjectName(QStringLiteral("m_Information"));
        m_Information->setMinimumSize(QSize(0, 150));
        horizontalLayout = new QHBoxLayout(m_Information);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textBrowser = new QTextBrowser(m_Information);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QFont font;
        font.setPointSize(12);
        textBrowser->setFont(font);

        horizontalLayout->addWidget(textBrowser);


        verticalLayout_2->addWidget(m_Information);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(QmitkLiveWireTool2DGUIControls);

        QMetaObject::connectSlotsByName(QmitkLiveWireTool2DGUIControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkLiveWireTool2DGUIControls)
    {
        QmitkLiveWireTool2DGUIControls->setWindowTitle(QApplication::translate("QmitkLiveWireTool2DGUIControls", "QmitkLiveWireTool2DGUIControls", 0));
#ifndef QT_NO_TOOLTIP
        QmitkLiveWireTool2DGUIControls->setToolTip(QApplication::translate("QmitkLiveWireTool2DGUIControls", "Confirm all previous contour.", 0));
#endif // QT_NO_TOOLTIP
        m_ConfirmButton->setText(QApplication::translate("QmitkLiveWireTool2DGUIControls", "Confirm Segmentation", 0));
        m_ClearButton->setText(QApplication::translate("QmitkLiveWireTool2DGUIControls", "Clear Segmentation", 0));
        m_InformationCheckBox->setText(QApplication::translate("QmitkLiveWireTool2DGUIControls", "Show usage information", 0));
        textBrowser->setHtml(QApplication::translate("QmitkLiveWireTool2DGUIControls", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">The tool is started by a double-click near the object of interest.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">You can fix preview segments by adding ancor points with"
                        " a single left mouse button click. Pressing &quot;Delete&quot; will remove the last segment. To close a contour and finish current segmentation perform a double click on the first ancor point.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">After finishing a segmentation the contour will be still editable. You can move, insert and delete its ancor points.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        ";\"><span style=\" font-family:'Sans'; font-size:10pt;\">Push the &quot;Confirm Segmentation&quot; button or deactivate the Live Wire Tool to fill all contours in the working image. Push the &quot;Clear Segmentation&quot; button to delete all unconfirmed contours.</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkLiveWireTool2DGUIControls: public Ui_QmitkLiveWireTool2DGUIControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKLIVEWIRETOOL2DGUICONTROLS_H
