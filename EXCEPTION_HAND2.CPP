#include<iostream>
using namespace std;

void divide ( double x, double y)
{
    cout<<"Inside function "<<endl;
    try 
    {
        if(y==0.0)
        {
        throw y;
        }

        else
        {
            cout<<"Division = "<<(x/y)<<endl;
        }
    }
    catch(...)
    {
        cout<<"Caught double inside "<<endl;
        throw;
        cout<<"End of function "<<endl;
    }
}

int main()
{
    cout<<"Inside main "<<endl;
    try
    {
        divide(10.5, 2.0);
        divide(20.0, 0.0);
    }
    catch(...)
    {
        cout<<"Caught the exception "<<endl;
    }
    cout<<"End of program "<<endl;
    return 0;
}

