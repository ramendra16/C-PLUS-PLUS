#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    ifstream obj;
    obj.open("input.txt");
    if(!obj)
    {
        cout<<"\n File could not be opened for reading";
        exit(1);
    }
    obj>>n;
    obj.close();
    ofstream obj1;
    obj1.open("Table.txt");
    if(!obj1)
    {
        cout<<"\nFile could not be opened for writing";
        exit(1);
    }
    for(int i=1; i<11; i++)
    {
    
        cin>>n;
        cout<<n<<" * " <<i<< " = "<<n*i<<endl;
        
    }
    cout<<"Table written successfully";
    obj1.close();

}