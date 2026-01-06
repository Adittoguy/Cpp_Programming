#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<"Addition is : "<<Addition('a', 'b')<<"\n";
    cout<<"Addition is : "<<Addition(11, 10)<<"\n";
    cout<<"Addition is : "<<Addition(90.3f, 98.23f)<<"\n";
    cout<<"Addition is : "<<Addition(3672.09872, 78.4563)<<"\n";

    return 0;
}