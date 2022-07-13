#include<iostream>
using namespace std;

template <class t>

t sum(t x,t y, t z)
{
    return x+y+z;
}
template<class l>
l fun()
{
    return 0;
}
int main()
{
    cout<<sum(11,15,30);

    return 0;
}
