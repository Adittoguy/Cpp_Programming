#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to display the same number multiple time provided by user
//  Input           :   Integer, Integer
//  Output          :   Integer, Integer, Integer, .....
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void Display(int iNo, int iFrequency)
        {
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            if(iFrequency < 0)
            {
                iFrequency = -iFrequency;
            }

            for(iCnt = 1; iCnt <= iFrequency; iCnt++)
            {
                cout<<iNo<<"\t";
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
    int iCount = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    cout<<"Enter count : ";
    cin>>iCount;

    Demo dobj;

    dobj.Display(iValue, iCount);

    return 0;
}