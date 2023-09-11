#include<iostream>
using namespace std;

class Demo
{ 
   public:                //access specifier 
       int i;             //instance variable
       int j;             //instance variable
       static int k;      //class variable
       static int l;      //class variable
      
       Demo()             // Default constructor
       {
        i = 0;
        j = 0;
       }
      
       Demo(int a, int b)   //parametrised
       {
        i = a;
        j = b;
       }
      
       //void fun(const Demo*this)
       void fun()          //instance method
       {
            //able to access static+ non static
            cout<<"Inside non static method fun\n";
            cout<<"value of i : "<<this->i<<"\n";
            cout<<"value of j : "<<this->j<<"\n";
            cout<<"value of k : "<<k<<"\n";
            cout<<"value of l : "<<l<<"\n"; 
       }
       
       //static void gun()
       static void gun()   // class method
       {
            //static
            cout<<"Inside static method gun\n";
            cout<<"value of k : "<<k<<"\n"; 
            cout<<"value of l : "<<l<<"\n"; 

       }
};
//Load time variable
int Demo::k = 0;    // This is not a global variable as it is only 
int Demo::l = 0;   // concerned with class 
int main()
{
    cout<<"Value of k : "<<Demo::k<<"\n";  //0
    cout<<"Value of l : "<<Demo::l<<"\n";
   
    Demo::gun();
    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo obj3;
   
    cout<<"Value of i in obj1 : "<<obj1.i<<"\n";     //10
    cout<<"Value of i in obj2 : "<<obj2.i<<"\n";     //20
                                                     
    cout<<"Value of j in obj1 : "<<obj1.i<<"\n";    //11
    cout<<"Value of j in obj2 : "<<obj2.i<<"\n";    //21
    
    obj1.fun();  //fun(obj1);
    obj2.fun();

    obj1.gun(); //Demo::gun()
    return 0;
}    

//size of obj is summation of sizes of its non static characteristics 
   // size of (obj) = size of (i) + size of(j)
    //size of (obj) = 4 + 4
    //size of (obj) = 8
