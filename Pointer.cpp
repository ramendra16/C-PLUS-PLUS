#include<iostream>
using namespace std;

int main()
{

    int a=5;
    int *b=&a;
    cout<< &a<<endl;     //  Address of a
    cout << b<<endl;     //  Address of a
    cout << *b<<endl;    //  Value at a
    



return 0;
}