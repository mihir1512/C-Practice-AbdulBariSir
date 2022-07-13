#include<iostream>
using namespace std;

class base
{
    public:

    virtual void fun()
    {
        cout<<"Fun of Base"<<endl;
    }
};

class derived:public base
{
public:
    void fun()
    {
        cout<<"Fun of Derived"<<endl;
    }
};


int main()
{
    base *p=new derived;

    p->fun();
    return 0;
}
