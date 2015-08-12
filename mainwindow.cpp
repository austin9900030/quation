#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    codec=QTextCodec::codecForName("Big5");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked()){
        ui->send->setEnabled(true);
    }
    else
        ui->send->setEnabled(false);

}
int time;
void MainWindow::on_checkBox_3_clicked()
{
    time++;
}

void MainWindow::on_send_clicked()
{


    codec=QTextCodec::codecForName("Big5");
    QString name=ui->textEdit->toPlainText();
    ui->answer->append(name);

    if(ui->boy->isChecked()){

        ui->answer2->append("boy");
    }
    else
        ui->answer2->append("girl");
    if(ui->home->isChecked()){

        ui->answer3->append("sleep home");
    }
    else if(ui->dormitory->isChecked()){
        ui->answer3->append("fuck in dormitory");
    }
    else
        ui->answer3->append("play outside");
    ui->answer4->append(ui->joblist->currentItem()->text());

    ui->answer5->append(codec->toUnicode("你這個媽寶!!!!!"));


}
int barvalue;
void MainWindow::on_boy_clicked()
{

    ui->progressBar->setValue(10);
}

void MainWindow::on_girl_clicked()
{

    ui->progressBar->setValue(10);
}
