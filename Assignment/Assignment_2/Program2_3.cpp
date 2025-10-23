#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to Display string based of condition
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void Display(int iNo)
        {
            if(iNo < 10)
            {
                cout<<"Hello";
            }
            else 
            {
                cout<<"Demo";
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

    dobj.Display(iValue);

    return 0;
}
