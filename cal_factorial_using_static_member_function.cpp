//wap to calculate factorial of a number using static member function

#include<iostream>
using namespace std;
class factorial
{
int i,n;
static int f;
public:
void logic()
{
    cout<<"Enter n: ";cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
}
static void display()
{
    cout<<f;
}
}a1;
int factorial::f=1;
main()
{
    a1.logic();
    a1.display();
    return 0;
}