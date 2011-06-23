#ifndef __FUN_H__
#define __FUN_H__
#include <iostream>
using namespace std;

void swap(int &left,int &right)
{
    int temp=left;
    left=right;
    right=temp;
}

void print(int data[],int length)
{
    for(int i=1;i<=length;++i)
        cout<<data[i]<<" ";
    cout<<endl;
}

#endif


