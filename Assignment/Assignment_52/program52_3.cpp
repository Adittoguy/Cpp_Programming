#include<iostream>

template <class T>
T AddN(T *arr, int iSize)
{
    T Sum = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {12.0f, 3.7f, 9.8f, 8.7f};

    int iSum = AddN(arr ,5);
    printf("%d\n", iSum);

    float fSum = AddN(brr, 4);
    printf("%f\n", fSum);

    return 0;
}