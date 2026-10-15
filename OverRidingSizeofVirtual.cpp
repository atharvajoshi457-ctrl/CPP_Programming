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
    cout<<sizeof(Base)<<"\n";      // 8 Bytes
    cout<<sizeof(Derived)<<"\n";    // 16 Bytes

    return 0;
}