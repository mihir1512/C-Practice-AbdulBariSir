#include<iostream>
using namespace std;

int  display()
{
    return 5;
}
int main()
{
    int (*t) ();

    t=display;

    int j=(*t) ();

    cout<<j;
    return 0;
}
