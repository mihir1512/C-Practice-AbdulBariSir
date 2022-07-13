#include<iostream>
using namespace std;

int main(){
int n,m,rev=0;

cout<<"Enter N";
cin>>n;
m=n;
while(n>0){
    int d;
    d=n%10;
    n=n/10;
    rev=rev*10+d;
}

if(rev==m)
cout<<"Number is Pelindrome";
else
    cout<<"Number is not Pelindrome";


return 0;
}
