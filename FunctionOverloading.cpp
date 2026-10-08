#include<iostream>
using namespace std;

class Hello
{
    public : 
        int AdditionTwo(int A,int B)
        {
            return A+B;
        }

        int AdditionThree(int A,int B,int C)
        {
            return A+B+C;
        }

        int AdditionFour(int A,int B,int C,int D)
        {
            return A+B+C+D;
        }

};

int main()
{
    Hello hobj;

    cout<<hobj.AdditionTwo(10,20)<<"\n";
    cout<<hobj.AdditionThree(10,20,30)<<"\n";
    cout<<hobj.AdditionFour(10,20,30,40)<<"\n";



    return 0;
}