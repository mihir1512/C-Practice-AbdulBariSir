#include<iostream>
using namespace std;

class base
{
public:
     static int s1;

    base()
    {
       cout<<"Base class"<<endl;
       s1++;
    }
};

int base::s1=10;

int main()
{
base t1,t2;
    cout<<t1.s1<<endl;
    cout<<t2.s1<<endl;
    base t3;
    cout<<t3.s1<<endl;
    cout<<base::s1;
    return 0;
}
