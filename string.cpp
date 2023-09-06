#include<iostream>
#include<string>
using namespace std;

int main()
{

    string s1=("Ramendra");
    string s2=("Srivastava");

    s1.replace(2,2,s2);
    cout<<"Replaced string is: "<<s1<<endl;

    s1.erase(2,2);
    cout<<"Eraced string is: "<<s1<<endl;

    s1.append(s2);
    cout<<"Append string is: "<<s1<<endl;

    
    s1.insert(2,s2);
    cout<<"insert string : "<<s1<<endl;

    s1.substr(2,2);
    cout<<"Substracted string: " <<s1<<endl;

    cout<<"Find a in s1 : "<<s1.find("a")<<endl;
    cout<<"Find a in s1 using rfind: "<<s1.find("a")<<endl;

    s1.clear();
    cout<<"Now it is cleared and we will check that it is cleared or not using empty()"<<endl;


    s1.empty();
    {
        if(s1.empty())
        {

            cout<<"Nothing found"<<endl;
        }
        else{
            cout<<s1<<endl;
        }
    }

    

return 0;
}