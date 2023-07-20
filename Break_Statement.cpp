#include<iostream>
using namespace std;

//FOR BREAK
int main()
{
    int i;
    for(i=0; i<40; i++)
    {
        cout<<i<<endl; // it will print 35 bc it is before condition
        if(i==35)
        {
            break;
        }  
    }



    for(i=0; i<40; i++)
    {
        if(i==35)
        {
            break;
        }  
        cout<<i<<endl; // it will not print 35 bc it is after condition
    }

return 0;
}