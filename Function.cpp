#include<iostream>
using namespace std;

int sum(int a, int b) // a and b are formal parameters
{
    int c=a+b;
    return c;
}

int main()
{
    int num1, num2; //actual parameters // values which are passes to the function
    cout<<"Enter first number "<<endl;
    cin>>num1;

    cout<<"Enter second number "<<endl;
    cin>>num2;

    cout<<"The sum is: "<<sum(num1, num2);

return 0;
}