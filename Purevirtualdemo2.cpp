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

class Derived : public Base 
{
    public:
           int x;
           int substraction(int a,int b) //concrete
{
    return a-b;
} 
int multiplication(int a,int b) //concrete
{
    return a*b;
} 



              
};


int main()
{
   
    Base * bp = new Derived;  //upcasting

    int iret=0;

    iret=bp->addition(11,10);//21
    cout<<iret<<"\n";
    iret=bp->substraction(11,10); //1
    cout<<iret<<"\n";

    //iret=bp->multiplication(11,10); //ERROR
    

    
    

    return 0;
}