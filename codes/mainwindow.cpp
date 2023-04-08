#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(UNITLENGTH*20,UNITLENGTH*12);

    //connect
    connect(ui->newDisturb,&QPushButton::clicked,this,&MainWindow::updateDisturb);
    connect(ui->actionsmall,&QAction::triggered,this,&MainWindow::setsize_small);
    connect(ui->actionsmall,&QAction::triggered,this,&MainWindow::refresh);
    connect(ui->actionmiddle,&QAction::triggered,this,&MainWindow::setsize_middle);
    connect(ui->actionmiddle,&QAction::triggered,this,&MainWindow::refresh);
    connect(ui->actionlarge,&QAction::triggered,this,&MainWindow::setsize_large);
    connect(ui->actionlarge,&QAction::triggered,this,&MainWindow::refresh);

    ui->newDisturb->move(UNITLENGTH*18,UNITLENGTH*0.8);
    dis_font.setPointSize(UNITLENGTH/5*2);
    dis_font.setBold(true);
    ui->disturb_main->move(UNITLENGTH*2,UNITLENGTH*0);
    ui->disturb_main->resize(UNITLENGTH*16,UNITLENGTH*2);
    ui->disturb_main->setFont(dis_font);

    updateDisturb();
    testAlg(); //

}

void MainWindow::setsize_small()
{
    UNITLENGTH = 20;
}
void MainWindow::setsize_middle()
{
    UNITLENGTH = 35;
}
void MainWindow::setsize_large()
{
    UNITLENGTH = 50;
}
void MainWindow::refresh()
{
    ui->newDisturb->move(UNITLENGTH*18,UNITLENGTH*0.8);
    dis_font.setPointSize(UNITLENGTH/5*2);
    this->setFixedSize(UNITLENGTH*20,UNITLENGTH*12);
    ui->disturb_main->move(UNITLENGTH*2,UNITLENGTH*0);
    ui->disturb_main->resize(UNITLENGTH*16,UNITLENGTH*2);
    ui->disturb_main->setFont(dis_font);
}

MainWindow::~MainWindow()
{
    delete ui;
}
