#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   Display
//  Description     :   Used to Display Marvellous 5 times using for loop
//  Input           :   -
//  output          :   Marvellous
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void Display()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= 5; iCnt++)
            {
                cout<<"Marvellous\n";
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
    Demo dobj;
    dobj.Display();

    return 0;
}