#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEven
//  Description     :   Used to Check the number is even or not
//  Input           :   Integer
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        bool CheckEven(int iNo)
        {
            if((iNo % 2)==0)
            {
                return true;
            }
            else
            {
                return false;
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

    bool bRet = false;

    Demo dobj;
    bRet = dobj.CheckEven(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is Even number";
    }
    else
    {
        cout<<iValue<<" is a Odd number";
    }

    return 0;
}