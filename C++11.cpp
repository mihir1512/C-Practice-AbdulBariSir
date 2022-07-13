#include<iostream>
using namespace std;

class base final
{

};
class derived /*:public base */
{

};

class parent
{
    public:
    virtual void show() final
    {

    }
};
class child:public parent
{
    public:
   /* void show()
    {

    }
    */
};

float fun()
{
    return 3.14f;

}
int main()
{
    double t=15.68;
    auto x=fun();
    cout<<x<<endl;

    decltype(t)z=52.3687;
    cout<<z<<endl;
    return 0;
}
