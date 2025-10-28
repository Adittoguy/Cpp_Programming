#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckLeapYear
//  Description     :   Used to check given year is leap year or not
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void CheckLeapYear(int iYr)
        {
            if((iYr % 4==0) && (iYr % 100 != 0) || (iYr % 400 == 0))
            {
                cout<<iYr<<" is a Leap year"; 
            }
            else
            {
                cout<<iYr<<" is a not Leap year";
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
    int iYear = 0;

    cout<<"Enter Year :";
    cin>>iYear;

    Demo dobj;
    dobj.CheckLeapYear(iYear);

    return 0;
}