/********************************************************************************
** Form generated from reading UI file 'QmitkSliderNavigator.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMITKSLIDERNAVIGATOR_H
#define UI_QMITKSLIDERNAVIGATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <mitkStepper.h>

QT_BEGIN_NAMESPACE

class Ui_QmitkSliderNavigator
{
public:
    QGridLayout *gridLayout;
    QSpinBox *m_SpinBox;
    QSlider *m_Slider;
    QLabel *m_SliderLabelRight;
    QLabel *m_SliderLabelLeft;

    void setupUi(QWidget *QmitkSliderNavigator)
    {
        if (QmitkSliderNavigator->objectName().isEmpty())
            QmitkSliderNavigator->setObjectName(QStringLiteral("QmitkSliderNavigator"));
        QmitkSliderNavigator->resize(235, 137);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QmitkSliderNavigator->sizePolicy().hasHeightForWidth());
        QmitkSliderNavigator->setSizePolicy(sizePolicy);
        QmitkSliderNavigator->setMinimumSize(QSize(0, 0));
        QmitkSliderNavigator->setMaximumSize(QSize(32767, 32767));
        gridLayout = new QGridLayout(QmitkSliderNavigator);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        m_SpinBox = new QSpinBox(QmitkSliderNavigator);
        m_SpinBox->setObjectName(QStringLiteral("m_SpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_SpinBox->sizePolicy().hasHeightForWidth());
        m_SpinBox->setSizePolicy(sizePolicy1);
        m_SpinBox->setMinimumSize(QSize(50, 0));
        m_SpinBox->setMaximum(0);

        gridLayout->addWidget(m_SpinBox, 0, 3, 1, 1);

        m_Slider = new QSlider(QmitkSliderNavigator);
        m_Slider->setObjectName(QStringLiteral("m_Slider"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_Slider->sizePolicy().hasHeightForWidth());
        m_Slider->setSizePolicy(sizePolicy2);
        m_Slider->setMinimumSize(QSize(0, 0));
        m_Slider->setMaximum(0);
        m_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(m_Slider, 0, 1, 1, 1);

        m_SliderLabelRight = new QLabel(QmitkSliderNavigator);
        m_SliderLabelRight->setObjectName(QStringLiteral("m_SliderLabelRight"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_SliderLabelRight->sizePolicy().hasHeightForWidth());
        m_SliderLabelRight->setSizePolicy(sizePolicy3);
        m_SliderLabelRight->setMinimumSize(QSize(45, 0));
        m_SliderLabelRight->setMaximumSize(QSize(45, 32767));
        m_SliderLabelRight->setWordWrap(false);

        gridLayout->addWidget(m_SliderLabelRight, 0, 2, 1, 1);

        m_SliderLabelLeft = new QLabel(QmitkSliderNavigator);
        m_SliderLabelLeft->setObjectName(QStringLiteral("m_SliderLabelLeft"));
        m_SliderLabelLeft->setEnabled(true);
        sizePolicy3.setHeightForWidth(m_SliderLabelLeft->sizePolicy().hasHeightForWidth());
        m_SliderLabelLeft->setSizePolicy(sizePolicy3);
        m_SliderLabelLeft->setMinimumSize(QSize(45, 0));
        m_SliderLabelLeft->setMaximumSize(QSize(45, 32767));
        m_SliderLabelLeft->setWordWrap(false);

        gridLayout->addWidget(m_SliderLabelLeft, 0, 0, 1, 1);


        retranslateUi(QmitkSliderNavigator);
        QObject::connect(m_Slider, SIGNAL(valueChanged(int)), QmitkSliderNavigator, SLOT(slider_valueChanged(int)));
        QObject::connect(m_SpinBox, SIGNAL(valueChanged(int)), QmitkSliderNavigator, SLOT(spinBox_valueChanged(int)));

        QMetaObject::connectSlotsByName(QmitkSliderNavigator);
    } // setupUi

    void retranslateUi(QWidget *QmitkSliderNavigator)
    {
        QmitkSliderNavigator->setWindowTitle(QApplication::translate("QmitkSliderNavigator", "QmitkSliderNavigator", 0));
        m_SliderLabelRight->setText(QApplication::translate("QmitkSliderNavigator", "<p align=\"center\">XXX</p>", 0));
        m_SliderLabelLeft->setText(QApplication::translate("QmitkSliderNavigator", "<p align=\"center\">XXX</p>", 0));
    } // retranslateUi

};

namespace Ui {
    class QmitkSliderNavigator: public Ui_QmitkSliderNavigator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMITKSLIDERNAVIGATOR_H
