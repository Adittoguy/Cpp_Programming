#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintEven
//  Description     :   Used to Print even numbers
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void PrintEven(int iNo)
        {
            int iCnt = 0;

            if(iNo <= 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1; iCnt <=iNo; iCnt++)
            {
                cout<<iCnt*2<<"\t";
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

    dobj.PrintEven(iValue);

    return 0;
}