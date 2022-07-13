#include<iostream>
using namespace std;

namespace first
{
    void fun()
    {
        cout<<"First Namespace"<<endl;
    }
};

namespace second
{
    void fun()
    {
        cout<<"Second Namespace"<<endl;
    }
};

using namespace first;
int main()
{

    fun();

    second::fun();

    return 0;
}
