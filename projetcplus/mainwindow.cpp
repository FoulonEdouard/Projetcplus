#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->actionOuvrir, SIGNAL(triggered()),this,SLOT(ouvrir_fichier()));
    connect(ui->actionNew,SIGNAL(triggered()),this,SLOT(creer_doc()));
}

void MainWindow::ouvrir_fichier()
{//creation objet QFile

    QString chemin=QFileDialog::getOpenFileName();
    QString courant=QDir::currentPath();
    QFile f(chemin);
    f.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextDocument lefichier(& f);

    f.close();
    qDebug()<<"on ouvre le fichier"<<chemin;
}

void MainWindow::creer_doc()
{   QFile f("test.txt");

}

MainWindow::~MainWindow()
{
    delete ui;
}

