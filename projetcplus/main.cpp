#include "mainwindow.h"
#include <QApplication>
#include<QFile>
#include<QFileDialog>
#include<QTabBar>
#include<QTextDocument>
#include<QDebug>
#include<QString>
#include<QIODevice>
#include<QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   QString courant=QDir::currentPath();
   qDebug()<<courant;





    MainWindow w;
    w.show();
    return a.exec();
}
