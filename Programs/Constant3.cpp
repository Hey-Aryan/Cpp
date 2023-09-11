//Constant Object
#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
       
        
        Demo()
        {
            i = 51;
            j = 101;
        }
        
        Demo(int x, int y)
        {
            i = x;
            j = y;
        }
};

int main()
{
    Demo obj1;
    Demo obj2(10,20);
    const Demo obj3;
    const Demo obj4(10,20);
    

    return 0;
}