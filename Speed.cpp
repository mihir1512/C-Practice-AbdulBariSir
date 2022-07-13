#include<iostream>
#include<cmath>
using namespace std;

int main(){
float v,u,speed,a;

cout<<"Enter V and U and A";
cin>>v>>u>>a;
speed=(pow(v,2)-pow(u,2))/(2*a);

cout<<"Speed is"<<speed;

return 0;

}
