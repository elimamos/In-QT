#include "mainwindow.h"
#include <QApplication>
#include<QElapsedTimer>
#include<QDebug>
#include"mytimer.h"
#include "buttonoperator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //enter full screen mode
  // w.setWindowState(w.windowState() ^ Qt::WindowFullScreen);

    //qDebug() << "show";

    //qDebug()<<"Debug test";
   // w.getButtonList()[0].setText("TEST");
     myTimer *mTimer= new myTimer(w.getButtonList(),w.getTextEdit());
     mTimer->startTimer();
    w.show();


    return a.exec();
}
