
#include<iostream>
using namespace std;

class Base
{
    public: 
        int A,B;                                    

        Base()                                    
        {
            cout<<"Inside Base constructor\n";
        }
        ~Base()                                   //destructor
        {
            cout<<"Inside Base destructor\n";
        }
        void fun()                               //function
        {
            cout<<"Inside fun of Base \n";
        }
  
};

class Derived : public Base            
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

class DerivedX : public Derived
{
    public: 
        int i,j;

        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX destructor\n";
        }
        void sun()
        {
            cout<<"Inside sun of DerivedX \n";
        }
    
};

int main()
{
    cout<<"Size of Base :"<<sizeof(Base)<<"\n";  
    cout<<"Size of Derived :"<<sizeof(Derived)<<"\n"; 
    cout<<"Size of DerivedX :"<<sizeof(DerivedX)<<"\n"; 

    DerivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}