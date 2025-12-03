////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Frequency
//  Description     :   Used to accept N number and find frequency difference between even and odd numbers
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   20/11/2025
//
////////////////////////////////////////////////////////////////////////

class Number
{
    public: 
        int Frequency(int Arr[], int iSize)
        {
            int iCnt = 0, iEven = 0, iOdd = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if((Arr[iCnt] % 2)==0)
                {
                    iEven++;
                }
                else
                {
                    iOdd++;
                }
            }
            return iEven - iOdd;
        }// End of Function
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

    cout<<"Enter number of elements: ";
    cin>>iLength;

    iptr = new int[iLength];

    cout<<"Enter the elements: ";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>iptr[iCnt];
    }

    Number nobj;
    iRet = nobj.Frequency(iptr, iLength);

    cout<<"Result is : "<<iRet<<"\n";

    delete[] iptr;

    return 0;
} // End of Main