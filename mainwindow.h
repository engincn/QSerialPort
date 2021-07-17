#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <serialport.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow;
             }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_baudrateBox_currentIndexChanged(const QString &arg1);

    void on_databitsBox_currentTextChanged(const QString &arg1);

    void on_parityBox_currentTextChanged(const QString &arg1);

    void on_stopbitsBox_currentTextChanged(const QString &arg1);

    void on_flowcontrolBox_currentIndexChanged(int index);

    void on_pinbox_currentIndexChanged(const QString &arg1);

    void on_connectButton_clicked();

    void on_disconnectButton_clicked();

private:
    Ui::MainWindow *ui;
    SerialPort *serialPort = nullptr;
};




#endif // MAINWINDOW_H
