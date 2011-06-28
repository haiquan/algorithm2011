#include <iostream>  
using namespace std;  

class Test  
{  
public:

    Test(char* p)
    {
        cout<<"This is a override constructor."<<endl;
        if(p)
        {
            a=new char[strlen(p)+1];
            strcpy(a,p);
        }else
        {
            a=new char[1];
            *a='\0';
        }
    }

    Test(Test const &t)
    {
        if (t.a)
        {
            a=new char[strlen(t.a)+1];
            strcpy(a,t.a);
        }else
        {
            a=new char[1];
            *a='\0';
        }
    }

    ~Test()
    {
        delete []a;
    }

public:
    char* a;
};  

int main()  
{  
    Test *t1=new Test("Hello, C++!");
    Test t2(*t1);
    cout<<"t2.a="<<t2.a<<endl;

    delete t1;
    cout<<"t2.a="<<t2.a<<endl;
    return 0;  
}