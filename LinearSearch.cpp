#include<iostream>
using namespace std;

int main(){
int a[10];
int n=10;
int key;

cout<<"Enter Number";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"Enter Key";
cin>>key;

for(int i=0;i<n;i++)
{
    if(key==a[i])
    {
        cout<<"Key is at"<<i;
        return 0;
    }
}
cout<<"Not Found";
return 0;
}
