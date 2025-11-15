#include<iostream>
using namespace std;

class demo
{
  public:
   int i;
   int j;

   static int x;

   demo()
   {
    this->i=0;
    this->j=0;
   }

   demo(int a,int b)
   {
    this->i=a;
    this->j=b;
   }

   void fun() //void fun(Demo * const this)
   {
      cout<<"inside fun\n";
   }

    static void gun() //static void gun
   {
    cout<<"inside gun\n";
   }
};
int demo::x =11;

int main()
{
   demo::gun();
   cout<<"value od x is:"<<demo::x<<"\n";





    return 0;

}