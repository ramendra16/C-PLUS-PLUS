#include<iostream>
using namespace std;

class A{
    public:
    int a,b ;
    ipA(){
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
    }
};

class B{
    public:
    int c;
    
    ipB(){
        cout<<"Enter c: ";
      cin>>c;
    }
};

class C : public A, public B
{
    public:
    void opC(){
    if (a>b && a>c)
    {
        cout<<"A is greatest";
    }

    else if (b>a && b>c)
    {
        cout<<"B is gratest";
    }

    else{
        cout<<"C is gratest";
    }
    }
    
};

main()
{
    C obj;
    obj.ipA();
    obj.ipB();
    obj.opC();

    return 0;

}

