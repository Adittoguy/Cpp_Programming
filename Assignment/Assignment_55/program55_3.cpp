#include <iostream>

template <class T>
T Div(T no1, T no2)
{
    T ans = 0;
    ans = no1 / no2;
    return ans;
}

int main()
{
    int iRet = Div(10, 20);
    printf("%d\n", iRet);

    float fRet = Div(10.5f, 20.3f);
    printf("%f\n", fRet);

    return 0;
}