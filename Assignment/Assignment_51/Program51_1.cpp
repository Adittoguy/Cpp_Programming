#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Generic Display
//  Description     :   Used to display given value iSize number of times
//  Input           :   Any
//  Output          :   Display value * isize times
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   06/1/2026
//
////////////////////////////////////////////////////////////////////////

template <class T>
void Display(T value, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<value<<"\t";
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}