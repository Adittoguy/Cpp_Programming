#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Class Name      :   Demo
//  Function Name   :   Divide
//  Description     :   Used to perform Division of two number
//  Input           :   Integer, Integer
//  Output          :   Integer
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:

        int Divide(int iNo1, int iNo2)
        {
            int iAns = 0;

            if(iNo2 == 0)                   // Our code Static so it is of no use
            {
                return -1;
            }
            
            iAns = iNo1 / iNo2;
            return iAns;
        }
};

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    Demo dobj;

    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = dobj.Divide(iValue1,iValue2);

    cout<< "Division is : "<<iRet<<"\n";

    return 0;
}