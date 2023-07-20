#include<iostream>
using namespace std;

int main()
{
    int i;
     for(i=0; i<40; i++)
    {
        if(i==35)
        {
            continue;
        }  
        cout<<i<<endl; // it will not print 35 bc it is after condition
    }



    for(i=0; i<40; i++)
    {
        cout<<i<<endl; // it will print 35 bc it is before condition
        if(i==35)
        {
            continue;
        }  
        
    }

return 0;
}