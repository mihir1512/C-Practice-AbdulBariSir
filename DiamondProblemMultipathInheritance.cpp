#include<iostream>
using namespace std;

class  a
{
public:
    a()
    {
        cout<<"Class A"<<endl;
    }
    void fun()
    {
        cout<<"Base class"<<endl;
    }
};
class b:virtual public a
{
public:
    b()
    {
        cout<<"class B"<<endl;
    }
};

class c:virtual public a
{
    public:
    c()
    {
        cout<<"Class C"<<endl;
    }
};
class d:public b, public c
{
public:
    d()
    {
    cout<<"Class D"<<endl;
    }
};

int main()
{
    d temp;
    temp.fun();

   return 0;

}
