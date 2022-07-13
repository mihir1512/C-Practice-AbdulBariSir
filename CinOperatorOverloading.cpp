#include<iostream>
using namespace std;

class complex
{

public:
    int real,img;

    friend istream& operator>>(istream &i,complex &x);
   friend ostream& operator<<(ostream &o,complex x);
};
  istream & operator>>(istream &i,complex &x)
    {
        i>>x.real>>x.img;

    }

    ostream& operator<<(ostream &o,complex x)
    {
        o<<x.real<<"+i"<<x.img;
    }
int main()
{

    complex c1;
    cin>>c1;
    cout<<c1;

    return 0;
}
