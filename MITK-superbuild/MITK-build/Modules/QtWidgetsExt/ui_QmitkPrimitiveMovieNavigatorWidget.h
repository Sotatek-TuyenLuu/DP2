/********************************************************************************
** Form generated from reading UI file 'QmitkPrimitiveMovieNavigatorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKPRIMITIVEMOVIENAVIGATORWIDGET_H
#define UI_QMITKPRIMITIVEMOVIENAVIGATORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mitkStepper.h>

QT_BEGIN_NAMESPACE

class Ui_QmitkPrimitiveMovieNavigator
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_GoButton;
    QPushButton *m_StopButton;
    QSpinBox *m_SpinBox;
    QSlider *m_TimerInterval;

    void setupUi(QWidget *QmitkPrimitiveMovieNavigator)
    {
        if (QmitkPrimitiveMovieNavigator->objectName().isEmpty())
            QmitkPrimitiveMovieNavigator->setObjectName(QStringLiteral("QmitkPrimitiveMovieNavigator"));
        QmitkPrimitiveMovieNavigator->resize(252, 47);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkPrimitiveMovieNavigator->sizePolicy().hasHeightForWidth());
        QmitkPrimitiveMovieNavigator->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QmitkPrimitiveMovieNavigator);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_GoButton = new QPushButton(QmitkPrimitiveMovieNavigator);
        m_GoButton->setObjectName(QStringLiteral("m_GoButton"));
        m_GoButton->setMinimumSize(QSize(50, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QtWidgetsExt/play.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        m_GoButton->setIcon(icon);

        horizontalLayout->addWidget(m_GoButton);

        m_StopButton = new QPushButton(QmitkPrimitiveMovieNavigator);
        m_StopButton->setObjectName(QStringLiteral("m_StopButton"));
        m_StopButton->setMinimumSize(QSize(50, 0));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/QtWidgetsExt/stop.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        m_StopButton->setIcon(icon1);

        horizontalLayout->addWidget(m_StopButton);

        m_SpinBox = new QSpinBox(QmitkPrimitiveMovieNavigator);
        m_SpinBox->setObjectName(QStringLiteral("m_SpinBox"));
        m_SpinBox->setMaximum(0);

        horizontalLayout->addWidget(m_SpinBox);

        m_TimerInterval = new QSlider(QmitkPrimitiveMovieNavigator);
        m_TimerInterval->setObjectName(QStringLiteral("m_TimerInterval"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_TimerInterval->sizePolicy().hasHeightForWidth());
        m_TimerInterval->setSizePolicy(sizePolicy1);
        m_TimerInterval->setMinimumSize(QSize(60, 0));
        m_TimerInterval->setMinimum(10);
        m_TimerInterval->setMaximum(1000);
        m_TimerInterval->setValue(250);
        m_TimerInterval->setOrientation(Qt::Horizontal);
        m_TimerInterval->setTickPosition(QSlider::TicksBelow);
        m_TimerInterval->setTickInterval(100);

        horizontalLayout->addWidget(m_TimerInterval);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QmitkPrimitiveMovieNavigator);

        QMetaObject::connectSlotsByName(QmitkPrimitiveMovieNavigator);
    } // setupUi

    void retranslateUi(QWidget *QmitkPrimitiveMovieNavigator)
    {
        QmitkPrimitiveMovieNavigator->setWindowTitle(QApplication::translate("QmitkPrimitiveMovieNavigator", "QmitkPrimitiveMovieNavigator", 0));
        m_GoButton->setText(QString());
        m_StopButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QmitkPrimitiveMovieNavigator: public Ui_QmitkPrimitiveMovieNavigator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKPRIMITIVEMOVIENAVIGATORWIDGET_H
