#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindMaxNumber
//  Description     :   Used to Display largest number among two
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        int FindMaxNumber(int iNo1, int iNo2)
        {
            if(iNo1 > iNo2)
            {
                return iNo1;
            }
            else
            {
                return iNo2;
            }
        }
};

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number : ";
    cin>> iValue1;

    cout<<"Enter second number : ";
    cin>> iValue2;

    Demo dobj;
    iRet = dobj.FindMaxNumber(iValue1, iValue2);

    cout<<"Greater number is: " <<iRet;

    return 0;
}