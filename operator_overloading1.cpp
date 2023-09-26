#include<iostream>
using namespace std;

class overloading
{
    int a;

public:
    void getdata()
    {
        cout<<"Enter a: ";
        cin>>a;
    }

    void putdata()
    {
        cout<<"Value of a is: "<<a;
    }

    overloading operator+ (overloading o2)
    {
       overloading o3;
       o3.a = a + o2.a;
       //o3.a = o1.a + o2.a    it is also correct
       return o3;
    }
}o1, o2, o3;

int main()
{
    overloading o1, o2, o3;
    o1.getdata();
    o2.getdata();

    o3=o1+o2;
    o1.putdata();
    o2.putdata();
    o3.putdata();

    return 0;

}