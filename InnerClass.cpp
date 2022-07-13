#include<iostream>
using namespace std;

class outer
{
public:
    int x=10;
    static int i;
   void fun()
   {
       t.show();
      cout<< t.j<<endl;
   }

   class inner
   {
   public:
    int j=25;

    void show()
    {
       /* cout<<x<<endl;*/
        cout<<i<<endl;
    }
   };
   inner t;
};
int outer::i=52;

int main()
{

    outer p;
    p.t.show();
    cout<<p.t.j;

   /* outer::inner j;
    j.show();*/

    return 0;
}
