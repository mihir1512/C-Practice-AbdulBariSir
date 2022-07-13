#include<iostream>
using namespace std;

int main(){
int a[5];
int *p=a;

for(int i=0;i<5;i++)
{
    cin>>a[i];

}

for(int i=0;i<5;i++){

    cout<<&p[0];
}
return 0;
}

