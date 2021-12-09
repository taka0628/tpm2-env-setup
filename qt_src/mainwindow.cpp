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

using namespace std;

void MainWindow::on_pushButton_envSetup_clicked()
{
    cout << "env setup start" << endl;
    CmdCall cmd;
    cmd.MakeEnvSetup();
}

void MainWindow::on_pushButton_getRandom_clicked()
{
    int random_byte = ui->spinBox_random_byte->value();
    assert(random_byte > 0);

    CmdCall cmd;
    cmd.GetRandom(random_byte);
}
