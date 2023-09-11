#include <iostream>
using namespace std;
// Class Declaration
class Maths
{
     public:                        //Access Specifer
         int iNo1;                  //Characteristics
         int iNo2;                  //Characteristics
                       
    Maths()                         // Constructor (Default)
    {
        iNo1 = 0;
        iNo2 = 0;
    }

    Maths(int A, int B)             //Constructor (Parametrised)
    {
        iNo1 = A;
        iNo2 = B;
    }

    int Addition()                  //Behaviour
    {
        return iNo1 + iNo2;
    }

    int Subtraction()              //Behaviour
    {
        return iNo1 - iNo2;
    }
};

int main()
{
    Maths mobj1;
    Maths mobj2(11,10);
    int ret =0;

    cout<<"Size of maths obj 1 = " <<sizeof(mobj1)<< "\n";
    cout<<"Size of maths obj 2 = " <<sizeof(mobj2)<< "\n";

    ret = mobj2.Subtraction();
    cout<<"Subtraction is :" <<ret<<"\n";

    ret = mobj2.Addition();
    cout<<"Adittion is :" <<ret<<"\n";

    ret = mobj1.Addition();
    cout<<"Addition is : "<<ret<<"\n";

    return 0;
}