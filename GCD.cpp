#include<iostream>
using namespace std;

int main(){
int m,n;

cout<<"Enter Mand N";
cin>>m>>n;

while(m!=n){
    if(m>n){
        m=m-n;
    }
    if(n>m){
        n=n-m;
    }
}
cout<<"GCD is"<<m;
return 0;
}
