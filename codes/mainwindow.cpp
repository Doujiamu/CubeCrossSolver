#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(UNITLENGTH*20,UNITLENGTH*12);
}

MainWindow::~MainWindow()
{
    delete ui;
}
