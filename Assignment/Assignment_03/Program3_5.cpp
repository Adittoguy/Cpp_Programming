#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckVowel
//  Description     :   Used to Check weather character is vowel or not
//  Input           :   Character
//  Output          :   String
//  Author          :   Aditya Bhaskar Sanap
//  Date            :   22/10/2025
//
////////////////////////////////////////////////////////////////////////

class Demo
{
    public:
        bool CheckVowel(char cValue)
        {
           if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'U' || cValue == 'O')
            {
                return true;
            }
            else
            {
                return false;
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
    bool bRet = false;

    cout<<"Enter Character: ";
    cin>>cValue;

    Demo dobj;

    bRet = dobj.CheckVowel(cValue);

    if(bRet == true)
    {
        cout<<"It is vowel";
    }
    else
    {
        cout<<"It is not vowel";
    }

    return 0;
}