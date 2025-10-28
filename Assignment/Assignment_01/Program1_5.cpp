#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   Accept
//  Description     :   Used to display number of * after taking input from user
//  Input           :   Integer
//  output          :   Symbol
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void Accept(int iNo)
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<"*";
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
    int iValue  = 0;

    cout<<"Enter number: \n";
    cin>>iValue;

    Demo dobj;
    dobj.Accept(iValue);

    return 0;
}