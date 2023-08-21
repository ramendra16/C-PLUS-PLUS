#include<iostream>
using namespace std;
void area(float r)
{
    cout<<3.14*r*r;
}

int main()
{
    int a;
    cout<<"enter radius: ";
    cin>>a;
    area(a);

return 0;
}