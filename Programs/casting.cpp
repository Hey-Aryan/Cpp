#include<iostream.
using namespace std;

class Base
{
    public:
        int A, B;
};

class Derived : public Base
{
    public:
        int X, Y;
    
};

int main()
{
    Base * bp = NULL;
    Derived *dp = NULL;

    Base bobj;      //8
    Derived dobj;   //16

    bp = &bobj;    // No Casting  //A
    dp = &dobj;    // No Casting  //A
    bp = &dobj;    //base pointer poiting to derived obj //Upcasting     //A 
   // dp = &bobj;    //Big pointer pointing to small data  //DownCasting   //N.A

    return 0;
}