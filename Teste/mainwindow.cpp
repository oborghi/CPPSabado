
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Principal", "Principal");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "1", "1");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "2", "2");
}
