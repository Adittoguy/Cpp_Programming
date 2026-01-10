#include <iostream>

template <class T>
T Sub(T no1, T no2)
{
    T ans = 0;
    ans = no1 - no2;
    return ans;
}

int main()
{
    int iRet = Sub(10, 20);
    printf("%d\n", iRet);

    float fRet = Sub(10.5f, 20.3f);
    printf("%f\n", fRet);

    return 0;
}