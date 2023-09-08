#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length, breadth;
    public:
    Rectangle()
    {
        length=5; breadth=6;
    }
    void area()
    {
        int a= (length * breadth);
        cout<<"Area is: "<<a<<endl;
    }
}r1;

int main()
{
    r1.area();
    
return 0;
}