#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   Check
//  Description     :   Used to Check given number is divisible by 5 or not
//  Input           :   Integer
//  output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        bool Check(int iNo)
        {
            if((iNo % 5)==0)
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
    bool bRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    Demo dobj;

    bRet = dobj.Check(iValue);

    if(bRet == true)
    {
        cout<<"Number is Divisible by 5\n";
    }
    else
    {
        cout<<"Number is not Divisible by 5\n";
    }

    return 0;
}