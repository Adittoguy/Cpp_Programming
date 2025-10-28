#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindLargestNumber
//  Description     :   Used to Display largest number among 3 numbers
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        int FindLargestNumber(int iNo1, int iNo2, int iNo3)
        {
            if(iNo1 > iNo2)
            {
                if(iNo1 > iNo3)
                {
                    return iNo1;
                }
                else
                {
                    return iNo3;
                }
            }

            else
            {
                if(iNo2 > iNo3)
                {
                    return iNo2;
                }
                else
                {
                    return iNo3;
                }
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
    int iValue3 = 0;
    int iRet = 0;

    cout<<"Enter first number : ";
    cin>> iValue1;

    cout<<"Enter second number : ";
    cin>> iValue2;

    cout<<"Enter third number : ";
    cin>> iValue3;

    Demo dobj;
    iRet = dobj.FindLargestNumber(iValue1, iValue2, iValue3);

    cout<<"Greater number is: " <<iRet;

    return 0;
}