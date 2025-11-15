#include<iostream>
using namespace std;

class Base
{
  public:
         int i,j; 
         void fun()
         {
            cout<<"inside base fun";
         }

         void gun()
         {
            cout<<"inside base gun";
         }

         void sun()
         {
            cout<<"inside base sun";
         }

         void bun()
         {
            cout<<"inside base bun";
         }
};

class Derived : public Base
{
    public:
           int x;

           void gun()
         {
            cout<<"inside Derived gun";
         }

         void sun()
         {
            cout<<"inside Derived sun";
         }

         void run()
         {
            cout<<"inside Derived run";
         }

         void mun()
         {
            cout<<"inside Derived mun";
         }

         
};


int main()
{
        
    Base * BP = new Derived;  //upcasting

    BP->fun(); //Base fun
    BP->gun(); //Base gun
    BP->sun(); //Base sun
    //BP->run(); //ERROR
     //BP->mun(); //ERROR
    BP->bun(); //Base bun
    return 0;
}