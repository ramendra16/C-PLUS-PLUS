//WAP to Find Largest Number Among Three Numbers
#include<iostream>
using namespace std;

int main()
{

    int a,b,c;

    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter Second number: ";
    cin>>b;

    cout<<"Enter Third number: ";
    cin>>c;

    if (a>b)
    {
        cout<<"The largest num is a: "<<a;
    }

    else if (b>c)
    {
        cout<<"The largest num is b: "<<b;
    }

    else cout<<"The largest num is c: "<<c;


return 0;
}
