#include "sa.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <math.h>

SA::SA(int QueensNum,double Temperature ,double SA_delta)
{
    this->QueensNum = QueensNum;
    this->Temperature = Temperature;
    this->detT = SA_delta;
    this->QueensResult = new int[QueensNum];
}

SA::~SA()
{
    delete[] QueensResult;
}

/**********************************************************/

bool SA::equal(int *a ,int* b)
{
    for(int i=0;i<QueensNum;i++)
        if(a[i] != b[i] )
            return false;
    return true;
}

void SA::copy2to1(int *a ,int* b,int n)
{
    for(int i=0;i<n;i++)
        a[i] = b[i];
}


int SA::y(int * pop)
{
    int y =0;
    for(int i=0;i<QueensNum;i++)
    {
        int value = pop[i];
        for (int j = 0; j < i; j++)
        {
            int data = pop[j];
            if (value == data)
                y++;
            else if ((j + data) == (i + value))//主对角线
                y++;
            else if ((j - data) == (i - value))//副对角线
                y++;
        }
    }
    return y;
}

/**********************************************************/

int * SA::best2(int *Queens)
{
    int *maxQueens = new int[QueensNum];
    copy2to1(maxQueens,Queens,QueensNum);
    int max = y(maxQueens);

    int nextNum = 2*QueensNum;
    int nextQueens[nextNum][QueensNum];
    int val[nextNum];


    for(int i=0; i<nextNum ; i++)
    {
        copy2to1(nextQueens[i],Queens,QueensNum);
    }

    for(int i=0; i<nextNum ; i++)
    {
        if(i%2 == 0)
        {
            if(nextQueens[i][i/2]>0)
            {
                nextQueens[i][i/2]--;
                val[i] = -y(nextQueens[i]);
            }
            if(nextQueens[i+1][i/2]<QueensNum-1)
            {
                 nextQueens[i+1][i/2]++;
                 val[i+1] = -y(nextQueens[i+1]);
            }
        }
    }

    int temp[QueensNum];
    int valTemp;

    for(int i=0 ;i< nextNum-1; i++)    // 根据个体适应度来排序；（冒泡法）
    {
        for(int j=0; j < nextNum-1-i; j++)
        {
            if( val[j+1] > val[j])
            {
                valTemp = val[j+1];
                copy2to1(temp,nextQueens[j+1],QueensNum);

                val[j+1] = val[j];
                copy2to1(nextQueens[j+1],nextQueens[j],QueensNum);

                val[j] = valTemp;
                copy2to1(nextQueens[j],temp,QueensNum);
            }
        }
    }

     int random = rand()%nextNum;
     if(random<=0)  random = 1;
         copy2to1(maxQueens,nextQueens[random],QueensNum);
     max = y(maxQueens);

    if(max!=0)
    {
        int bester = int(nextNum/32) +2;

        srand((unsigned)time(0));
        int random=rand ()%100;  // 随机产生到之间的数；
        if(random < 10 )
        {
            int it = rand()%bester+1;
            copy2to1(maxQueens,nextQueens[it],QueensNum);
        }
    }

    return maxQueens;

}



int* SA::theNext(int *Queens,double T)
{
    int *maxQueens = new int[QueensNum];
    copy2to1(maxQueens,Queens,QueensNum);
    int max = -y(maxQueens);

    int nextNum = pow(2,QueensNum)+1;
    int nextQueens[nextNum][QueensNum];
    int val[nextNum];

    int r =int(T/TemperatureBuf*nextNum+0.5);
    if(r<1)r=1;


    copy2to1(nextQueens[1],Queens,QueensNum);
    if(nextQueens[1][0]>0 )nextQueens[1][0]--;
    val[1] = -y(nextQueens[1]);

    copy2to1(nextQueens[2],Queens,QueensNum);
    if(nextQueens[2][0]<QueensNum-1 )nextQueens[2][0]++;
    val[2] = -y(nextQueens[2]);

    long long int next=2;
    for(int i=1; i< QueensNum ; i++ )
    {
        next = next*2;
        for(int j=next/2+1 ;j<=next;j++)
        {
            copy2to1(nextQueens[j],nextQueens[(j+1)/2],QueensNum);
            if( j%2 == 0 )
            {
                if(nextQueens[j-1][i]>0) nextQueens[j-1][i]--;
                val[j-1] = -y(nextQueens[j-1]);

                if(nextQueens[j][i]<QueensNum-1 )nextQueens[j][i]++;
                val[j] = -y(nextQueens[j]);
            }
        }
    }


    int temp[QueensNum];
    int valTemp;

    for(int i=1 ;i< nextNum-1; i++)    // 根据个体适应度来排序；（冒泡法）
    {
        for(int j=1; j < nextNum-1-i; j++)
        {
            if( val[j+1] > val[j])
            {
                valTemp = val[j+1];
                copy2to1(temp,nextQueens[j+1],QueensNum);

                val[j+1] = val[j];
                copy2to1(nextQueens[j+1],nextQueens[j],QueensNum);

                val[j] = valTemp;
                copy2to1(nextQueens[j],temp,QueensNum);
            }
        }
    }
    int random = rand()%nextNum;
    if(random<=0)  random = 1;
        copy2to1(maxQueens,nextQueens[random],QueensNum);


    return maxQueens;

}


void SA::calculate()
{
    int initQueens[QueensNum];
    //随机初始化
    srand((unsigned)time(0));
    for(int i=0; i<QueensNum ; i++)
        initQueens[i] = rand()%QueensNum;
    int maxQueens[QueensNum];
    copy2to1(maxQueens,initQueens,QueensNum);
    int max = y(maxQueens);

    int *nextQueens;
    Temperature = Temperature *10000;
    TemperatureBuf = Temperature;
    double det = 0;
    int tag = 0;

    while(Temperature>=0.0001)
    {
        det = Temperature - Temperature * detT;
        Temperature = Temperature * detT;
        nextQueens = best2(initQueens);
        if( (y(nextQueens)-y(initQueens))<0)
        {
            copy2to1(initQueens,nextQueens,QueensNum);
            tag=0;
        }else
        {
            if(exp(det/Temperature) < rand()%100/(double)101)
            {
                copy2to1(initQueens,nextQueens,QueensNum);
                tag=0;
            }else
                tag++;
        }

        if(max>y(initQueens))
        {
            copy2to1(maxQueens,initQueens,QueensNum);
            max = y(maxQueens);
        }

        if(y(initQueens)==0)
            break;

    }

    delete[] nextQueens;

    copy2to1(QueensResult,maxQueens,QueensNum);

}





//int main()
//{
//    int Qnum = 15;
//    SA sa(Qnum,100);
//    sa.calculate();

//    int Result[Qnum];
//    sa.copy2to1(Result,sa.QueensResult,Qnum);
//    int max = sa.y(Result);

////    printf("\n 当皇后最小冲突个数为 %d 时,模型求解结果为= " ,max);
////    for(int i=0 ; i<Qnum ; i++)
////            printf("%d",Result[i]);

////    //输出一个模型:
////    for(int i=0 ; i<Qnum ; i++)
////    {
////        printf("\n");
////        int j=0;
////        for(j=0;j<= Result[i]-1;j++)
////            printf("0\t");
////        printf("#\t");
////        for(j= Result[i]+1 ;j<Qnum;j++)
////            printf("0\t");
////        printf("\n");
////    }
////    printf("\n\n end ! \n\n " );

//    return 0;
//}


