//fun temp with more than 1 generic types
#include<iostream>
using namespace std;

//template <typename t1, typename t2>
 template <class t1, class t2>
 void sum(t1 num1, t2 num2)
 {
    cout<<num1+num2<<endl;
 }
 int main()
 {
    int num1= 3;
    float num2= 1.5;

    cout<<"Sum of num1 + num2 diff datatype=";
    sum<int , float>(num1, num2);
    cout<<endl;

    cout<<"Sum of num1 + num2 same datatype=";
    sum<int, int>(3,3);
    return 0;

 }