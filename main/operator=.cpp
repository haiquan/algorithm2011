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
        cout<<"This is a copy constructor."<<endl;
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
    //ÖØÔØ=²Ù×÷·û
    Test& operator=(Test const& t)
    {
        cout<<"This is a operator=."<<endl;
        if (this==&t)
        {
            return *this;
        }
        if (t.a)
        {
            if (a)
            {
                delete []a;
            }
            a=new char[strlen(t.a)+1];
            strcpy(a,t.a);
        }else
        {
            a=new char[1];
            *a='\0';
        }
        return *this;
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
    cout<<"t1:"<<t1->a<<endl;
    Test t2("Hello,t1!");
    cout<<"t2:"<<t2.a<<endl;
    t2=*t1;
    delete t1;
    cout<<"t2:"<<t2.a<<endl;

    Test t3=t2;
    cout<<"t3:"<<t3.a<<endl;
    return 0;  
}