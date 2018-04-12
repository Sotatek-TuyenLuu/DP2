/********************************************************************************
** Form generated from reading UI file 'ctkDICOMAppWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDICOMAPPWIDGET_H
#define UI_CTKDICOMAPPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ctkDICOMItemView.h>
#include "ctkDICOMQueryWidget.h"
#include "ctkDICOMThumbnailListWidget.h"
#include "ctkDirectoryButton.h"

QT_BEGIN_NAMESPACE

class Ui_ctkDICOMAppWidget
{
public:
    QAction *ActionImport;
    QAction *ActionExport;
    QAction *ActionQuery;
    QAction *ActionSend;
    QAction *ActionRemove;
    QVBoxLayout *verticalLayout_2;
    QToolBar *ToolBar;
    QVBoxLayout *VerticalLayout;
    QHBoxLayout *TopLayout;
    QLabel *DatabaseNameLabel;
    ctkDirectoryButton *DirectoryButton;
    QSpacerItem *HorizontalSpacer;
    QPushButton *SearchPopUpButton;
    QHBoxLayout *QueryLayout;
    QTreeView *TreeView;
    QVBoxLayout *searchOptionLayout;
    QDockWidget *SearchDockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_4;
    ctkDICOMQueryWidget *SearchOption;
    QSpacerItem *VerticalSpacer;
    QFrame *UserFrame;
    QHBoxLayout *ViewerLayout;
    QVBoxLayout *verticalLayout;
    ctkDICOMThumbnailListWidget *ThumbnailsWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QSlider *ThumbnailWidthSlider;
    QSpacerItem *horizontalSpacer_2;
    QFrame *PreviewFrame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *HorizontalLayout;
    QPushButton *PrevStudyButton;
    QPushButton *PrevSeriesButton;
    QPushButton *PrevImageButton;
    QPushButton *NextImageButton;
    QPushButton *NextSeriesButton;
    QPushButton *NextStudyButton;
    ctkDICOMItemView *ImagePreview;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *AutoPlayCheckbox;
    QSlider *PlaySlider;

    void setupUi(QWidget *ctkDICOMAppWidget)
    {
        if (ctkDICOMAppWidget->objectName().isEmpty())
            ctkDICOMAppWidget->setObjectName(QStringLiteral("ctkDICOMAppWidget"));
        ctkDICOMAppWidget->resize(788, 607);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ctkDICOMAppWidget->sizePolicy().hasHeightForWidth());
        ctkDICOMAppWidget->setSizePolicy(sizePolicy);
        ActionImport = new QAction(ctkDICOMAppWidget);
        ActionImport->setObjectName(QStringLiteral("ActionImport"));
        ActionExport = new QAction(ctkDICOMAppWidget);
        ActionExport->setObjectName(QStringLiteral("ActionExport"));
        ActionExport->setEnabled(false);
        ActionQuery = new QAction(ctkDICOMAppWidget);
        ActionQuery->setObjectName(QStringLiteral("ActionQuery"));
        ActionSend = new QAction(ctkDICOMAppWidget);
        ActionSend->setObjectName(QStringLiteral("ActionSend"));
        ActionSend->setEnabled(false);
        ActionRemove = new QAction(ctkDICOMAppWidget);
        ActionRemove->setObjectName(QStringLiteral("ActionRemove"));
        ActionRemove->setEnabled(false);
        verticalLayout_2 = new QVBoxLayout(ctkDICOMAppWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 12);
        ToolBar = new QToolBar(ctkDICOMAppWidget);
        ToolBar->setObjectName(QStringLiteral("ToolBar"));
        ToolBar->setFloatable(true);

        verticalLayout_2->addWidget(ToolBar);

        VerticalLayout = new QVBoxLayout();
        VerticalLayout->setSpacing(12);
        VerticalLayout->setObjectName(QStringLiteral("VerticalLayout"));
        TopLayout = new QHBoxLayout();
        TopLayout->setObjectName(QStringLiteral("TopLayout"));
        TopLayout->setContentsMargins(12, -1, 12, -1);
        DatabaseNameLabel = new QLabel(ctkDICOMAppWidget);
        DatabaseNameLabel->setObjectName(QStringLiteral("DatabaseNameLabel"));
        DatabaseNameLabel->setMaximumSize(QSize(100, 20));

        TopLayout->addWidget(DatabaseNameLabel);

        DirectoryButton = new ctkDirectoryButton(ctkDICOMAppWidget);
        DirectoryButton->setObjectName(QStringLiteral("DirectoryButton"));
        DirectoryButton->setMinimumSize(QSize(200, 20));

        TopLayout->addWidget(DirectoryButton);

        HorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TopLayout->addItem(HorizontalSpacer);

        SearchPopUpButton = new QPushButton(ctkDICOMAppWidget);
        SearchPopUpButton->setObjectName(QStringLiteral("SearchPopUpButton"));
        SearchPopUpButton->setMaximumSize(QSize(100, 32));

        TopLayout->addWidget(SearchPopUpButton);


        VerticalLayout->addLayout(TopLayout);


        verticalLayout_2->addLayout(VerticalLayout);

        QueryLayout = new QHBoxLayout();
        QueryLayout->setSpacing(0);
        QueryLayout->setObjectName(QStringLiteral("QueryLayout"));
        QueryLayout->setContentsMargins(12, -1, 12, -1);
        TreeView = new QTreeView(ctkDICOMAppWidget);
        TreeView->setObjectName(QStringLiteral("TreeView"));
        TreeView->setAlternatingRowColors(true);

        QueryLayout->addWidget(TreeView);

        searchOptionLayout = new QVBoxLayout();
        searchOptionLayout->setSpacing(6);
        searchOptionLayout->setObjectName(QStringLiteral("searchOptionLayout"));
        SearchDockWidget = new QDockWidget(ctkDICOMAppWidget);
        SearchDockWidget->setObjectName(QStringLiteral("SearchDockWidget"));
        SearchDockWidget->setFloating(false);
        SearchDockWidget->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        SearchOption = new ctkDICOMQueryWidget(dockWidgetContents);
        SearchOption->setObjectName(QStringLiteral("SearchOption"));
        SearchOption->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(SearchOption);

        SearchDockWidget->setWidget(dockWidgetContents);

        searchOptionLayout->addWidget(SearchDockWidget);

        VerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        searchOptionLayout->addItem(VerticalSpacer);


        QueryLayout->addLayout(searchOptionLayout);

        QueryLayout->setStretch(0, 1);

        verticalLayout_2->addLayout(QueryLayout);

        UserFrame = new QFrame(ctkDICOMAppWidget);
        UserFrame->setObjectName(QStringLiteral("UserFrame"));
        UserFrame->setFrameShape(QFrame::StyledPanel);
        UserFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(UserFrame);

        ViewerLayout = new QHBoxLayout();
        ViewerLayout->setObjectName(QStringLiteral("ViewerLayout"));
        ViewerLayout->setContentsMargins(12, -1, 12, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ThumbnailsWidget = new ctkDICOMThumbnailListWidget(ctkDICOMAppWidget);
        ThumbnailsWidget->setObjectName(QStringLiteral("ThumbnailsWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ThumbnailsWidget->sizePolicy().hasHeightForWidth());
        ThumbnailsWidget->setSizePolicy(sizePolicy1);
        ThumbnailsWidget->setMinimumSize(QSize(0, 200));

        verticalLayout->addWidget(ThumbnailsWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        ThumbnailWidthSlider = new QSlider(ctkDICOMAppWidget);
        ThumbnailWidthSlider->setObjectName(QStringLiteral("ThumbnailWidthSlider"));
        ThumbnailWidthSlider->setMaximumSize(QSize(200, 16777215));
        ThumbnailWidthSlider->setMinimum(64);
        ThumbnailWidthSlider->setMaximum(256);
        ThumbnailWidthSlider->setValue(64);
        ThumbnailWidthSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(ThumbnailWidthSlider);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        ViewerLayout->addLayout(verticalLayout);

        PreviewFrame = new QFrame(ctkDICOMAppWidget);
        PreviewFrame->setObjectName(QStringLiteral("PreviewFrame"));
        PreviewFrame->setMinimumSize(QSize(256, 256));
        verticalLayout_3 = new QVBoxLayout(PreviewFrame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        HorizontalLayout = new QHBoxLayout();
        HorizontalLayout->setObjectName(QStringLiteral("HorizontalLayout"));
        PrevStudyButton = new QPushButton(PreviewFrame);
        PrevStudyButton->setObjectName(QStringLiteral("PrevStudyButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(32);
        sizePolicy2.setVerticalStretch(32);
        sizePolicy2.setHeightForWidth(PrevStudyButton->sizePolicy().hasHeightForWidth());
        PrevStudyButton->setSizePolicy(sizePolicy2);
        PrevStudyButton->setMaximumSize(QSize(40, 32));

        HorizontalLayout->addWidget(PrevStudyButton);

        PrevSeriesButton = new QPushButton(PreviewFrame);
        PrevSeriesButton->setObjectName(QStringLiteral("PrevSeriesButton"));
        sizePolicy2.setHeightForWidth(PrevSeriesButton->sizePolicy().hasHeightForWidth());
        PrevSeriesButton->setSizePolicy(sizePolicy2);
        PrevSeriesButton->setMaximumSize(QSize(40, 32));

        HorizontalLayout->addWidget(PrevSeriesButton);

        PrevImageButton = new QPushButton(PreviewFrame);
        PrevImageButton->setObjectName(QStringLiteral("PrevImageButton"));
        sizePolicy2.setHeightForWidth(PrevImageButton->sizePolicy().hasHeightForWidth());
        PrevImageButton->setSizePolicy(sizePolicy2);
        PrevImageButton->setMaximumSize(QSize(40, 32));

        HorizontalLayout->addWidget(PrevImageButton);

        NextImageButton = new QPushButton(PreviewFrame);
        NextImageButton->setObjectName(QStringLiteral("NextImageButton"));
        sizePolicy2.setHeightForWidth(NextImageButton->sizePolicy().hasHeightForWidth());
        NextImageButton->setSizePolicy(sizePolicy2);
        NextImageButton->setMaximumSize(QSize(40, 32));

        HorizontalLayout->addWidget(NextImageButton);

        NextSeriesButton = new QPushButton(PreviewFrame);
        NextSeriesButton->setObjectName(QStringLiteral("NextSeriesButton"));
        sizePolicy2.setHeightForWidth(NextSeriesButton->sizePolicy().hasHeightForWidth());
        NextSeriesButton->setSizePolicy(sizePolicy2);
        NextSeriesButton->setMaximumSize(QSize(40, 32));

        HorizontalLayout->addWidget(NextSeriesButton);

        NextStudyButton = new QPushButton(PreviewFrame);
        NextStudyButton->setObjectName(QStringLiteral("NextStudyButton"));
        sizePolicy2.setHeightForWidth(NextStudyButton->sizePolicy().hasHeightForWidth());
        NextStudyButton->setSizePolicy(sizePolicy2);
        NextStudyButton->setMaximumSize(QSize(40, 32));

        HorizontalLayout->addWidget(NextStudyButton);


        verticalLayout_3->addLayout(HorizontalLayout);

        ImagePreview = new ctkDICOMItemView(PreviewFrame);
        ImagePreview->setObjectName(QStringLiteral("ImagePreview"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ImagePreview->sizePolicy().hasHeightForWidth());
        ImagePreview->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(ImagePreview);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        AutoPlayCheckbox = new QCheckBox(PreviewFrame);
        AutoPlayCheckbox->setObjectName(QStringLiteral("AutoPlayCheckbox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(AutoPlayCheckbox->sizePolicy().hasHeightForWidth());
        AutoPlayCheckbox->setSizePolicy(sizePolicy4);
        AutoPlayCheckbox->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(AutoPlayCheckbox);

        PlaySlider = new QSlider(PreviewFrame);
        PlaySlider->setObjectName(QStringLiteral("PlaySlider"));
        sizePolicy4.setHeightForWidth(PlaySlider->sizePolicy().hasHeightForWidth());
        PlaySlider->setSizePolicy(sizePolicy4);
        PlaySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(PlaySlider);


        verticalLayout_3->addLayout(horizontalLayout_2);


        ViewerLayout->addWidget(PreviewFrame);


        verticalLayout_2->addLayout(ViewerLayout);


        ToolBar->addAction(ActionImport);
        ToolBar->addAction(ActionExport);
        ToolBar->addAction(ActionQuery);
        ToolBar->addAction(ActionSend);
        ToolBar->addAction(ActionRemove);

        retranslateUi(ctkDICOMAppWidget);
        QObject::connect(ActionImport, SIGNAL(triggered(bool)), ctkDICOMAppWidget, SLOT(openImportDialog()));
        QObject::connect(ActionExport, SIGNAL(triggered(bool)), ctkDICOMAppWidget, SLOT(openExportDialog()));
        QObject::connect(ActionQuery, SIGNAL(triggered(bool)), ctkDICOMAppWidget, SLOT(openQueryDialog()));
        QObject::connect(NextImageButton, SIGNAL(clicked()), ctkDICOMAppWidget, SLOT(onNextImage()));
        QObject::connect(PrevImageButton, SIGNAL(clicked()), ctkDICOMAppWidget, SLOT(onPreviousImage()));
        QObject::connect(NextSeriesButton, SIGNAL(clicked()), ctkDICOMAppWidget, SLOT(onNextSeries()));
        QObject::connect(PrevSeriesButton, SIGNAL(clicked()), ctkDICOMAppWidget, SLOT(onPreviousSeries()));
        QObject::connect(NextStudyButton, SIGNAL(clicked()), ctkDICOMAppWidget, SLOT(onNextStudy()));
        QObject::connect(PrevStudyButton, SIGNAL(clicked()), ctkDICOMAppWidget, SLOT(onPreviousStudy()));
        QObject::connect(AutoPlayCheckbox, SIGNAL(stateChanged(int)), ctkDICOMAppWidget, SLOT(onAutoPlayCheckboxStateChanged(int)));
        QObject::connect(ThumbnailWidthSlider, SIGNAL(valueChanged(int)), ctkDICOMAppWidget, SLOT(onThumbnailWidthSliderValueChanged(int)));
        QObject::connect(ActionRemove, SIGNAL(triggered()), ctkDICOMAppWidget, SLOT(onRemoveAction()));

        QMetaObject::connectSlotsByName(ctkDICOMAppWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkDICOMAppWidget)
    {
        ctkDICOMAppWidget->setWindowTitle(QApplication::translate("ctkDICOMAppWidget", "ctkDICOMAppWidget", 0));
        ActionImport->setText(QApplication::translate("ctkDICOMAppWidget", "Import", 0));
#ifndef QT_NO_TOOLTIP
        ActionImport->setToolTip(QApplication::translate("ctkDICOMAppWidget", "Import a DICOM file or folder", 0));
#endif // QT_NO_TOOLTIP
        ActionExport->setText(QApplication::translate("ctkDICOMAppWidget", "Export", 0));
#ifndef QT_NO_TOOLTIP
        ActionExport->setToolTip(QApplication::translate("ctkDICOMAppWidget", "Export selected study/series to a DICOM folder (not yet available)", 0));
#endif // QT_NO_TOOLTIP
        ActionQuery->setText(QApplication::translate("ctkDICOMAppWidget", "Query", 0));
#ifndef QT_NO_TOOLTIP
        ActionQuery->setToolTip(QApplication::translate("ctkDICOMAppWidget", "Query and Retrieve DICOM studies from a DICOM node", 0));
#endif // QT_NO_TOOLTIP
        ActionSend->setText(QApplication::translate("ctkDICOMAppWidget", "Send", 0));
#ifndef QT_NO_TOOLTIP
        ActionSend->setToolTip(QApplication::translate("ctkDICOMAppWidget", "Send DICOM Studies to a DICOM node (not yet available)", 0));
#endif // QT_NO_TOOLTIP
        ActionRemove->setText(QApplication::translate("ctkDICOMAppWidget", "Remove", 0));
#ifndef QT_NO_TOOLTIP
        ActionRemove->setToolTip(QApplication::translate("ctkDICOMAppWidget", "Remove from database", 0));
#endif // QT_NO_TOOLTIP
        ToolBar->setWindowTitle(QApplication::translate("ctkDICOMAppWidget", "toolBar", 0));
        DatabaseNameLabel->setText(QApplication::translate("ctkDICOMAppWidget", "LocalDatabase:", 0));
        SearchPopUpButton->setText(QApplication::translate("ctkDICOMAppWidget", "Search", 0));
        SearchDockWidget->setWindowTitle(QString());
#ifndef QT_NO_TOOLTIP
        PrevStudyButton->setToolTip(QApplication::translate("ctkDICOMAppWidget", "Previous study", 0));
#endif // QT_NO_TOOLTIP
        PrevStudyButton->setText(QApplication::translate("ctkDICOMAppWidget", "<<<", 0));
#ifndef QT_NO_TOOLTIP
        PrevSeriesButton->setToolTip(QApplication::translate("ctkDICOMAppWidget", "Previous series", 0));
#endif // QT_NO_TOOLTIP
        PrevSeriesButton->setText(QApplication::translate("ctkDICOMAppWidget", "<<", 0));
#ifndef QT_NO_TOOLTIP
        PrevImageButton->setToolTip(QApplication::translate("ctkDICOMAppWidget", "Previous image", 0));
#endif // QT_NO_TOOLTIP
        PrevImageButton->setText(QApplication::translate("ctkDICOMAppWidget", "<", 0));
#ifndef QT_NO_TOOLTIP
        NextImageButton->setToolTip(QApplication::translate("ctkDICOMAppWidget", "Next image", 0));
#endif // QT_NO_TOOLTIP
        NextImageButton->setText(QApplication::translate("ctkDICOMAppWidget", ">", 0));
#ifndef QT_NO_TOOLTIP
        NextSeriesButton->setToolTip(QApplication::translate("ctkDICOMAppWidget", "Next series", 0));
#endif // QT_NO_TOOLTIP
        NextSeriesButton->setText(QApplication::translate("ctkDICOMAppWidget", ">>", 0));
#ifndef QT_NO_TOOLTIP
        NextStudyButton->setToolTip(QApplication::translate("ctkDICOMAppWidget", "Next study", 0));
#endif // QT_NO_TOOLTIP
        NextStudyButton->setText(QApplication::translate("ctkDICOMAppWidget", ">>>", 0));
        AutoPlayCheckbox->setText(QApplication::translate("ctkDICOMAppWidget", "auto-play", 0));
    } // retranslateUi

};

namespace Ui {
    class ctkDICOMAppWidget: public Ui_ctkDICOMAppWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDICOMAPPWIDGET_H
