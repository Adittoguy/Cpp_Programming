#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ReverseFactor
//  Description     :   Used to Display factors in reverse order
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void FactorReverse(int iNo)
        {
            if(iNo<=0)
            {
                iNo = -iNo;
            }

            int iCnt = 0;

            for(iCnt = (iNo/2); iCnt>= 1; iCnt--)
            {
                if((iNo % iCnt)== 0)
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
    cin>> iValue;

    Demo dobj;

    dobj.FactorReverse(iValue);

    return 0;
}