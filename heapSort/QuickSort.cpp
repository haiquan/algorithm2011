#include "QuickSort.h"

void createArray(int data[],int length)
{
    srand(time(0));
    for (int i=0;i<length;++i)
    {
        data[i]=rand()%length+1;
    }
}

int partition(int data[],int low, int high)
{
    int temp=data[high];
    while(low<high)
    {
        while(low<high&&data[low]<=temp)++low;
        data[high]=data[low];
        while(low<high&&data[high]>=temp)--high;
        data[low]=data[high];
    }
    data[low]=temp;
    return low;
}

void quickSort(int data[],int low, int high)
{
    int middle=0;
    if (low<high)
    {
        middle=partition(data,low,high);
        if(middle!=0||middle!=1)
            quickSort(data,low,middle-1);
        if(middle!=high-1||middle!=high-2)
            quickSort(data,middle+1,high);
    }
}

void print(int data[],int length)
{
    for (int i=0;i<length;++i)
    {
    cout<<data[i]<<" ";
    }
    cout<<endl;
}

////主函数中的代码
//#include "QuickSort.h"
//
//int main()
//{
//    cout<<"Enter the length of the array:";
//    int length=0;
//    cin>>length;
//    int *data=new int[length];
//    createArray(data,length);
//    print(data,length);
//    quickSort(data,0, length-1);
//    print(data,length);
//    return 0;
//}