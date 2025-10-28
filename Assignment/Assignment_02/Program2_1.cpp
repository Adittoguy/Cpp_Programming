#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to print number of stars given by user
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
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iCnt < iNo)
            {
                cout<< "*";
                iCnt++;
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

    cout << "Enter Number : ";
    cin >> iValue;

    Demo dobj;

    dobj.Display(iValue);

    return 0;
}