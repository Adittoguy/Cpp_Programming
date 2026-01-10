#include<iostream>

template <class T>
T Max(T *arr, int iSize)
{
    int i = 0;
    T Max = arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {12.0f, 3.7f, 9.8f, 8.7f};

    int iSum = Max(arr ,5);
    printf("%d\n", iSum);

    float fSum = Max(brr, 4);
    printf("%f\n", fSum);

    return 0;
}