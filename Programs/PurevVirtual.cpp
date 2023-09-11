#include<iostream>
using namespace std;

class Circle               //user defined class
{
    public:                //access specifier
        float PI;          //characteristics
        float Radius;      

        Circle()                  //default constructor 
        {
            PI = 3.14;
            Radius = 0.00;
        }
        Circle(float A, float B)  //parameterised constructor
        {
            PI = A;
            Radius = B;
        }
        void Display()       //concrete function/method
        {
            cout<<"Value of radius is : "<<Radius<<"\n";
        }
        virtual float Area() = 0;          //abstract or pure virtual function
        virtual float Circumference() = 0;   //acc to this syntax
};

class Marvellous : public Circle
{
    public:
        Marvellous() : Circle()
        {
        }
        Marvellous(float X, float Y) : Circle(X,Y)
        {
        }

        float Area()           //Concrete method / function
        {
            float Ans = PI * Radius * Radius;
            return Ans;
        }
        float Circumference()    //Concrete method / function
        {
            float Ans = 0.0;
            Ans = 2 * PI * Radius;
            return Ans;
        }
};

int main()
{
    Marvellous mobj1;
    Marvellous mobj2(3.14,10.89);

    float fret = 0.00;

    fret = mobj2.Area();
    cout<<"Area is : "<<fret<<"\n";

    fret = mobj2.Circumference();
    cout<<"Circummference is:"<<fret<<"\n";

    return 0;
}