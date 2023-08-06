#include<iostream>
using namespace std;

class factorial
{
public:
int i,f,n;
int fact();
};

int factorial:: fact()
{
    cout<<"Enter num for factorial: ";
    cin>>n;

    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"The factorial of "<<n <<" is: "<<f;
}
 
int main()
{   factorial f1;
    f1.fact();
    return 0;
}
