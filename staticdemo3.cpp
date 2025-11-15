#include<iostream>
using namespace std;

class Demo
{
  public:
   int i;
   int j;

   static int x;

   Demo()
   {
    this->i = 0;
    this->j = 0;
   }

   Demo(int a,int b)
   {
    this->i = a;
    this->j = b;
   }

   void fun() //void fun(Demo * const this)
   {
      cout<<"inside fun\n";
      cout<<"value of i is :<<"this->i"<<"\n";
      cout<<"value of j is :<<"this->j"<<"\n";
      cout<<"value of x is :"<<x<<"\n";
   }

    static void gun() //static void gun
   {
    cout<<"inside gun"<<"\n";
    cout<<"i"<<"\n";//na
    cout<<j<<"\n";//na
    cout<<x<<"\n";
   }

};
int Demo::x =11;

int main()
{
   Demo::gun();
   cout<<"value od x is:"<<Demo::x<<"\n";
    

   Demo obj(10,20);
   obj.fun();
   obj.gun(); //Demo::gun();

   cout<<size of obj is :"<<sizeof(obj)"<<"\n";



    return 0;

}