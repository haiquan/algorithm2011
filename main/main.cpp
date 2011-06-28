//主函数中的代码
#include "QuickSort.h"

int main()
{
    cout<<"Enter the length of the array:";
    int length=0;
    cin>>length;
    int *data=new int[length];
    createArray(data,length);
    print(data,length);
    quickSort(data,0, length-1);
    print(data,length);
    return 0;
}

