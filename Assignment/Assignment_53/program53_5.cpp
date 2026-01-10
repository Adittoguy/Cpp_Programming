#include<iostream>
using namespace std;

template <class T>
int Replace(T *arr, int iSize, T oldval, T newval)
{
    int count = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == oldval)
        {
            arr[i] = newval;   // correct replacement
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {12.0f, 3.7f, 9.8f, 8.7f};

    int iRet = Replace(arr, 5, 20, 21);
    cout << "Replaced count (int): " << iRet << "\n";

    float fRet = Replace(brr, 4, 9.8f, 10.0f);
    cout << "Replaced count (float): " << fRet << "\n";

    cout << "Modified int array: ";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << "\nModified float array: ";
    for(int i = 0; i < 4; i++)
        cout << brr[i] << " ";

    return 0;
}
