#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
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
    void on_radioButton_4_clicked();

    void on_checkBox_clicked();

    void on_checkBox_3_clicked();

    void on_send_clicked();

private:
    Ui::MainWindow *ui;
    QTextCodec*codec;
};

#endif // MAINWINDOW_H
