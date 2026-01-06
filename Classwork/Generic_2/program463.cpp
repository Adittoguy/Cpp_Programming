#include<iostream>
using namespace std;

class Arithematic
{
    public: 
        int No1;
        int No2;

        Arithematic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }

        int Addition()
        {
            int Ans;
            Ans = No1 + No2;
            return Ans;
        }   
};

int main()
{
    // Arithematic aobj();          Not Allowed
    Arithematic aobj(10, 11);

    cout <<"Addition is : "<<aobj.Addition()<<"\n";

    return 0;
}