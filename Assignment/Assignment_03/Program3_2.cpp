#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayFactor
//  Description     :   Used to Display factor of number
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void DisplayFactor(int iNo)
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            int iCnt = 0;

            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt)==0)
                {    
                    if((iNo% 2)==0)
                    {
                        cout<<iCnt<<"\t";
                    }
                }
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
    dobj.DisplayFactor(iValue);

    return 0;
}