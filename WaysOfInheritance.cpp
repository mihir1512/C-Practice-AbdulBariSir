#include <iostream>
using namespace std;

class parent
{
  public:
      int a=1;
  protected:
      int b=2;
  private:
      int c=3;
};
class child:private parent
{
public:
    child()
    {
       cout<<a<<endl;
       cout<<b<<endl;

    };
};
class grandchild:public child
{
    public:
    grandchild()
    {
     /*  cout<<a<<endl;
       cout<<b<<endl;*/

    }
};


int main()
{

    grandchild c1;
    return 0;
}
