#include<iostream>
using namespace std;

int main()
{
    int x,j=10;

    int  &y=x;

    cin>>x;
    y++;
    cout<<x;


    return 0;
}
