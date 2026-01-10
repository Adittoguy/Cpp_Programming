#include<iostream>
using namespace std;

template<class T>
void CopyArray(T *src, T *dest, int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        dest[i] = src[i];
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {12.0f, 3.7f, 9.8f, 8.7f};

    int crr[5];
    float drr[4];

    CopyArray(arr, crr, 5);
    cout << "Integer array: ";
    for(int i = 0; i < 5; i++)
        cout << crr[i] << " ";

    CopyArray(brr, drr, 4);
    cout << "\nFloat array: ";
    for(int i = 0; i < 4; i++)
        cout << drr[i] << " ";

    return 0;
}
