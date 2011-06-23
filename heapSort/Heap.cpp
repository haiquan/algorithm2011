#include "Heap.h"

//template<class T>
void swap(int &left,int &right)
{
    int temp=left;
    left=right;
    right=temp;
}

//template<class T>
void modifyBigHeap(int data[],int location,int length)
{
    int lchild=2*location;
    int rchild=2*location+1;
    int largest;
    if(lchild<=length&&data[lchild]>data[location])largest=lchild;
    else largest=location;
    if(rchild<=length&&data[rchild]>data[largest])largest=rchild;

    if(largest!=location)
    {
        swap(data[location],data[largest]);
        modifyBigHeap(data,largest,length);
    }
}


//template<class T>
void buildHeap(int data[],int length)
{
    for (int i=length/2;i>0;--i)
    {
        modifyBigHeap(data,i,length);
    }
}


//template<class T>
void HeapSort(int data[],int length)
{
    buildHeap(data,length);
    for (int i=length;i>=2;--i)
    {
        swap(data[1],data[i]);
        --length;
        modifyBigHeap(data,1,length);
    }
}

void print(int data[],int length)
{
    for(int i=1;i<=length;++i)
        cout<<data[i]<<" ";
    cout<<endl;
}


void modifySmallHeap(int data[],int location,int length)
{
    int lchild=2*location;
    int rchild=2*location+1;
    int smallest;
    if(lchild<=length&&data[lchild]<data[location])smallest=lchild;
    else smallest=location;
    if(rchild<=length&&data[rchild]<data[smallest])smallest=rchild;

    if(smallest!=location)
    {
        swap(data[location],data[smallest]);
        modifySmallHeap(data,smallest,length);
    }
}

void buildSmallHeap(int data[],int length)
{
    for (int i=length/2;i>0;--i)
    {
        modifySmallHeap(data,i,length);
    }
}

void HeapSortK(int data[],int length,int topk)
{
    buildSmallHeap(data,topk);
    for (int i=topk+1;i<=length;++i)
    {
        if(data[i]<=data[1])continue;
        else
        {
            swap(data[1],data[i]);
            modifySmallHeap(data,1,topk);
        }
    }
}

////主函数中的代码
//#include "Heap.h"
//#include <ctime>
//
//int main()
//{
//    cout<<"enter the number:";
//    int length=0;
//    cin>>length;
//    int *data=new int[length];
//    srand(time(0));
//    for (int i=1;i<=length;++i)
//        data[i]=rand()%length+1;
//    print(data,length);
//
//    HeapSortK(data,length,7);
//    print(data,length);
//    return 0;
//}