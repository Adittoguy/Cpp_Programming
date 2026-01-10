#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Generic Reverse
//  Description     :   Generic function to display values in reverse order
//  Input           :   array, iSize
//  Output          :   Reverse order
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   06/1/2026
//
////////////////////////////////////////////////////////////////////////

template <class T>
void Reverse(T*arr, int iSize)
{
    int start = 0; 
    int end = iSize - 1;
    int temp = 0;

    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int i = 0;
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};

    for(i = 0; i < 9; i++)
    {
        cout << arr[i] << "\t";
    }
    cout<<"\n";

    Reverse(arr, 9);

    for(i = 0; i < 9; i++)
    {
        cout<<arr[i] << "\t";
    }

    return 0;
}