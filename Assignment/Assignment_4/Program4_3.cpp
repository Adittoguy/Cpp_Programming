#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   NonFactor
//  Description     :   Used to Display non factors of number
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void NonFactor(int iNo)
        {
            if(iNo <= 0)
            {
                iNo = -iNo;
            }

            int iCnt = 0;

            for(iCnt = 1;iCnt <= iNo; iCnt++)
            {
                if((iNo % iCnt)!= 0)
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

    dobj.NonFactor(iValue);

    return 0;
}