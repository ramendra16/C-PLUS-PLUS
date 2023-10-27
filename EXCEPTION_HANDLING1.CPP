#include<iostream>
using namespace std;

void divide( int x, int y, int z)
{
    cout<<"We are inside the function "<<endl;
    if (x-y != 0)
    {
        int R=(x-y)/z;
        cout<<"Result= " <<R<<endl;
    }

    else 
    {
       throw (x-y);
    }
}

int main()
{
    try 
    {
    cout<<"We are inside the try block "<<endl;
    divide(10,20,10);
    divide(10,10,20);
    }
    catch(int i)
    {
        cout<<"Exception found "<<endl;

    }
    cout<<"End";
    return 0;
}
