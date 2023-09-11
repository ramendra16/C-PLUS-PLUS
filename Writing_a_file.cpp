#include<iostream>
#include<fstream>
using namespace std;

int main()
{

        //create and open a text file
        ofstream New1("File1.txt");

        //write to the file
        New1<<"Hello, World!";
        New1.close();

        //the file is created in the folder
        
    

return 0;
}