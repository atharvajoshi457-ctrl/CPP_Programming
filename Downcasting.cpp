#include<iostream>
using namespace std;

class Base
{
    public :
        int i,j;
        
};          // 8 Byte

class Derived : public Base
{
    public:
        int X,y;
        
};          // 16 Bytes

int main()
{
    Derived * dp = NULL;
    Base bobj;

    dp = &bobj;     // downcasting


    return 0;
}