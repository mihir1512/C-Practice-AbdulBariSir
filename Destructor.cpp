#include<iostream>
using namespace std;

class demo
{
public:
    int *p;
demo()
{
   p=new int[5];
}

~demo()
{
    cout<<"Destructor Called";
    delete []p;
}
};

void fun()
{
    demo p;
}

int main()
{
    fun();

    return 0;
}
