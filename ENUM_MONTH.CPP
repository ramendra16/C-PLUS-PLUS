#include<iostream>
using namespace std;

int main()
{

    enum months{jan, fab, march=31, april, may, june};
    months m1, m2;
    m1=jan, m2=march;
    cout<<m1<<endl<<m2<<endl;


    if(m1>m2)
    {
        cout<<"month2 will come first";
    }

    else{
        cout<<"month1 will come first";
    }


return 0;
}