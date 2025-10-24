#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumNonFactors
//  Description     :   Used to Display sum of non factors of number
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        int SumNonFactors(int iNo)
        {
            int iCnt = 0;
            int iSumNonFac = 0;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if((iNo % iCnt)!=0)
                {
                    iSumNonFac = iSumNonFac + iCnt;
                }
            }

            return iSumNonFac;
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
    int iRet = 0;

    cout<<"Enter number: ";
    cin>>iValue;

    Demo dobj;
    iRet = dobj.SumNonFactors(iValue);

    cout<< iRet;

    return 0;
}