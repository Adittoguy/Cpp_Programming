#include<iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
    T iMax = 0;
    if(no1 > no2)
    {
        if(no1 > no2)
        {
            return no1;
        }
        else
        {
            return no2;
        }
    }
    else
    {
        if(no2 > no3)
        {
            return no2;
        }
        else
        {
            return no3;
        }
    }
}

int main()
{
    int iRet = Max(10, 20, 30);
    cout<< iRet<<"\n";

    float fRet = Max(10.0f, 20.0f, 30.0f);
    cout<<fRet<<"\n";

    return 0;
}