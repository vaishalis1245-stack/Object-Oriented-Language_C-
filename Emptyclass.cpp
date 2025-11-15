#include<iostream>
using namespace std;

class Demo
{
    public:
    void Display()
    {
        cout<<"inside Display";
    }
};

int main()
{
    Demo dobj;
    cout<<sizeof(dobj);  //1 byte memory allocation program
    return 0;
}