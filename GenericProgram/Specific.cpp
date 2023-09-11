#include<iostream>
using namespace std;

int Add(int i,int j)
{
    int ans = 0;
    ans = i + j;
    return ans;
}

float Add(float i,float j)
{
    float ans = 0;
    ans = i + j;
    return ans;
}

int main()
{
    int a =10 , b = 11 , iret = 0;
    float x = 90.0f, y = 67.0f, fret = 0.0f;

    iret = Add(a,b);
    fret = Add(x,y);

    cout<<"Addition of intergers :"<<iret<<"\n";
    cout<<"Addition of floats :"<<fret<<"\n";
    return 0;
}
