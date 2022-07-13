#include<iostream>
using namespace std;

void swap(int *p, int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}

int main()
{
    int i,j;

    cin>>i>>j;

    swap(&i,&j);

    cout<<i<<j;

    return 0;
}
