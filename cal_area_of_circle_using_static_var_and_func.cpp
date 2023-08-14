//wap to calculate the area of circles using static data members and static member function

#include<iostream>
using namespace std;
class circle
{
private:
static int r;
public:
static void area()
{
    cout<<"Enter value of radius: ";
    cin>>r;
    cout<<"The area is: "<<3.14*r*r;
}
}a1;
int circle::r;
main()
{
    a1.area();
    return 0;
}