#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length, breadth;
    public:
    Rectangle(int a, int b)
    {
        length=a; breadth=b;
    }
    void area()
    {
        int a= (length * breadth);
        cout<<"Area is: "<<a<<endl;
    }
};

int main()
{
    Rectangle r1(5,6);
    Rectangle r2(2,7);
    r1.area();
    r2.area();
    
return 0;
}