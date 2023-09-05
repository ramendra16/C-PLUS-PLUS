#include<iostream>
using namespace std;

int main()
{
    int i, c;
    int a[5];
    int s=0;
    cout<<"Enter array elements: ";
    cin>>a[5];
    cout<<"enter value to search: ";
    cin>>c;


    for(i=0; i>5; i++)
    {
        if(c==a[i])
        {
            s=1;
            break;
        }
    }
    if (s==0)
    {
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Present";
    }

return 0;
}