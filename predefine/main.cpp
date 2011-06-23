
#include <ctime>
#include "function.h"

class X
{
public:
    int a;
    char b;
    short c;
};

class Y
{
public:
    int a;
    char b;
    short c;
    char d;
};

void changeRule(int rule)
{

}

int main()
{
    //系统默认的内存分配规则
    cout<<"sizeof(X)="<<sizeof(X)<<endl;
    cout<<"sizeof(Y)="<<sizeof(Y)<<endl;

    //分配的内存是1的倍数，规则开始生效
    #pragma pack(push,1)
    class X
    {
    public:
        int a;
        char b;
        short c;
    };

    class Y
    {
    public:
        int a;
        char b;
        short c;
        char d;
    };
    cout<<"sizeof(X)="<<sizeof(X)<<endl;
    cout<<"sizeof(Y)="<<sizeof(Y)<<endl;
    //规则结束,恢复默认规则
    #pragma pack(pop) 

    //分配的内存是1的倍数，规则开始生效
#pragma pack(push,4)
    class A
    {
    public:
        int a;
        char b;
        short c;
    };

    class D
    {
    public:
        int a;
        char b;
        short c;
        char d;
    };
    cout<<"sizeof(A)="<<sizeof(A)<<endl;
    cout<<"sizeof(D)="<<sizeof(D)<<endl;
    //规则结束,恢复默认规则
#pragma pack(pop) 

    return 0;
}