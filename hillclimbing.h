#ifndef HILLCLIMBING_H
#define HILLCLIMBING_H


class Hill{

private:

    int QueensNum;
    int num; //迭代次数

public:
    int* QueensResult;

    /**********************************/

    Hill(int QueensNum,int num);
    ~Hill();

    bool equal(int *a,int *b);      //判断是否相等
    void copy2to1(int *a ,int* b,int n); //数组复制

    int y(int * pop);       //计数适应度

    int* best(int *Queens);
    int* best2(int*Queens);
    void calculate();

};

#endif // HILLCLIMBING_H
