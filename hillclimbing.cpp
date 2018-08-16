#include "hillclimbing.h"

#include <stdlib.h>
#include <ctime>
#include <math.h>

Hill::Hill(int QueensNum,int num)
{
    this->QueensNum = QueensNum;
    this->num = num;
    this->QueensResult = new int[QueensNum];
}

Hill::~Hill()
{
    delete[] QueensResult;
}

/**********************************************************/

bool Hill::equal(int *a ,int* b)
{
    for(int i=0;i<QueensNum;i++)
        if(a[i] != b[i] )
            return false;
    return true;
}

void Hill::copy2to1(int *a ,int* b,int n)
{
    for(int i=0;i<n;i++)
        a[i] = b[i];
}


int Hill::y(int * pop)
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
    return -y;
}

/**********************************************************/

int *Hill::best2(int *Queens)
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
                val[i] = y(nextQueens[i]);
            }
            if(nextQueens[i+1][i/2]<QueensNum-1)
            {
                 nextQueens[i+1][i/2]++;
                 val[i+1] = y(nextQueens[i+1]);
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

    copy2to1(maxQueens,nextQueens[0],QueensNum);
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

void Hill::calculate()
{
    int initQueens[QueensNum];   //初始化模型
    int previousNext[QueensNum]; //前模型

    //随机初始化
    srand((unsigned)time(0));
    for(int i=0; i<QueensNum ; i++)
        initQueens[i] = rand()%QueensNum;
    int initValue = y(initQueens);

    for(int i=0; i<QueensNum ; i++)
        previousNext[i] = 0;

    int count=0;

    for(int tag=0;tag< this->num;tag++)
    {
        int *nextQueens;
        nextQueens =  best2(initQueens);
        int nextValue = y(nextQueens);

        if(initValue > nextValue+0)
        {
            copy2to1(initQueens,nextQueens,QueensNum);
            initValue = y(initQueens);
        }else
        if(initValue < nextValue)
        {
            count = 0 ;
            copy2to1(previousNext,initQueens,QueensNum);
            copy2to1(initQueens,nextQueens,QueensNum);
            initValue = y(initQueens);
        }else if(initValue == nextValue)//遇到平原
        {
            count++;
            if(count>5)
            {
                delete[] nextQueens;
                break;
            }
            copy2to1(previousNext,initQueens,QueensNum);
            copy2to1(initQueens,nextQueens,QueensNum);
            initValue = y(initQueens);
        }

        delete[] nextQueens;
        // //若求解出结果,退出
        if(initValue == 0){
            break;
        }

    }

    for(int i=0;i<QueensNum;i++)
        this->QueensResult[i] = initQueens[i];

}

/*****************************************************************/
//int main()
//{
//    int Qnum = 15;
//    Hill hill(Qnum,100);

//    int Result[Qnum];

//    int IndividualNumber = 10000;
//    int max = -99999;
//    for(int i=0;i<IndividualNumber;i++)
//    {
//        hill.calculate();
//        int val = hill.y(hill.QueensResult);
//        if(max < val)
//        {
//            hill.copy2to1(Result,hill.QueensResult, Qnum);
//            max = val;
//        }
//    }
//    return 0;
//}










