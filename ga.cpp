#include "ga.h"
#include <stdlib.h>
#include <cmath>
#include <ctime>

GA::GA()
{
    IndividualNum = 0;
    popnext = NULL;
    key.bit = NULL;
    key.QueensModel = NULL;
}

GA::~GA()
{
    for(int i=0;i<IndividualNum;i++)
    {
        delete[] popnext[i].bit;
        popnext[i].bit = NULL;

        delete[] popnext[i].QueensModel;
        popnext[i].QueensModel = NULL;
    }
    delete[] popnext;
    popnext = NULL;
}


void GA::GA_calculate(int num,int IndividualNum,int pm,int QueensNum)
{
    this->num = num ; // 迭代次数

    int buf=1,Bit=0;
    while(buf < QueensNum)
    {
        Bit++;
        buf = buf*2;
    }
    this->BitN = Bit;
    this->BitL = QueensNum * Bit;			// 染色体长度
    this->QueensNum = QueensNum;            //皇后个数
    this->IndividualNum = IndividualNum;	// 种群规模:个体数
    this->pm = pm;							//变异概率

    popnext = new chrom[IndividualNum];
    Max=0;                                  // 函数最大值
    this->evpop();                          // 随机产生初始种群

    this->Max = this->popnext[0].fit;	//对Max值进行初始化

    int i ,j;
    for(i =0;i< this->num;i ++)        // 开始迭代；
    {
        this->pickchroms();           // 挑选优秀个体；
        this->crossover();    		  // 交叉得到新个体；
        this->mutation();             // 变异得到新个体；

        for(j =0;j<IndividualNum ; j++)
        {
            if(this->popnext[j].fit > this->Max){
                this->Max=this->popnext[j].fit;
                key=this->decode(& this->popnext[j]);//此时的value即为所求的x值
            }
        }

        if(Max==0)
            break;
    }// 等待迭代终止；
}

/*[1]染色体:编码、解码****************************************************/
//[1.1] 编码.进行种群的初始化
void GA::evpop()			// 函数：随机生成初始种群；
{
    int i ,j,random ;
    double sum=0;
    for(j =0;j<IndividualNum; j++)                         	// 从种群中的第1个染色体到第IndividualNum 个染色体
    {
        popnext[j].bit = new short int[BitL];
        popnext[j].QueensModel = new int[QueensNum];

        for(i =0;i<BitL; i++)                      // 从染色体的第1个基因位到第BitL个基因位
        {
            srand((unsigned)time(0));
            random=rand ();                        // 产生一个随机值
            random=(random %2);                    // 随机产生0或者1
            popnext[j].bit[i]=random ;     // 随机产生染色体上每一个基因位的值，或；
        }
        for(i=0;i<QueensNum;i++)//初始化空间
        {
            popnext[j].QueensModel[i] = 0;
        }

        popnext[j].fit = y(decode(popnext));
        sum = sum + popnext[j].fit;
    }

    for (j = 0; j < IndividualNum ; j++)						//计算适应值得百分比，该参数是在用轮盘赌选择法时需要用到的
    {
          popnext[j].rfit = popnext[j].fit/sum;
          popnext[j].cfit = 0;//将其初始化为0
    }
}

//[1.2] 解码.将二进制换算为十进制
chrom GA::decode(chrom *pop)  					// 函数：将二进制换算为十进制；
{												//此处的染色体长度为，其中个表示符号位
    for(int i=0;i<QueensNum;i++)
    {
        pop->QueensModel[i] = 0;
        for(int j=0; j< BitN; j++)
        {
            pop->QueensModel[i] += pop->bit[ i * BitN +j ]* pow(2,j);
        }
        if(pop->QueensModel[i] >= QueensNum)
            pop->QueensModel[i] = QueensNum-1;
    }
    return *pop;
}

/*[2]物竞天择:适应度函数、选择函数******************************************/
//[2.1]物竞.适应度函数.目标函数
int GA::y(chrom pop)           					//需要能能够从外部直接传输函数，加强鲁棒性
{												//函数：求个体的适应度；
    int y =0;
    for(int i=0;i<QueensNum;i++)
    {
        int value = pop.QueensModel[i];
        for (int j = 0; j < i; j++)
        {
            int data = pop.QueensModel[j];
            if (value == data)
                y++;
            else if ((j + data) == (i + value))//主对角线
                y++;
            else if ((j - data) == (i - value))//副对角线
                y++;
        }
    }

    y=-y;

    return y;
}

//[2.2]天择.选择操作
void GA::pickchroms() 		// 函数：选择个体；
{
    int i ,j;
    chrom temp ;                                // 中间变量
                                                //因此此处设计的是个个体，所以参数是
    for(i =0;i<IndividualNum-1; i++)                          // 根据个体适应度来排序；（冒泡法）
    {
        for(j =0;j<IndividualNum-1-i; j++)
        {
            if(popnext[j+1].fit>popnext[j].fit)
            {
                temp= popnext [j+1];
                popnext[j+1]=popnext[j];
                popnext[j]= temp;
            }
        }
    }

    temp.bit =NULL;
    temp.QueensModel = NULL;
}


/*[3]遗传变异:遗传、变异***************************************************/
//[3.1]基因重组、交叉
void GA::crossover ()
{
    int random ;
    int i,j;
    random=rand ();                             	// 随机产生交叉点；
    random=((random %(BitL-1))+1);                  // 交叉点控制在0到(BitL-1)之间；
    for(i =0;i< random;i ++)
        for(j=0;j<int(IndividualNum/2);j++)
            popnext[j+int(IndividualNum/2)].bit[i]= popnext[j].bit[i];   	// child 1 cross over

    for(i =random; i<BitL;i ++)                     // crossing the bits beyond the cross point index
        for(j=0;j<int(IndividualNum/2);j++)
            popnext[IndividualNum-1-j].bit [i]= popnext[j].bit [i];   	// child 1 cross over

    for(i =0;i<IndividualNum ; i++)
        popnext[i ].fit= y(decode(& popnext[i]));    // 为新个体计算适应度值；
}

//[3.2]变异
void GA::mutation ()
{
    int random,col;

    for(int i=0;i<IndividualNum;i++)
    {
        random=rand ()%100;  // 随机产生到之间的数；
        if(random < pm)
        {
            col=rand ()% BitL;                            // 随机产生要变异的基因位号；
            if(popnext [i].bit[col ]==0)             // 1变为；
            {
                popnext[i].bit[ col]=1 ;
            }
            else if (popnext[i].bit [col]==1)        // 0变为；
            {
                popnext[i].bit[ col]=0;
            }
            popnext[i].fit= y(decode(& popnext[i]));     // 计算变异后的适应度值；
        }
    }
}

/****************************************************************************/

//int main()
//{
//	GA ga;
//	printf("\nWelcome to the Genetic Algorithm！\n");  //
//	printf("The Algorithm is based on the Queens to find the __ of the function->\n");

//	int buf = 0;
//	while(buf<1)// 判断输入的迭代次数是否为负或零，是的话重新输入；
//	{
//		printf ("\nPlease enter the no-> of iterations\n请输入您要设定的迭代数 : ");
//		scanf("%d" ,&buf);          // 输入迭代次数，传送给参数 num；
//	}//不同的随机数可能结果不同？？那是当所设置的迭代次数过少时，染色体的基因型过早地陷入局部最优

//	ga.GA_calculate(buf,1000,50,15);
//}
