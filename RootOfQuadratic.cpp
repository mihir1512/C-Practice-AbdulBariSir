#include<iostream>
#include<cmath>
using namespace std;

int main(){
float b,a,c,root;

cout<<"Enter a,b,c";
cin>>a>>b>>c;

root=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);

cout<<"Root is"<<root;

return 0;
}
