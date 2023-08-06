#include<iostream>
using namespace std;
class add
{
    public:
    int a,b,s;
    void sum()
    {
        cout<<"enter a ";
        cin>>a;
        cout<<"enter b";
        cin>>b;
        s=a+b;
        cout<<"sum= "<<s;
    }
}s1;
main()
{
    s1.sum();
    return 0;
}