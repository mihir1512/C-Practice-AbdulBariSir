#include<iostream>
using namespace std;

int main(){
int n,sum=0;

cout<<"Enter N";
cin>>n;
int m=n;
while(n>0){
int d=m%10;
n/=10;
sum +=d;
}
if(m=sum)
{
    cout<<"Armstrong Number";

}
else{
    cout<<"Non Armstrong Number";
}
}
