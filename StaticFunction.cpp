#include<iostream>
using namespace std;

class test
{
public:
    static int x;
    int i=20;

    static int getN()
    {
        cout<<x<<endl;
        return x;
    }
};

int test::x=10;


int main()
{
    test t1;
    t1.getN();

    test::getN();
    return 0;
}
