#include<iostream>
using namespace std;
class xyz
{
    public:
    int a,b,s;
    int add();
    
} s1;

    int xyz::add()
    {
        cout<<"enter number a and b ";
        cin>>a >>b;
        s=a+b;
        return s;
    }


main()
{
    int x;
    x=s1.add();
    cout<<"sum is: "<<x;
    return 0;
}