
#include<iostream>
using namespace std;


int main()
{
    int a[10],key;

    for(int x=0;x<10;x++)
    {
        cin>>a[x];
    }
    cout<<"Enter Key";
    cin>>key;

    for(int x=0;x<10;x++)
    {
        if(key==a[x])
        {
            cout<<"Found at "<<x;
            return  0;
        }
    }

    cout<<"Element not found";
    return 0;
}
