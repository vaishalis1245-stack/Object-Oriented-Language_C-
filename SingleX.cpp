#include<iostream>
using namespace std;

class Base //8
{
   public:
   int i,j;

   void fun()
   {
    cout<<"Inside base fun\n";
    
   }
};

class Derived : public Base //12 byte memory
{
   public:
     int x;
     
     void gun()
     {
        cout<<"Inside derived gun\n";
     }
};

int main()
{
    Base bobj;
    Derived dobj;

    dobj.fun();
    dobj.gun();



    return 0;

}