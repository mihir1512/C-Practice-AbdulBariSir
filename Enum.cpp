#include<iostream>
using namespace std;

int main()
{
    enum day{mon,tue=5,wed,thur,fri,sat,sun};
    day f;
    f=wed;

    cout<<f;
}

