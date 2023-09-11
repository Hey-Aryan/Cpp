//Single Level Inheritance
// Using dynamic memory allocation
#include<iostream>
using namespace std;

class Base
{
    public:                                         //access specifier 
        int A,B;                                    //variables 

        Base()                                     //constructor
        {
            cout<<"Inside Base constructor\n";
        }
        ~Base()                                   //destructor
        {
            cout<<"Inside Base destructor\n";
        }
        void fun()                               //function
        {
            cout<<"Inside Base fun\n";
        }
  
};

class Derived : public Base       //Single 1eve1 Inheritance
//class Derived extends Base {Syntax of Java}       
{
    public:
        int X,Y;

        Derived()
        {
            cout<<"Inside derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside derived destructor\n";
        }
        void gun()
        {
            cout<<"Inside gun of Derived\n";
        }
};

int main()
{

    //Derived dobj;            //Static memory allocation

    Derived * ptr = NULL; //pointer created in auto storage class //default value contains garbage therefore we need to initialise with NULL 

    ptr = new Derived;   //memory allocated in heap dynamically
                        // memory allocated is 16
                       // you can call fun as well as 
    ptr->fun();
    ptr->gun();

    delete ptr;

    return 0;
}