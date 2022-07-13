#include<iostream>
using namespace std;

class base
{
public:

   virtual ~base()
    {
        cout<<"Destructor of Base"<<endl;
    };
};
class derived:public base
{
    public:
    ~derived()
    {
        cout<<"Destructor of Derived";
    };

};

void fun()
{
    derived d1;
}

int main()
{
    base *p=new derived;
     delete p;

    return 0;
}
