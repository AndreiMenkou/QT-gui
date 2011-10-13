/********************************************************************************
** Form generated from reading ui file 'mywindow.ui'
**
** Created: Thu 13. Oct 21:55:55 2011
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MYWINDOW_H
#define UI_MYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyWindow)
    {
        if (MyWindow->objectName().isEmpty())
            MyWindow->setObjectName(QString::fromUtf8("MyWindow"));
        MyWindow->resize(600, 400);
        menuBar = new QMenuBar(MyWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MyWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(MyWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MyWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MyWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyWindow->setStatusBar(statusBar);

        retranslateUi(MyWindow);

        QMetaObject::connectSlotsByName(MyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyWindow)
    {
        MyWindow->setWindowTitle(QApplication::translate("MyWindow", "MyWindow", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MyWindow);
    } // retranslateUi

};

namespace Ui {
    class MyWindow: public Ui_MyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWINDOW_H
