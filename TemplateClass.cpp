#include<iostream>
using namespace std;

template<class T>
class stack
{
public:

    T x;
    int count;

    void push( T x);
    T pop();

};

template<class T>
void stack<T>::push(T x)
{
    cout<<"Stack"<<endl;
}
template<class T>
T stack<T>::pop()
{
    cout<<"pop"<<endl;
    return 35;
}
int main()
{
    stack<int> c1;
    c1.push(5);
    c1.pop();
    return 0;
}
