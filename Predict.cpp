
#include<iostream>
using namespace std;

class Demo
{
    public:
     void fun(int *p)
     {
        cout<<"First defination";
     }
     void gun(float *p)
     {
        cout<<"Second defination";
     }
     void sun(int no)

    {
        cout<<"Third defination";
    }
};
int main()
{
    int no=11;
    float f=3.14;

    Demo obj();

    obj.sun(no);
    obj.fun(&no);
    obj.gun(&f);

    return 0;

}