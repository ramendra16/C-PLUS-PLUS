#include<iostream>
using namespace std;
float area(float r)
{ 
    float ar;
    ar=3.14*r*r;
    return ar;
}

int main()
{
    float a;
    cout<<"enter radius: ";
    cin>>a;
    a=area(a);
    cout<<a;

}