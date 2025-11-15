#include<iostream>
using namespace std;

class Base  //size 12 bytes
{
   public:
    int i;
   private:
    int j;
   protected:
   int k;
   
   public:
Base()
   {
     i=10;
     j=20;
     k=30;

void fun()
   {
    cout<<"i"<<"\n"; //Allowed
    cout<<"j"<<"\n"; //Allowed
    cout<<"k"<<"\
    n"; //Allowed
   }

   }
};

class Derived : public Base
{
   public:
   
   void display()
   {
    cout<<"i"<<"\n"; //Allowed
    cout<<"j"<<"\n"; //ERROR
    cout<<"k"<<"\n"; //Allowed
   }
    
};

int main()
{
    
    dobj.fun();
    dobj.gun();

    cout<<bobj.i<<"\n"; //Allowed
   cout<<bobj.j<<"\n";  //ERROR
   cout<<bobj.k<<"\n";  //ERROR

    cout<<dobj.i<<"\n"; //Allowed
   cout<<dobj.j<<"\n";  //ERROR
   cout<<dobj.k<<"\n";  //ERROR //protected Access specifier object 

   bobj.fun(); //Allowed
   dobj.display();//Allowed



    return 0;

}
