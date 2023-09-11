#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    string new1;
    ifstream read1("File1.txt");
    getline(read1, new1);
    cout<<new1;
    read1.close();


return 0;
}