#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to print number of star given by user
//  Input           :   Integer
//  Output          :   *
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void Display(int iNo)
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo > 0)
            {
                cout<<"*";
                iNo--;
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

    cout<<"Entern number : ";
    cin>> iValue;
    
    Demo dobj;

    dobj.Display(iValue);

    return 0;
}