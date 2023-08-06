#include<iostream>
using namespace std;

class area
{
    public:
    float r , area;
    int area_circle();
}a1;

int area :: area_circle()
{
    cout<<"Enter the value of radius: "<<r;
    cin>>r;

    area= 3.14 * r * r;
    cout<<"Area of circle: "<<area;
}

int main()
{
    a1.area_circle();
    return 0;
}