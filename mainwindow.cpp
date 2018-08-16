#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDesktopWidget>
#include <QApplication>
#include<ctime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int x,y,width,height,size;
    QDesktopWidget *desktop = QApplication::desktop();
    size = 700;
    width = size+200;//ui->widget2->width();
    height = ui->label->height() +ui->widget2->height() + size;
    x = int((desktop->width()-width)/2+0.5);
    y = int((desktop->height()-height)/2+0.5);
    this->setGeometry(x,y,width,height);


    ui->tabWidget->setCurrentIndex(0);


    int num = ui->lineEdit->text().toInt();
    calculate(-1,num);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/******************************************************************/

void MainWindow::calculate(int type,int num)
{
    ui->widget1->calculate(type,num);
}

void MainWindow::on_pushButton_ok_clicked()
{    
    ui->pushButton_ok->setEnabled(false);
    int type = ui->tabWidget->currentIndex();
    int num = ui->lineEdit->text().toInt();


    ui->widget1->Hillclimbing_num = ui->lineEdit_Hillclimbing_num->text().toInt();//迭代次数
    ui->widget1->Hillclimbing_IndividualNumber=ui->lineEdit_Hillclimbing_IndividualNumber->text().toInt();//随机重启次数

    ui->widget1->GA_IndividualNumber=ui->lineEdit_GA_IndividualNumber->text().toInt();    //种群规模
    ui->widget1->GA_num= ui->lineEdit_GA_num->text().toInt();               //进化次数
    ui->widget1->GA_pm= ui->lineEdit_GA_pm->text().toInt();    //  %  变异概率

    ui->widget1->SA_T= ui->lineEdit_SA_T->text().toDouble();   //起始温度
    ui->widget1->SA_delta= ui->lineEdit_SA_delta->text().toDouble();  //下降

    double time_Start = (double)clock();
    calculate(type,num);
    double time_End = (double)clock();

    QString time = QString::number(int((time_End - time_Start)/1000+0.5)*1.0/1000);
    time.append("  s");
    ui->label_Time->setText(time);
    ui->label_fitness->setText(QString::number(ui->widget1->fitness, 10));


    ui->widget1->repaint();
    if(type==0)
    {
        ui->label_n->setText(QString::number(ui->widget1->QueensResultNum, 10));
        ui->label_it->setText(QString::number(ui->widget1->it, 10));
    }
    ui->pushButton_ok->setEnabled(true);
}

void MainWindow::on_pushButton_3_clicked()
{
    if(ui->widget1->it > 0)
    {
        ui->widget1->it --;
        ui->label_it->setText(QString::number(ui->widget1->it, 10));
        ui->widget1->repaint();
    }
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->widget1->it < ui->widget1->QueensResultNum)
    {
        ui->widget1->it++;
        ui->label_it->setText(QString::number(ui->widget1->it, 10));
        ui->widget1->repaint();
    }
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    int num = ui->lineEdit->text().toInt();
    calculate(-1,num);
    ui->widget1->repaint();
}


