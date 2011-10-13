#include "mywindow.h"
#include "ui_mywindow.h"
#include <QLCDNumber>
#include <QTimer>
#include <QTime>

MyWindow::MyWindow(QWidget *parent)
    : QLCDNumber(parent)
{
     setSegmentStyle(Flat);

     QTimer *timer = new QTimer(this);
     connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
     timer->start(1000);

     showTime();

     setWindowTitle(tr("Digital Clock"));
     resize(150, 60);
}

void MyWindow::showTime()
 {
     QTime time = QTime::currentTime();
     QString text = time.toString("hh:mm");
     if ((time.second() % 2) == 0)
         text[2] = ' ';
     display(text);
 }
