#include<iostream>
using namespace std;

int main(){
int n,rev=0;

cout<<"Enter N";
cin>>n;

while(n>0){
    int d;
    d=n%10;
    n/=10;
    rev=rev*10+d;
}

cout<<rev;
return 0;
}
