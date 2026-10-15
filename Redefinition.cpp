#include<iostream>
using namespace std;

class Base
{
    public :
        int i,j;

        void fun()
        {cout<<"Inside Base fun \n";}

        void gun()
        {cout<<"Inside Base gun \n";}

        void sun()
        {cout<<"Inside Base sun \n";}
};          // 8 Byte

class Derived : public Base
{
    public:
        int X,y;

        void fun()      // redefinition
        {cout<<"Inside Derived fun \n";}

        void sun()      // redefinition
        {cout<<"Inside Derived sun \n";}

        void run()      // definition
        {cout<<"Inside Derived run \n";}
        
};          // 16 Bytes

int main()
{
    Base * bp = NULL;

    bp = new Derived();     // Upcasting

    bp->fun();      // Base fun
    bp->gun();      // Base gun
    bp->sun();      // Base sun
    //bp->run();      // Error

    return 0;
}