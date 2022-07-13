#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter N"<<endl;
cin>>n;

while(n>0){
    int d=n%10;
    n/=10;
    cout<<d<<endl;
}
return 0;
}
