#include<iostream>
using namespace std;

class base
{
private:
    int i=10;
protected:
    int j=20;
public:
    int k=30;
friend void fun(); /*Friend is a global function outside of class which can access all members of a class upon an object*/

};

void fun()
{

    base b;
    cout<<b.i<<endl;
    cout<<b.j<<endl;
    cout<<b.k<<endl;
}
int main()
{
    fun();

    return 0;
}
