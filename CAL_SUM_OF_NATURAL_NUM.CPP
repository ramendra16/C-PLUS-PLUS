//WAP to Calculate Sum of Natural Numbers

#include<iostream>
using namespace std;

int main()
{

    int i,sum=0,n;
    cout<<"Enter your number: ";
    cin>>n;

    for(i=1;i<=n;++i)
    {
        sum+=i;
    }
    cout<<sum;

return 0;
}