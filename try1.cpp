#include<iostream>
using namespace std;

int main()
{
    int a,*p;
    p=&a;

    cin>>*p;

    cout<<a<<*p;

    return 0;
}
