#include<iostream>
using namespace std;

class student
{
    int rno;
    char grade;

public:
    void ip()
    {
        cout<<"enter roll num and grade of student: ";
        cin>> rno>>grade;
    }
    void op();
};

void student :: op()
{
    cout<<"roll num: "<<rno<<endl;
    cout<<"grade: "<<grade<<endl;
    
}

int main()
{
    student s[100];
    int i,n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout << "enter student info: ";
        s[i].ip();
    }

    for(i=0; i<n; i++)
    {
        cout << "display info: ";
        s[i].op();
    }


    return 0;
}

