#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactorDifference
//  Description     :   Used to Display difference between sum of factor and sum ofnon factors
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public: 
        int FactorDifference(int iNo)
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            int iCnt = 0;
            int iFacAdd = 0;
            int iNonFacAdd = 0;
            int iDiff = 0;

            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt)==0)
                {
                    iFacAdd = iFacAdd + iCnt;
                }
            }

            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if((iNo % iCnt)!= 0)
                {
                    iNonFacAdd = iNonFacAdd + iCnt;
                }
            }

            iDiff = iFacAdd - iNonFacAdd;
            return iDiff;
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

    iRet = dobj.FactorDifference(iValue);

    cout<<iRet;

    return 0;
}