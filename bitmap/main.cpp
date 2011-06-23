
#include <ctime>
#include "function.h"

int main()
{
    cout<<"enter the length and range:";
    int length=0;
    int range=0;
    cin>>length>>range;
    int *data=new int[length];
    srand(time(0));
    for (int i=1;i<=length;++i)
        data[i]=rand()%range+1;
    print(data,length);

    int num_of_int=range/32+1;
    cout<<num_of_int;
    unsigned int *buf=new unsigned int[num_of_int];

    unsigned int x=0x1;
    for (int i=0;i<length;++i)
    {
        buf=buf|x<<data[i];
    }
    int num_of_bit=num_of_int*32;
    for (int j=0;j<num_of_bit;++j)
    {
        buf=buf&(x<<j);
        cout<<buf<<" ";
        if(j%10==0) cout<<endl;
    }

    return 0;
}