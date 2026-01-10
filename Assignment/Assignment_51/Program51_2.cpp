#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Generic Frequrncy
//  Description     :   Generic function to count frequency of given number in array
//  Input           :   array, iSize, iNo
//  Output          :   Count of iNo
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   06/1/2026
//
////////////////////////////////////////////////////////////////////////

template <class T>
int Frequency(T*arr, int iSize, T iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
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
    iRet = Frequency(arr, 9 ,10);
    cout<<"Frequency is: "<<iRet<<"\n";

    return 0;
}