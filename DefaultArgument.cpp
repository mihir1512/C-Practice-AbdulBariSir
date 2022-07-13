#include<iostream>
using namespace std;

int sum(int i,int j=0,int k=0,int l=0)
{
    return i+j+k+l;
}

int main()
{
    cout<< sum(10,5,25,24);

    return 0;
}
