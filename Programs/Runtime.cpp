#include<iostream>
using namespace std;

class Base
{
    public:                           //Access Specifier
        int A, B ;

        void fun()                    //Function Defination 1000
        {
            cout<<"Base fun\n";
        }
        void gun(int i)              //Function defination  2000
        {
            cout<<"Base gun with one integers\n";
        }
        void gun(int i, int j)       //Overloaded function defination  3000
        {
            cout<<"Base gun with 2 integers\n";
        }

};

class Derived : public Base
{
    public:
        int X, Y;
        void sun()                  //Function Defination 4000
        {
            cout<<"Derived sun\n";
        }
        void fun()                 //Function Redefination  5000
        {
            cout<<"Derived fun\n";
        }

};

int main()
{
    Derived dobj;           
    dobj.fun();            //CALL 5000
    dobj.gun(11);          //CALL 2000
    dobj.gun(11,12);       //CALL 3000
    dobj.sun();            //CALL 4000

    return 0;
}