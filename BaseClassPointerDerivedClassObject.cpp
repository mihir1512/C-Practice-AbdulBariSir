#include<iostream>
using namespace std;

class base
{
public:

    base()
    {
        cout<<"Default of Base:"<<endl;
    }

    void fun1()
    {
        cout<<"Base Fun1"<<endl;
    }

    void fun2()
    {
        cout<<"Base Fun2"<<endl;
    }

    void fun3()
    {
        cout<<"Base Fun3"<<endl;
    }
};


class derived:public base
{
public:
    void fun4()
    {
        cout<<"Derived Fun4"<<endl;
    }
    void fun5()
    {
        cout<<"Derived Fun5"<<endl;
    }
};


int main()
{


    base *p=new derived;

    p->fun2();
    p->fun3();
/*    p->fun4(); */

     return 0;
}
