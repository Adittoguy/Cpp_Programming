#include<iostream>
using namespace std;

template <class T>
class Arithematic
{
    public: 
        T No1;
        T No2;

        Arithematic(T A, T B)
        {
            No1 = A;
            No2 = B;
        }

        T Addition()
        {
            T Ans;
            Ans = No1 + No2;
            return Ans;
        }   

        T Substraction()
        {
            T Ans;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
    Arithematic <int>aobj1(10, 11);
    Arithematic <float> aobj2(10.234f, 11.2341f);

    cout <<"Addition is : "<<aobj1.Addition()<<"\n";
    cout <<"Addition is : "<<aobj2.Addition()<<"\n";

    cout <<"Substraction is : "<<aobj1.Substraction()<<"\n";
    cout <<"Substraction is : "<<aobj2.Substraction()<<"\n";

    return 0;
}