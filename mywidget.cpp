#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent):
    QWidget(parent)
{
    this->QueensNum = 8;
    this->QueensResultNum = 0;
    this->it = -1;
    for(int i=0;i<TheLong;i++)
        gQueen[i]=0;

    Hillclimbing_num = 100;//迭代次数
    Hillclimbing_IndividualNumber=1000;//随机重启次数

    GA_IndividualNumber=1000;    //种群规模
    GA_num=100;                 //进化次数
    GA_pm=2;   //  %  变异概率

    SA_T=1000;//起始温度
    SA_delta=0.9;//下降
}

MyWidget::~MyWidget()
{
    this->DeleteQueensResult();
}

/*******************************************************/

void MyWidget::DeleteQueensResult()
{
    QVector <int*> ::iterator   it_INT;
    for   (it_INT   =   QueensResult.begin()   ;   it_INT   !=   QueensResult.end();   it_INT++)
    {
        delete[]   (*it_INT);
    }
    QueensResult.clear();
}

void MyWidget::calculate(int type,int num)
{



    this->QueensNum = num;
    this->type = type;
    this->it = 0;
    this->QueensResultNum = 0;

    switch (type) {
        case -1:{
            this->it = -1;
            break;
        }
        case 0:{//回溯法
            for(int i=0;i<TheLong;i++)
                gQueen[i]=0;
            this->DeleteQueensResult();
            this->eight_queen(0);
            this->fitness  = 0;
            break;
        }
        case 1:{//爬山法**************************8

            int  num; //迭代次数
            num = this->Hillclimbing_num;
            Hill hill(this->QueensNum,num);

            int *Result = new  int[this->QueensNum];

            int IndividualNumber = this->Hillclimbing_IndividualNumber;//初始温度
            int max = -99999;
            for(int i=0;i<IndividualNumber;i++)
            {
                hill.calculate();
                int val = hill.y(hill.QueensResult);
                if(max < val)
                {
                    hill.copy2to1(Result,hill.QueensResult, this->QueensNum);
                    max = val;
                }
            }
            this->fitness  = -max;
            this->DeleteQueensResult();
            this->QueensResult.push_back(Result);

            this->QueensResultNum=1;

            break;
        }
        case 2:{//遗传算法
            GA ga;

            ga.GA_calculate(this->GA_IndividualNumber ,this->GA_num,this->GA_pm,this->QueensNum);
            int* vector = new int[this->QueensNum];
            for(int i=0;i<QueensNum;i++)
                vector[i] = ga.key.QueensModel[i];

            this->DeleteQueensResult();
            this->QueensResult.push_back(vector);

            this->fitness = - ga.Max;
            this->QueensResultNum=1;
            it = 0;

            break;
        }
        case 3:{//模拟退火算法
            SA sa(this->QueensNum,this->SA_T,this->SA_delta);
            sa.calculate();

            int *Result = new int[this->QueensNum];
            sa.copy2to1(Result,sa.QueensResult,this->QueensNum);
            int max = sa.y(Result);

            this->fitness = max;
            this->DeleteQueensResult();
            this->QueensResult.push_back(Result);
            this->QueensResultNum=1;

            break;
        }
        case 4:{//组合
            this->it = -1;
            break;
        }
        default:{
            it = -1;
            break;
        }
    }

}

/*****************************************************************/
int MyWidget::check_pos_valid(int loop, int value)//检查是否存在有多个皇后在同一行/列/对角线的情况
{
    int index;
    int data;
    for (index = 0; index < loop; index++)
    {
        data = gQueen[index];
        if (value == data)
            return 0;
        if ((index + data) == (loop + value))
            return 0;
        if ((index - data) == (loop - value))
            return 0;
    }
    return 1;
}

void MyWidget::eight_queen(int index)
{

    int loop;
    for (loop = 0; loop < QueensNum; loop++)
    {
        if (check_pos_valid(index, loop))
        {
            gQueen[index] = loop;
            if ( (QueensNum-1) == index)
            {
                QueensResultNum++; save();
                gQueen[index] = 0;
                return;
            }
            eight_queen(index + 1);
            gQueen[index] = 0;
        }
    }
}

void MyWidget::save()
{
    int* v = new int[QueensNum];
    for(int i=0;i<QueensNum;i++)
        v[i] = gQueen[i];
    this->QueensResult.push_back(v);
}

/*******************************************************/


void MyWidget::paintEvent(QPaintEvent *)
{
    if(QueensNum>0)
    {
        this->paintModel(QueensNum,0,0,this->width()-5,this->height()-5);
    }
}

void MyWidget::paintModel(int queensNum,int x,int y,int width,int height)
{
    int w,h,FontSize;
    FontSize=25;
    x+=FontSize;y+=FontSize;
    width-=FontSize; height-=FontSize;
    w = int(width/queensNum + 0.5);
    h = int(height/queensNum + 0.5);
    width = w*queensNum; height=h*queensNum;

    //绘制网格
    QPainter painter1(this);
    painter1.setPen(QPen(Qt::black,4)); //设置画笔形式
    painter1.drawRect(x,y,width,height);//画边界矩形

    painter1.setPen(QPen(Qt::black,2));//设置画笔形式
    for(int i=1;i<queensNum;i++)
    {
       painter1.drawLine(i*w+x,y,i*w+x,height+y);//画直线
       painter1.drawLine(x,i*h+y,width+x,i*h+y); //画直线
    }


    if(this->type != -1)
    {
        painter1.setBrush(Qt::gray);
        for(int i=0;i<QueensNum;i++)
        {
            if( it>=0 and it < QueensResultNum)
                painter1.drawEllipse( QueensResult[it] [i]*w+x ,i*h+y,w,h);//画圆
        }
        painter1.setBrush(Qt::NoBrush);
    }

    //绘制坐标
    if( QueensNum < 80){
        QPainter painter2(this);
        QFont font;
        font.setFamily("Microsoft YaHei");
        font.setPointSize(15);
        painter2.setFont(font);
        painter2.setPen(QPen(Qt::black,2));//设置画笔形式
        for(int i=1;i<=queensNum;i++)
        {
           painter2.drawText(i*w-w+FontSize,0,x,y,Qt::AlignCenter,QString::number(i, 10));
           painter2.drawText(0,i*h-h+FontSize,x,y,Qt::AlignCenter,QString::number(i, 10));
        }
    }
}
