#include<iostream>
using namespace std;

int main()
{
    int i;
    int a[5];
    int max =a[0];
    for(i=1; i<5; i++)
    {
        cin>>a[5];
        if (a[i]>max)
        {
            max = a[i];
        }
        cout<<max;
    }

return 0;
}