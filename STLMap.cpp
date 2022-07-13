#include<iostream>
#include<map>
using namespace std;


int main()
{
    map<int,string> m;

    m.insert(pair<int,string>(1,"Mihir"));
    m.insert(pair<int,string>(87,"Dhwanit"));
    m.insert(pair<int,string>(3,"Rahul"));

    map<int,string>::iterator itr;

    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<"  "<<itr->second<<endl;
    }
     map<int,string>::iterator itr2;
     itr2=m.find(7);

     cout<<itr2->first<<"  "<<itr2->second;

    return 0;
}
