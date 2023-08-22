#include<iostream>
using namespace std;

void area(float r)
{
    float ar=3.14*r*r;
    cout<<"area of circle= "<<ar<<endl;
}

void area(int l, int b)
{
    int area_rec= l*b;
    cout<<"Area of rectangle= "<<area_rec;
}

int main()
{
 area(4);
 area(3,4);
return 0;
}