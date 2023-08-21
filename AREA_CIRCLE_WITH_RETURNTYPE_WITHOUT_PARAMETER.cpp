#include<iostream>
using namespace std;
float area()
{ 
    float ar,r;
    cout<<"enter radius: ";
    cin>>r;
    ar=3.14*r*r;
    return ar;
}

int main()
{
    float ar=area();
    cout<<ar;

}