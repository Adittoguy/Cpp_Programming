#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEvenOdd
//  Description     :   Used to Check even or odd number
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void CheckEvenOdd(int iNo)
        {
            if((iNo % 2)==0)
            {
                printf("%d is even",iNo);
            }
            else
            {
                printf("%d is Odd", iNo);
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
    int iValue = 0;

    cout<<"Enter number: ";
    cin>>iValue;

    Demo dobj;
    dobj.CheckEvenOdd(iValue);

    return 0;
}