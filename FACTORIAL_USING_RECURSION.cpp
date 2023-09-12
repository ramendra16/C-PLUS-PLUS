#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)     //if(n<=1)   We can also use that.
    {
        return 1;
    }
    return n * factorial(n-1);
    
}

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    
    cout<<"The factorial of "<<a<< " is "<<factorial(a);




return 0;
}