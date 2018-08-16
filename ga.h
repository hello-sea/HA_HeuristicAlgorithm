#ifndef GA_H
#define GA_H

typedef struct Chrom                           // 结构体类型，为单个染色体的结构；
{
        //short int bit[BitL];
        short int *bit;  //一共6bit来对染色体进行编码，其中1位为符号位。取值范围-64~+64
        int *QueensModel;//对应于 bit数组 的解码
        int fit ;//适应值
        double rfit;//相对的fit值，即所占的百分比
        double cfit;//积累概率
}chrom;

class GA
{
private:

    int BitN;           //BitN字节代表1个数，类似BCD编码
    int BitL;           //DNA总长度
    int QueensNum;      //皇后个数

//    chrom *popcurrent;  // 初始种群规模为；        popcurrent [ IndividualNum ]
    chrom *popnext;     // 更新后种群规模仍为；     popnext [ IndividualNum ]

    int num;    // 迭代次数；

    int IndividualNum;  //种群规模:个体数
    double pm;          //变异概率（%）  = 2

public:
    int Max;    // 函数最大值
    chrom key;//记录结果
    /*************************************/
    GA();
    ~GA();
    void GA_calculate(int num,int IndividualNum,int pm,int QueensNum);

/*[1]染色体:编码、解码                                                   */
    void evpop();        //[1.1] 编码.进行种群的初始化
    chrom decode(chrom *pop);                  //[1.2] 解码.将二进制换算为十进制
/*[2]物竞天择:适应度函数、选择函数                                         */
    int y(chrom pop);                           //[2.1]物竞.适应度函数.目标函数
    void pickchroms ();  //[2.2]天择.选择操作
    void pickchroms_new (); // 基于概率分布
/*[3]遗传变异:遗传、变异                                                */
    void crossover ();      //[3.1]基因重组、交叉
    void mutation ();       //[3.2]突变
};

#endif // GA_H
