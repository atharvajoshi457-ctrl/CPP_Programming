#include<iostream>
using namespace std;

class Base
{
    public :
        int i,j;

        void fun()
        {cout<<"Inside Base fun \n";}

        virtual void gun()
        {cout<<"Inside Base gun \n";}

        virtual void sun()
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

        virtual void run()      // definition
        {cout<<"Inside Derived run \n";}
        
};          // 16 Bytes

int main()
{
    Base * bp = new Derived();          // UpCasting

    bp->fun();          // Base fun
    bp->gun();          // Base gun
    bp->sun();          // Derived sun
    //bp->run();          // Error

    return 0;
}