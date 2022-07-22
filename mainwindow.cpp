#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"111111";
    qDebug()<<"222222";
    qDebug()<<"333333";
}

MainWindow::~MainWindow()
{
    delete ui;
}

