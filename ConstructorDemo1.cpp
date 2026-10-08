#include<iostream>
using namespace std;

// Encapsulation
class Marvellous
{
    // Access Specifier
    public:
    int No1,No2; // Characteristics
    
    // Default Constructor
    Marvellous()
    {
        cout<<"Inside Default Constructor\n";
        No1 = 0;
        No2 = 0;
    }

    // Parametrized Constructor
    Marvellous(int A,int B)
    {
        cout<<"Inside Parametrized Constructor\n";
        No1 = A;
        No2 = B;
    }

    // Copy Constructor
    Marvellous(Marvellous &ref)
    {
        cout<<"Inside Copy Constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;
    }

    // Destructor
    ~Marvellous()
    {
        cout<<"Inside Destructor\n";
    }
};

int main()
{
    cout<<"Inside Main\n";

    Marvellous mobj1;             // Default Constructor Object
    Marvellous mobj2(11,21);        // Parametraized Constructor Object
    Marvellous mobj3(mobj2);        // Copy Constructor Object

    cout<<"End of Main\n";

    return 0;
}   // All Destructors gets Called