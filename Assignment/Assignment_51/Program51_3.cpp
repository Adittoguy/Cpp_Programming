#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Generic SearchFirst
//  Description     :   Generic function to seach first occurance of given number in array
//  Input           :   array, iSize, iNo
//  Output          :   Index of iNo
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   06/1/2026
//
////////////////////////////////////////////////////////////////////////

template <class T>
int SearchFirst(T*arr, int iSize, T iNo)
{
    int iCnt = 0;
    iCnt = arr[iCnt];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    iRet = SearchFirst(arr, 9 ,40);
    cout<<"SearchFirst is: "<<iRet<<"\n";

    return 0;
}