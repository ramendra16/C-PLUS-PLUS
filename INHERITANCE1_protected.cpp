#include<iostream>
using namespace std;

class A
{
    public: int a,b,s;
    void ip()
    {
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
    }

    protected: void sum()
    {
        s= a+b;
        cout<<"sum: "<<s<<endl;
    }
};
class B:private A
{
    float av;
    public:
    void avg()
    {
        ip();
        sum();
        av=s/3;
        cout<<"avg: "<<av;
    }
};

main()
{
    B o1;
    o1.avg();

}