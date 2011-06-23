
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
    //ϵͳĬ�ϵ��ڴ�������
    cout<<"sizeof(X)="<<sizeof(X)<<endl;
    cout<<"sizeof(Y)="<<sizeof(Y)<<endl;

    //������ڴ���1�ı���������ʼ��Ч
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
    //�������,�ָ�Ĭ�Ϲ���
    #pragma pack(pop) 

    //������ڴ���1�ı���������ʼ��Ч
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
    //�������,�ָ�Ĭ�Ϲ���
#pragma pack(pop) 

    return 0;
}