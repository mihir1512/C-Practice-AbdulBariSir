#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int n,...)
{
    va_list l;
    va_start(l,n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=va_arg(l,int);
    }
    va_end(l);
    return sum;
}

int main()
{
    int j=sum(5,10,20,50,50,50);
    cout<<j;


    return 0;
}
