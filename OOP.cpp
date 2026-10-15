// 1 : Tula kay karaychay ? -> Behaviours
// Answer -> Addition & Substraction

// 2 : Tula Karnayakarta kay lagnar ahe ? -> Characteristics
// Answer -> 2 Numbers (2 integers)

#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int No1;
        int No2;

        Arithmatic()
        {
            No1 = 0;
            No2 = 0;
        }

        Arithmatic(int Value1, int Value2)
        {
            No1 = Value1;
            No2 = Value2;
        }

        int Addition()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }

        int Substraction()
        {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans;
        }
    

};

int main()
{
    Arithmatic aobj(11,10);
    int Result = 0;

    Result = aobj.Addition();
    cout<<"Addition is : "<<Result<<"\n";

    Result = aobj.Substraction();
    cout<<"Substraction is : "<<Result<<"\n";

    return 0;
}