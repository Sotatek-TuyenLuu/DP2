/********************************************************************************
** Form generated from reading UI file 'QmitkTransferFunctionGeneratorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKTRANSFERFUNCTIONGENERATORWIDGET_H
#define UI_QMITKTRANSFERFUNCTIONGENERATORWIDGET_H

#include <QmitkCrossWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkTransferFunctionGeneratorWidget
{
public:
    QHBoxLayout *horizontalLayout_4;
    QTabWidget *tabWidget;
    QWidget *m_PresetTab;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QComboBox *m_TransferFunctionComboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *m_InfoPreset;
    QPushButton *m_LoadPreset;
    QPushButton *m_SavePreset;
    QWidget *m_ThresholdTab;
    QHBoxLayout *horizontalLayout;
    QmitkCrossWidget *m_CrossThreshold;
    QLabel *m_InfoThreshold;
    QWidget *m_BellTab;
    QHBoxLayout *horizontalLayout_2;
    QmitkCrossWidget *m_CrossLevelWindow;
    QLabel *m_InfoLevelWindow;

    void setupUi(QWidget *QmitkTransferFunctionGeneratorWidget)
    {
        if (QmitkTransferFunctionGeneratorWidget->objectName().isEmpty())
            QmitkTransferFunctionGeneratorWidget->setObjectName(QStringLiteral("QmitkTransferFunctionGeneratorWidget"));
        QmitkTransferFunctionGeneratorWidget->resize(349, 316);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(QmitkTransferFunctionGeneratorWidget->sizePolicy().hasHeightForWidth());
        QmitkTransferFunctionGeneratorWidget->setSizePolicy(sizePolicy);
        QmitkTransferFunctionGeneratorWidget->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_4 = new QHBoxLayout(QmitkTransferFunctionGeneratorWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(QmitkTransferFunctionGeneratorWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setMaximumSize(QSize(16777215, 120));
        m_PresetTab = new QWidget();
        m_PresetTab->setObjectName(QStringLiteral("m_PresetTab"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_PresetTab->sizePolicy().hasHeightForWidth());
        m_PresetTab->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(m_PresetTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        m_TransferFunctionComboBox = new QComboBox(m_PresetTab);
        m_TransferFunctionComboBox->setObjectName(QStringLiteral("m_TransferFunctionComboBox"));
        m_TransferFunctionComboBox->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_TransferFunctionComboBox->sizePolicy().hasHeightForWidth());
        m_TransferFunctionComboBox->setSizePolicy(sizePolicy3);
        m_TransferFunctionComboBox->setMinimumSize(QSize(0, 0));
        m_TransferFunctionComboBox->setIconSize(QSize(16, 16));
        m_TransferFunctionComboBox->setDuplicatesEnabled(false);
        m_TransferFunctionComboBox->setFrame(true);

        verticalLayout_3->addWidget(m_TransferFunctionComboBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        m_InfoPreset = new QLabel(m_PresetTab);
        m_InfoPreset->setObjectName(QStringLiteral("m_InfoPreset"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(m_InfoPreset->sizePolicy().hasHeightForWidth());
        m_InfoPreset->setSizePolicy(sizePolicy4);
        m_InfoPreset->setMinimumSize(QSize(0, 0));
        m_InfoPreset->setMaximumSize(QSize(16777215, 25));
        m_InfoPreset->setTextFormat(Qt::AutoText);
        m_InfoPreset->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_InfoPreset->setWordWrap(false);
        m_InfoPreset->setIndent(0);

        horizontalLayout_3->addWidget(m_InfoPreset);

        m_LoadPreset = new QPushButton(m_PresetTab);
        m_LoadPreset->setObjectName(QStringLiteral("m_LoadPreset"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(m_LoadPreset->sizePolicy().hasHeightForWidth());
        m_LoadPreset->setSizePolicy(sizePolicy5);
        m_LoadPreset->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_3->addWidget(m_LoadPreset);

        m_SavePreset = new QPushButton(m_PresetTab);
        m_SavePreset->setObjectName(QStringLiteral("m_SavePreset"));
        sizePolicy5.setHeightForWidth(m_SavePreset->sizePolicy().hasHeightForWidth());
        m_SavePreset->setSizePolicy(sizePolicy5);
        m_SavePreset->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_3->addWidget(m_SavePreset);


        verticalLayout_3->addLayout(horizontalLayout_3);

        tabWidget->addTab(m_PresetTab, QString());
        tabWidget->setTabToolTip(tabWidget->indexOf(m_PresetTab), QLatin1String("Apply internal MITK transfer function presets.\n"
"Or save and load your own created transfer functions in a folder in XML format."));
        m_ThresholdTab = new QWidget();
        m_ThresholdTab->setObjectName(QStringLiteral("m_ThresholdTab"));
        sizePolicy2.setHeightForWidth(m_ThresholdTab->sizePolicy().hasHeightForWidth());
        m_ThresholdTab->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(m_ThresholdTab);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_CrossThreshold = new QmitkCrossWidget(m_ThresholdTab);
        m_CrossThreshold->setObjectName(QStringLiteral("m_CrossThreshold"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(m_CrossThreshold->sizePolicy().hasHeightForWidth());
        m_CrossThreshold->setSizePolicy(sizePolicy6);
        m_CrossThreshold->setMinimumSize(QSize(0, 0));
        m_CrossThreshold->setMaximumSize(QSize(48, 48));
        m_CrossThreshold->setLayoutDirection(Qt::LeftToRight);
        m_CrossThreshold->setPixmap(QPixmap(QString::fromUtf8(":/QtWidgetsExt/cross.png")));
        m_CrossThreshold->setScaledContents(true);
        m_CrossThreshold->setAlignment(Qt::AlignCenter);
        m_CrossThreshold->setIndent(-1);
        m_CrossThreshold->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(m_CrossThreshold);

        m_InfoThreshold = new QLabel(m_ThresholdTab);
        m_InfoThreshold->setObjectName(QStringLiteral("m_InfoThreshold"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(m_InfoThreshold->sizePolicy().hasHeightForWidth());
        m_InfoThreshold->setSizePolicy(sizePolicy7);
        m_InfoThreshold->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(7);
        m_InfoThreshold->setFont(font);
        m_InfoThreshold->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_InfoThreshold->setWordWrap(true);

        horizontalLayout->addWidget(m_InfoThreshold);

        tabWidget->addTab(m_ThresholdTab, QString());
        m_BellTab = new QWidget();
        m_BellTab->setObjectName(QStringLiteral("m_BellTab"));
        sizePolicy2.setHeightForWidth(m_BellTab->sizePolicy().hasHeightForWidth());
        m_BellTab->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(m_BellTab);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_CrossLevelWindow = new QmitkCrossWidget(m_BellTab);
        m_CrossLevelWindow->setObjectName(QStringLiteral("m_CrossLevelWindow"));
        sizePolicy6.setHeightForWidth(m_CrossLevelWindow->sizePolicy().hasHeightForWidth());
        m_CrossLevelWindow->setSizePolicy(sizePolicy6);
        m_CrossLevelWindow->setMinimumSize(QSize(0, 0));
        m_CrossLevelWindow->setMaximumSize(QSize(48, 48));
        m_CrossLevelWindow->setPixmap(QPixmap(QString::fromUtf8(":/QtWidgetsExt/cross.png")));
        m_CrossLevelWindow->setScaledContents(true);
        m_CrossLevelWindow->setAlignment(Qt::AlignCenter);
        m_CrossLevelWindow->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(m_CrossLevelWindow);

        m_InfoLevelWindow = new QLabel(m_BellTab);
        m_InfoLevelWindow->setObjectName(QStringLiteral("m_InfoLevelWindow"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(m_InfoLevelWindow->sizePolicy().hasHeightForWidth());
        m_InfoLevelWindow->setSizePolicy(sizePolicy8);
        m_InfoLevelWindow->setMinimumSize(QSize(0, 0));
        m_InfoLevelWindow->setFont(font);
        m_InfoLevelWindow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_InfoLevelWindow->setWordWrap(true);

        horizontalLayout_2->addWidget(m_InfoLevelWindow);

        tabWidget->addTab(m_BellTab, QString());

        horizontalLayout_4->addWidget(tabWidget);


        retranslateUi(QmitkTransferFunctionGeneratorWidget);

        tabWidget->setCurrentIndex(0);
        m_TransferFunctionComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QmitkTransferFunctionGeneratorWidget);
    } // setupUi

    void retranslateUi(QWidget *QmitkTransferFunctionGeneratorWidget)
    {
        QmitkTransferFunctionGeneratorWidget->setWindowTitle(QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Form", 0));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_TransferFunctionComboBox->setToolTip(QApplication::translate("QmitkTransferFunctionGeneratorWidget", "<html><head/><body><p>Choose from generic MITK transfer function presets to apply to standard CT data or MR data.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        m_TransferFunctionComboBox->setStatusTip(QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Load a MITK internal preset", 0));
#endif // QT_NO_STATUSTIP
        m_InfoPreset->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_LoadPreset->setToolTip(QApplication::translate("QmitkTransferFunctionGeneratorWidget", "<html><head/><body><p>Load a transfer function in xml-format from the filesystem.</p><p>The file should include all transfer functions: grayvalue, color and gradient.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        m_LoadPreset->setText(QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Load", 0));
#ifndef QT_NO_TOOLTIP
        m_SavePreset->setToolTip(QApplication::translate("QmitkTransferFunctionGeneratorWidget", "<html><head/><body><p>Save a transfer function in xml-format to the filesystem.</p><p>The file includes all transfer functions: grayvalue, color and gradient.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        m_SavePreset->setText(QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Save", 0));
        tabWidget->setTabText(tabWidget->indexOf(m_PresetTab), QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Presets", 0));
#ifndef QT_NO_TOOLTIP
        m_CrossThreshold->setToolTip(QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Click and hold left mouse button on the cross.\n"
"Move the mouse to the top and the function will be flatter.\n"
"Move the mouse to the bottom and the function will be steeper.\n"
"Move the mouse to the left and the function moves to the left.\n"
"Move the mouse to the right and the function moves to the right. ", 0));
#endif // QT_NO_TOOLTIP
        m_CrossThreshold->setText(QString());
        m_InfoThreshold->setText(QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Click and hold left mouse button on the cross to interactively generate a threshold transfer function", 0));
        tabWidget->setTabText(tabWidget->indexOf(m_ThresholdTab), QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Threshold", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(m_ThresholdTab), QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Generate a threshold transfer function interactively.", 0));
#ifndef QT_NO_TOOLTIP
        m_CrossLevelWindow->setToolTip(QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Click and hold left mouse button on the cross.\n"
"Move the mouse to the top and the bell will be wider.\n"
"Move the mouse to the bottom and the bell will be narrowed.\n"
"Move the mouse to the left and the center of the bell moves to the left.\n"
"Move the mouse to the right and the center of the bell moves to the right.", 0));
#endif // QT_NO_TOOLTIP
        m_CrossLevelWindow->setText(QString());
        m_InfoLevelWindow->setText(QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Click and hold left mouse button on the cross to interactively generate a bell transfer function", 0));
        tabWidget->setTabText(tabWidget->indexOf(m_BellTab), QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Bell", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(m_BellTab), QApplication::translate("QmitkTransferFunctionGeneratorWidget", "Generate a bell transfer function interactively.", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkTransferFunctionGeneratorWidget: public Ui_QmitkTransferFunctionGeneratorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKTRANSFERFUNCTIONGENERATORWIDGET_H
