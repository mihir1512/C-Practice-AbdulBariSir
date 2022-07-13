#include<iostream>
using namespace std;

int division(int i,int j)
{
    if(j==0)
        throw 101;
    return i/j;
}

int main()
{
    int i=10,j=0;

    try{
    int c=division(i,j);
    }
    catch(int k)
    {
        cout<<"Divide By 0";
    }

    return 0;
}
