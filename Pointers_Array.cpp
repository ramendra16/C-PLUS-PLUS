#include<iostream>
using namespace std;

int main()
{

    int marks[]={10,20,30,40};
    int *p= marks;
    //VALUES
    cout<<*(p++)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(p++)<<endl;


    //ADDRESS 
    cout<<(p+1)<<endl;
    cout<<(p+2)<<endl;
    cout<<(p+3)<<endl;
    cout<<(p+4)<<endl;

    


return 0;
}