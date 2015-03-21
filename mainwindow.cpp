#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::setOperation(Operations o)
{
    operandLeft = ui->lineEdit->text().toDouble();
    operation = o;
    ui->lineEdit->setText("");
    ui->lineEdit->setFocus();
}

void MainWindow::on_sumButton_clicked()
{
    setOperation(SUM);
}

void MainWindow::on_subButton_clicked()
{
    setOperation(SUB);
}

void MainWindow::on_equal_clicked()
{
    operandRight = ui->lineEdit->text().toDouble();
    double result;
    switch (operation)
    {
        case SUM:
            result =
            operandLeft + operandRight;
            break;
        case SUB:
            result =
            operandLeft - operandRight;
            break;
        default: result = 0;
    }
    ui->lineEdit->setText(QString::number(result));
}


void MainWindow::on_clear_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setFocus();
}
