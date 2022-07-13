#include<iostream>
using namespace std;

int main()
{
    const int *p;
    int i=54;
    p=&i;
    int j=87;

    p=&j;
    cout<<*p<<endl;


    int * const pt=&i;


    cout<<*pt<<endl;

    const int * const k=&i;

    cout<<*k;

    return 0;
}
