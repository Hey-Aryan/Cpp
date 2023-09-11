#include<iostream>
using namespace std;

class Maths
{
    public:                //access specifier
    int iNo1;              //Characteristics
    int iNo2;              //Characteristics

    Maths(int A , int B)               //Constructor (Default)
    {
        iNo1 = A;
        iNo2 = B;
    }

    int Addition()                     //Behaviour
    {
        return iNo1 + iNo2;    
    }

};





int main()
{
    Maths mobj1(20,30);
    int ret = 0;

    ret = mobj1.Addition();
    cout<<"Addition is :" <<ret<<"\n";

    return 0;
}