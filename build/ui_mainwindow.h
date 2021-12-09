/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_getRandom;
    QSpinBox *spinBox_random_byte;
    QLabel *label_byte;
    QPushButton *pushButton_envSetup;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(283, 128);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 60, 258, 28));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_getRandom = new QPushButton(horizontalLayoutWidget);
        pushButton_getRandom->setObjectName(QStringLiteral("pushButton_getRandom"));

        horizontalLayout->addWidget(pushButton_getRandom);

        spinBox_random_byte = new QSpinBox(horizontalLayoutWidget);
        spinBox_random_byte->setObjectName(QStringLiteral("spinBox_random_byte"));
        spinBox_random_byte->setMinimum(1);
        spinBox_random_byte->setValue(4);

        horizontalLayout->addWidget(spinBox_random_byte);

        label_byte = new QLabel(horizontalLayoutWidget);
        label_byte->setObjectName(QStringLiteral("label_byte"));
        label_byte->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_byte);

        horizontalLayout->setStretch(0, 1);
        pushButton_envSetup = new QPushButton(centralWidget);
        pushButton_envSetup->setObjectName(QStringLiteral("pushButton_envSetup"));
        pushButton_envSetup->setGeometry(QRect(10, 10, 261, 25));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TPM Setup", Q_NULLPTR));
        pushButton_getRandom->setText(QApplication::translate("MainWindow", "TPM2 Get Random", Q_NULLPTR));
        label_byte->setText(QApplication::translate("MainWindow", "Byte", Q_NULLPTR));
        pushButton_envSetup->setText(QApplication::translate("MainWindow", "TPM2 Env Setup", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
