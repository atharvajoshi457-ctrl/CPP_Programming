#include <iostream>
using namespace std;

class Base
{
    protected :
        int i,j;
    
    public:
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

int main()
{
    cout<<"Inside Main\n";

    Derived dobj;

    cout<<"Size of Base class object is : "<<sizeof(Base)<<"\n";
    cout<<"Size of derived class object is : "<<sizeof(Derived)<<"\n";

    
    cout<<dobj.x<<"\n";     // 0

    dobj.Fun();
    dobj.Gun();

    cout<<"End of Main\n";

    return 0;
}