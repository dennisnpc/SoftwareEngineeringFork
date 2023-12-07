#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, &QSlider::sliderMoved, this, &MainWindow::PleaseWork);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::PleaseWork(int meow)
{
    QString s = QString("%1").arg(meow);
    ui->labelNumericValue->setText(QString(s));
}
