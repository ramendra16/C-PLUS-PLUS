#include<iostream>
using namespace std;

int main()
{
    
    int marks[]={1,2,3,4};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;



    //USING LOOP
    cout<<"NOW VALUES BY FOR LOOP"<<endl;
    for (int i = 0; i < 4; i++)
    
    {
        cout<<marks[i]<<endl;
    }



    cout<<"NOW VALUES BY WHILE LOOP"<<endl;
    int i=0;
    while (i<4)
    {
        cout<<marks[i]<<endl;
        i++;
    }


    cout<<"NOW VALUES BY DO WHILE LOOP"<<endl;
    int i=0;
     do
    {
        cout<<i<<endl;
        i++;
    } while (i<4);
    
   
    
    

return 0;
} 