#include<iostream>
using namespace std;

template <class T>
T SecondMax(T *arr, int iSize)
{
    if(iSize < 2)
    {
        return T();   // default value (0 for int/float)
    }

    T max1, max2;

    if(arr[0] > arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }
    else
    {
        max1 = arr[1];
        max2 = arr[0];
    }

    for(int i = 2; i < iSize; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    return max2;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {12.0f, 3.7f, 9.8f, 8.7f};

    int iRet = SecondMax(arr, 5);
    cout << iRet << "\n";      // 40

    float fRet = SecondMax(brr, 4);
    cout << fRet << "\n";      // 9.8

    return 0;
}
