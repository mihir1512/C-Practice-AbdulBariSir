#include<iostream>
using namespace std;

class demo
{
public:
    int i=0;
    demo(int i, int j)
    {
        cout<<"param of demo"<<endl;
    }
    demo():demo(1,2)
    {
        cout<<"Default Of Demo"<<endl;
    }

};

int main()
{
    demo d;

    return 0;
}
