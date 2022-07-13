#include<iostream>
using namespace std;

class demo
{
public:
    int i=10;

    void fun() const
    {
        cout<<i<<endl;

    }
};

int main()
{

    demo d;

    d.fun();

    return 0;
}
