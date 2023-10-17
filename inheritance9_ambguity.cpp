#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    void ip()
    {
        cout<<"Enter x: ";
        cin>>x;
    }
};

class B
{
    public:
    int y;
    void ip()
    {
        cout<<"Enter y: ";
        cin>>y;
    }
};

class C: public A, public B
{
    int s;
    void opC()
    {
        cout<<"Sum is: ";
        s=x+y;
    }
};

main()
{
    C obj

}