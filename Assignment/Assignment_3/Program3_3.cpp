#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayEvenFactor
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
        void DisplayEvenFactor(int iNo)
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            int iCnt = 0;

            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt)==0 && (iCnt % 2)==0)
                {    
                    cout<<iCnt<<"\t";
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
    dobj.DisplayEvenFactor(iValue);

    return 0;
}