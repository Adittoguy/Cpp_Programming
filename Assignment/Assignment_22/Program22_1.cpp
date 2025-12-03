////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountEven      
//  Description     :   Used to accept N number and find even numbers from them
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   20/11/2025
//
////////////////////////////////////////////////////////////////////////

class Number
{
    public: 
        int CountEven(int Arr[], int iSize)
        {
            int iCnt = 0, iCount = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if((Arr[iCnt] % 2)==0)
                {
                    iCount++;
                }
            }
            return iCount;
        } // End of Function
}; // End of Class

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *iptr = NULL;

    cout<<"Enter number of elements: \n";
    cin>>iLength;

    iptr = new int[iLength];

    cout<<"Enter the elements: ";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>iptr[iCnt];
    }

    Number nobj;
    iRet = nobj.CountEven(iptr, iLength);

    cout<<"Result is: "<<iRet<<"\n";

    delete[] iptr;

    return 0;
} // End of Main

