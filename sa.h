#ifndef SA_H
#define SA_H

class SA{

private:

    int QueensNum;
//    int num; //迭代次数

public:
    int* QueensResult;

    /**********************************/

    SA(int QueensNum, double num, double SA_delta);
    ~SA();

    bool equal(int *a,int *b);      //判断是否相等
    void copy2to1(int *a ,int* b,int n); //数组复制

    int y(int * pop);       //计数适应度

    double Temperature;
    double TemperatureBuf;
    double detT;

    int* best2(int *Queens);
    void calculate();
    int* theNext(int *Queens,double T);

};

#endif // SA_H
