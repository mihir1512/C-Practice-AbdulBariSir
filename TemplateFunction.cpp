#include<iostream>
using namespace std;

template<class T,class R>
R fun(T x,R y)
{
    return x+y;
}


int main()
{
    cout<<fun(15,1.56f);
    return 0;
}
