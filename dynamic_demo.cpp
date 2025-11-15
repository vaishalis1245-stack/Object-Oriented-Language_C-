#include<iostream>
using namespace std;

int main()
{
    int length=0;
    int *Arr=NULL;

    cout<<"Enter the no of elements: \n";
    cin>>length;
    
    //step 1: Alloacte the memeory
    Arr=new int[length];

    if(Arr==NULL)
    {
        cout<<"Unable to alloacte memory\n";
    }
    else
    {
        cout<<"Memeory gets alloactes succesfully\n";

    }

    //step2 use the memory

    //step3 deallocate the memory
     delete [] Arr;
    return 0;
}