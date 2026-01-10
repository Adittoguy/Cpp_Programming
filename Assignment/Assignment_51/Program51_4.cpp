#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Generic SearchLast
//  Description     :   Generic function to seach last occurance of given number in array
//  Input           :   array, iSize, iNo
//  Output          :   Index of iNo
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   06/1/2026
//
////////////////////////////////////////////////////////////////////////

template <class T>
int SearchLast(T*arr, int iSize, T iNo)
{
    int iCnt = 0;
    int ret = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            ret = iCnt;
        }
    }
    return ret;
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
    iRet = SearchLast(arr, 9 ,40);
    cout<<"SearchLast is: "<<iRet<<"\n";

    return 0;
}