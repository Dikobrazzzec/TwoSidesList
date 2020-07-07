#include "mainwindow.h"
#include <list.h>
#include <Node.h>
#include <QDebug>

#include <QApplication>

int main(int argc, char *argv[])
{
    List A;
    qDebug()<<"1";
    qDebug()<<A.Adding(1,1,1,"Ivan",nullptr);
    qDebug()<<"2";
    qDebug()<<A.Adding(2,2,2,"Petr",A.tailptr);
    Node* rtptr = A.tailptr;
        qDebug()<<"rabotaem";
        qDebug()<<"3";
    qDebug()<<A.Adding(3,3,3,"Ramz",A.tailptr);
    qDebug()<<"4";
    qDebug()<<A.Adding(4,4,4,"Vas",A.tailptr);
    qDebug()<<"5";
    qDebug()<<A.Adding(0,0,0,"Vyach",nullptr);
    qDebug()<<A.Adding(6,6,6,"Krasti",rtptr);
    QString f;
    qDebug()<<f;
    int j;
    qDebug()<<j;


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
