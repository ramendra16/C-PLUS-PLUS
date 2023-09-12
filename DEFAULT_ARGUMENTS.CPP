    //Default agruments are those arguments, the value we get defaultly, if we have not given any value.

#include<iostream>
using namespace std;

int moneyReceived(int currentMoney, float factor=1.04)
{
    int x= currentMoney * factor;
    return x;
}

int main()
{

    int money= 100000;
    cout<<"If you have "<<money<<" in your account then you will receive "<<moneyReceived(money)<<" rs after 1 year. "<<endl;
    cout<<"FOR VIP: If you have "<<money<<" in your account then you will receive "<<moneyReceived(money , 1.1) <<" rs after 1 year. "<<endl;



return 0;
}