//functionoverloading
#include<iostream>
using namespace std;

class Overloading                   //encapsulation
{
    public:                        //Abstraction
    //Add@2ii                      //namemangling
    int Add(int a, int b)          //1000 (text section address)
    {
        cout<<"Addition of intergers\n";
        return a+b;
    }
    //Add@2ff
    float Add(float a, float b)   //2000  
    {
        cout<<"Addition of floats\n";
        return a+b;
    }
    //Add@2dd
    double Add(double a, double b)   //3000
    {
        cout<<"Add of doubles\n";
        return a+b;
    }
    //Add@3ii
    int Add(int a, int b, int c)    //4000
    {
        cout<<"Addition of 3 intergers \n";
         return a+b+c;
    }
    //Fun@2ii
    void Fun(int a, int b)
    {}
    //Fun@2fi
    void Fun(float x, int y)
    {}
};





int main()
{
    Overloading obj; 
    int i;
    float f;
    double d;
 
    i = obj.Add(11,21);      //call 1000
    cout<<i<<"\n";
    i = obj.Add(11,21,51);   //call 4000
    cout<<i<<"\n";
    f = obj.Add(10.9,89.5);  //call 3000 and not 2000
    cout<<i<<"\n";
    d = obj.Add(10.9f,89.5f);  //call 2000
    cout<<i<<"\n";

    return 0;
}




/*
sizeof('A')     = 1
sizeof(11);     = 4
sizeof(88.90)   = 8
sizeof(88.90f)  = 4

int i = 10
printf("%d",i);            //10
printf("%d",sizeof(++i));  //4
printf("%d",i);            //10
*/
