#include<iostream>
using namespace std;

int main()
{
    int n,remain,rev=0;

    cout<<"Enter n";
    cin>>n;
    cout<<endl;


    while(n>0)
    {
        remain=n%10;
        rev=rev*10+remain;
        n/=10;
    }

    cout<<rev;
    return 0;
}
