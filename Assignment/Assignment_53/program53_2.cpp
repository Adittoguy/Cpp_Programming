#include<iostream>
using namespace std;

template <class T>
bool CheckStored(T *arr, int iSize)
{
    int i = 0;
    T str = 0;

    for(i = 0; i < iSize; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    bool bRet = false;
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {12.0f, 3.7f, 9.8f, 8.7f};

    bRet = CheckStored(arr, 5);
    cout<<bRet<<"\n";

    bRet = CheckStored(brr, 4);
    cout<<bRet<<"\n";

    return 0;
}