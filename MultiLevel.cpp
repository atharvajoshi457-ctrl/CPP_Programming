#include <iostream>
using namespace std;

class Base
{
    public :
        int i,j;

        Base()
        {
            cout<<"Inside Base Constructor\n";
            i = 0;
            j = 0;
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int x;
        
        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            x = 0;
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }

};

class DerivedX : public Derived
{
    public:
        int y;

        DerivedX()
        {
            cout<<"Inside DerivedX Constructor\n";
            y = 0;
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor\n";
        }

        void Sun()
        {
            cout<<"Inside DerivedX Sun\n";
        }
};

int main()
{
    cout<<"Inside Main\n";

    DerivedX dobj;

    cout<<"Size of Base class object is : "<<sizeof(Base)<<"\n";
    cout<<"Size of derived class object is : "<<sizeof(Derived)<<"\n";
    cout<<"Size of derivedX class object is : "<<sizeof(DerivedX)<<"\n";

    cout<<dobj.i<<"\n";     // 0
    cout<<dobj.j<<"\n";     // 0
    cout<<dobj.x<<"\n";     // 0
    cout<<dobj.y<<"\n";

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();

    cout<<"End of Main\n";

    return 0;
}