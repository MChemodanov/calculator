#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    enum Operations {SUM, SUB, MUL, DIV};

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_sumButton_clicked();

    void on_equal_clicked();

    void on_subButton_clicked();

    void on_clear_clicked();

private:
    Ui::MainWindow *ui;
    double operandLeft;
    double operandRight;
    Operations operation;

    void setOperation(Operations o);
};

#endif // MAINWINDOW_H
