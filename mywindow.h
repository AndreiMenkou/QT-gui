#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QtGui/QMainWindow>
#include <QLCDNumber>

class MyWindow : public QLCDNumber
{
    Q_OBJECT

 public:
     MyWindow(QWidget *parent = 0);

 private slots:
     void showTime();
};

#endif // MYWINDOW_H
