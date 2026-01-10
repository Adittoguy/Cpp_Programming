#include<iostream>
using namespace std;

template <class T>
T SecondMin(T *arr, int iSize)
{
    if(iSize < 2)
    {
        return T();   // default value
    }

    T min1, min2;

    // Initialize first two elements
    if(arr[0] < arr[1])
    {
        min1 = arr[0];
        min2 = arr[1];
    }
    else
    {
        min1 = arr[1];
        min2 = arr[0];
    }

    for(int i = 2; i < iSize; i++)
    {
        if(arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] < min2 && arr[i] != min1)
        {
            min2 = arr[i];
        }
    }

    return min2;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {12.0f, 3.7f, 9.8f, 8.7f};

    int iRet = SecondMin(arr, 5);
    cout << iRet << "\n";      // 20

    float fRet = SecondMin(brr, 4);
    cout << fRet << "\n";      // 8.7

    return 0;
}
