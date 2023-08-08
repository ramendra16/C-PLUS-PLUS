#include<iostream>
using namespace std;

int main()
{

    enum days{sun, mon, tues=5, thurs, fri, sat};
    days d1, d2, d3;
    d1=sun, d2=tues;
    cout<<d1<<endl<<d2<<endl;


    if(d1>d2)
    {
        cout<<"day2 will come first";
    }

    else{
        cout<<"day1 will come first";
    }

return 0;
}