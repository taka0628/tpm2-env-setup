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

bool isSetupClicked = false;
bool isGetRandomClicked = false;


void MainWindow::on_pushButton_envSetup_clicked()
{
    if(isSetupClicked == true){
        return;
    }
    isSetupClicked = true;
    CmdCall cmd;
    cmd.MakeEnvSetup();
    isSetupClicked = false;
}
