#include<iostream>
using namespace std;


int main()
{
    int a[10],low=0,high=9,key,mid;

    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Key";
    cin>>key;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            cout<<"found at "<<mid;
            return 0;
        }
        else if(key<a[mid]) high=mid-1;
        else low=mid+1;
    }

    cout<<"Element not Found";
    return 0;
}
