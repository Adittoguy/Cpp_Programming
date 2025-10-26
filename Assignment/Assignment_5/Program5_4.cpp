#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckNumberType
//  Description     :   Used to check weather number is positive,negative or zero
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void CheckNumberType(int iNo)
        {
            if(iNo > 0)
            {
                cout<<"It is Positive Number";
            }
            else if(iNo < 0)
            {
                cout<<"It is Negative Number";
            }
            else
            {
                cout<<"It is Zero";
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
    int iNum = 0;

    cout<<"Enter Number:";
    cin>>iNum;

    Demo dobj;
    dobj.CheckNumberType(iNum);

    return 0;
}