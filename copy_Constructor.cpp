#include<iostream>
using namespace std;

class counter
{
    int C;
    public:
    counter()
    {}
    counter(int a)
    {
        C=a;
    }
    counter(counter &ob)
    {
        cout<<"Copy constructor inolved"<<endl;
        C =ob.C;
    }
    void show()
    {
        cout<<"C = " <<C<<endl;
    }

};

int main()
{
    counter C1(10);
    counter C2(C1);
    C1.show();
    C2.show();
    
return 0;
}