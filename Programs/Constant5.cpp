#include <iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;           //constant characteristics
        //Parametrised constructor with DEFAULT values
        Demo(int x =10, int y = 20) :j(y)
        {
            i = x;
        }
        void fun()
        {
            int a = 10;
            const int b = 20;    //constant variable
            i++;    //A(7)
            j++;    //A(8)
            a++;    //A(16)
            b++;   //NA (17)
        }
        void gun() const        //constant behaviour
        {
            int a = 10;
            const int b = 20;
            i++;   //NA(23)
            j++;   //NA(23) & (8)
            a++;   //A(25)  a is local variable 
            b++;   //NA(26) 
        }
};

int main()
{
    Demo obj1(11,21);       //11    21
    const Demo obj2(11,21);      //11    21       //constant Object
    
    obj1.fun();     //A
    obj1.gun();     //NA
    obj2.fun();     //NA Constant obj can only call constant function
    obj2.gun();     //A

    obj1.i++;       //A
    obj1.j++;       //NA
    obj2.i++;       //NA
    obj2.j++;       //NA

    return 0;
}






//Constant function and Behaviour 