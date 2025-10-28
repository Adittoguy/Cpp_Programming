#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayConvert
//  Description     :   Used to convert lowercase to uppercase and vice versa
//  Input           :   Character
//  Output          :   Character
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        void DisplayConvert(char cValue)
        {
            if(cValue>= 'A'&& cValue<= 'Z')
            {
                cout<< (char)(cValue+32);
            }
            else if(cValue>= 'a' && cValue<= 'z')
            {
                cout<< (char)(cValue-32);
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
    char cValue = '\0';

    cout<<"Enter number: ";
    cin>>cValue;

    Demo dobj;
    dobj.DisplayConvert(cValue);

    return 0;
}