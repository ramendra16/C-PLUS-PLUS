//SCOPE RESOLUTION OPERATOR

#include<iostream>
using namespace std;

int c=45;

int main()
{
    int a,b,c;

    cout << "Enter the value of a: ";
    cin >>a;
    cout << "Enter the value of b: ";
    cin >>b;
    c=a+b;
    cout<< "The sum is: " <<c; //local Variable
    cout<< "\nvalue of Global Var is: " <<::c; 
    //This is the value of Global Variable inside function with the help of :: SCOPE RESOLUTION OPERATOR

    return 0;
}