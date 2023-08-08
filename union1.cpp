#include<iostream>
using namespace std;
union A
{
    int a,b;
}o1;


int main()
{

    o1.a=10;
    cout<<o1.b<<endl;
    o1.b=20;
    o1.a=o1.a+o1.b;
    cout<<o1.a<<endl<<o1.b;




return 0;
}