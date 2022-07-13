#include<iostream>
using namespace std;


int main()
{
    int a[10],max=INT_MIN;

    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int x:a)
    {
        if(x>max) max=x;
    }

    cout<<"Max is "<<max;
    return 0;
}
