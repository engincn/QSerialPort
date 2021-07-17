#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serialPort = new SerialPort();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete serialPort;
}

void MainWindow::on_baudrateBox_currentIndexChanged(const QString &arg1)
{
    serialPort->setBaudRate(arg1.toInt());

}

void MainWindow::on_databitsBox_currentTextChanged(const QString &arg1)
{
    serialPort->setDataBitCount(arg1.toUInt());
}

void MainWindow::on_parityBox_currentTextChanged(const QString &arg1)
{

}

void MainWindow::on_stopbitsBox_currentTextChanged(const QString &arg1)
{

}

void MainWindow::on_flowcontrolBox_currentIndexChanged(int index)
{

}

void MainWindow::on_pinbox_currentIndexChanged(const QString &arg1)
{

}


void MainWindow::on_connectButton_clicked()
{

}

void MainWindow::on_disconnectButton_clicked()
{

}
