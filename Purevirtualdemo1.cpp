#include<iostream>
using namespace std;

class Base
{
  public:
         int i,j;
         int addition(int a,int b) //concrete
         {
            return a+b;
         } 
         virtual int substraction(int a,int b)=0; //abstract
        
};

class Derived : public Base //ERROR
{
    public:
           int x;


              
};


int main()
{
   
    Base * BP = new Derived;  //upcasting

    
    

    return 0;
}