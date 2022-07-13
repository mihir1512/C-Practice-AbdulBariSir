#include<iostream>
using namespace std;
int main(){
float basic,percentAllow,percentDeduct,netSalary;

cout<<"Enter Basic"<<endl;
cin>>basic;

cout<<"Enter Allowance Percentage"<<endl;
cin>>percentAllow;

cout<<"Enter Deduction Allowance"<<endl;
cin>>percentDeduct;

netSalary=basic+(basic*percentAllow/100)-(basic*percentDeduct/100);

cout<<"NetSalary is"<<netSalary;

return 0;

}
