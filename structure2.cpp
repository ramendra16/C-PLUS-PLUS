#include<iostream>
using namespace std;
struct A
{
    int a,b,c;
}o1;


int main()
{

    o1.a=10;
    o1.b=20;
    o1.c=o1.a;
    o1.a=o1.b;
    o1.b=o1.c;
    cout<<"a: ="<<o1.a<<endl<<"b: ="<<o1.b;

return 0;
}
