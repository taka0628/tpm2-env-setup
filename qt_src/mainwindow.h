#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include "../src/cmd_call.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_envSetup_clicked();

    void on_pushButton_getRandom_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
