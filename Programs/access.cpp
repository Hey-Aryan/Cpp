#include<iostream>
using namespace std;

class Base
{ 
    //int X;
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()   //constructor is called by outside entity therefore it should be public:
        {
            i = 10;
            j = 20;
            k = 30;
        }
        void fun()
        {
            cout<<"Value of public i :"<<i<<"\n";   //A
            cout<<"Value of private j :"<<j<<"\n";   //A 
            cout<<"Value of protected k :"<<k<<"\n";  //A
        }
};

int mian()
{
    Base bobj;
    cout<<"Value of public i :"<<bobj.i<<"\n"; //A
    //cout<<"Value of private j :"<<bobj.j<<"\n"; //NA main function is outside the class
    //cout<<"Value of protected k :"<<bobj.k<<"\n"; //NA

    bobj.fun();

    return 0;
}