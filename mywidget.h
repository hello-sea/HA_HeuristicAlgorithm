#ifndef MYWIDGET_H
#define MYWIDGET_H

#define TheLong 1000

#include <QtWidgets/QWidget>
#include <QPainter>
#include <ga.h>
#include <sa.h>
#include <hillclimbing.h>

class MyWidget:public QWidget
{
private:
    int QueensNum;              //皇后个数
//    int *gQueen;                //用于计算的临时空间
    int gQueen[TheLong];
//    int **QueensResult;         //记录结果
    QVector<int*> QueensResult; //记录结果
    void DeleteQueensResult();
    int type;                   //算法类型



public:
    int it;                     //当前展示的结果
    int QueensResultNum;        //记录结果个数
    int fitness;                //适应度
    void calculate(int type, int num);


    int Hillclimbing_num;//迭代次数
    int Hillclimbing_IndividualNumber;//随机重启次数

    int GA_IndividualNumber;    //种群规模
    int GA_num;                 //进化次数
    int GA_pm;   //变异概率

    double SA_T;//起始温度
    double SA_delta;//下降


    /*************************/
    //回溯法，基于DFS
    int check_pos_valid(int loop, int value);//检查是否存在有多个皇后在同一行/列/对角线的情况
    void eight_queen(int index);
    void save();
    /*************************/

    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();//执行完后会调用父类的析构函数

    void paintEvent( QPaintEvent * );
    void paintModel(int queensNum,int x,int y,int width,int height);
};

#endif // MYWIDGET_H
